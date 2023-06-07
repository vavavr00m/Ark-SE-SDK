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
	 * 		Name   -> Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.GetPointOfInterestData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FPointOfInterestData APointOfInterest_Base_BP_C::GetPointOfInterestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.GetPointOfInterestData");
		
		APointOfInterest_Base_BP_C_GetPointOfInterestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APointOfInterest_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.UserConstructionScript");
		
		APointOfInterest_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.ExecuteUbergraph_PointOfInterest_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APointOfInterest_Base_BP_C::ExecuteUbergraph_PointOfInterest_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.ExecuteUbergraph_PointOfInterest_Base_BP");
		
		APointOfInterest_Base_BP_C_ExecuteUbergraph_PointOfInterest_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APointOfInterest_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APointOfInterest_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PointOfInterest_Base_BP.PointOfInterest_Base_BP_C");
		return ptr;
	}

}


