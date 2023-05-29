﻿/**
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
	 * 		Name   -> Function EngramEntry_StorageBox_Balloon.EngramEntry_StorageBox_Balloon_C.ExecuteUbergraph_EngramEntry_StorageBox_Balloon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_StorageBox_Balloon_C::ExecuteUbergraph_EngramEntry_StorageBox_Balloon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_StorageBox_Balloon.EngramEntry_StorageBox_Balloon_C.ExecuteUbergraph_EngramEntry_StorageBox_Balloon");
		
		UEngramEntry_StorageBox_Balloon_C_ExecuteUbergraph_EngramEntry_StorageBox_Balloon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_StorageBox_Balloon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_StorageBox_Balloon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_StorageBox_Balloon.EngramEntry_StorageBox_Balloon_C");
		return ptr;
	}

}


