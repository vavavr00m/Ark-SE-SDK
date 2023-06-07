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
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorReceivedRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::DinoInstigatorReceivedRider(class AShooterCharacter* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorReceivedRider");
		
		AGen2_AreaBuff_Space_C_DinoInstigatorReceivedRider_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorClearedRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::DinoInstigatorClearedRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorClearedRider");
		
		AGen2_AreaBuff_Space_C_DinoInstigatorClearedRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UpdateDayCycleManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::UpdateDayCycleManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UpdateDayCycleManager");
		
		AGen2_AreaBuff_Space_C_UpdateDayCycleManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.AllowFalling
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AGen2_AreaBuff_Space_C::AllowFalling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.AllowFalling");
		
		AGen2_AreaBuff_Space_C_AllowFalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.HasBuffToIgnoreZeroG
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Ignore                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::HasBuffToIgnoreZeroG(bool* Ignore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.HasBuffToIgnoreZeroG");
		
		AGen2_AreaBuff_Space_C_HasBuffToIgnoreZeroG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ignore != nullptr)
			*Ignore = params.Ignore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventNotifySound
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  SoundIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGen2_AreaBuff_Space_C::BPPreventNotifySound(class USoundBase* SoundIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventNotifySound");
		
		AGen2_AreaBuff_Space_C_BPPreventNotifySound_Params params {};
		params.SoundIn = SoundIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ClearRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::ClearRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ClearRotation");
		
		AGen2_AreaBuff_Space_C_ClearRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.IsInstigatorClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsClimbing                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::IsInstigatorClimbing(bool* IsClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.IsInstigatorClimbing");
		
		AGen2_AreaBuff_Space_C_IsInstigatorClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsClimbing != nullptr)
			*IsClimbing = params.IsClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestorePlayerMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::RestorePlayerMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestorePlayerMovement");
		
		AGen2_AreaBuff_Space_C_RestorePlayerMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitializePlayerZeroGMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::InitializePlayerZeroGMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitializePlayerZeroGMovement");
		
		AGen2_AreaBuff_Space_C_InitializePlayerZeroGMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestoreDinoMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::RestoreDinoMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestoreDinoMovement");
		
		AGen2_AreaBuff_Space_C_RestoreDinoMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitialzeDinoZeroGMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::InitialzeDinoZeroGMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitialzeDinoZeroGMovement");
		
		AGen2_AreaBuff_Space_C_InitialzeDinoZeroGMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AGen2_AreaBuff_Space_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOverrideCharacterNewFallVelocity");
		
		AGen2_AreaBuff_Space_C_BPOverrideCharacterNewFallVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StopFlying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::StopFlying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StopFlying");
		
		AGen2_AreaBuff_Space_C_StopFlying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BuffTickServer");
		
		AGen2_AreaBuff_Space_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.CheckGround
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::CheckGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.CheckGround");
		
		AGen2_AreaBuff_Space_C_CheckGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPDeactivated");
		
		AGen2_AreaBuff_Space_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AGen2_AreaBuff_Space_C::BPGetGravityZScale(float currentScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPGetGravityZScale");
		
		AGen2_AreaBuff_Space_C_BPGetGravityZScale_Params params {};
		params.currentScale = currentScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StartFlying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::StartFlying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StartFlying");
		
		AGen2_AreaBuff_Space_C_StartFlying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOnInstigatorMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOnInstigatorMovementModeChangedNotify");
		
		AGen2_AreaBuff_Space_C_BPOnInstigatorMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventInstigatorMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGen2_AreaBuff_Space_C::BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventInstigatorMovementMode");
		
		AGen2_AreaBuff_Space_C_BPPreventInstigatorMovementMode_Params params {};
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
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPSetupForInstigator");
		
		AGen2_AreaBuff_Space_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UserConstructionScript");
		
		AGen2_AreaBuff_Space_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoMounted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::DinoMounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoMounted");
		
		AGen2_AreaBuff_Space_C_DinoMounted_Params params {};
		params.Player = Player;
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoUnmounted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::DinoUnmounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoUnmounted");
		
		AGen2_AreaBuff_Space_C_DinoUnmounted_Params params {};
		params.Player = Player;
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLanded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::FlyingDinoLanded(class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLanded");
		
		AGen2_AreaBuff_Space_C_FlyingDinoLanded_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoStartLanding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::FlyingDinoStartLanding(class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoStartLanding");
		
		AGen2_AreaBuff_Space_C_FlyingDinoStartLanding_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLandingInterrupted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::FlyingDinoLandingInterrupted(class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLandingInterrupted");
		
		AGen2_AreaBuff_Space_C_FlyingDinoLandingInterrupted_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ExecuteUbergraph_Gen2_AreaBuff_Space
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_C::ExecuteUbergraph_Gen2_AreaBuff_Space(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ExecuteUbergraph_Gen2_AreaBuff_Space");
		
		AGen2_AreaBuff_Space_C_ExecuteUbergraph_Gen2_AreaBuff_Space_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGen2_AreaBuff_Space_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGen2_AreaBuff_Space_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C");
		return ptr;
	}

}


