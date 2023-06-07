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
	 * 		Name   -> Function PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIntake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_StonePipeIntake_C::ExecuteUbergraph_PrimalItemStructure_StonePipeIntake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIntake");
		
		UPrimalItemStructure_StonePipeIntake_C_ExecuteUbergraph_PrimalItemStructure_StonePipeIntake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_StonePipeIntake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_StonePipeIntake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C");
		return ptr;
	}

}


