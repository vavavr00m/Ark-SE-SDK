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
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ExtraAllowLaunchCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::ExtraAllowLaunchCheck(class APrimalCharacter* Character, bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ExtraAllowLaunchCheck");
		
		ATekJumpPad_C_ExtraAllowLaunchCheck_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_ShowIndicator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_ShowIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_ShowIndicator");
		
		ATekJumpPad_C_OnRep_ShowIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.SetLaunchPreviewVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::SetLaunchPreviewVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.SetLaunchPreviewVisibility");
		
		ATekJumpPad_C_SetLaunchPreviewVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.TickLaunchPreview
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::TickLaunchPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.TickLaunchPreview");
		
		ATekJumpPad_C_TickLaunchPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPContainerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::BPContainerDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPContainerDeactivated");
		
		ATekJumpPad_C_BPContainerDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPContainerActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::BPContainerActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPContainerActivated");
		
		ATekJumpPad_C_BPContainerActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPRefreshedStructureColors
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::BPRefreshedStructureColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPRefreshedStructureColors");
		
		ATekJumpPad_C_BPRefreshedStructureColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BlueprintDrawHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BlueprintDrawHUD");
		
		ATekJumpPad_C_BlueprintDrawHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.RandomSetRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::RandomSetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.RandomSetRotation");
		
		ATekJumpPad_C_RandomSetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_LaunchBounceTriggerSwitchBool
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_LaunchBounceTriggerSwitchBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_LaunchBounceTriggerSwitchBool");
		
		ATekJumpPad_C_OnRep_LaunchBounceTriggerSwitchBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPPlacedStructure");
		
		ATekJumpPad_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_IsSizeBig
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_IsSizeBig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_IsSizeBig");
		
		ATekJumpPad_C_OnRep_IsSizeBig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.SetMaterialParameters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::SetMaterialParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.SetMaterialParameters");
		
		ATekJumpPad_C_SetMaterialParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.TurnOnJumpPad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::TurnOnJumpPad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.TurnOnJumpPad");
		
		ATekJumpPad_C_TurnOnJumpPad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_IsActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_IsActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_IsActivated");
		
		ATekJumpPad_C_OnRep_IsActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_UseRandomDirection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_UseRandomDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_UseRandomDirection");
		
		ATekJumpPad_C_OnRep_UseRandomDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.LaunchForceToAlpha
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              LaunchForce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::LaunchForceToAlpha(float LaunchForce, float* Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.LaunchForceToAlpha");
		
		ATekJumpPad_C_LaunchForceToAlpha_Params params {};
		params.LaunchForce = LaunchForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alpha != nullptr)
			*Alpha = params.Alpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_CurrentLaunchForce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_CurrentLaunchForce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_CurrentLaunchForce");
		
		ATekJumpPad_C_OnRep_CurrentLaunchForce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_LaunchAreaCapsuleHalfHeight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_LaunchAreaCapsuleHalfHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_LaunchAreaCapsuleHalfHeight");
		
		ATekJumpPad_C_OnRep_LaunchAreaCapsuleHalfHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.UpdateLaunchTriggerTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewCapsuleHalfHeight                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewLaunchForce                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::UpdateLaunchTriggerTransform(const struct FRotator& NewRotation, float NewCapsuleHalfHeight, float NewLaunchForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.UpdateLaunchTriggerTransform");
		
		ATekJumpPad_C_UpdateLaunchTriggerTransform_Params params {};
		params.NewRotation = NewRotation;
		params.NewCapsuleHalfHeight = NewCapsuleHalfHeight;
		params.NewLaunchForce = NewLaunchForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.OnRep_LaunchRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::OnRep_LaunchRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_LaunchRotation");
		
		ATekJumpPad_C_OnRep_LaunchRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ATekJumpPad_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPServerHandleNetExecCommand");
		
		ATekJumpPad_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPClientDoMultiUse");
		
		ATekJumpPad_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATekJumpPad_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPGetMultiUseEntries");
		
		ATekJumpPad_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.LaunchCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VelocityMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::LaunchCharacter(class APrimalCharacter* Character, float VelocityMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.LaunchCharacter");
		
		ATekJumpPad_C_LaunchCharacter_Params params {};
		params.Character = Character;
		params.VelocityMultiplier = VelocityMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.GetVelocityMultiplierForCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowedToLaunch                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VelocityMultiplier                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::GetVelocityMultiplierForCharacter(class APrimalCharacter* Char, bool* AllowedToLaunch, float* VelocityMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.GetVelocityMultiplierForCharacter");
		
		ATekJumpPad_C_GetVelocityMultiplierForCharacter_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedToLaunch != nullptr)
			*AllowedToLaunch = params.AllowedToLaunch;
		if (VelocityMultiplier != nullptr)
			*VelocityMultiplier = params.VelocityMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BPIsAllowedToBuildEx
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFinalPlacement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bChoosingRotation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ATekJumpPad_C::BPIsAllowedToBuildEx(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason, class APlayerController* PC, bool bFinalPlacement, bool bChoosingRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPIsAllowedToBuildEx");
		
		ATekJumpPad_C_BPIsAllowedToBuildEx_Params params {};
		params.CurrentAllowedReason = CurrentAllowedReason;
		params.PC = PC;
		params.bFinalPlacement = bFinalPlacement;
		params.bChoosingRotation = bChoosingRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlacementData != nullptr)
			*OutPlacementData = params.OutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.GetBuffDefaultDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeactivateAfterTime                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::GetBuffDefaultDuration(class UClass* BuffClass, float* DeactivateAfterTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.GetBuffDefaultDuration");
		
		ATekJumpPad_C_GetBuffDefaultDuration_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeactivateAfterTime != nullptr)
			*DeactivateAfterTime = params.DeactivateAfterTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.UserConstructionScript");
		
		ATekJumpPad_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Launchactivate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekJumpPad_C::Launchactivate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Launchactivate__FinishedFunc");
		
		ATekJumpPad_C_Launchactivate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Launchactivate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekJumpPad_C::Launchactivate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Launchactivate__UpdateFunc");
		
		ATekJumpPad_C_Launchactivate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekJumpPad_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_0__FinishedFunc");
		
		ATekJumpPad_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekJumpPad_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_0__UpdateFunc");
		
		ATekJumpPad_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekJumpPad_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_1__FinishedFunc");
		
		ATekJumpPad_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekJumpPad_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_1__UpdateFunc");
		
		ATekJumpPad_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void ATekJumpPad_C::BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature");
		
		ATekJumpPad_C_BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ReceiveBeginPlay");
		
		ATekJumpPad_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_RotateToOtherSide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::ServerRequest_RotateToOtherSide(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_RotateToOtherSide");
		
		ATekJumpPad_C_ServerRequest_RotateToOtherSide_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_ToggleSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleSize");
		
		ATekJumpPad_C_ServerRequest_ToggleSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_Rotate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_Rotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_Rotate");
		
		ATekJumpPad_C_ServerRequest_Rotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_ForceUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceUp");
		
		ATekJumpPad_C_ServerRequest_ForceUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_ForceDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceDown");
		
		ATekJumpPad_C_ServerRequest_ForceDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleRandom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_ToggleRandom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleRandom");
		
		ATekJumpPad_C_ServerRequest_ToggleRandom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_SetPinCode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::ServerRequest_SetPinCode(class APlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_SetPinCode");
		
		ATekJumpPad_C_ServerRequest_SetPinCode_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleActivation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_ToggleActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleActivation");
		
		ATekJumpPad_C_ServerRequest_ToggleActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Client_FloatingPad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::Client_FloatingPad(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Client_FloatingPad");
		
		ATekJumpPad_C_Client_FloatingPad_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchMore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_PitchMore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchMore");
		
		ATekJumpPad_C_ServerRequest_PitchMore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchLess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_PitchLess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchLess");
		
		ATekJumpPad_C_ServerRequest_PitchLess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.Client_LaunchBounce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::Client_LaunchBounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Client_LaunchBounce");
		
		ATekJumpPad_C_Client_LaunchBounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleIndicator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekJumpPad_C::ServerRequest_ToggleIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleIndicator");
		
		ATekJumpPad_C_ServerRequest_ToggleIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TekJumpPad.TekJumpPad_C.ExecuteUbergraph_TekJumpPad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekJumpPad_C::ExecuteUbergraph_TekJumpPad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ExecuteUbergraph_TekJumpPad");
		
		ATekJumpPad_C_ExecuteUbergraph_TekJumpPad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekJumpPad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekJumpPad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekJumpPad.TekJumpPad_C");
		return ptr;
	}

}


