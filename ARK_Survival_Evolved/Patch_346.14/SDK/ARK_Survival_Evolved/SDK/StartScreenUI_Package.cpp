/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function StartScreenUI.StartScreenUI_C.ExecuteUbergraph_StartScreenUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStartScreenUI_C::ExecuteUbergraph_StartScreenUI(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StartScreenUI.StartScreenUI_C.ExecuteUbergraph_StartScreenUI");
		
		UStartScreenUI_C_ExecuteUbergraph_StartScreenUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStartScreenUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartScreenUI_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StartScreenUI.StartScreenUI_C");
		return ptr;
	}

}


