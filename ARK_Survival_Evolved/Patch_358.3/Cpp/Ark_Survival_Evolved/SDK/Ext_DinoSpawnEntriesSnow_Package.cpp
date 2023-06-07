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
	 * 		Name   -> Function Ext_DinoSpawnEntriesSnow.Ext_DinoSpawnEntriesSnow_C.ExecuteUbergraph_Ext_DinoSpawnEntriesSnow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExt_DinoSpawnEntriesSnow_C::ExecuteUbergraph_Ext_DinoSpawnEntriesSnow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ext_DinoSpawnEntriesSnow.Ext_DinoSpawnEntriesSnow_C.ExecuteUbergraph_Ext_DinoSpawnEntriesSnow");
		
		UExt_DinoSpawnEntriesSnow_C_ExecuteUbergraph_Ext_DinoSpawnEntriesSnow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExt_DinoSpawnEntriesSnow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExt_DinoSpawnEntriesSnow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ext_DinoSpawnEntriesSnow.Ext_DinoSpawnEntriesSnow_C");
		return ptr;
	}

}


