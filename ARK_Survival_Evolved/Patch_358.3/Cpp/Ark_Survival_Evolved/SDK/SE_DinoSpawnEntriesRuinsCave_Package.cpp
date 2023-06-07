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
	 * 		Name   -> Function SE_DinoSpawnEntriesRuinsCave.SE_DinoSpawnEntriesRuinsCave_C.ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USE_DinoSpawnEntriesRuinsCave_C::ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesRuinsCave.SE_DinoSpawnEntriesRuinsCave_C.ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCave");
		
		USE_DinoSpawnEntriesRuinsCave_C_ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USE_DinoSpawnEntriesRuinsCave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USE_DinoSpawnEntriesRuinsCave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesRuinsCave.SE_DinoSpawnEntriesRuinsCave_C");
		return ptr;
	}

}


