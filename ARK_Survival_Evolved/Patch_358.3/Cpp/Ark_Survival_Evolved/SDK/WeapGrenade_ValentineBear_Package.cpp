﻿/**
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
	 * 		Name   -> Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGrenade_ValentineBear_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.UserConstructionScript");
		
		AWeapGrenade_ValentineBear_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.ExecuteUbergraph_WeapGrenade_ValentineBear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGrenade_ValentineBear_C::ExecuteUbergraph_WeapGrenade_ValentineBear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.ExecuteUbergraph_WeapGrenade_ValentineBear");
		
		AWeapGrenade_ValentineBear_C_ExecuteUbergraph_WeapGrenade_ValentineBear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapGrenade_ValentineBear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapGrenade_ValentineBear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C");
		return ptr;
	}

}


