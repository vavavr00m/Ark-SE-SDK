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
	 * 		Name   -> Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MiningDrill_ReduceWeights_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.UserConstructionScript");
		
		ABuff_MiningDrill_ReduceWeights_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.ExecuteUbergraph_Buff_MiningDrill_ReduceWeights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MiningDrill_ReduceWeights_C::ExecuteUbergraph_Buff_MiningDrill_ReduceWeights(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.ExecuteUbergraph_Buff_MiningDrill_ReduceWeights");
		
		ABuff_MiningDrill_ReduceWeights_C_ExecuteUbergraph_Buff_MiningDrill_ReduceWeights_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MiningDrill_ReduceWeights_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MiningDrill_ReduceWeights_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C");
		return ptr;
	}

}


