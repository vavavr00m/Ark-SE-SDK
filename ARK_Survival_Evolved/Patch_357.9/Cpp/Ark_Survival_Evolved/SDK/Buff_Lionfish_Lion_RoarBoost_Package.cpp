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
	 * 		Name   -> Function Buff_Lionfish_Lion_RoarBoost.Buff_Lionfish_Lion_RoarBoost_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Lionfish_Lion_RoarBoost_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_RoarBoost.Buff_Lionfish_Lion_RoarBoost_C.UserConstructionScript");
		
		ABuff_Lionfish_Lion_RoarBoost_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Lionfish_Lion_RoarBoost.Buff_Lionfish_Lion_RoarBoost_C.ExecuteUbergraph_Buff_Lionfish_Lion_RoarBoost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Lionfish_Lion_RoarBoost_C::ExecuteUbergraph_Buff_Lionfish_Lion_RoarBoost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_RoarBoost.Buff_Lionfish_Lion_RoarBoost_C.ExecuteUbergraph_Buff_Lionfish_Lion_RoarBoost");
		
		ABuff_Lionfish_Lion_RoarBoost_C_ExecuteUbergraph_Buff_Lionfish_Lion_RoarBoost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Lionfish_Lion_RoarBoost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Lionfish_Lion_RoarBoost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Lionfish_Lion_RoarBoost.Buff_Lionfish_Lion_RoarBoost_C");
		return ptr;
	}

}

