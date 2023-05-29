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
	 * 		Name   -> Function PrimalItemArmor_IguanodonSaddle.PrimalItemArmor_IguanodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_IguanodonSaddle_C::ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_IguanodonSaddle.PrimalItemArmor_IguanodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle");
		
		UPrimalItemArmor_IguanodonSaddle_C_ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_IguanodonSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_IguanodonSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_IguanodonSaddle.PrimalItemArmor_IguanodonSaddle_C");
		return ptr;
	}

}


