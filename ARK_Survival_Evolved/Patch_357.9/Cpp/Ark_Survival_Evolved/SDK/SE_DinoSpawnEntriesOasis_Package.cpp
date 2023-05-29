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
	 * 		Name   -> Function SE_DinoSpawnEntriesOasis.SE_DinoSpawnEntriesOasis_C.ExecuteUbergraph_SE_DinoSpawnEntriesOasis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USE_DinoSpawnEntriesOasis_C::ExecuteUbergraph_SE_DinoSpawnEntriesOasis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesOasis.SE_DinoSpawnEntriesOasis_C.ExecuteUbergraph_SE_DinoSpawnEntriesOasis");
		
		USE_DinoSpawnEntriesOasis_C_ExecuteUbergraph_SE_DinoSpawnEntriesOasis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USE_DinoSpawnEntriesOasis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USE_DinoSpawnEntriesOasis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesOasis.SE_DinoSpawnEntriesOasis_C");
		return ptr;
	}

}


