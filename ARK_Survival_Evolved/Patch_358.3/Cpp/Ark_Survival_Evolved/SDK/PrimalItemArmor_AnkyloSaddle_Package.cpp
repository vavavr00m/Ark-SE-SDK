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
	 * 		Name   -> Function PrimalItemArmor_AnkyloSaddle.PrimalItemArmor_AnkyloSaddle_C.ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_AnkyloSaddle_C::ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_AnkyloSaddle.PrimalItemArmor_AnkyloSaddle_C.ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle");
		
		UPrimalItemArmor_AnkyloSaddle_C_ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_AnkyloSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_AnkyloSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_AnkyloSaddle.PrimalItemArmor_AnkyloSaddle_C");
		return ptr;
	}

}


