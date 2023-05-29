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
	 * 		Name   -> Function Piranha_Character_BP_BreakNet.Piranha_Character_BP_BreakNet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APiranha_Character_BP_BreakNet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP_BreakNet.Piranha_Character_BP_BreakNet_C.UserConstructionScript");
		
		APiranha_Character_BP_BreakNet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Piranha_Character_BP_BreakNet.Piranha_Character_BP_BreakNet_C.ExecuteUbergraph_Piranha_Character_BP_BreakNet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APiranha_Character_BP_BreakNet_C::ExecuteUbergraph_Piranha_Character_BP_BreakNet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP_BreakNet.Piranha_Character_BP_BreakNet_C.ExecuteUbergraph_Piranha_Character_BP_BreakNet");
		
		APiranha_Character_BP_BreakNet_C_ExecuteUbergraph_Piranha_Character_BP_BreakNet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APiranha_Character_BP_BreakNet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APiranha_Character_BP_BreakNet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Piranha_Character_BP_BreakNet.Piranha_Character_BP_BreakNet_C");
		return ptr;
	}

}

