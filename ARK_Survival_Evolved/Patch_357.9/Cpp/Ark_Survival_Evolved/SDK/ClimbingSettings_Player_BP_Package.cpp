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
	 * 		Name   -> Function ClimbingSettings_Player_BP.ClimbingSettings_Player_BP_C.ExecuteUbergraph_ClimbingSettings_Player_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClimbingSettings_Player_BP_C::ExecuteUbergraph_ClimbingSettings_Player_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClimbingSettings_Player_BP.ClimbingSettings_Player_BP_C.ExecuteUbergraph_ClimbingSettings_Player_BP");
		
		UClimbingSettings_Player_BP_C_ExecuteUbergraph_ClimbingSettings_Player_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClimbingSettings_Player_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimbingSettings_Player_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ClimbingSettings_Player_BP.ClimbingSettings_Player_BP_C");
		return ptr;
	}

}

