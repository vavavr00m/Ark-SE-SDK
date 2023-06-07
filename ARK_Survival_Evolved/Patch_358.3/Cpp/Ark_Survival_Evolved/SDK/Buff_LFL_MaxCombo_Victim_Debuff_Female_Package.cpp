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
	 * 		Name   -> Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.CalculateDoTDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeSinceLastDoT                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_LFL_MaxCombo_Victim_Debuff_Female_C::CalculateDoTDamage(float TimeSinceLastDoT, float* Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.CalculateDoTDamage");
		
		ABuff_LFL_MaxCombo_Victim_Debuff_Female_C_CalculateDoTDamage_Params params {};
		params.TimeSinceLastDoT = TimeSinceLastDoT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_LFL_MaxCombo_Victim_Debuff_Female_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.UserConstructionScript");
		
		ABuff_LFL_MaxCombo_Victim_Debuff_Female_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_LFL_MaxCombo_Victim_Debuff_Female_C::ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female");
		
		ABuff_LFL_MaxCombo_Victim_Debuff_Female_C_ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_LFL_MaxCombo_Victim_Debuff_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_LFL_MaxCombo_Victim_Debuff_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C");
		return ptr;
	}

}


