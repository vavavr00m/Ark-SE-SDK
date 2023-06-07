/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AImpacts_Punch_Exosuit_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.UserConstructionScript");
		
		AImpacts_Punch_Exosuit_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.ExecuteUbergraph_Impacts_Punch_Exosuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AImpacts_Punch_Exosuit_C::ExecuteUbergraph_Impacts_Punch_Exosuit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.ExecuteUbergraph_Impacts_Punch_Exosuit");
		
		AImpacts_Punch_Exosuit_C_ExecuteUbergraph_Impacts_Punch_Exosuit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AImpacts_Punch_Exosuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AImpacts_Punch_Exosuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C");
		return ptr;
	}

}


