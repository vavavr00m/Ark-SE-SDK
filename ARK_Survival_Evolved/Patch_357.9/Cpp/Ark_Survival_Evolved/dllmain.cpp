#include "pch.h"
#include "Utils/Console/Console.hpp"

#include <chrono>
#include <thread>
#include <locale>
#include <codecvt>

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter; // Usage converter.from_bytes(some std::string).c_str()   you will need this if you plan on hooking PostRender because all string args need to be wide 

DWORD MenuKey = VK_INSERT;
DWORD UnloadKey = VK_END;

Console* con = nullptr;

bool bShouldRun = true;

// Globals
CG::UGameInstance* GameInstance = nullptr;
CG::ULocalPlayer* LocalPlayer = nullptr;
CG::UFont* GlobalFont = nullptr;

using fn = void(__thiscall*)(CG::UObject*, CG::UObject*);
fn oPostRender = 0;

DWORD oldProtect = NULL;

CG::FLinearColor Cyan = { 0.f, 1.f, 1.f, 1.f };

CG::FLinearColor Black = { 0.f, 0.f, 0.f, 1.f };
CG::FLinearColor White = { 1.f, 1.f, 1.f, 1.f };

CG::FLinearColor Red = { 1.f, 0.f, 0.f, 1.f };
CG::FLinearColor Green = { 0.f, 1.f, 0.f, 1.f };
CG::FLinearColor Blue = { 0.f, 0.f, 1.f, 1.f };

void PostRenderHook(CG::UObject* viewportclient, CG::UCanvas* canvas)
{
	if (!bShouldRun)
		oPostRender(viewportclient, canvas);

	if (GlobalFont == nullptr)
		oPostRender(viewportclient, canvas);

	canvas->K2_DrawText(GlobalFont, L"OmegaWare.xyz", { 10.f, 10.f }, Cyan, 0.f, Black, { 0.f, 0.f }, false, false, true, Black);

	return oPostRender(viewportclient, canvas);
}

void RefreshGlobals()
{

	if ((*CG::UWorld::GWorld) && !GameInstance)
		GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;

	if (GameInstance && GameInstance->LocalPlayers.Count())
		LocalPlayer = GameInstance->LocalPlayers[0];

	if (!GlobalFont)
		GlobalFont = CG::UObject::FindObject<CG::UFont>("Font Roboto18.Roboto18");
}

DWORD WINAPI MainThread(LPVOID lpParam)
{
	con = &Console::Instance(true);

	if (CG::InitSdk())
	{
		std::cout << "GObjects: 0x" << std::hex << CG::UObject::GObjects << std::endl;
		std::cout << "GNames: 0x" << std::hex << CG::FName::GNames << std::endl;
		std::cout << "GWorld 0x" << std::hex << CG::UWorld::GWorld << std::endl;

		while (!(*CG::UWorld::GWorld))
			continue;

		RefreshGlobals();

		std::cout << "ARK SE SDK: Initalized\n";
	}
	else
	{
		std::cout << "ARK SE SDK: Failed to Initalize SDK\n";
		bShouldRun = false;
	}

	if (LocalPlayer)
	{
		auto ViewportClient = LocalPlayer->ViewportClient;
		void** VFTable = ViewportClient->VfTable;

		int post_render_index = 0x5A;
		VirtualProtect(&VFTable[post_render_index], 8, PAGE_EXECUTE_READWRITE, &oldProtect);

		oPostRender = reinterpret_cast<decltype(oPostRender)>(VFTable[post_render_index]);
		VFTable[post_render_index] = &PostRenderHook;

		VirtualProtect(&VFTable[post_render_index], 8, oldProtect, 0);
	}

	while (bShouldRun)
	{
		if (GetAsyncKeyState(MenuKey) & 0x1)
			if (con && con->IsAllocated())
				con->ToggleVisibility();

		if (GetAsyncKeyState(UnloadKey) & 0x1)
			bShouldRun = false;

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	if (LocalPlayer)
	{
		auto ViewportClient = LocalPlayer->ViewportClient;
		void** VFTable = ViewportClient->VfTable;

		int post_render_index = 0x5A;
		VirtualProtect(&VFTable[post_render_index], 8, PAGE_EXECUTE_READWRITE, &oldProtect);

		VFTable[post_render_index] = oPostRender;

		VirtualProtect(&VFTable[post_render_index], 8, oldProtect, 0);
	}

	std::cout << "ARK SE SDK: Unloading...\n";

	std::this_thread::sleep_for(std::chrono::seconds(3));
	FreeLibraryAndExitThread((HMODULE)lpParam, EXIT_SUCCESS);
	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall == DLL_PROCESS_ATTACH)
	{
		CreateThread(nullptr, NULL, MainThread, hModule, NULL, nullptr);
	}

	if (ulReasonForCall == DLL_PROCESS_DETACH)
	{
		if (con && con->IsAllocated())
			con->Free();
	}

	return TRUE;
}
