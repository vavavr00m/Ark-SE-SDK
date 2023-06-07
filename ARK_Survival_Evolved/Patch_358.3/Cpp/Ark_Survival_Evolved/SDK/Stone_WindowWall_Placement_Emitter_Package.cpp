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
	 * 		Name   -> Function Stone_WindowWall_Placement_Emitter.Stone_WindowWall_Placement_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStone_WindowWall_Placement_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stone_WindowWall_Placement_Emitter.Stone_WindowWall_Placement_Emitter_C.UserConstructionScript");
		
		AStone_WindowWall_Placement_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Stone_WindowWall_Placement_Emitter.Stone_WindowWall_Placement_Emitter_C.ExecuteUbergraph_Stone_WindowWall_Placement_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStone_WindowWall_Placement_Emitter_C::ExecuteUbergraph_Stone_WindowWall_Placement_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stone_WindowWall_Placement_Emitter.Stone_WindowWall_Placement_Emitter_C.ExecuteUbergraph_Stone_WindowWall_Placement_Emitter");
		
		AStone_WindowWall_Placement_Emitter_C_ExecuteUbergraph_Stone_WindowWall_Placement_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStone_WindowWall_Placement_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStone_WindowWall_Placement_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stone_WindowWall_Placement_Emitter.Stone_WindowWall_Placement_Emitter_C");
		return ptr;
	}

}


