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
	 * 		Name   -> Function LootItemSets_Gacha_Tamed_Premium.LootItemSets_Gacha_Tamed_Premium_C.ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULootItemSets_Gacha_Tamed_Premium_C::ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootItemSets_Gacha_Tamed_Premium.LootItemSets_Gacha_Tamed_Premium_C.ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium");
		
		ULootItemSets_Gacha_Tamed_Premium_C_ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootItemSets_Gacha_Tamed_Premium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSets_Gacha_Tamed_Premium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_Gacha_Tamed_Premium.LootItemSets_Gacha_Tamed_Premium_C");
		return ptr;
	}

}


