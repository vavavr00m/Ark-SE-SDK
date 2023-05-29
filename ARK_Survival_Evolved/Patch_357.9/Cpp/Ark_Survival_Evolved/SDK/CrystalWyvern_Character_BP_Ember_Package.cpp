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
	 * 		Name   -> Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPGetHUDOverrideBuffProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ACrystalWyvern_Character_BP_Ember_C::BPGetHUDOverrideBuffProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPGetHUDOverrideBuffProgressBarPercent");
		
		ACrystalWyvern_Character_BP_Ember_C_BPGetHUDOverrideBuffProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExtraFlameFXSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Ember_C::ExtraFlameFXSetup(class UParticleSystemComponent* ParticleSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExtraFlameFXSetup");
		
		ACrystalWyvern_Character_BP_Ember_C_ExtraFlameFXSetup_Params params {};
		params.ParticleSystem = ParticleSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Ember_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPDoAttack");
		
		ACrystalWyvern_Character_BP_Ember_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Ember_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.UserConstructionScript");
		
		ACrystalWyvern_Character_BP_Ember_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Ember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Ember_C::ExecuteUbergraph_CrystalWyvern_Character_BP_Ember(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Ember");
		
		ACrystalWyvern_Character_BP_Ember_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Ember_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrystalWyvern_Character_BP_Ember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrystalWyvern_Character_BP_Ember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C");
		return ptr;
	}

}


