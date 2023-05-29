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
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoFoodVals
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              current                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::GetSinoFoodVals(float* current, float* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoFoodVals");
		
		ABuff_Glider_Sino_C_GetSinoFoodVals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (current != nullptr)
			*current = params.current;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::UpdateGliderSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderSFX");
		
		ABuff_Glider_Sino_C_UpdateGliderSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateVelocityForVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::UpdateVelocityForVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateVelocityForVFX");
		
		ABuff_Glider_Sino_C_UpdateVelocityForVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InitGlider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InitGlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InitGlider");
		
		ABuff_Glider_Sino_C_InitGlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.BP_ModifyCharacterFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              inFOV                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_Glider_Sino_C::BP_ModifyCharacterFOV(float inFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BP_ModifyCharacterFOV");
		
		ABuff_Glider_Sino_C_BP_ModifyCharacterFOV_Params params {};
		params.inFOV = inFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.DoInjuredJumpIfRequired
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::DoInjuredJumpIfRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.DoInjuredJumpIfRequired");
		
		ABuff_Glider_Sino_C_DoInjuredJumpIfRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.CheckIsInNoFlySPZ
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInNonFlightArea                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::CheckIsInNoFlySPZ(bool* IsInNonFlightArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.CheckIsInNoFlySPZ");
		
		ABuff_Glider_Sino_C_CheckIsInNoFlySPZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInNonFlightArea != nullptr)
			*IsInNonFlightArea = params.IsInNonFlightArea;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsGlideFallingFromDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::ClearIsGlideFallingFromDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsGlideFallingFromDamage");
		
		ABuff_Glider_Sino_C_ClearIsGlideFallingFromDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_Glider_Sino_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffAdjustDamage");
		
		ABuff_Glider_Sino_C_BuffAdjustDamage_Params params {};
		params.Damage = Damage;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttachWingVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::AttachWingVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttachWingVFX");
		
		ABuff_Glider_Sino_C_AttachWingVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.PlayInsufficientStaminaMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::PlayInsufficientStaminaMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.PlayInsufficientStaminaMessage");
		
		ABuff_Glider_Sino_C_PlayInsufficientStaminaMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderInactiveMeshTargetRotVals
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InterpSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::GetGliderInactiveMeshTargetRotVals(struct FRotator* Rot, float* InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderInactiveMeshTargetRotVals");
		
		ABuff_Glider_Sino_C_GetGliderInactiveMeshTargetRotVals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rot != nullptr)
			*Rot = params.Rot;
		if (InterpSpeed != nullptr)
			*InterpSpeed = params.InterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetCanDoubleJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanDoubleJump                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::GetCanDoubleJump(bool* CanDoubleJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetCanDoubleJump");
		
		ABuff_Glider_Sino_C_GetCanDoubleJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDoubleJump != nullptr)
			*CanDoubleJump = params.CanDoubleJump;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsDoubleJumping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::ClearIsDoubleJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsDoubleJumping");
		
		ABuff_Glider_Sino_C_ClearIsDoubleJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttemptSetIsDoubleJumping
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isDoubleJumping                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::AttemptSetIsDoubleJumping(bool isDoubleJumping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttemptSetIsDoubleJumping");
		
		ABuff_Glider_Sino_C_AttemptSetIsDoubleJumping_Params params {};
		params.isDoubleJumping = isDoubleJumping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               foundMesh                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      meshRef                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::GetGliderMesh(bool* foundMesh, class USkeletalMeshComponent** meshRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderMesh");
		
		ABuff_Glider_Sino_C_GetGliderMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundMesh != nullptr)
			*foundMesh = params.foundMesh;
		if (meshRef != nullptr)
			*meshRef = params.meshRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearOwnerIgnoreWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::ClearOwnerIgnoreWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearOwnerIgnoreWater");
		
		ABuff_Glider_Sino_C_ClearOwnerIgnoreWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetIsCloseToWaterSurface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsClose                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSwimming                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::GetIsCloseToWaterSurface(bool* IsClose, bool* IsSwimming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetIsCloseToWaterSurface");
		
		ABuff_Glider_Sino_C_GetIsCloseToWaterSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsClose != nullptr)
			*IsClose = params.IsClose;
		if (IsSwimming != nullptr)
			*IsSwimming = params.IsSwimming;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickServer");
		
		ABuff_Glider_Sino_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.Can Use Glider
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isToStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::CanUseGlider(bool isToStart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Can Use Glider");
		
		ABuff_Glider_Sino_C_CanUseGlider_Params params {};
		params.isToStart = isToStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExCanUseSinoMovementState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_SinoMovementState                                MovementState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanEnter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::ExCanUseSinoMovementState(E_SinoMovementState MovementState, bool* CanEnter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExCanUseSinoMovementState");
		
		ABuff_Glider_Sino_C_ExCanUseSinoMovementState_Params params {};
		params.MovementState = MovementState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanEnter != nullptr)
			*CanEnter = params.CanEnter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderByState_ServerAndClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::UpdateGliderByState_ServerAndClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderByState_ServerAndClient");
		
		ABuff_Glider_Sino_C_UpdateGliderByState_ServerAndClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOnInstigatorMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOnInstigatorMovementModeChangedNotify");
		
		ABuff_Glider_Sino_C_BPOnInstigatorMovementModeChangedNotify_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_Glider_Sino_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOverrideCharacterNewFallVelocity");
		
		ABuff_Glider_Sino_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.HideBuffFromHUD
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Glider_Sino_C::HideBuffFromHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.HideBuffFromHUD");
		
		ABuff_Glider_Sino_C_HideBuffFromHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentSinoState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_SinoMovementState                                NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::NetSetCurrentSinoState(E_SinoMovementState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentSinoState");
		
		ABuff_Glider_Sino_C_NetSetCurrentSinoState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentGliderState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GliderStates                                     NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::NetSetCurrentGliderState(E_GliderStates NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentGliderState");
		
		ABuff_Glider_Sino_C_NetSetCurrentGliderState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.CanUseSinoMovement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_SinoMovementState                                MovementType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::CanUseSinoMovement(E_SinoMovementState MovementType, bool* CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.CanUseSinoMovement");
		
		ABuff_Glider_Sino_C_CanUseSinoMovement_Params params {};
		params.MovementType = MovementType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUse != nullptr)
			*CanUse = params.CanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickClient");
		
		ABuff_Glider_Sino_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoStaminaVals
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              current                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::GetSinoStaminaVals(float* current, float* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoStaminaVals");
		
		ABuff_Glider_Sino_C_GetSinoStaminaVals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (current != nullptr)
			*current = params.current;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateBuffDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::UpdateBuffDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateBuffDescription");
		
		ABuff_Glider_Sino_C_UpdateBuffDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.RefreshMountedSinoMovementState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::RefreshMountedSinoMovementState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.RefreshMountedSinoMovementState");
		
		ABuff_Glider_Sino_C_RefreshMountedSinoMovementState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnRep_SinoMovementState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::OnRep_SinoMovementState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnRep_SinoMovementState");
		
		ABuff_Glider_Sino_C_OnRep_SinoMovementState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UserConstructionScript");
		
		ABuff_Glider_Sino_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_422
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_Jump_K2Node_InputActionEvent_422()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_422");
		
		ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_422_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_421
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_Jump_K2Node_InputActionEvent_421()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_421");
		
		ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_421_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90");
		
		ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89");
		
		ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420");
		
		ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419");
		
		ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Crouch_K2Node_InputActionEvent_418
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_Crouch_K2Node_InputActionEvent_418()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Crouch_K2Node_InputActionEvent_418");
		
		ABuff_Glider_Sino_C_InpActEvt_Crouch_K2Node_InputActionEvent_418_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Prone_K2Node_InputActionEvent_417
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::InpActEvt_Prone_K2Node_InputActionEvent_417()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Prone_K2Node_InputActionEvent_417");
		
		ABuff_Glider_Sino_C_InpActEvt_Prone_K2Node_InputActionEvent_417_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_RequestChangeSinoMovementState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_SinoMovementState                                NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::Server_RequestChangeSinoMovementState(E_SinoMovementState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_RequestChangeSinoMovementState");
		
		ABuff_Glider_Sino_C_Server_RequestChangeSinoMovementState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Pressed
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::OnPlayerJump_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Pressed");
		
		ABuff_Glider_Sino_C_OnPlayerJump_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Released
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::OnPlayerJump_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Released");
		
		ABuff_Glider_Sino_C_OnPlayerJump_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPDeactivated");
		
		ABuff_Glider_Sino_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_AttemptSetDoubleJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDoubleJump                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::Server_AttemptSetDoubleJump(bool IsDoubleJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_AttemptSetDoubleJump");
		
		ABuff_Glider_Sino_C_Server_AttemptSetDoubleJump_Params params {};
		params.IsDoubleJump = IsDoubleJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_UpdateSinoStatVals
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Stam                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              food                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::Client_UpdateSinoStatVals(float Stam, float food)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_UpdateSinoStatVals");
		
		ABuff_Glider_Sino_C_Client_UpdateSinoStatVals_Params params {};
		params.Stam = Stam;
		params.food = food;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Released
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::OnPlayerToggleCrouch_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Released");
		
		ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Glider_Sino_C::OnPlayerToggleCrouch_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Pressed");
		
		ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_SetIsGlideFallingFromDam
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Set                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::Client_SetIsGlideFallingFromDam(bool Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_SetIsGlideFallingFromDam");
		
		ABuff_Glider_Sino_C_Client_SetIsGlideFallingFromDam_Params params {};
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExecuteUbergraph_Buff_Glider_Sino
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Glider_Sino_C::ExecuteUbergraph_Buff_Glider_Sino(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExecuteUbergraph_Buff_Glider_Sino");
		
		ABuff_Glider_Sino_C_ExecuteUbergraph_Buff_Glider_Sino_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Glider_Sino_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Glider_Sino_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Glider_Sino.Buff_Glider_Sino_C");
		return ptr;
	}

}


