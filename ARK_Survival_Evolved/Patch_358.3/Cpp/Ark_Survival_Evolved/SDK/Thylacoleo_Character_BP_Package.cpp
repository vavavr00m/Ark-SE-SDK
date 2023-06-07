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
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPCharacterDetach
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::BPCharacterDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPCharacterDetach");
		
		AThylacoleo_Character_BP_C_BPCharacterDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanThylacoCarryCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CanThylacoCarryCharacter(class APrimalCharacter* Character, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanThylacoCarryCharacter");
		
		AThylacoleo_Character_BP_C_CanThylacoCarryCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanClimbOutOfWater
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CanClimbOutOfWater(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanClimbOutOfWater");
		
		AThylacoleo_Character_BP_C_CanClimbOutOfWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set IK_Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::SetIK_Active(bool newActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set IK_Active");
		
		AThylacoleo_Character_BP_C_SetIK_Active_Params params {};
		params.newActive = newActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsNormalClimbable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsNormalClimbable(const struct FVector& Normal, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsNormalClimbable");
		
		AThylacoleo_Character_BP_C_IsNormalClimbable_Params params {};
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AThylacoleo_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPAdjustDamage");
		
		AThylacoleo_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceThylacoStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::ReduceThylacoStamina(float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceThylacoStamina");
		
		AThylacoleo_Character_BP_C_ReduceThylacoStamina_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.DisplayMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor)
	 */
	void AThylacoleo_Character_BP_C::DisplayMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.DisplayMessage");
		
		AThylacoleo_Character_BP_C_DisplayMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HasEnoughStaminaToClimb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::HasEnoughStaminaToClimb(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HasEnoughStaminaToClimb");
		
		AThylacoleo_Character_BP_C_HasEnoughStaminaToClimb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is Thylaco Climbing Down
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsThylacoClimbingDown(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is Thylaco Climbing Down");
		
		AThylacoleo_Character_BP_C_IsThylacoClimbingDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing_Up
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsThylacoClimbing_Up(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing_Up");
		
		AThylacoleo_Character_BP_C_IsThylacoClimbing_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsThylacoClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing");
		
		AThylacoleo_Character_BP_C_IsThylacoClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceStaminaOverTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::ReduceStaminaOverTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceStaminaOverTime");
		
		AThylacoleo_Character_BP_C_ReduceStaminaOverTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ManualPlayLandAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::ManualPlayLandAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ManualPlayLandAnim");
		
		AThylacoleo_Character_BP_C_ManualPlayLandAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AThylacoleo_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CalcThylacoPounceDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     pounceDir                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CalcThylacoPounceDir(struct FVector* pounceDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CalcThylacoPounceDir");
		
		AThylacoleo_Character_BP_C_CalcThylacoPounceDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (pounceDir != nullptr)
			*pounceDir = params.pounceDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HardSetThylacoRotationButInterpMeshLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::HardSetThylacoRotationButInterpMeshLocation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HardSetThylacoRotationButInterpMeshLocation");
		
		AThylacoleo_Character_BP_C_HardSetThylacoRotationButInterpMeshLocation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateIsAttachingToWall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::UpdateIsAttachingToWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateIsAttachingToWall");
		
		AThylacoleo_Character_BP_C_UpdateIsAttachingToWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CleanUpClimbingAnims
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               animsClean                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CleanUpClimbingAnims(bool* animsClean)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CleanUpClimbingAnims");
		
		AThylacoleo_Character_BP_C_CleanUpClimbingAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (animsClean != nullptr)
			*animsClean = params.animsClean;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetShouldRestoreToLatched
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::SetShouldRestoreToLatched(bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetShouldRestoreToLatched");
		
		AThylacoleo_Character_BP_C_SetShouldRestoreToLatched_Params params {};
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set ThylacoRotationAnd Interp Mesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::SetThylacoRotationAndInterpMesh(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set ThylacoRotationAnd Interp Mesh");
		
		AThylacoleo_Character_BP_C_SetThylacoRotationAndInterpMesh_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.WallJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::WallJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.WallJump");
		
		AThylacoleo_Character_BP_C_WallJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InterpolateMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::InterpolateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InterpolateMesh");
		
		AThylacoleo_Character_BP_C_InterpolateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AThylacoleo_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPShouldForceFlee");
		
		AThylacoleo_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForPounceOnTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldPounce                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CheckForPounceOnTarget(bool* shouldPounce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForPounceOnTarget");
		
		AThylacoleo_Character_BP_C_CheckForPounceOnTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldPounce != nullptr)
			*shouldPounce = params.shouldPounce;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ensureAnimsPlaying                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::UpdateThylacoAnims(bool ensureAnimsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoAnims");
		
		AThylacoleo_Character_BP_C_UpdateThylacoAnims_Params params {};
		params.ensureAnimsPlaying = ensureAnimsPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetUse Aim Offsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::SetUseAimOffsets(bool newUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetUse Aim Offsets");
		
		AThylacoleo_Character_BP_C_SetUseAimOffsets_Params params {};
		params.newUse = newUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPModifyAimOffsetTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimTargetLocation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector AThylacoleo_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPModifyAimOffsetTargetLocation");
		
		AThylacoleo_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimTargetLocation != nullptr)
			*AimTargetLocation = params.AimTargetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetWallAttachImpulse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::GetWallAttachImpulse(struct FVector* Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetWallAttachImpulse");
		
		AThylacoleo_Character_BP_C_GetWallAttachImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impulse != nullptr)
			*Impulse = params.Impulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveAnyDamage");
		
		AThylacoleo_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::InitThylaco()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco");
		
		AThylacoleo_Character_BP_C_InitThylaco_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPUnstasis");
		
		AThylacoleo_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Check for Ai Attach to Tree
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::CheckforAiAttachtoTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Check for Ai Attach to Tree");
		
		AThylacoleo_Character_BP_C_CheckforAiAttachtoTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Client_SetClimbingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PredatorClimbingState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::Client_SetClimbingState(E_PredatorClimbingState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Client_SetClimbingState");
		
		AThylacoleo_Character_BP_C_Client_SetClimbingState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is DinoAbove Ground
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CheckDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsDinoAboveGround(float CheckDistance, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is DinoAbove Ground");
		
		AThylacoleo_Character_BP_C_IsDinoAboveGround_Params params {};
		params.CheckDistance = CheckDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateJumpingAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::UpdateJumpingAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateJumpingAnim");
		
		AThylacoleo_Character_BP_C_UpdateJumpingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetAI_LatchedToTree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::SetAI_LatchedToTree(bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetAI_LatchedToTree");
		
		AThylacoleo_Character_BP_C_SetAI_LatchedToTree_Params params {};
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Get Thylaco Ai Controller
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AThylacoleo_AIController_BP_C*               Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::GetThylacoAiController(class AThylacoleo_AIController_BP_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Get Thylaco Ai Controller");
		
		AThylacoleo_Character_BP_C_GetThylacoAiController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AThylacoleo_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTryMultiUse");
		
		AThylacoleo_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AThylacoleo_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPGetMultiUseEntries");
		
		AThylacoleo_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AiDropFromTree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::AiDropFromTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AiDropFromTree");
		
		AThylacoleo_Character_BP_C_AiDropFromTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatched
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsLatched(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatched");
		
		AThylacoleo_Character_BP_C_IsLatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsLatching(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatching");
		
		AThylacoleo_Character_BP_C_IsLatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetCorrectLatchingAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UAnimMontage*                                animRef                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::GetCorrectLatchingAnim(class UAnimMontage** animRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetCorrectLatchingAnim");
		
		AThylacoleo_Character_BP_C_GetCorrectLatchingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (animRef != nullptr)
			*animRef = params.animRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifyClearRider");
		
		AThylacoleo_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifySetRider");
		
		AThylacoleo_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerNonDedicated");
		
		AThylacoleo_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.RemoveCarryBuffFromPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::RemoveCarryBuffFromPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.RemoveCarryBuffFromPrey");
		
		AThylacoleo_Character_BP_C_RemoveCarryBuffFromPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReleasePrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::ReleasePrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReleasePrey");
		
		AThylacoleo_Character_BP_C_ReleasePrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AThylacoleo_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanAttack");
		
		AThylacoleo_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsMaulingValidCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsMaulingValidCharacter(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsMaulingValidCharacter");
		
		AThylacoleo_Character_BP_C_IsMaulingValidCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanPounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CanPounce(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanPounce");
		
		AThylacoleo_Character_BP_C_CanPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_currentClimbableSurfaceNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::OnRep_currentClimbableSurfaceNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_currentClimbableSurfaceNormal");
		
		AThylacoleo_Character_BP_C_OnRep_currentClimbableSurfaceNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoTransforms
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::UpdateThylacoTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoTransforms");
		
		AThylacoleo_Character_BP_C_UpdateThylacoTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDesiredDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::GetDesiredDirection(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDesiredDirection");
		
		AThylacoleo_Character_BP_C_GetDesiredDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Stop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            HitTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::Pounce_Stop(class APrimalCharacter* HitTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Stop");
		
		AThylacoleo_Character_BP_C_Pounce_Stop_Params params {};
		params.HitTarget = HitTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanKeepPouncing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CanKeepPouncing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanKeepPouncing");
		
		AThylacoleo_Character_BP_C_CanKeepPouncing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Tick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::Pounce_Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Tick");
		
		AThylacoleo_Character_BP_C_Pounce_Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::Pounce_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Start");
		
		AThylacoleo_Character_BP_C_Pounce_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AThylacoleo_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanRiderAttack");
		
		AThylacoleo_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDefaultDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AThylacoleo_Character_BP_C*                  Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::GetDefaultDino(class AThylacoleo_Character_BP_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDefaultDino");
		
		AThylacoleo_Character_BP_C_GetDefaultDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsDinoGrounded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::IsDinoGrounded(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsDinoGrounded");
		
		AThylacoleo_Character_BP_C_IsDinoGrounded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForClimbableSurface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     checkDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              checkDist                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::CheckForClimbableSurface(const struct FVector& checkDir, float checkDist, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForClimbableSurface");
		
		AThylacoleo_Character_BP_C_CheckForClimbableSurface_Params params {};
		params.checkDir = checkDir;
		params.checkDist = checkDist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_CurrentClimbingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::OnRep_CurrentClimbingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_CurrentClimbingState");
		
		AThylacoleo_Character_BP_C_OnRep_CurrentClimbingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.NetSetClimbingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PredatorClimbingState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::NetSetClimbingState(E_PredatorClimbingState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.NetSetClimbingState");
		
		AThylacoleo_Character_BP_C_NetSetClimbingState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerServer");
		
		AThylacoleo_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UserConstructionScript");
		
		AThylacoleo_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::Server_JumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpPressed");
		
		AThylacoleo_Character_BP_C_Server_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpReleased
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::Server_JumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpReleased");
		
		AThylacoleo_Character_BP_C_Server_JumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveBeginPlay");
		
		AThylacoleo_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AnimNotify_MaulPrey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::AnimNotify_MaulPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AnimNotify_MaulPrey");
		
		AThylacoleo_Character_BP_C_AnimNotify_MaulPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_NetSetClimbingState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PredatorClimbingState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::Server_NetSetClimbingState(E_PredatorClimbingState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_NetSetClimbingState");
		
		AThylacoleo_Character_BP_C_Server_NetSetClimbingState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetReadyToClimbAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::SetReadyToClimbAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetReadyToClimbAfterDelay");
		
		AThylacoleo_Character_BP_C_SetReadyToClimbAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_SetAiLatchedToTree
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::CheckUntil_SetAiLatchedToTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_SetAiLatchedToTree");
		
		AThylacoleo_Character_BP_C_CheckUntil_SetAiLatchedToTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureCorrectAnimsPlayingAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::EnsureCorrectAnimsPlayingAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureCorrectAnimsPlayingAfterDelay");
		
		AThylacoleo_Character_BP_C_EnsureCorrectAnimsPlayingAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PlayAttachParticleWhenCloseToWall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::PlayAttachParticleWhenCloseToWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PlayAttachParticleWhenCloseToWall");
		
		AThylacoleo_Character_BP_C_PlayAttachParticleWhenCloseToWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnableClimbingAnimsAfterAttachDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::EnableClimbingAnimsAfterAttachDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnableClimbingAnimsAfterAttachDelay");
		
		AThylacoleo_Character_BP_C_EnableClimbingAnimsAfterAttachDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SyncGravityForPounceFall
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::SyncGravityForPounceFall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SyncGravityForPounceFall");
		
		AThylacoleo_Character_BP_C_SyncGravityForPounceFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureLatchedAnimPlays
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::EnsureLatchedAnimPlays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureLatchedAnimPlays");
		
		AThylacoleo_Character_BP_C_EnsureLatchedAnimPlays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_MaulingValidCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::CheckUntil_MaulingValidCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_MaulingValidCharacter");
		
		AThylacoleo_Character_BP_C_CheckUntil_MaulingValidCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PreventLandingAnimBriefly
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::PreventLandingAnimBriefly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PreventLandingAnimBriefly");
		
		AThylacoleo_Character_BP_C_PreventLandingAnimBriefly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckOnJumpStateAfterJumpDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::CheckOnJumpStateAfterJumpDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckOnJumpStateAfterJumpDelay");
		
		AThylacoleo_Character_BP_C_CheckOnJumpStateAfterJumpDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpPressed");
		
		AThylacoleo_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpReleased");
		
		AThylacoleo_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_NextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::InitThylaco_NextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_NextTick");
		
		AThylacoleo_Character_BP_C_InitThylaco_NextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_Now
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AThylacoleo_Character_BP_C::InitThylaco_Now()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_Now");
		
		AThylacoleo_Character_BP_C_InitThylaco_Now_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ExecuteUbergraph_Thylacoleo_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThylacoleo_Character_BP_C::ExecuteUbergraph_Thylacoleo_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ExecuteUbergraph_Thylacoleo_Character_BP");
		
		AThylacoleo_Character_BP_C_ExecuteUbergraph_Thylacoleo_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThylacoleo_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThylacoleo_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thylacoleo_Character_BP.Thylacoleo_Character_BP_C");
		return ptr;
	}

}


