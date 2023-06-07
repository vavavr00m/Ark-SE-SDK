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
	 * 		Name   -> Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARex_AIController_BP_Mega_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.UserConstructionScript");
		
		ARex_AIController_BP_Mega_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.ExecuteUbergraph_Rex_AIController_BP_Mega
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARex_AIController_BP_Mega_C::ExecuteUbergraph_Rex_AIController_BP_Mega(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.ExecuteUbergraph_Rex_AIController_BP_Mega");
		
		ARex_AIController_BP_Mega_C_ExecuteUbergraph_Rex_AIController_BP_Mega_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARex_AIController_BP_Mega_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARex_AIController_BP_Mega_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C");
		return ptr;
	}

}


