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
	 * 		Name   -> Function DinoSpawnEntriesRedwoods_LostIsland.DinoSpawnEntriesRedwoods_LostIsland_C.ExecuteUbergraph_DinoSpawnEntriesRedwoods_LostIsland
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntriesRedwoods_LostIsland_C::ExecuteUbergraph_DinoSpawnEntriesRedwoods_LostIsland(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesRedwoods_LostIsland.DinoSpawnEntriesRedwoods_LostIsland_C.ExecuteUbergraph_DinoSpawnEntriesRedwoods_LostIsland");
		
		UDinoSpawnEntriesRedwoods_LostIsland_C_ExecuteUbergraph_DinoSpawnEntriesRedwoods_LostIsland_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesRedwoods_LostIsland_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesRedwoods_LostIsland_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesRedwoods_LostIsland.DinoSpawnEntriesRedwoods_LostIsland_C");
		return ptr;
	}

}


