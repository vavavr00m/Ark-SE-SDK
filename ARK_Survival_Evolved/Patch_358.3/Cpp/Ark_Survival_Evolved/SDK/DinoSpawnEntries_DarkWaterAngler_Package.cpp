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
	 * 		Name   -> Function DinoSpawnEntries_DarkWaterAngler.DinoSpawnEntries_DarkWaterAngler_C.ExecuteUbergraph_DinoSpawnEntries_DarkWaterAngler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntries_DarkWaterAngler_C::ExecuteUbergraph_DinoSpawnEntries_DarkWaterAngler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_DarkWaterAngler.DinoSpawnEntries_DarkWaterAngler_C.ExecuteUbergraph_DinoSpawnEntries_DarkWaterAngler");
		
		UDinoSpawnEntries_DarkWaterAngler_C_ExecuteUbergraph_DinoSpawnEntries_DarkWaterAngler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntries_DarkWaterAngler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntries_DarkWaterAngler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_DarkWaterAngler.DinoSpawnEntries_DarkWaterAngler_C");
		return ptr;
	}

}


