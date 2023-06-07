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
	 * 		Name   -> Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.BPPreventAddingOtherBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      anotherBuffClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_HazardSuit_Base_C::BPPreventAddingOtherBuff(class UClass* anotherBuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.BPPreventAddingOtherBuff");
		
		ABuff_HazardSuit_Base_C_BPPreventAddingOtherBuff_Params params {};
		params.anotherBuffClass = anotherBuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HazardSuit_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.UserConstructionScript");
		
		ABuff_HazardSuit_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.ExecuteUbergraph_Buff_HazardSuit_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HazardSuit_Base_C::ExecuteUbergraph_Buff_HazardSuit_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.ExecuteUbergraph_Buff_HazardSuit_Base");
		
		ABuff_HazardSuit_Base_C_ExecuteUbergraph_Buff_HazardSuit_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_HazardSuit_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_HazardSuit_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HazardSuit_Base.Buff_HazardSuit_Base_C");
		return ptr;
	}

}


