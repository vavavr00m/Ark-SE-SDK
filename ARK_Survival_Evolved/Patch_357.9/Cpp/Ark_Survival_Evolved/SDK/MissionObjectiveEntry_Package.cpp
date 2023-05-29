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
	 * 		Name   -> Function MissionObjectiveEntry.MissionObjectiveEntry_C.ExecuteUbergraph_MissionObjectiveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionObjectiveEntry_C::ExecuteUbergraph_MissionObjectiveEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionObjectiveEntry.MissionObjectiveEntry_C.ExecuteUbergraph_MissionObjectiveEntry");
		
		UMissionObjectiveEntry_C_ExecuteUbergraph_MissionObjectiveEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObjectiveEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObjectiveEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionObjectiveEntry.MissionObjectiveEntry_C");
		return ptr;
	}

}


