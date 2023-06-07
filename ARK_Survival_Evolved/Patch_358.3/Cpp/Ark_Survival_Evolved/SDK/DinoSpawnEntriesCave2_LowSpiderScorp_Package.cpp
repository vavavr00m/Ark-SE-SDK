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
	 * 		Name   -> Function DinoSpawnEntriesCave2-LowSpiderScorp.DinoSpawnEntriesCave2-LowSpiderScorp_C.ExecuteUbergraph_DinoSpawnEntriesCave2-LowSpiderScorp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntriesCave2LowSpiderScorp_C::ExecuteUbergraph_DinoSpawnEntriesCave2LowSpiderScorp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCave2-LowSpiderScorp.DinoSpawnEntriesCave2-LowSpiderScorp_C.ExecuteUbergraph_DinoSpawnEntriesCave2-LowSpiderScorp");
		
		UDinoSpawnEntriesCave2LowSpiderScorp_C_ExecuteUbergraph_DinoSpawnEntriesCave2LowSpiderScorp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesCave2LowSpiderScorp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesCave2LowSpiderScorp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave2_LowSpiderScorp.DinoSpawnEntriesCave2-LowSpiderScorp_C");
		return ptr;
	}

}


