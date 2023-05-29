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
	 * 		Name   -> Function PrimalItemArmor_GasBagsSaddle.PrimalItemArmor_GasBagsSaddle_C.ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_GasBagsSaddle_C::ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasBagsSaddle.PrimalItemArmor_GasBagsSaddle_C.ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle");
		
		UPrimalItemArmor_GasBagsSaddle_C_ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_GasBagsSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_GasBagsSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_GasBagsSaddle.PrimalItemArmor_GasBagsSaddle_C");
		return ptr;
	}

}


