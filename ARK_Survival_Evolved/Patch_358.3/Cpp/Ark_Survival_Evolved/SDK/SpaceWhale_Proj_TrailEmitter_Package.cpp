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
	 * 		Name   -> Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Proj_TrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.UserConstructionScript");
		
		ASpaceWhale_Proj_TrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Proj_TrailEmitter_C::ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter");
		
		ASpaceWhale_Proj_TrailEmitter_C_ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceWhale_Proj_TrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceWhale_Proj_TrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C");
		return ptr;
	}

}


