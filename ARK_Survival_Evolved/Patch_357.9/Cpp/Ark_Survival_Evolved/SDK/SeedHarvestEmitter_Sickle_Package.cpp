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
	 * 		Name   -> Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASeedHarvestEmitter_Sickle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.UserConstructionScript");
		
		ASeedHarvestEmitter_Sickle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.ExecuteUbergraph_SeedHarvestEmitter_Sickle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASeedHarvestEmitter_Sickle_C::ExecuteUbergraph_SeedHarvestEmitter_Sickle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C.ExecuteUbergraph_SeedHarvestEmitter_Sickle");
		
		ASeedHarvestEmitter_Sickle_C_ExecuteUbergraph_SeedHarvestEmitter_Sickle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASeedHarvestEmitter_Sickle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeedHarvestEmitter_Sickle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C");
		return ptr;
	}

}


