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
	 * 		Name   -> Function PrimalItemArmor_SpineyLizardPromoSaddle.PrimalItemArmor_SpineyLizardPromoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_SpineyLizardPromoSaddle_C::ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SpineyLizardPromoSaddle.PrimalItemArmor_SpineyLizardPromoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle");
		
		UPrimalItemArmor_SpineyLizardPromoSaddle_C_ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_SpineyLizardPromoSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_SpineyLizardPromoSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_SpineyLizardPromoSaddle.PrimalItemArmor_SpineyLizardPromoSaddle_C");
		return ptr;
	}

}


