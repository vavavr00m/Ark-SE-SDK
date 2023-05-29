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
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Sync Crosshair Color
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                outColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::SyncCrosshairColor(const struct FLinearColor& InColor, struct FLinearColor* outColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Sync Crosshair Color");
		
		ABrainSlug_Character_BP_C_SyncCrosshairColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outColor != nullptr)
			*outColor = params.outColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAllowedToControlTarget                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      TargetValidationString                                     (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      InvalidTargetString_PreventHUD                             (Parm, OutParm, ZeroConstructor)
	 * 		struct FHUDElement                                 HUDElementTemplate                                         (Parm, OutParm)
	 * 		float                                              BrainJumpTargetCheckDistance                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::GetHudData(class APrimalCharacter* TargetChar, bool* IsAllowedToControlTarget, class FString* TargetValidationString, class FString* InvalidTargetString_PreventHUD, struct FHUDElement* HUDElementTemplate, float* BrainJumpTargetCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetHudData");
		
		ABrainSlug_Character_BP_C_GetHudData_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowedToControlTarget != nullptr)
			*IsAllowedToControlTarget = params.IsAllowedToControlTarget;
		if (TargetValidationString != nullptr)
			*TargetValidationString = params.TargetValidationString;
		if (InvalidTargetString_PreventHUD != nullptr)
			*InvalidTargetString_PreventHUD = params.InvalidTargetString_PreventHUD;
		if (HUDElementTemplate != nullptr)
			*HUDElementTemplate = params.HUDElementTemplate;
		if (BrainJumpTargetCheckDistance != nullptr)
			*BrainJumpTargetCheckDistance = params.BrainJumpTargetCheckDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OverrideTargetingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABrainSlug_Character_BP_C::BP_OverrideTargetingLocation(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OverrideTargetingLocation");
		
		ABrainSlug_Character_BP_C_BP_OverrideTargetingLocation_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetTargetingDesirability
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABrainSlug_Character_BP_C::BPGetTargetingDesirability(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetTargetingDesirability");
		
		ABrainSlug_Character_BP_C_BPGetTargetingDesirability_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsPlayerOnMission
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       OverrideCharacterToTest                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOnMission                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::IsPlayerOnMission(class APawn* OverrideCharacterToTest, bool* IsOnMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsPlayerOnMission");
		
		ABrainSlug_Character_BP_C_IsPlayerOnMission_Params params {};
		params.OverrideCharacterToTest = OverrideCharacterToTest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOnMission != nullptr)
			*IsOnMission = params.IsOnMission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetBrainSlugAimDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ABrainSlug_Character_BP_C::GetBrainSlugAimDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetBrainSlugAimDirection");
		
		ABrainSlug_Character_BP_C_GetBrainSlugAimDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DecreaseStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StaminaCost                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::DecreaseStamina(float StaminaCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DecreaseStamina");
		
		ABrainSlug_Character_BP_C_DecreaseStamina_Params params {};
		params.StaminaCost = StaminaCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateComponentVisibilityWithCameraStyle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CameraStyle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::UpdateComponentVisibilityWithCameraStyle(const class FName& CameraStyle, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateComponentVisibilityWithCameraStyle");
		
		ABrainSlug_Character_BP_C_UpdateComponentVisibilityWithCameraStyle_Params params {};
		params.CameraStyle = CameraStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnCameraStyleChangedNotify
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewCameraStyle                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OldCameraStyle                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BP_OnCameraStyleChangedNotify(class FName* NewCameraStyle, class FName* OldCameraStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnCameraStyleChangedNotify");
		
		ABrainSlug_Character_BP_C_BP_OnCameraStyleChangedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewCameraStyle != nullptr)
			*NewCameraStyle = params.NewCameraStyle;
		if (OldCameraStyle != nullptr)
			*OldCameraStyle = params.OldCameraStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToBrainJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAttackJump                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::IsAllowedToBrainJump(bool IsAttackJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToBrainJump");
		
		ABrainSlug_Character_BP_C_IsAllowedToBrainJump_Params params {};
		params.IsAttackJump = IsAttackJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyHarvestingQuantity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              originalQuantity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      resourceSelected                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABrainSlug_Character_BP_C::BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyHarvestingQuantity");
		
		ABrainSlug_Character_BP_C_BPModifyHarvestingQuantity_Params params {};
		params.originalQuantity = originalQuantity;
		params.resourceSelected = resourceSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTriggerStasisEvent");
		
		ABrainSlug_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasHumanControllerOrDinoDoes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHasHumanController                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::HasHumanControllerOrDinoDoes(bool* bHasHumanController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasHumanControllerOrDinoDoes");
		
		ABrainSlug_Character_BP_C_HasHumanControllerOrDinoDoes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasHumanController != nullptr)
			*bHasHumanController = params.bHasHumanController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnstasis");
		
		ABrainSlug_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABrainSlug_Character_BP_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventStasis");
		
		ABrainSlug_Character_BP_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptItemContainerActivationToggle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               StructureRef                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ActivationChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::AttemptItemContainerActivationToggle(class APrimalStructureItemContainer* StructureRef, bool* ActivationChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptItemContainerActivationToggle");
		
		ABrainSlug_Character_BP_C_AttemptItemContainerActivationToggle_Params params {};
		params.StructureRef = StructureRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivationChanged != nullptr)
			*ActivationChanged = params.ActivationChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABrainSlug_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPServerHandleNetExecCommand");
		
		ABrainSlug_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanRiderAttack");
		
		ABrainSlug_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasForbiddenDinoCustomTag
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TagToCheck                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::HasForbiddenDinoCustomTag(const class FName& TagToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasForbiddenDinoCustomTag");
		
		ABrainSlug_Character_BP_C_HasForbiddenDinoCustomTag_Params params {};
		params.TagToCheck = TagToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOverrideInventoryAccessInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABrainSlug_Character_BP_C::BPOverrideInventoryAccessInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOverrideInventoryAccessInput");
		
		ABrainSlug_Character_BP_C_BPOverrideInventoryAccessInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateBuffControlDur
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::UpdateBuffControlDur()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateBuffControlDur");
		
		ABrainSlug_Character_BP_C_UpdateBuffControlDur_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanCryo");
		
		ABrainSlug_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPSetupTamed");
		
		ABrainSlug_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintOverrideWantsToRun
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInputWantsToRun                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintOverrideWantsToRun");
		
		ABrainSlug_Character_BP_C_BlueprintOverrideWantsToRun_Params params {};
		params.bInputWantsToRun = bInputWantsToRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoInPastTameAffinityTargets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID1                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ID2                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::IsDinoInPastTameAffinityTargets(int32_t* ID1, int32_t* ID2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoInPastTameAffinityTargets");
		
		ABrainSlug_Character_BP_C_IsDinoInPastTameAffinityTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID1 != nullptr)
			*ID1 = params.ID1;
		if (ID2 != nullptr)
			*ID2 = params.ID2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnsetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPUnsetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnsetupDinoTameable");
		
		ABrainSlug_Character_BP_C_BPUnsetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainSlugIterateAffinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DinoToGetAffinityFrom                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BrainSlugIterateAffinity(class APrimalCharacter* DinoToGetAffinityFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainSlugIterateAffinity");
		
		ABrainSlug_Character_BP_C_BrainSlugIterateAffinity_Params params {};
		params.DinoToGetAffinityFrom = DinoToGetAffinityFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyAimOffsetNoTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Aim                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ABrainSlug_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyAimOffsetNoTarget");
		
		ABrainSlug_Character_BP_C_BPModifyAimOffsetNoTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aim != nullptr)
			*Aim = params.Aim;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABrainSlug_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ABrainSlug_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanAttack");
		
		ABrainSlug_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABrainSlug_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPShouldForceFlee");
		
		ABrainSlug_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.EndBrainHunt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::EndBrainHunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.EndBrainHunt");
		
		ABrainSlug_Character_BP_C_EndBrainHunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPIsValidUnStasisCaster
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABrainSlug_Character_BP_C::BPIsValidUnStasisCaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPIsValidUnStasisCaster");
		
		ABrainSlug_Character_BP_C_BPIsValidUnStasisCaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNotifyClearRider");
		
		ABrainSlug_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPDoAttack");
		
		ABrainSlug_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABrainSlug_Character_BP_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventFirstPerson");
		
		ABrainSlug_Character_BP_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABrainSlug_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetHUDElements");
		
		ABrainSlug_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNewDoorInteractionDrawHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   DoorDescriptionLoc                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BPNewDoorInteractionDrawHUD(class AShooterHUD* HUD, const struct FVector2D& DoorDescriptionLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNewDoorInteractionDrawHUD");
		
		ABrainSlug_Character_BP_C_BPNewDoorInteractionDrawHUD_Params params {};
		params.HUD = HUD;
		params.DoorDescriptionLoc = DoorDescriptionLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReturnToPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ReturnToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReturnToPlayer");
		
		ABrainSlug_Character_BP_C_ReturnToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveRight");
		
		ABrainSlug_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveForward");
		
		ABrainSlug_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainSlugAttachment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            AttachedToChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::StartBrainSlugAttachment(class APrimalCharacter* AttachedToChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainSlugAttachment");
		
		ABrainSlug_Character_BP_C_StartBrainSlugAttachment_Params params {};
		params.AttachedToChar = AttachedToChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FindViableBrainJumpTargetFromControlRot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            ViableTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::FindViableBrainJumpTargetFromControlRot(class AController* Controller, class APrimalCharacter** ViableTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FindViableBrainJumpTargetFromControlRot");
		
		ABrainSlug_Character_BP_C_FindViableBrainJumpTargetFromControlRot_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViableTarget != nullptr)
			*ViableTarget = params.ViableTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnClearMountedDino");
		
		ABrainSlug_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnSetMountedDino");
		
		ABrainSlug_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ABrainSlug_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustDamage");
		
		ABrainSlug_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ABrainSlug_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoBrainFood
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ABrainSlug_Character_BP_C::IsDinoBrainFood(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoBrainFood");
		
		ABrainSlug_Character_BP_C_IsDinoBrainFood_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCharacterSleeped");
		
		ABrainSlug_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Get Aim Adjusted Throwing Dir
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    AdjustedThrowingDir                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::GetAimAdjustedThrowingDir(struct FRotator* AdjustedThrowingDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Get Aim Adjusted Throwing Dir");
		
		ABrainSlug_Character_BP_C_GetAimAdjustedThrowingDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AdjustedThrowingDir != nullptr)
			*AdjustedThrowingDir = params.AdjustedThrowingDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FullyTameTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DidTame                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::FullyTameTarget(class APrimalDinoCharacter* TargetChar, bool* DidTame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FullyTameTarget");
		
		ABrainSlug_Character_BP_C_FullyTameTarget_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DidTame != nullptr)
			*DidTame = params.DidTame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToFullyTame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TestChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::IsAllowedToFullyTame(class APrimalCharacter* TestChar, bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToFullyTame");
		
		ABrainSlug_Character_BP_C_IsAllowedToFullyTame_Params params {};
		params.TestChar = TestChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveDestroyed");
		
		ABrainSlug_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnSetDeath");
		
		ABrainSlug_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerServer");
		
		ABrainSlug_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ABrainSlug_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustAttackIndex");
		
		ABrainSlug_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BlueprintPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintPlayDying");
		
		ABrainSlug_Character_BP_C_BlueprintPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ABrainSlug_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.InterceptInputEvent");
		
		ABrainSlug_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanMountOnCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BPCanMountOnCharacter(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanMountOnCharacter");
		
		ABrainSlug_Character_BP_C_BPCanMountOnCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ABrainSlug_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToControl
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TestChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      TargetValidationString                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ABrainSlug_Character_BP_C::IsAllowedToControl(class APrimalCharacter* TestChar, bool* Allowed, class FString* TargetValidationString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToControl");
		
		ABrainSlug_Character_BP_C_IsAllowedToControl_Params params {};
		params.TestChar = TestChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
		if (TargetValidationString != nullptr)
			*TargetValidationString = params.TargetValidationString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ABrainSlug_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetCrosshairColor");
		
		ABrainSlug_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveUnpossessed");
		
		ABrainSlug_Character_BP_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceivePossessed");
		
		ABrainSlug_Character_BP_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerNonDedicated");
		
		ABrainSlug_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABrainSlug_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTryMultiUse");
		
		ABrainSlug_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABrainSlug_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetMultiUseEntries");
		
		ABrainSlug_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DinoShoulderMountedLaunch
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     launchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           throwingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::DinoShoulderMountedLaunch(const struct FVector& launchDir, class AShooterCharacter* throwingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DinoShoulderMountedLaunch");
		
		ABrainSlug_Character_BP_C_DinoShoulderMountedLaunch_Params params {};
		params.launchDir = launchDir;
		params.throwingCharacter = throwingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UserConstructionScript");
		
		ABrainSlug_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerAttemptBrainControl
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::ServerAttemptBrainControl(class APrimalCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerAttemptBrainControl");
		
		ABrainSlug_Character_BP_C_ServerAttemptBrainControl_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.MultiEnableNonDediTimer
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::MultiEnableNonDediTimer(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.MultiEnableNonDediTimer");
		
		ABrainSlug_Character_BP_C_MultiEnableNonDediTimer_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerClearBrainHunt
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ServerClearBrainHunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerClearBrainHunt");
		
		ABrainSlug_Character_BP_C_ServerClearBrainHunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_EndBrainHunt
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::Multi_EndBrainHunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_EndBrainHunt");
		
		ABrainSlug_Character_BP_C_Multi_EndBrainHunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossession
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ClearPossession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossession");
		
		ABrainSlug_Character_BP_C_ClearPossession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TemporaryPlayerPassThrough
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::TemporaryPlayerPassThrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TemporaryPlayerPassThrough");
		
		ABrainSlug_Character_BP_C_TemporaryPlayerPassThrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainSlugAttachment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ClearBrainSlugAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainSlugAttachment");
		
		ABrainSlug_Character_BP_C_ClearBrainSlugAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_PlayFullyTamedVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_PlayFullyTamedVFX(class APrimalCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_PlayFullyTamedVFX");
		
		ABrainSlug_Character_BP_C_Multi_PlayFullyTamedVFX_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetDrawCrosshair
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_SetDrawCrosshair(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetDrawCrosshair");
		
		ABrainSlug_Character_BP_C_Multi_SetDrawCrosshair_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerTryDoorInteraction
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            TargetedDoor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::ServerTryDoorInteraction(class APrimalStructure* TargetedDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerTryDoorInteraction");
		
		ABrainSlug_Character_BP_C_ServerTryDoorInteraction_Params params {};
		params.TargetedDoor = TargetedDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_ClearBrainSlugAttachment
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::Server_ClearBrainSlugAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_ClearBrainSlugAttachment");
		
		ABrainSlug_Character_BP_C_Server_ClearBrainSlugAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DestroyController
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_DestroyController(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DestroyController");
		
		ABrainSlug_Character_BP_C_Multi_DestroyController_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ResetFlee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ResetFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ResetFlee");
		
		ABrainSlug_Character_BP_C_ResetFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveBeginPlay");
		
		ABrainSlug_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SpawnEffect
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             particle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      AttachToActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        AttachToSocket                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_SpawnEffect(class UParticleSystem* particle, const struct FVector& Location, class AActor* AttachToActor, const class FName& AttachToSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SpawnEffect");
		
		ABrainSlug_Character_BP_C_Multi_SpawnEffect_Params params {};
		params.particle = particle;
		params.Location = Location;
		params.AttachToActor = AttachToActor;
		params.AttachToSocket = AttachToSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoJumpParticle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FromThrow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_DoJumpParticle(bool Activate, bool FromThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoJumpParticle");
		
		ABrainSlug_Character_BP_C_Multi_DoJumpParticle_Params params {};
		params.Activate = Activate;
		params.FromThrow = FromThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoBrainHuntParticle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_DoBrainHuntParticle(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoBrainHuntParticle");
		
		ABrainSlug_Character_BP_C_Multi_DoBrainHuntParticle_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerRepossess
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 InController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::ServerRepossess(class AController* InController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerRepossess");
		
		ABrainSlug_Character_BP_C_ServerRepossess_Params params {};
		params.InController = InController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TimerClearBrainSlugAttachment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::TimerClearBrainSlugAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TimerClearBrainSlugAttachment");
		
		ABrainSlug_Character_BP_C_TimerClearBrainSlugAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartPossessionBehaviors
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDontActuallyPossess                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::StartPossessionBehaviors(bool bDontActuallyPossess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartPossessionBehaviors");
		
		ABrainSlug_Character_BP_C_StartPossessionBehaviors_Params params {};
		params.bDontActuallyPossess = bDontActuallyPossess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ChangeControllers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ChangeControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ChangeControllers");
		
		ABrainSlug_Character_BP_C_ChangeControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRotForController
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    newRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_SetControlRotForController(class AController* Target, const struct FRotator& newRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRotForController");
		
		ABrainSlug_Character_BP_C_Multi_SetControlRotForController_Params params {};
		params.Target = Target;
		params.newRot = newRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TestingMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OutMessage                                                 (Parm, ZeroConstructor)
	 */
	void ABrainSlug_Character_BP_C::TestingMessage(const class FString& OutMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TestingMessage");
		
		ABrainSlug_Character_BP_C_TestingMessage_Params params {};
		params.OutMessage = OutMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.SetupHarvestingBag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               HarvestBag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::SetupHarvestingBag(class APrimalStructureItemContainer* HarvestBag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.SetupHarvestingBag");
		
		ABrainSlug_Character_BP_C_SetupHarvestingBag_Params params {};
		params.HarvestBag = HarvestBag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Timer_TryUpdateComponentVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::Timer_TryUpdateComponentVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Timer_TryUpdateComponentVisibility");
		
		ABrainSlug_Character_BP_C_Timer_TryUpdateComponentVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptBrainControl
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::AttemptBrainControl(class APrimalCharacter* TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptBrainControl");
		
		ABrainSlug_Character_BP_C_AttemptBrainControl_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpReleased");
		
		ABrainSlug_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TryFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::TryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TryFire");
		
		ABrainSlug_Character_BP_C_TryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ForceFireWeapon
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ForceFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ForceFireWeapon");
		
		ABrainSlug_Character_BP_C_ForceFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerFireWeapon
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ServerFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerFireWeapon");
		
		ABrainSlug_Character_BP_C_ServerFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_TryJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bStartJump                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Server_TryJump(bool bStartJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_TryJump");
		
		ABrainSlug_Character_BP_C_Server_TryJump_Params params {};
		params.bStartJump = bStartJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpPressed");
		
		ABrainSlug_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedUpdateRot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::DelayedUpdateRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedUpdateRot");
		
		ABrainSlug_Character_BP_C_DelayedUpdateRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_SetControlRot
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    newRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    InstigatingController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewAimDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Server_SetControlRot(const struct FRotator& newRot, class AShooterPlayerController* InstigatingController, const struct FVector& NewLoc, const struct FVector& NewAimDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_SetControlRot");
		
		ABrainSlug_Character_BP_C_Server_SetControlRot_Params params {};
		params.newRot = newRot;
		params.InstigatingController = InstigatingController;
		params.NewLoc = NewLoc;
		params.NewAimDir = NewAimDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRot
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    newRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_SetControlRot(const struct FRotator& newRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRot");
		
		ABrainSlug_Character_BP_C_Multi_SetControlRot_Params params {};
		params.newRot = newRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_MoveInput
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     moveDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_MoveInput(const struct FVector& moveDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_MoveInput");
		
		ABrainSlug_Character_BP_C_Multi_MoveInput_Params params {};
		params.moveDir = moveDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_MoveBrainControlTarget
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     moveDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    InstigatingController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Server_MoveBrainControlTarget(const struct FVector& moveDir, class AShooterPlayerController* InstigatingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_MoveBrainControlTarget");
		
		ABrainSlug_Character_BP_C_Server_MoveBrainControlTarget_Params params {};
		params.moveDir = moveDir;
		params.InstigatingController = InstigatingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossessionBinds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ClearPossessionBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossessionBinds");
		
		ABrainSlug_Character_BP_C_ClearPossessionBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerSleep
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsSleeping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::RespondToPlayerSleep(class APrimalCharacter* forCharacter, bool bIsSleeping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerSleep");
		
		ABrainSlug_Character_BP_C_RespondToPlayerSleep_Params params {};
		params.forCharacter = forCharacter;
		params.bIsSleeping = bIsSleeping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::RespondToPlayerDeath(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerDeath");
		
		ABrainSlug_Character_BP_C_RespondToPlayerDeath_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.OnPossessionResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    NewPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::OnPossessionResponse(class AShooterPlayerController* NewPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.OnPossessionResponse");
		
		ABrainSlug_Character_BP_C_OnPossessionResponse_Params params {};
		params.NewPC = NewPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_UpdateCollisionProfile
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldCollide                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::Multi_UpdateCollisionProfile(bool bShouldCollide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_UpdateCollisionProfile");
		
		ABrainSlug_Character_BP_C_Multi_UpdateCollisionProfile_Params params {};
		params.bShouldCollide = bShouldCollide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.JumpLeapInput
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::JumpLeapInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.JumpLeapInput");
		
		ABrainSlug_Character_BP_C_JumpLeapInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateJumpCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::UpdateJumpCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateJumpCheck");
		
		ABrainSlug_Character_BP_C_UpdateJumpCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedLaunchVelocity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::DelayedLaunchVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedLaunchVelocity");
		
		ABrainSlug_Character_BP_C_DelayedLaunchVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.K2_OnMovementModeChanged");
		
		ABrainSlug_Character_BP_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::StartBrainJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainJump");
		
		ABrainSlug_Character_BP_C_StartBrainJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_Character_BP_C::ClearBrainJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainJump");
		
		ABrainSlug_Character_BP_C_ClearBrainJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ActorHitDelegateEvent
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ABrainSlug_Character_BP_C::ActorHitDelegateEvent(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ActorHitDelegateEvent");
		
		ABrainSlug_Character_BP_C_ActorHitDelegateEvent_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainControlInput
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::BrainControlInput(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainControlInput");
		
		ABrainSlug_Character_BP_C_BrainControlInput_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ExecuteUbergraph_BrainSlug_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_Character_BP_C::ExecuteUbergraph_BrainSlug_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ExecuteUbergraph_BrainSlug_Character_BP");
		
		ABrainSlug_Character_BP_C_ExecuteUbergraph_BrainSlug_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABrainSlug_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrainSlug_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrainSlug_Character_BP.BrainSlug_Character_BP_C");
		return ptr;
	}

}


