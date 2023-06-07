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
	 * 		Name   -> Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExplosionEmitter_underwater_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.UserConstructionScript");
		
		AExplosionEmitter_underwater_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.ExecuteUbergraph_ExplosionEmitter_underwater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExplosionEmitter_underwater_C::ExecuteUbergraph_ExplosionEmitter_underwater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.ExecuteUbergraph_ExplosionEmitter_underwater");
		
		AExplosionEmitter_underwater_C_ExecuteUbergraph_ExplosionEmitter_underwater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExplosionEmitter_underwater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplosionEmitter_underwater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_underwater.ExplosionEmitter_underwater_C");
		return ptr;
	}

}


