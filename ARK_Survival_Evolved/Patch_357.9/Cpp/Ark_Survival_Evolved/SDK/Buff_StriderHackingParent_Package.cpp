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
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Look Out for Timeout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::LookOutforTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Look Out for Timeout");
		
		ABuff_StriderHackingParent_C_LookOutforTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Fallback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::Fallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Fallback");
		
		ABuff_StriderHackingParent_C_Fallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Update Buff Timer server logic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromplayertrigger                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::UpdateBuffTimerserverlogic(bool Success, bool fromplayertrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Update Buff Timer server logic");
		
		ABuff_StriderHackingParent_C_UpdateBuffTimerserverlogic_Params params {};
		params.Success = Success;
		params.fromplayertrigger = fromplayertrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Play Weapon Montage server logic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isntfromplayerinput                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Started                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::PlayWeaponMontageserverlogic(bool Success, bool isntfromplayerinput, bool* Started)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Play Weapon Montage server logic");
		
		ABuff_StriderHackingParent_C_PlayWeaponMontageserverlogic_Params params {};
		params.Success = Success;
		params.isntfromplayerinput = isntfromplayerinput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Started != nullptr)
			*Started = params.Started;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Recieved Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputtype                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromplayerinput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::RecievedInput(EPrimalCharacterInputType inputtype, bool fromplayerinput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Recieved Input");
		
		ABuff_StriderHackingParent_C_RecievedInput_Params params {};
		params.inputtype = inputtype;
		params.fromplayerinput = fromplayerinput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.All Beats Succeeded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_StriderHackingParent_C::AllBeatsSucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.All Beats Succeeded");
		
		ABuff_StriderHackingParent_C_AllBeatsSucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ReceiveBeginPlay");
		
		ABuff_StriderHackingParent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_StriderHackingParent_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.AllowPostProcessEffect");
		
		ABuff_StriderHackingParent_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Sync HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::SyncHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Sync HUD Widget");
		
		ABuff_StriderHackingParent_C_SyncHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Notify Toggle HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HUDHidden                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::NotifyToggleHUDWidget(bool HUDHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Notify Toggle HUD Widget");
		
		ABuff_StriderHackingParent_C_NotifyToggleHUDWidget_Params params {};
		params.HUDHidden = HUDHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Destroy HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DestroyNow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::DestroyHUDWidget(bool DestroyNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Destroy HUD Widget");
		
		ABuff_StriderHackingParent_C_DestroyHUDWidget_Params params {};
		params.DestroyNow = DestroyNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Setup HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::SetupHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Setup HUD Widget");
		
		ABuff_StriderHackingParent_C_SetupHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateDrumEffectVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::UpdateDrumEffectVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateDrumEffectVisibility");
		
		ABuff_StriderHackingParent_C_UpdateDrumEffectVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooLate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_StriderHackingParent_C::IsBeatTooLate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooLate");
		
		ABuff_StriderHackingParent_C_IsBeatTooLate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooSoon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_StriderHackingParent_C::IsBeatTooSoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooSoon");
		
		ABuff_StriderHackingParent_C_IsBeatTooSoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_StriderHackingParent_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPGetHUDElements");
		
		ABuff_StriderHackingParent_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ActivateBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::ActivateBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ActivateBuff");
		
		ABuff_StriderHackingParent_C_ActivateBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateBuffTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromplayertrigger                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::UpdateBuffTimer(bool Success, bool fromplayertrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateBuffTimer");
		
		ABuff_StriderHackingParent_C_UpdateBuffTimer_Params params {};
		params.Success = Success;
		params.fromplayertrigger = fromplayertrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPOnInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::BPOnInputEvent(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPOnInputEvent");
		
		ABuff_StriderHackingParent_C_BPOnInputEvent_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.GetWeaponMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimMontage* ABuff_StriderHackingParent_C::GetWeaponMontage(EPrimalCharacterInputType index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.GetWeaponMontage");
		
		ABuff_StriderHackingParent_C_GetWeaponMontage_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.PlayWeaponMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isntfromplayerinput                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Started                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::PlayWeaponMontage(bool Success, bool isntfromplayerinput, bool* Started)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.PlayWeaponMontage");
		
		ABuff_StriderHackingParent_C_PlayWeaponMontage_Params params {};
		params.Success = Success;
		params.isntfromplayerinput = isntfromplayerinput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Started != nullptr)
			*Started = params.Started;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_StriderHackingParent_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPCheckPreventInput");
		
		ABuff_StriderHackingParent_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPDeactivated");
		
		ABuff_StriderHackingParent_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPSetupForInstigator");
		
		ABuff_StriderHackingParent_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPForceCameraStyle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	ECameraStyle ABuff_StriderHackingParent_C::BPForceCameraStyle(class APrimalCharacter* ForViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPForceCameraStyle");
		
		ABuff_StriderHackingParent_C_BPForceCameraStyle_Params params {};
		params.ForViewTarget = ForViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UserConstructionScript");
		
		ABuff_StriderHackingParent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ServerPlayWeaponMontage
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isntfromplayerinput                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::ServerPlayWeaponMontage(bool Success, bool isntfromplayerinput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ServerPlayWeaponMontage");
		
		ABuff_StriderHackingParent_C_ServerPlayWeaponMontage_Params params {};
		params.Success = Success;
		params.isntfromplayerinput = isntfromplayerinput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientPlayDrumLoop
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::ClientPlayDrumLoop(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientPlayDrumLoop");
		
		ABuff_StriderHackingParent_C_ClientPlayDrumLoop_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientUpdateDrumRadius
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVis                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::ClientUpdateDrumRadius(bool NewVis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientUpdateDrumRadius");
		
		ABuff_StriderHackingParent_C_ClientUpdateDrumRadius_Params params {};
		params.NewVis = NewVis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BuffTickClient");
		
		ABuff_StriderHackingParent_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.drum loop finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_StriderHackingParent_C::drumloopfinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.drum loop finished");
		
		ABuff_StriderHackingParent_C_drumloopfinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ExecuteUbergraph_Buff_StriderHackingParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_StriderHackingParent_C::ExecuteUbergraph_Buff_StriderHackingParent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ExecuteUbergraph_Buff_StriderHackingParent");
		
		ABuff_StriderHackingParent_C_ExecuteUbergraph_Buff_StriderHackingParent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_StriderHackingParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_StriderHackingParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StriderHackingParent.Buff_StriderHackingParent_C");
		return ptr;
	}

}


