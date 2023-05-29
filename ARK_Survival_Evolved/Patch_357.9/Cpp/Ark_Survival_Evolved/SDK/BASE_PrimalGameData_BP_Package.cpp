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
	 * 		Name   -> Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalGameData*                             AnotherGameData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBASE_PrimalGameData_BP_C::BPMergeModGameData(class UPrimalGameData* AnotherGameData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData");
		
		UBASE_PrimalGameData_BP_C_BPMergeModGameData_Params params {};
		params.AnotherGameData = AnotherGameData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.ExecuteUbergraph_BASE_PrimalGameData_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBASE_PrimalGameData_BP_C::ExecuteUbergraph_BASE_PrimalGameData_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.ExecuteUbergraph_BASE_PrimalGameData_BP");
		
		UBASE_PrimalGameData_BP_C_ExecuteUbergraph_BASE_PrimalGameData_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBASE_PrimalGameData_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBASE_PrimalGameData_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C");
		return ptr;
	}

}


