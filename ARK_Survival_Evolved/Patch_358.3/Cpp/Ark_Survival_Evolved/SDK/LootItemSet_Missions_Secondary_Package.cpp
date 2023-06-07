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
	 * 		Name   -> Function LootItemSet_Missions_Secondary.LootItemSet_Missions_Secondary_C.ExecuteUbergraph_LootItemSet_Missions_Secondary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULootItemSet_Missions_Secondary_C::ExecuteUbergraph_LootItemSet_Missions_Secondary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Secondary.LootItemSet_Missions_Secondary_C.ExecuteUbergraph_LootItemSet_Missions_Secondary");
		
		ULootItemSet_Missions_Secondary_C_ExecuteUbergraph_LootItemSet_Missions_Secondary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootItemSet_Missions_Secondary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSet_Missions_Secondary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Missions_Secondary.LootItemSet_Missions_Secondary_C");
		return ptr;
	}

}


