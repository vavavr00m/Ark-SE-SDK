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
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AKaprosuchus_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTryMultiUse");
		
		AKaprosuchus_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AKaprosuchus_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPGetMultiUseEntries");
		
		AKaprosuchus_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Play Leap FX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MovementMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLeapStart                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::PlayLeapFX(int32_t MovementMode, bool IsLeapStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Play Leap FX");
		
		AKaprosuchus_Character_BP_C_PlayLeapFX_Params params {};
		params.MovementMode = MovementMode;
		params.IsLeapStart = IsLeapStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.EvaluateHeightInWater
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NearSurface                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::EvaluateHeightInWater(bool* NearSurface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.EvaluateHeightInWater");
		
		AKaprosuchus_Character_BP_C_EvaluateHeightInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NearSurface != nullptr)
			*NearSurface = params.NearSurface;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPShouldLimitForwardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AKaprosuchus_Character_BP_C::BPShouldLimitForwardDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPShouldLimitForwardDirection");
		
		AKaprosuchus_Character_BP_C_BPShouldLimitForwardDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPModifyForwardDirectionInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     directionInput                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector AKaprosuchus_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPModifyForwardDirectionInput");
		
		AKaprosuchus_Character_BP_C_BPModifyForwardDirectionInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (directionInput != nullptr)
			*directionInput = params.directionInput;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerServer");
		
		AKaprosuchus_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AKaprosuchus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanRiderAttack");
		
		AKaprosuchus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.CalcLeapImpulse
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     RetImpulse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::CalcLeapImpulse(struct FVector* RetImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.CalcLeapImpulse");
		
		AKaprosuchus_Character_BP_C_CalcLeapImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetImpulse != nullptr)
			*RetImpulse = params.RetImpulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AKaprosuchus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanAttack");
		
		AKaprosuchus_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ChangeGroundSwimAttackAnims
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::ChangeGroundSwimAttackAnims(int32_t NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ChangeGroundSwimAttackAnims");
		
		AKaprosuchus_Character_BP_C_ChangeGroundSwimAttackAnims_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerNonDedicated");
		
		AKaprosuchus_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AKaprosuchus_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetLeapRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::SetLeapRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetLeapRotation");
		
		AKaprosuchus_Character_BP_C_SetLeapRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.UserConstructionScript");
		
		AKaprosuchus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::AnimNotify_StartLeapAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapAttack");
		
		AKaprosuchus_Character_BP_C_AnimNotify_StartLeapAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::AnimNotify_StartLeapGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapGrab");
		
		AKaprosuchus_Character_BP_C_AnimNotify_StartLeapGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_EndLeap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::AnimNotify_EndLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_EndLeap");
		
		AKaprosuchus_Character_BP_C_AnimNotify_EndLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ClearLeapAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LandingInMovementMode                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::ClearLeapAttack(int32_t LandingInMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ClearLeapAttack");
		
		AKaprosuchus_Character_BP_C_ClearLeapAttack_Params params {};
		params.LandingInMovementMode = LandingInMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_ClearLeap
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsWalking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::Multi_ClearLeap(bool IsWalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_ClearLeap");
		
		AKaprosuchus_Character_BP_C_Multi_ClearLeap_Params params {};
		params.IsWalking = IsWalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ResetStartLeap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::ResetStartLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ResetStartLeap");
		
		AKaprosuchus_Character_BP_C_ResetStartLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StopHoldingCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::StopHoldingCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StopHoldingCharacter");
		
		AKaprosuchus_Character_BP_C_StopHoldingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StartGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::StartGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StartGrab");
		
		AKaprosuchus_Character_BP_C_StartGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_StopHoldingCharacter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::Multi_StopHoldingCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_StopHoldingCharacter");
		
		AKaprosuchus_Character_BP_C_Multi_StopHoldingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetIgnoreMoveInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::SetIgnoreMoveInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetIgnoreMoveInput");
		
		AKaprosuchus_Character_BP_C_SetIgnoreMoveInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ContinueMomentum
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_C::ContinueMomentum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ContinueMomentum");
		
		AKaprosuchus_Character_BP_C_ContinueMomentum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ExecuteUbergraph_Kaprosuchus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_C::ExecuteUbergraph_Kaprosuchus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ExecuteUbergraph_Kaprosuchus_Character_BP");
		
		AKaprosuchus_Character_BP_C_ExecuteUbergraph_Kaprosuchus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKaprosuchus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKaprosuchus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C");
		return ptr;
	}

}


