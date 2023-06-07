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
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.WantsToRun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::WantsToRun(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.WantsToRun");
		
		AShapeshifter_Large_Character_BP_C_WantsToRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnNonInstanceJumpOffWallInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::OnNonInstanceJumpOffWallInput(float HoldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnNonInstanceJumpOffWallInput");
		
		AShapeshifter_Large_Character_BP_C_OnNonInstanceJumpOffWallInput_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetLatchJumpSpeedThresholdForRotate(float* Res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetLatchJumpSpeedThresholdForRotate");
		
		AShapeshifter_Large_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Res != nullptr)
			*Res = params.Res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AShapeshifter_Large_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AdjustIKHalfLegLength
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::AdjustIKHalfLegLength(bool Default)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AdjustIKHalfLegLength");
		
		AShapeshifter_Large_Character_BP_C_AdjustIKHalfLegLength_Params params {};
		params.Default = Default;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPCanCryo");
		
		AShapeshifter_Large_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoPostBeginPlay");
		
		AShapeshifter_Large_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanSequentialJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::CanSequentialJump(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanSequentialJump");
		
		AShapeshifter_Large_Character_BP_C_CanSequentialJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Throttled TickFn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ThrottledTickFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Throttled TickFn");
		
		AShapeshifter_Large_Character_BP_C_ThrottledTickFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAcknowledgeServerCorrection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeStamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewVel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         NewBase                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewBaseBoneName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPAcknowledgeServerCorrection(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAcknowledgeServerCorrection");
		
		AShapeshifter_Large_Character_BP_C_BPAcknowledgeServerCorrection_Params params {};
		params.TimeStamp = TimeStamp;
		params.NewLoc = NewLoc;
		params.NewVel = NewVel;
		params.NewBase = NewBase;
		params.NewBaseBoneName = NewBaseBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReplicateMovementToSimulatedClients
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AShapeshifter_Large_Character_BP_C::ReplicateMovementToSimulatedClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReplicateMovementToSimulatedClients");
		
		AShapeshifter_Large_Character_BP_C_ReplicateMovementToSimulatedClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateBerzerk
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::UpdateBerzerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateBerzerk");
		
		AShapeshifter_Large_Character_BP_C_UpdateBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetCameraInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InterpSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetCameraInterpSpeed(float* InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetCameraInterpSpeed");
		
		AShapeshifter_Large_Character_BP_C_GetCameraInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterpSpeed != nullptr)
			*InterpSpeed = params.InterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitUnTransformEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InitUnTransformEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitUnTransformEvents");
		
		AShapeshifter_Large_Character_BP_C_InitUnTransformEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnJumpFromGround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::OnJumpFromGround(float HoldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnJumpFromGround");
		
		AShapeshifter_Large_Character_BP_C_OnJumpFromGround_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnSetDeath");
		
		AShapeshifter_Large_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetProjectileTypeForRockThrow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        TypeName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetProjectileTypeForRockThrow(class FName* TypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetProjectileTypeForRockThrow");
		
		AShapeshifter_Large_Character_BP_C_GetProjectileTypeForRockThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TypeName != nullptr)
			*TypeName = params.TypeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetRockThrowAttackAnimIndexfromIdleAnim(int32_t* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim");
		
		AShapeshifter_Large_Character_BP_C_GetRockThrowAttackAnimIndexfromIdleAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GrabRock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::GrabRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GrabRock");
		
		AShapeshifter_Large_Character_BP_C_GrabRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AShapeshifter_Large_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanJumpInternal");
		
		AShapeshifter_Large_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ThrowRock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ThrowRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ThrowRock");
		
		AShapeshifter_Large_Character_BP_C_ThrowRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Is Super Uberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::IsSuperUberpounce(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Is Super Uberpounce");
		
		AShapeshifter_Large_Character_BP_C_IsSuperUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetUberpounceInterpSpeed(float* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceInterpSpeed");
		
		AShapeshifter_Large_Character_BP_C_GetUberpounceInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               QuickUberpounce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                OutAnim                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        RetStartSectionName                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetInitialAnimationForUberpounce(bool QuickUberpounce, class UAnimMontage** OutAnim, class FName* RetStartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpounce");
		
		AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpounce_Params params {};
		params.QuickUberpounce = QuickUberpounce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnim != nullptr)
			*OutAnim = params.OutAnim;
		if (RetStartSectionName != nullptr)
			*RetStartSectionName = params.RetStartSectionName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateIdleAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EShapeshifterIdleAnimEnum                          newIdle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::UpdateIdleAnim(EShapeshifterIdleAnimEnum newIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateIdleAnim");
		
		AShapeshifter_Large_Character_BP_C_UpdateIdleAnim_Params params {};
		params.newIdle = newIdle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRangeBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetUberpounceRangeBase(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRangeBase");
		
		AShapeshifter_Large_Character_BP_C_GetUberpounceRangeBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceMaxRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetUberpounceMaxRange(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceMaxRange");
		
		AShapeshifter_Large_Character_BP_C_GetUberpounceMaxRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	float AShapeshifter_Large_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetCrosshairAlpha");
		
		AShapeshifter_Large_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageResistancePercentFromAddiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetDamageResistancePercentFromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageResistancePercentFromAddiction");
		
		AShapeshifter_Large_Character_BP_C_GetDamageResistancePercentFromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Reset Untransform Time
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ResetUntransformTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Reset Untransform Time");
		
		AShapeshifter_Large_Character_BP_C_ResetUntransformTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction PercentFrom Addiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetTransformationLifetimeReductionPercentFromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction PercentFrom Addiction");
		
		AShapeshifter_Large_Character_BP_C_GetTransformationLifetimeReductionPercentFromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction from Addiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetTransformationLifetimeReductionfromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction from Addiction");
		
		AShapeshifter_Large_Character_BP_C_GetTransformationLifetimeReductionfromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get AnimSpeedBonus from Addiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetAnimSpeedBonusfromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get AnimSpeedBonus from Addiction");
		
		AShapeshifter_Large_Character_BP_C_GetAnimSpeedBonusfromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageMultiFromAddiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetDamageMultiFromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageMultiFromAddiction");
		
		AShapeshifter_Large_Character_BP_C_GetDamageMultiFromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnUberpounceStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUberpounceState                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUberpounceState                                   PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::OnUberpounceStateChanged(EUberpounceState NewState, EUberpounceState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnUberpounceStateChanged");
		
		AShapeshifter_Large_Character_BP_C_OnUberpounceStateChanged_Params params {};
		params.NewState = NewState;
		params.PrevState = PrevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTorpidityProgressBarIfActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar");
		
		AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overrideTorpidityProgressBarIfActive != nullptr)
			*overrideTorpidityProgressBarIfActive = params.overrideTorpidityProgressBarIfActive;
		if (progressPercent != nullptr)
			*progressPercent = params.progressPercent;
		if (Label != nullptr)
			*Label = params.Label;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AShapeshifter_Large_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetMultiUseEntries");
		
		AShapeshifter_Large_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AddBerzerkDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Dmg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::AddBerzerkDamage(float Dmg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AddBerzerkDamage");
		
		AShapeshifter_Large_Character_BP_C_AddBerzerkDamage_Params params {};
		params.Dmg = Dmg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LatchIdleAnimRep
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::OnRep_LatchIdleAnimRep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LatchIdleAnimRep");
		
		AShapeshifter_Large_Character_BP_C_OnRep_LatchIdleAnimRep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideTamingDescriptionLabel
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 TextColor                                                  (Parm, OutParm, ReferenceParm)
	 */
	class FString AShapeshifter_Large_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideTamingDescriptionLabel");
		
		AShapeshifter_Large_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextColor != nullptr)
			*TextColor = params.TextColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AllowPlayMontage");
		
		AShapeshifter_Large_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintHealth
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::PrintHealth(class UPrimalCharacterStatusComponent* Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintHealth");
		
		AShapeshifter_Large_Character_BP_C_PrintHealth_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_FullyReplicatedOnInitialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::OnRep_FullyReplicatedOnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_FullyReplicatedOnInitialize");
		
		AShapeshifter_Large_Character_BP_C_OnRep_FullyReplicatedOnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUberPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 */
	void AShapeshifter_Large_Character_BP_C::StartUberPounce(const struct FUberpounceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUberPounce");
		
		AShapeshifter_Large_Character_BP_C_StartUberPounce_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.K2_OnMovementModeChanged");
		
		AShapeshifter_Large_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LastUberpounceJumpTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::OnRep_LastUberpounceJumpTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LastUberpounceJumpTime");
		
		AShapeshifter_Large_Character_BP_C_OnRep_LastUberpounceJumpTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.LatchedJumpAttached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::LatchedJumpAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.LatchedJumpAttached");
		
		AShapeshifter_Large_Character_BP_C_LatchedJumpAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.On Uberpounce AttachedToLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::OnUberpounceAttachedToLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.On Uberpounce AttachedToLocation");
		
		AShapeshifter_Large_Character_BP_C_OnUberpounceAttachedToLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDisplayTamedMessage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPDisplayTamedMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDisplayTamedMessage");
		
		AShapeshifter_Large_Character_BP_C_BPDisplayTamedMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             StatusComp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::PrintStats(class UPrimalCharacterStatusComponent* StatusComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintStats");
		
		AShapeshifter_Large_Character_BP_C_PrintStats_Params params {};
		params.StatusComp = StatusComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Latched Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetPounceLatchedAnim(class UAnimMontage** Anim, class FName* StartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Latched Anim");
		
		AShapeshifter_Large_Character_BP_C_GetPounceLatchedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
		if (StartSectionName != nullptr)
			*StartSectionName = params.StartSectionName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ResetMeshRelativeLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ResetMeshRelativeLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ResetMeshRelativeLocation");
		
		AShapeshifter_Large_Character_BP_C_ResetMeshRelativeLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AShapeshifter_Large_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AShapeshifter_Large_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.RidingTick");
		
		AShapeshifter_Large_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnAnimPlayedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicateToOwner                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseAndServerUpdateMesh                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnAnimPlayedNotify");
		
		AShapeshifter_Large_Character_BP_C_BPOnAnimPlayedNotify_Params params {};
		params.AnimMontage = AnimMontage;
		params.InPlayRate = InPlayRate;
		params.StartSectionName = StartSectionName;
		params.bReplicate = bReplicate;
		params.bReplicateToOwner = bReplicateToOwner;
		params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
		params.bForceTickPoseOnServer = bForceTickPoseOnServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTamingProgressBarIfActive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");
		
		AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overrideTamingProgressBarIfActive != nullptr)
			*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
		if (progressPercent != nullptr)
			*progressPercent = params.progressPercent;
		if (Label != nullptr)
			*Label = params.Label;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintCanAttack");
		
		AShapeshifter_Large_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::CalculateDamageTakenRequiredForBerzerk(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateDamageTakenRequiredForBerzerk");
		
		AShapeshifter_Large_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AShapeshifter_Large_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAdjustDamage");
		
		AShapeshifter_Large_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateTotalTimeTransformed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::CalculateTotalTimeTransformed(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateTotalTimeTransformed");
		
		AShapeshifter_Large_Character_BP_C_CalculateTotalTimeTransformed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetSmallsInstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::SetSmallsInstance(class APrimalDinoCharacter* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetSmallsInstance");
		
		AShapeshifter_Large_Character_BP_C_SetSmallsInstance_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SpawnSmalls
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::SpawnSmalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SpawnSmalls");
		
		AShapeshifter_Large_Character_BP_C_SpawnSmalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveRight");
		
		AShapeshifter_Large_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPinnedBuffEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BuffTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter* BuffTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPinnedBuffEnded");
		
		AShapeshifter_Large_Character_BP_C_OnPinnedBuffEnded_Params params {};
		params.BuffTarget = BuffTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveForward");
		
		AShapeshifter_Large_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRotationFromSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetUberpounceRotationFromSocket(class APrimalCharacter* Target, const class FName& Socket, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRotationFromSocket");
		
		AShapeshifter_Large_Character_BP_C_GetUberpounceRotationFromSocket_Params params {};
		params.Target = Target;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequential Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::QueueSequentialJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequential Jump");
		
		AShapeshifter_Large_Character_BP_C_QueueSequentialJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_PreventMovementMode");
		
		AShapeshifter_Large_Character_BP_C_BP_PreventMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AShapeshifter_Large_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AShapeshifter_Large_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationArray != nullptr)
			*AnimationArray = params.AnimationArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AShapeshifter_Large_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetHUDElements");
		
		AShapeshifter_Large_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetSmalls
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShapeshifter_Small_Character_BP_C*          Smalls                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetSmalls(class AShapeshifter_Small_Character_BP_C** Smalls)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetSmalls");
		
		AShapeshifter_Large_Character_BP_C_GetSmalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Smalls != nullptr)
			*Smalls = params.Smalls;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerk
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::StartBerzerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerk");
		
		AShapeshifter_Large_Character_BP_C_StartBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnDinoCheat");
		
		AShapeshifter_Large_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.IsBerzerk
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::IsBerzerk(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.IsBerzerk");
		
		AShapeshifter_Large_Character_BP_C_IsBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnJumpReleased");
		
		AShapeshifter_Large_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPUnstasis");
		
		AShapeshifter_Large_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Un TransformFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::UnTransformFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Un TransformFn");
		
		AShapeshifter_Large_Character_BP_C_UnTransformFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPIsBasedOnActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPIsBasedOnActor(class AActor* Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPIsBasedOnActor");
		
		AShapeshifter_Large_Character_BP_C_BPIsBasedOnActor_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDebugString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetDebugString(class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDebugString");
		
		AShapeshifter_Large_Character_BP_C_GetDebugString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateUberpounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::UpdateUberpounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateUberpounceFn");
		
		AShapeshifter_Large_Character_BP_C_UpdateUberpounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpouncePublic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetInitialAnimationForUberpouncePublic(class UAnimMontage** AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpouncePublic");
		
		AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimMontage != nullptr)
			*AnimMontage = params.AnimMontage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPounceStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::OnPounceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPounceStarted");
		
		AShapeshifter_Large_Character_BP_C_OnPounceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::UpdatePounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounceFn");
		
		AShapeshifter_Large_Character_BP_C_UpdatePounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Compute Pounce Transform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentLoc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CurrentRot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NewRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdatedTransform                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ComputePounceTransform(const struct FVector& CurrentLoc, const struct FRotator& CurrentRot, struct FVector* NewLocation, struct FRotator* NewRotation, bool* UpdatedTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Compute Pounce Transform");
		
		AShapeshifter_Large_Character_BP_C_ComputePounceTransform_Params params {};
		params.CurrentLoc = CurrentLoc;
		params.CurrentRot = CurrentRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
		if (NewRotation != nullptr)
			*NewRotation = params.NewRotation;
		if (UpdatedTransform != nullptr)
			*UpdatedTransform = params.UpdatedTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPPreventOrderAllowed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPPreventOrderAllowed");
		
		AShapeshifter_Large_Character_BP_C_BPPreventOrderAllowed_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::GetPounceTarget(struct FVector* Loc, struct FRotator* Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Target");
		
		AShapeshifter_Large_Character_BP_C_GetPounceTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
		if (Rot != nullptr)
			*Rot = params.Rot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AShapeshifter_Large_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPServerHandleNetExecCommand");
		
		AShapeshifter_Large_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PounceAttachToCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::PounceAttachToCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PounceAttachToCharacter");
		
		AShapeshifter_Large_Character_BP_C_PounceAttachToCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_PounceStateReplicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::OnRep_PounceStateReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_PounceStateReplicated");
		
		AShapeshifter_Large_Character_BP_C_OnRep_PounceStateReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EShapeshifter_Large_PounceState                    NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::SetPounceState(EShapeshifter_Large_PounceState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceState");
		
		AShapeshifter_Large_Character_BP_C_SetPounceState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.EndPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::EndPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.EndPounce");
		
		AShapeshifter_Large_Character_BP_C_EndPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::StartPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartPounce");
		
		AShapeshifter_Large_Character_BP_C_StartPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::SetPounceTarget(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceTarget");
		
		AShapeshifter_Large_Character_BP_C_SetPounceTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifyClearRider");
		
		AShapeshifter_Large_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifySetRider");
		
		AShapeshifter_Large_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AShapeshifter_Large_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnLanded");
		
		AShapeshifter_Large_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.TrySet Collision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::TrySetCollision(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.TrySet Collision");
		
		AShapeshifter_Large_Character_BP_C_TrySetCollision_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DrawDebugRotator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::DrawDebugRotator(const struct FVector& Position, const struct FRotator& Rotation, float Duration, float Thickness, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DrawDebugRotator");
		
		AShapeshifter_Large_Character_BP_C_DrawDebugRotator_Params params {};
		params.Position = Position;
		params.Rotation = Rotation;
		params.Duration = Duration;
		params.Thickness = Thickness;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveTick");
		
		AShapeshifter_Large_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceivePossessed");
		
		AShapeshifter_Large_Character_BP_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveBeginPlay");
		
		AShapeshifter_Large_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UserConstructionScript");
		
		AShapeshifter_Large_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_254
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_254()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_254");
		
		AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_254_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_253
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_253()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_253");
		
		AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_253_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_252
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_252()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_252");
		
		AShapeshifter_Large_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_252_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251");
		
		AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250");
		
		AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68");
		
		AShapeshifter_Large_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Initialize");
		
		AShapeshifter_Large_Character_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_Initialize");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CompleteTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_CompleteTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CompleteTransform");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_CompleteTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiOnLanded
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::MultiOnLanded(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiOnLanded");
		
		AShapeshifter_Large_Character_BP_C_MultiOnLanded_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerSetPounceTarget(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceTarget");
		
		AShapeshifter_Large_Character_BP_C_ServerSetPounceTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerEndPounce
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerEndPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerEndPounce");
		
		AShapeshifter_Large_Character_BP_C_ServerEndPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiEndPounce
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::MultiEndPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiEndPounce");
		
		AShapeshifter_Large_Character_BP_C_MultiEndPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::UpdatePounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounce");
		
		AShapeshifter_Large_Character_BP_C_UpdatePounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UnTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::UnTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UnTransform");
		
		AShapeshifter_Large_Character_BP_C_UnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerStartJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerStartJump");
		
		AShapeshifter_Large_Character_BP_C_ServerStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_DoJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoJump");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_DoJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AteElement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_AteElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AteElement");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_AteElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequentialJumpEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::QueueSequentialJumpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequentialJumpEvent");
		
		AShapeshifter_Large_Character_BP_C_QueueSequentialJumpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerSetLastTimeReleaseJumpWhileFalling(double Time, const struct FVector& Velocity, const struct FVector& CameraDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling");
		
		AShapeshifter_Large_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params params {};
		params.Time = Time;
		params.Velocity = Velocity;
		params.CameraDirection = CameraDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SequentialJumpTakeOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_SequentialJumpTakeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SequentialJumpTakeOff");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerForwardInputDuringSequentialJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerForwardInputDuringSequentialJump(float Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerForwardInputDuringSequentialJump");
		
		AShapeshifter_Large_Character_BP_C_ServerForwardInputDuringSequentialJump_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiUpdateVelocity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::MultiUpdateVelocity(const struct FVector& NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiUpdateVelocity");
		
		AShapeshifter_Large_Character_BP_C_MultiUpdateVelocity_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEGroundPound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_AOEGroundPound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEGroundPound");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_AOEGroundPound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SwipeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_SwipeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SwipeAttack");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_SwipeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_ChargingMeleeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeStart");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_ChargingMeleeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeEnd");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ChargingMeleeTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ChargingMeleeTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ChargingMeleeTick");
		
		AShapeshifter_Large_Character_BP_C_ChargingMeleeTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_CameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShake");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerLeftRightInputDuringSequentialJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerLeftRightInputDuringSequentialJump(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerLeftRightInputDuringSequentialJump");
		
		AShapeshifter_Large_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShakeLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_CameraShakeLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShakeLight");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShakeLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DeleteSmallsEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::DeleteSmallsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DeleteSmallsEvent");
		
		AShapeshifter_Large_Character_BP_C_DeleteSmallsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerkEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::StartBerzerkEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerkEvent");
		
		AShapeshifter_Large_Character_BP_C_StartBerzerkEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BerzerkPassout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::BerzerkPassout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BerzerkPassout");
		
		AShapeshifter_Large_Character_BP_C_BerzerkPassout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetAllowRiding
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::SetAllowRiding(bool Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetAllowRiding");
		
		AShapeshifter_Large_Character_BP_C_SetAllowRiding_Params params {};
		params.Allowed = Allowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ResetAnimSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_ResetAnimSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ResetAnimSpeed");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_ResetAnimSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_ThrowRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRider");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartRoar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_StartRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartRoar");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_StartRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StopRoar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_StopRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StopRoar");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_StopRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUnTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::StartUnTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUnTransform");
		
		AShapeshifter_Large_Character_BP_C_StartUnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_UnTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_UnTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_UnTransform");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_UnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ClearRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_ClearRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ClearRider");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_ClearRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_InitializeSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_InitializeSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_InitializeSize");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_InitializeSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CheckForFallingLatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_CheckForFallingLatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CheckForFallingLatch");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_CheckForFallingLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestUberpounceJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerRequestUberpounceJump(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestUberpounceJump");
		
		AShapeshifter_Large_Character_BP_C_ServerRequestUberpounceJump_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoUberpounceJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_DoUberpounceJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoUberpounceJump");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_DoUberpounceJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BackupDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::BackupDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BackupDestroy");
		
		AShapeshifter_Large_Character_BP_C_BackupDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_LatchedJumpAttached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_LatchedJumpAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_LatchedJumpAttached");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_LatchedJumpAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitSmalls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::InitSmalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitSmalls");
		
		AShapeshifter_Large_Character_BP_C_InitSmalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_QueuedRoar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_QueuedRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_QueuedRoar");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_QueuedRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceAnticipationIdle
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAnticipIdle                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerSetPounceAnticipationIdle(bool IsAnticipIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceAnticipationIdle");
		
		AShapeshifter_Large_Character_BP_C_ServerSetPounceAnticipationIdle_Params params {};
		params.IsAnticipIdle = IsAnticipIdle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetIsHoldingCrouch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HoldingCrouch                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerSetIsHoldingCrouch(bool HoldingCrouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetIsHoldingCrouch");
		
		AShapeshifter_Large_Character_BP_C_ServerSetIsHoldingCrouch_Params params {};
		params.HoldingCrouch = HoldingCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_GrabRock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_GrabRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_GrabRock");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_GrabRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_ThrowRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRock");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerUpdateCameraLocationForBoulderThrow
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerUpdateCameraLocationForBoulderThrow(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerUpdateCameraLocationForBoulderThrow");
		
		AShapeshifter_Large_Character_BP_C_ServerUpdateCameraLocationForBoulderThrow_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestSequentialJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerRequestSequentialJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestSequentialJump");
		
		AShapeshifter_Large_Character_BP_C_ServerRequestSequentialJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_AOEJumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpStart");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_AOEJumpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpEnd");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_EnableIK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_EnableIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_EnableIK");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_EnableIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DisableIK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_DisableIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DisableIK");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_DisableIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ShouldCancelLatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_ShouldCancelLatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ShouldCancelLatch");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_ShouldCancelLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::ServerRequestJumpOffWallWithAnticipation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestJumpOffWallWithAnticipation");
		
		AShapeshifter_Large_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_PushOffWall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_PushOffWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_PushOffWall");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_PushOffWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_Character_BP_C::AnimNotify_StartTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartTransform");
		
		AShapeshifter_Large_Character_BP_C_AnimNotify_StartTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_Character_BP_C::ExecuteUbergraph_Shapeshifter_Large_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP");
		
		AShapeshifter_Large_Character_BP_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShapeshifter_Large_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShapeshifter_Large_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C");
		return ptr;
	}

}


