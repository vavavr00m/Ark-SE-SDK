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
	 * 		Name   -> Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATek_UnderwaterBase_Placement_Emitter2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.UserConstructionScript");
		
		ATek_UnderwaterBase_Placement_Emitter2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATek_UnderwaterBase_Placement_Emitter2_C::ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2");
		
		ATek_UnderwaterBase_Placement_Emitter2_C_ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATek_UnderwaterBase_Placement_Emitter2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATek_UnderwaterBase_Placement_Emitter2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C");
		return ptr;
	}

}


