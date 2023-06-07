/**
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
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::UpdateDivingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingFX");
		
		AGriffin_Character_BP_C_UpdateDivingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.OnDiveSwipe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::OnDiveSwipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.OnDiveSwipe");
		
		AGriffin_Character_BP_C_OnDiveSwipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.Update WindMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::UpdateWindMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update WindMaterial");
		
		AGriffin_Character_BP_C_UpdateWindMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.Update Trail Particle System
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGriffin_Character_BP_C::UpdateTrailParticleSystem(class UParticleSystemComponent* ParticleSystem, bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update Trail Particle System");
		
		AGriffin_Character_BP_C_UpdateTrailParticleSystem_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGriffin_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.BlueprintCanRiderAttack");
		
		AGriffin_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingParticleSystem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGriffin_Character_BP_C::UpdateDivingParticleSystem(class UParticleSystemComponent* ParticleSystem, bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingParticleSystem");
		
		AGriffin_Character_BP_C_UpdateDivingParticleSystem_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Audio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocallyCarried                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGriffin_Character_BP_C::UpdateDivingAudio(bool Active, bool LocallyCarried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Audio");
		
		AGriffin_Character_BP_C_UpdateDivingAudio_Params params {};
		params.Active = Active;
		params.LocallyCarried = LocallyCarried;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Effects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::UpdateDivingEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Effects");
		
		AGriffin_Character_BP_C_UpdateDivingEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.CheckGroundForWingFlap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::CheckGroundForWingFlap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.CheckGroundForWingFlap");
		
		AGriffin_Character_BP_C_CheckGroundForWingFlap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.UserConstructionScript");
		
		AGriffin_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_WingFlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::AnimNotify_WingFlap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_WingFlap");
		
		AGriffin_Character_BP_C_AnimNotify_WingFlap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.ReceiveBeginPlay");
		
		AGriffin_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_DiveSwipe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGriffin_Character_BP_C::AnimNotify_DiveSwipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_DiveSwipe");
		
		AGriffin_Character_BP_C_AnimNotify_DiveSwipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.DropCarriedCharacter_AfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGriffin_Character_BP_C::DropCarriedCharacter_AfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.DropCarriedCharacter_AfterDelay");
		
		AGriffin_Character_BP_C_DropCarriedCharacter_AfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Griffin_Character_BP.Griffin_Character_BP_C.ExecuteUbergraph_Griffin_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGriffin_Character_BP_C::ExecuteUbergraph_Griffin_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.ExecuteUbergraph_Griffin_Character_BP");
		
		AGriffin_Character_BP_C_ExecuteUbergraph_Griffin_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGriffin_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGriffin_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Griffin_Character_BP.Griffin_Character_BP_C");
		return ptr;
	}

}


