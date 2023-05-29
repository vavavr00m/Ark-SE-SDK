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
	 * 		Name   -> Function LootItemSet_Chibis_Set1.LootItemSet_Chibis_Set1_C.ExecuteUbergraph_LootItemSet_Chibis_Set1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULootItemSet_Chibis_Set1_C::ExecuteUbergraph_LootItemSet_Chibis_Set1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootItemSet_Chibis_Set1.LootItemSet_Chibis_Set1_C.ExecuteUbergraph_LootItemSet_Chibis_Set1");
		
		ULootItemSet_Chibis_Set1_C_ExecuteUbergraph_LootItemSet_Chibis_Set1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootItemSet_Chibis_Set1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSet_Chibis_Set1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Chibis_Set1.LootItemSet_Chibis_Set1_C");
		return ptr;
	}

}


