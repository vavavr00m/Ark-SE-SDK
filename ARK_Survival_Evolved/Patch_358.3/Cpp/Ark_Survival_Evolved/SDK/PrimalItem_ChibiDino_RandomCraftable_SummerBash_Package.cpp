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
	 * 		Name   -> Function PrimalItem_ChibiDino_RandomCraftable_SummerBash.PrimalItem_ChibiDino_RandomCraftable_SummerBash_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_SummerBash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_ChibiDino_RandomCraftable_SummerBash_C::ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_SummerBash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChibiDino_RandomCraftable_SummerBash.PrimalItem_ChibiDino_RandomCraftable_SummerBash_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_SummerBash");
		
		UPrimalItem_ChibiDino_RandomCraftable_SummerBash_C_ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_SummerBash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_ChibiDino_RandomCraftable_SummerBash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_ChibiDino_RandomCraftable_SummerBash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_ChibiDino_RandomCraftable_SummerBash.PrimalItem_ChibiDino_RandomCraftable_SummerBash_C");
		return ptr;
	}

}


