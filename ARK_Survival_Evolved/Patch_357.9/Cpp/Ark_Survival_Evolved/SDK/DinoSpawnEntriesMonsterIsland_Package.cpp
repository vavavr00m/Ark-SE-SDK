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
	 * 		Name   -> Function DinoSpawnEntriesMonsterIsland.DinoSpawnEntriesMonsterIsland_C.ExecuteUbergraph_DinoSpawnEntriesMonsterIsland
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntriesMonsterIsland_C::ExecuteUbergraph_DinoSpawnEntriesMonsterIsland(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesMonsterIsland.DinoSpawnEntriesMonsterIsland_C.ExecuteUbergraph_DinoSpawnEntriesMonsterIsland");
		
		UDinoSpawnEntriesMonsterIsland_C_ExecuteUbergraph_DinoSpawnEntriesMonsterIsland_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesMonsterIsland_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesMonsterIsland_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesMonsterIsland.DinoSpawnEntriesMonsterIsland_C");
		return ptr;
	}

}


