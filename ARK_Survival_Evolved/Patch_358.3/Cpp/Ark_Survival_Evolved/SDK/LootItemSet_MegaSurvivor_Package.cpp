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
	 * 		Name   -> Function LootItemSet_MegaSurvivor.LootItemSet_MegaSurvivor_C.ExecuteUbergraph_LootItemSet_MegaSurvivor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULootItemSet_MegaSurvivor_C::ExecuteUbergraph_LootItemSet_MegaSurvivor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootItemSet_MegaSurvivor.LootItemSet_MegaSurvivor_C.ExecuteUbergraph_LootItemSet_MegaSurvivor");
		
		ULootItemSet_MegaSurvivor_C_ExecuteUbergraph_LootItemSet_MegaSurvivor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootItemSet_MegaSurvivor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSet_MegaSurvivor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_MegaSurvivor.LootItemSet_MegaSurvivor_C");
		return ptr;
	}

}


