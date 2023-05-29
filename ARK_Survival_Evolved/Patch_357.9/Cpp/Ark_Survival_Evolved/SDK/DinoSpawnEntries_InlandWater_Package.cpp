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
	 * 		Name   -> Function DinoSpawnEntries_InlandWater.DinoSpawnEntries_InlandWater_C.ExecuteUbergraph_DinoSpawnEntries_InlandWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntries_InlandWater_C::ExecuteUbergraph_DinoSpawnEntries_InlandWater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_InlandWater.DinoSpawnEntries_InlandWater_C.ExecuteUbergraph_DinoSpawnEntries_InlandWater");
		
		UDinoSpawnEntries_InlandWater_C_ExecuteUbergraph_DinoSpawnEntries_InlandWater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntries_InlandWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntries_InlandWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_InlandWater.DinoSpawnEntries_InlandWater_C");
		return ptr;
	}

}


