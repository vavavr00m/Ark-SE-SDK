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
	 * 		Name   -> Function PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C.ExecuteUbergraph_PrimalItemConsumableBuff_Parachute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumableBuff_Parachute_C::ExecuteUbergraph_PrimalItemConsumableBuff_Parachute(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C.ExecuteUbergraph_PrimalItemConsumableBuff_Parachute");
		
		UPrimalItemConsumableBuff_Parachute_C_ExecuteUbergraph_PrimalItemConsumableBuff_Parachute_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumableBuff_Parachute_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumableBuff_Parachute_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C");
		return ptr;
	}

}


