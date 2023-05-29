/**
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
	 * 		Name   -> Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.CheckDeactivation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BloodCurseHeal_C::CheckDeactivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.CheckDeactivation");
		
		ABuff_BloodCurseHeal_C_CheckDeactivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.RecoverHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageCaused                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BloodCurseHeal_C::RecoverHealth(float DamageCaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.RecoverHealth");
		
		ABuff_BloodCurseHeal_C_RecoverHealth_Params params {};
		params.DamageCaused = DamageCaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UpdateVictims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Add                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BloodCurseHeal_C::UpdateVictims(class APrimalCharacter* Character, bool Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UpdateVictims");
		
		ABuff_BloodCurseHeal_C_UpdateVictims_Params params {};
		params.Character = Character;
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BloodCurseHeal_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UserConstructionScript");
		
		ABuff_BloodCurseHeal_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.ExecuteUbergraph_Buff_BloodCurseHeal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BloodCurseHeal_C::ExecuteUbergraph_Buff_BloodCurseHeal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.ExecuteUbergraph_Buff_BloodCurseHeal");
		
		ABuff_BloodCurseHeal_C_ExecuteUbergraph_Buff_BloodCurseHeal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BloodCurseHeal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BloodCurseHeal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BloodCurseHeal.Buff_BloodCurseHeal_C");
		return ptr;
	}

}


