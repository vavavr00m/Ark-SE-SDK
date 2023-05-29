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
	 * 		Name   -> Function DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntriesCaveWater_C::ExecuteUbergraph_DinoSpawnEntriesCaveWater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveWater");
		
		UDinoSpawnEntriesCaveWater_C_ExecuteUbergraph_DinoSpawnEntriesCaveWater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesCaveWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesCaveWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C");
		return ptr;
	}

}


