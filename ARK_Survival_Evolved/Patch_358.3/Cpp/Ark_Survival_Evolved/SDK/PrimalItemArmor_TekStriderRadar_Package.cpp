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
	 * 		Name   -> Function PrimalItemArmor_TekStriderRadar.PrimalItemArmor_TekStriderRadar_C.ExecuteUbergraph_PrimalItemArmor_TekStriderRadar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_TekStriderRadar_C::ExecuteUbergraph_PrimalItemArmor_TekStriderRadar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderRadar.PrimalItemArmor_TekStriderRadar_C.ExecuteUbergraph_PrimalItemArmor_TekStriderRadar");
		
		UPrimalItemArmor_TekStriderRadar_C_ExecuteUbergraph_PrimalItemArmor_TekStriderRadar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_TekStriderRadar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_TekStriderRadar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekStriderRadar.PrimalItemArmor_TekStriderRadar_C");
		return ptr;
	}

}


