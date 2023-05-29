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
	 * 		Name   -> Function SE_DinoSpawnEntriesMountain.SE_DinoSpawnEntriesMountain_C.ExecuteUbergraph_SE_DinoSpawnEntriesMountain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USE_DinoSpawnEntriesMountain_C::ExecuteUbergraph_SE_DinoSpawnEntriesMountain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesMountain.SE_DinoSpawnEntriesMountain_C.ExecuteUbergraph_SE_DinoSpawnEntriesMountain");
		
		USE_DinoSpawnEntriesMountain_C_ExecuteUbergraph_SE_DinoSpawnEntriesMountain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USE_DinoSpawnEntriesMountain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USE_DinoSpawnEntriesMountain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesMountain.SE_DinoSpawnEntriesMountain_C");
		return ptr;
	}

}


