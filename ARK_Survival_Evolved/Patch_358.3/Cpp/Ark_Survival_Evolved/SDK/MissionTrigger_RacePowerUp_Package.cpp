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
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RacePowerUp_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveEndPlay");
		
		AMissionTrigger_RacePowerUp_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveBeginPlay");
		
		AMissionTrigger_RacePowerUp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ResetPowerUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::ResetPowerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ResetPowerUp");
		
		AMissionTrigger_RacePowerUp_C_ResetPowerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive_PURE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RacePowerUp_C::IsPowerUpActive_PURE(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive_PURE");
		
		AMissionTrigger_RacePowerUp_C_IsPowerUpActive_PURE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RacePowerUp_C::IsPowerUpActive(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive");
		
		AMissionTrigger_RacePowerUp_C_IsPowerUpActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DeactivatePowerUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::DeactivatePowerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DeactivatePowerUp");
		
		AMissionTrigger_RacePowerUp_C_DeactivatePowerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.InitPowerUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::InitPowerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.InitPowerUp");
		
		AMissionTrigger_RacePowerUp_C_InitPowerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RacePowerUp_C::SetPowerUpEnabled(bool NewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpEnabled");
		
		AMissionTrigger_RacePowerUp_C_SetPowerUpEnabled_Params params {};
		params.NewEnabled = NewEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpFX_Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AlsoEnable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RacePowerUp_C::SetPowerUpFX_Active(bool newActive, bool AlsoEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpFX_Active");
		
		AMissionTrigger_RacePowerUp_C_SetPowerUpFX_Active_Params params {};
		params.newActive = newActive;
		params.AlsoEnable = AlsoEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.OnPowerUpTriggerHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsesPowerUp                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RacePowerUp_C::OnPowerUpTriggerHit(bool UsesPowerUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.OnPowerUpTriggerHit");
		
		AMissionTrigger_RacePowerUp_C_OnPowerUpTriggerHit_Params params {};
		params.UsesPowerUp = UsesPowerUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.UserConstructionScript");
		
		AMissionTrigger_RacePowerUp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::Timeline_PowerUp_Fade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__FinishedFunc");
		
		AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::Timeline_PowerUp_Fade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__UpdateFunc");
		
		AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::Timeline_PulseColor__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__FinishedFunc");
		
		AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::Timeline_PulseColor__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__UpdateFunc");
		
		AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::Timeline_PowerUpActivate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__FinishedFunc");
		
		AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::Timeline_PowerUpActivate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__UpdateFunc");
		
		AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeOut");
		
		AMissionTrigger_RacePowerUp_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeIn");
		
		AMissionTrigger_RacePowerUp_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.PowerUpPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::PowerUpPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.PowerUpPulse");
		
		AMissionTrigger_RacePowerUp_C_PowerUpPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp_NOW
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::DisablePowerUp_NOW()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp_NOW");
		
		AMissionTrigger_RacePowerUp_C_DisablePowerUp_NOW_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::EnablePowerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp");
		
		AMissionTrigger_RacePowerUp_C_EnablePowerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::DisablePowerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp");
		
		AMissionTrigger_RacePowerUp_C_DisablePowerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp_NOW
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RacePowerUp_C::EnablePowerUp_NOW()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp_NOW");
		
		AMissionTrigger_RacePowerUp_C_EnablePowerUp_NOW_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ExecuteUbergraph_MissionTrigger_RacePowerUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RacePowerUp_C::ExecuteUbergraph_MissionTrigger_RacePowerUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ExecuteUbergraph_MissionTrigger_RacePowerUp");
		
		AMissionTrigger_RacePowerUp_C_ExecuteUbergraph_MissionTrigger_RacePowerUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionTrigger_RacePowerUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionTrigger_RacePowerUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C");
		return ptr;
	}

}


