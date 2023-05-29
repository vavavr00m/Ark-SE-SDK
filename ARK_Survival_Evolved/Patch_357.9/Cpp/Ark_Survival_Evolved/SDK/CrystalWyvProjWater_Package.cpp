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
	 * 		Name   -> Function CrystalWyvProjWater.CrystalWyvProjWater_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvProjWater_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvProjWater.CrystalWyvProjWater_C.UserConstructionScript");
		
		ACrystalWyvProjWater_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvProjWater.CrystalWyvProjWater_C.ExecuteUbergraph_CrystalWyvProjWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvProjWater_C::ExecuteUbergraph_CrystalWyvProjWater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvProjWater.CrystalWyvProjWater_C.ExecuteUbergraph_CrystalWyvProjWater");
		
		ACrystalWyvProjWater_C_ExecuteUbergraph_CrystalWyvProjWater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrystalWyvProjWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrystalWyvProjWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvProjWater.CrystalWyvProjWater_C");
		return ptr;
	}

}


