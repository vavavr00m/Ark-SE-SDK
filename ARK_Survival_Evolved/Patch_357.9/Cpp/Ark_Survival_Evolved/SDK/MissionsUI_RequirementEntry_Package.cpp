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
	 * 		Name   -> Function MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMissionsUI_RequirementEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C.Construct");
		
		UMissionsUI_RequirementEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C.ExecuteUbergraph_MissionsUI_RequirementEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMissionsUI_RequirementEntry_C::ExecuteUbergraph_MissionsUI_RequirementEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C.ExecuteUbergraph_MissionsUI_RequirementEntry");
		
		UMissionsUI_RequirementEntry_C_ExecuteUbergraph_MissionsUI_RequirementEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionsUI_RequirementEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionsUI_RequirementEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C");
		return ptr;
	}

}


