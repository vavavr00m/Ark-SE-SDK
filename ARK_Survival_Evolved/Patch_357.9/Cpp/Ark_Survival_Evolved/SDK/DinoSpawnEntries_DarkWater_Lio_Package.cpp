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
	 * 		Name   -> Function DinoSpawnEntries_DarkWater_Lio.DinoSpawnEntries_DarkWater_Lio_C.ExecuteUbergraph_DinoSpawnEntries_DarkWater_Lio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntries_DarkWater_Lio_C::ExecuteUbergraph_DinoSpawnEntries_DarkWater_Lio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_DarkWater_Lio.DinoSpawnEntries_DarkWater_Lio_C.ExecuteUbergraph_DinoSpawnEntries_DarkWater_Lio");
		
		UDinoSpawnEntries_DarkWater_Lio_C_ExecuteUbergraph_DinoSpawnEntries_DarkWater_Lio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntries_DarkWater_Lio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntries_DarkWater_Lio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_DarkWater_Lio.DinoSpawnEntries_DarkWater_Lio_C");
		return ptr;
	}

}


