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
	 * 		Name   -> Function MissionBiomeCompletionButton.MissionBiomeCompletionButton_C.ExecuteUbergraph_MissionBiomeCompletionButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionBiomeCompletionButton_C::ExecuteUbergraph_MissionBiomeCompletionButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionBiomeCompletionButton.MissionBiomeCompletionButton_C.ExecuteUbergraph_MissionBiomeCompletionButton");
		
		UMissionBiomeCompletionButton_C_ExecuteUbergraph_MissionBiomeCompletionButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionBiomeCompletionButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionBiomeCompletionButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionBiomeCompletionButton.MissionBiomeCompletionButton_C");
		return ptr;
	}

}


