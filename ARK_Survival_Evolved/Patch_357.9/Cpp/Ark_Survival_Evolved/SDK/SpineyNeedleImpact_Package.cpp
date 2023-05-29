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
	 * 		Name   -> Function SpineyNeedleImpact.SpineyNeedleImpact_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpineyNeedleImpact_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpineyNeedleImpact.SpineyNeedleImpact_C.UserConstructionScript");
		
		ASpineyNeedleImpact_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpineyNeedleImpact.SpineyNeedleImpact_C.ExecuteUbergraph_SpineyNeedleImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpineyNeedleImpact_C::ExecuteUbergraph_SpineyNeedleImpact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpineyNeedleImpact.SpineyNeedleImpact_C.ExecuteUbergraph_SpineyNeedleImpact");
		
		ASpineyNeedleImpact_C_ExecuteUbergraph_SpineyNeedleImpact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpineyNeedleImpact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpineyNeedleImpact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpineyNeedleImpact.SpineyNeedleImpact_C");
		return ptr;
	}

}


