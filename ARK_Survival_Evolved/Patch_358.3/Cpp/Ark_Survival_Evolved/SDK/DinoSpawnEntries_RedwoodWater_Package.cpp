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
	 * 		Name   -> Function DinoSpawnEntries_RedwoodWater.DinoSpawnEntries_RedwoodWater_C.ExecuteUbergraph_DinoSpawnEntries_RedwoodWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntries_RedwoodWater_C::ExecuteUbergraph_DinoSpawnEntries_RedwoodWater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_RedwoodWater.DinoSpawnEntries_RedwoodWater_C.ExecuteUbergraph_DinoSpawnEntries_RedwoodWater");
		
		UDinoSpawnEntries_RedwoodWater_C_ExecuteUbergraph_DinoSpawnEntries_RedwoodWater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntries_RedwoodWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntries_RedwoodWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_RedwoodWater.DinoSpawnEntries_RedwoodWater_C");
		return ptr;
	}

}


