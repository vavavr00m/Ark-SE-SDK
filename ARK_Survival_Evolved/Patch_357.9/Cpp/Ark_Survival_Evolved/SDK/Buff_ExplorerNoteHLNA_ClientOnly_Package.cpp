/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ExplorerNoteHLNA_ClientOnly_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.DrawBuffFloatingHUD");
		
		ABuff_ExplorerNoteHLNA_ClientOnly_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ExplorerNoteHLNA_ClientOnly_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.BuffTickClient");
		
		ABuff_ExplorerNoteHLNA_ClientOnly_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ExplorerNoteHLNA_ClientOnly_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ReceiveBeginPlay");
		
		ABuff_ExplorerNoteHLNA_ClientOnly_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ExplorerNoteHLNA_ClientOnly_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.UserConstructionScript");
		
		ABuff_ExplorerNoteHLNA_ClientOnly_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ExplorerNoteHLNA_ClientOnly_C::ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly");
		
		ABuff_ExplorerNoteHLNA_ClientOnly_C_ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ExplorerNoteHLNA_ClientOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ExplorerNoteHLNA_ClientOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C");
		return ptr;
	}

}


