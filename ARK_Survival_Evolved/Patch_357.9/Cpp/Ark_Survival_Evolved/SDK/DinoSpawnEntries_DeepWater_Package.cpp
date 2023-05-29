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
	 * 		Name   -> Function DinoSpawnEntries_DeepWater.DinoSpawnEntries_DeepWater_C.ExecuteUbergraph_DinoSpawnEntries_DeepWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntries_DeepWater_C::ExecuteUbergraph_DinoSpawnEntries_DeepWater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_DeepWater.DinoSpawnEntries_DeepWater_C.ExecuteUbergraph_DinoSpawnEntries_DeepWater");
		
		UDinoSpawnEntries_DeepWater_C_ExecuteUbergraph_DinoSpawnEntries_DeepWater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntries_DeepWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntries_DeepWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_DeepWater.DinoSpawnEntries_DeepWater_C");
		return ptr;
	}

}


