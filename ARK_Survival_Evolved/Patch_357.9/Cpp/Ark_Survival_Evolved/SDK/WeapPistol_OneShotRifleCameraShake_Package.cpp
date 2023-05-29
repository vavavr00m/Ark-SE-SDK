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
	 * 		Name   -> Function WeapPistol_OneShotRifleCameraShake.WeapPistol_OneShotRifleCameraShake_C.ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeapPistol_OneShotRifleCameraShake_C::ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPistol_OneShotRifleCameraShake.WeapPistol_OneShotRifleCameraShake_C.ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake");
		
		UWeapPistol_OneShotRifleCameraShake_C_ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeapPistol_OneShotRifleCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapPistol_OneShotRifleCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapPistol_OneShotRifleCameraShake.WeapPistol_OneShotRifleCameraShake_C");
		return ptr;
	}

}

