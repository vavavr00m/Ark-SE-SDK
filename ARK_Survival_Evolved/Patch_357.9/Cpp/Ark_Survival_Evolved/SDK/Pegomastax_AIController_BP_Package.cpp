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
	 * 		Name   -> Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UpdateAttackDestinationOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInWaitingState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_AIController_BP_C::UpdateAttackDestinationOffset(bool IsInWaitingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UpdateAttackDestinationOffset");
		
		APegomastax_AIController_BP_C_UpdateAttackDestinationOffset_Params params {};
		params.IsInWaitingState = IsInWaitingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UserConstructionScript");
		
		APegomastax_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.ExecuteUbergraph_Pegomastax_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_AIController_BP_C::ExecuteUbergraph_Pegomastax_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.ExecuteUbergraph_Pegomastax_AIController_BP");
		
		APegomastax_AIController_BP_C_ExecuteUbergraph_Pegomastax_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APegomastax_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APegomastax_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pegomastax_AIController_BP.Pegomastax_AIController_BP_C");
		return ptr;
	}

}


