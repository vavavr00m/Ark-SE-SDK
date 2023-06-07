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
	 * 		Name   -> Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABear_AIController_BP_Polar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.UserConstructionScript");
		
		ABear_AIController_BP_Polar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.ExecuteUbergraph_Bear_AIController_BP_Polar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABear_AIController_BP_Polar_C::ExecuteUbergraph_Bear_AIController_BP_Polar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.ExecuteUbergraph_Bear_AIController_BP_Polar");
		
		ABear_AIController_BP_Polar_C_ExecuteUbergraph_Bear_AIController_BP_Polar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABear_AIController_BP_Polar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABear_AIController_BP_Polar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C");
		return ptr;
	}

}


