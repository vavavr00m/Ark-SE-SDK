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
	 * 		Name   -> Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.BPMergeModGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalGameData*                             AnotherGameData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCOREMEDIA_PrimalGameData_BP_C::BPMergeModGameData(class UPrimalGameData* AnotherGameData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.BPMergeModGameData");
		
		UCOREMEDIA_PrimalGameData_BP_C_BPMergeModGameData_Params params {};
		params.AnotherGameData = AnotherGameData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.ExecuteUbergraph_COREMEDIA_PrimalGameData_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCOREMEDIA_PrimalGameData_BP_C::ExecuteUbergraph_COREMEDIA_PrimalGameData_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.ExecuteUbergraph_COREMEDIA_PrimalGameData_BP");
		
		UCOREMEDIA_PrimalGameData_BP_C_ExecuteUbergraph_COREMEDIA_PrimalGameData_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCOREMEDIA_PrimalGameData_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCOREMEDIA_PrimalGameData_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C");
		return ptr;
	}

}


