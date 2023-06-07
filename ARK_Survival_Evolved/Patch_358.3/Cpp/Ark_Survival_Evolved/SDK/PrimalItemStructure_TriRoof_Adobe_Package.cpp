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
	 * 		Name   -> Function PrimalItemStructure_TriRoof_Adobe.PrimalItemStructure_TriRoof_Adobe_C.ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_TriRoof_Adobe_C::ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TriRoof_Adobe.PrimalItemStructure_TriRoof_Adobe_C.ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe");
		
		UPrimalItemStructure_TriRoof_Adobe_C_ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_TriRoof_Adobe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_TriRoof_Adobe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriRoof_Adobe.PrimalItemStructure_TriRoof_Adobe_C");
		return ptr;
	}

}


