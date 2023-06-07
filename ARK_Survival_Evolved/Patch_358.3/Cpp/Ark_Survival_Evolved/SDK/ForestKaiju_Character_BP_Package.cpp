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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetVar_IsProtecting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::GetVar_IsProtecting(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetVar_IsProtecting");
		
		AForestKaiju_Character_BP_C_GetVar_IsProtecting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideHealthBarOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AForestKaiju_Character_BP_C::BPOverrideHealthBarOffset(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideHealthBarOffset");
		
		AForestKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventRiding");
		
		AForestKaiju_Character_BP_C_BPPreventRiding_Params params {};
		params.ByPawn = ByPawn;
		params.bDontCheckDistance = bDontCheckDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::BPDinoARKDownloadedBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedBegin");
		
		AForestKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FString AForestKaiju_Character_BP_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetDebugInfoString");
		
		AForestKaiju_Character_BP_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBaseOnCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BaseCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter* BaseCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBaseOnCharacter");
		
		AForestKaiju_Character_BP_C_BPCanBaseOnCharacter_Params params {};
		params.BaseCharacter = BaseCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActorIsKaiju
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsKaiju                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ActorIsKaiju(class AActor* Actor, bool* IsKaiju)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActorIsKaiju");
		
		AForestKaiju_Character_BP_C_ActorIsKaiju_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsKaiju != nullptr)
			*IsKaiju = params.IsKaiju;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::BPDinoARKDownloadedEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedEnd");
		
		AForestKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_UseTamedPhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::OnRep_UseTamedPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_UseTamedPhysics");
		
		AForestKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterSound
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  SoundIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class USoundBase* AForestKaiju_Character_BP_C::BPOverrideCharacterSound(class USoundBase* SoundIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterSound");
		
		AForestKaiju_Character_BP_C_BPOverrideCharacterSound_Params params {};
		params.SoundIn = SoundIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::HealNodesAndHealthFromLeashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HealNodesAndHealthFromLeashing");
		
		AForestKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    DamageCauserController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHitFriendlyTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PreDamageHealth                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointDamageHitResult                                       (Parm, OutParm, ReferenceParm)
	 */
	struct FHitMarkerSettings AForestKaiju_Character_BP_C::BPOverrideDamageCauserHitMarker(class AShooterPlayerController* DamageCauserController, bool bHitFriendlyTarget, float PreDamageHealth, float DamageAmount, struct FDamageEvent* DamageEvent, bool bIsPointDamage, struct FHitResult* PointDamageHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker");
		
		AForestKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params params {};
		params.DamageCauserController = DamageCauserController;
		params.bHitFriendlyTarget = bHitFriendlyTarget;
		params.PreDamageHealth = PreDamageHealth;
		params.DamageAmount = DamageAmount;
		params.bIsPointDamage = bIsPointDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		if (PointDamageHitResult != nullptr)
			*PointDamageHitResult = params.PointDamageHitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnDinoCheat");
		
		AForestKaiju_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HasCantRootBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::HasCantRootBuff(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HasCantRootBuff");
		
		AForestKaiju_Character_BP_C_HasCantRootBuff_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RidingTick");
		
		AForestKaiju_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.K2_OnMovementModeChanged");
		
		AForestKaiju_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AForestKaiju_Character_BP_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity");
		
		AForestKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AForestKaiju_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetRiderUnboardLocation");
		
		AForestKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpSpawnInMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::InterpSpawnInMesh(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpSpawnInMesh");
		
		AForestKaiju_Character_BP_C_InterpSpawnInMesh_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanFit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VerticalOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HorizontalOffset                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      IgnoreActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Can                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanFit");
		
		AForestKaiju_Character_BP_C_CanFit_Params params {};
		params.Location = Location;
		params.VerticalOffset = VerticalOffset;
		params.Angle = Angle;
		params.HorizontalOffset = HorizontalOffset;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.IgnoreActor = IgnoreActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can != nullptr)
			*Can = params.Can;
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.LerpDyingMaterials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::LerpDyingMaterials(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.LerpDyingMaterials");
		
		AForestKaiju_Character_BP_C_LerpDyingMaterials_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AForestKaiju_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AForestKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeShowRootRadiusRing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::MaybeShowRootRadiusRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeShowRootRadiusRing");
		
		AForestKaiju_Character_BP_C_MaybeShowRootRadiusRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShowRootRadiusRing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowRing                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ShowRootRadiusRing(bool ShowRing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShowRootRadiusRing");
		
		AForestKaiju_Character_BP_C_ShowRootRadiusRing_Params params {};
		params.ShowRing = ShowRing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveForward");
		
		AForestKaiju_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get Grab Attack Vine AttachTargetsSocket Name
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::GetGrabAttackVineAttachTargetsSocketName(class FName* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get Grab Attack Vine AttachTargetsSocket Name");
		
		AForestKaiju_Character_BP_C_GetGrabAttackVineAttachTargetsSocketName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveArm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::DissolveArm(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveArm");
		
		AForestKaiju_Character_BP_C_DissolveArm_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Location Valid Vine Attack Range
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::IsLocationValidVineAttackRange(const struct FVector& Loc, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Location Valid Vine Attack Range");
		
		AForestKaiju_Character_BP_C_IsLocationValidVineAttackRange_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeLoseArmWhileProtecting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::MaybeLoseArmWhileProtecting(class AActor* DamageCauser, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeLoseArmWhileProtecting");
		
		AForestKaiju_Character_BP_C_MaybeLoseArmWhileProtecting_Params params {};
		params.DamageCauser = DamageCauser;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyAllNearbyPoisonTrees
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::DestroyAllNearbyPoisonTrees()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyAllNearbyPoisonTrees");
		
		AForestKaiju_Character_BP_C_DestroyAllNearbyPoisonTrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPSetupTamed");
		
		AForestKaiju_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontageSection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::GetMovementMontageSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontageSection");
		
		AForestKaiju_Character_BP_C_GetMovementMontageSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpProtectShieldStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::InterpProtectShieldStatus(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpProtectShieldStatus");
		
		AForestKaiju_Character_BP_C_InterpProtectShieldStatus_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpNodeStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::InterpNodeStates(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpNodeStates");
		
		AForestKaiju_Character_BP_C_InterpNodeStates_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CreateDynamicMats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::CreateDynamicMats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CreateDynamicMats");
		
		AForestKaiju_Character_BP_C_CreateDynamicMats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnAnimPlayedNotify
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
	void AForestKaiju_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnAnimPlayedNotify");
		
		AForestKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Delta                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AForestKaiju_Character_BP_C::BPModifyRootMotionDeltaRotation(struct FRotator* Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation");
		
		AForestKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delta != nullptr)
			*Delta = params.Delta;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.WantsLocomotionTransition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WantsTransition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::WantsLocomotionTransition(bool* WantsTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.WantsLocomotionTransition");
		
		AForestKaiju_Character_BP_C_WantsLocomotionTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WantsTransition != nullptr)
			*WantsTransition = params.WantsTransition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsLocomotionBlocked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::IsLocomotionBlocked(bool* bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsLocomotionBlocked");
		
		AForestKaiju_Character_BP_C_IsLocomotionBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERootMotionMovementMode                            Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::GetMovementMontage(ERootMotionMovementMode Mode, class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontage");
		
		AForestKaiju_Character_BP_C_GetMovementMontage_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PlayAIProtectSelfBriefly
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::PlayAIProtectSelfBriefly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PlayAIProtectSelfBriefly");
		
		AForestKaiju_Character_BP_C_PlayAIProtectSelfBriefly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_CurrentAttackIndexReplicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::OnRep_CurrentAttackIndexReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_CurrentAttackIndexReplicated");
		
		AForestKaiju_Character_BP_C_OnRep_CurrentAttackIndexReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnMaxVinesThisFrame
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::SpawnMaxVinesThisFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnMaxVinesThisFrame");
		
		AForestKaiju_Character_BP_C_SpawnMaxVinesThisFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVineInternal
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::SpawnVineInternal(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVineInternal");
		
		AForestKaiju_Character_BP_C_SpawnVineInternal_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanRiderAttack");
		
		AForestKaiju_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanAttack");
		
		AForestKaiju_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPNotifyClearRider");
		
		AForestKaiju_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetDeath");
		
		AForestKaiju_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlinkDamageNodeInterp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::BlinkDamageNodeInterp(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlinkDamageNodeInterp");
		
		AForestKaiju_Character_BP_C_BlinkDamageNodeInterp_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTreeSeeds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TreeCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::SpawnPoisonTreeSeeds(float TreeCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTreeSeeds");
		
		AForestKaiju_Character_BP_C_SpawnPoisonTreeSeeds_Params params {};
		params.TreeCount = TreeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetLastPlayerGrabAttackTargetLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::SetLastPlayerGrabAttackTargetLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetLastPlayerGrabAttackTargetLocation");
		
		AForestKaiju_Character_BP_C_SetLastPlayerGrabAttackTargetLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_FollowControlRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::OnRep_FollowControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_FollowControlRotation");
		
		AForestKaiju_Character_BP_C_OnRep_FollowControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_GrabAttacking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::OnRep_GrabAttacking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_GrabAttacking");
		
		AForestKaiju_Character_BP_C_OnRep_GrabAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.TurnOffAttackBBKeys
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::TurnOffAttackBBKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.TurnOffAttackBBKeys");
		
		AForestKaiju_Character_BP_C_TurnOffAttackBBKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBeBaseForCharacter");
		
		AForestKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsRightArmGrabAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               RightArmGrabAttack                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::IsRightArmGrabAttack(bool* RightArmGrabAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsRightArmGrabAttack");
		
		AForestKaiju_Character_BP_C_IsRightArmGrabAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RightArmGrabAttack != nullptr)
			*RightArmGrabAttack = params.RightArmGrabAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanPlayerGrabAttack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               GrabAttack                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Hit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::CanPlayerGrabAttack(bool* GrabAttack, bool* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanPlayerGrabAttack");
		
		AForestKaiju_Character_BP_C_CanPlayerGrabAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GrabAttack != nullptr)
			*GrabAttack = params.GrabAttack;
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor AForestKaiju_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetCrosshairColor");
		
		AForestKaiju_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetGrabAttackVineSocketName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::GetGrabAttackVineSocketName(class FName* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetGrabAttackVineSocketName");
		
		AForestKaiju_Character_BP_C_GetGrabAttackVineSocketName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVine
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::SpawnVine(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVine");
		
		AForestKaiju_Character_BP_C_SpawnVine_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get GrabAttackVineStartLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::GetGrabAttackVineStartLocation(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get GrabAttackVineStartLocation");
		
		AForestKaiju_Character_BP_C_GetGrabAttackVineStartLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InitVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::InitVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InitVars");
		
		AForestKaiju_Character_BP_C_InitVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::VineGrabHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabHit");
		
		AForestKaiju_Character_BP_C_VineGrabHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabMissed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::VineGrabMissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabMissed");
		
		AForestKaiju_Character_BP_C_VineGrabMissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AForestKaiju_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetMultiUseEntries");
		
		AForestKaiju_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTryMultiUse");
		
		AForestKaiju_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::RegrowRightComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightComplete");
		
		AForestKaiju_Character_BP_C_RegrowRightComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::RegrowLeftComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftComplete");
		
		AForestKaiju_Character_BP_C_RegrowLeftComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Appendage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     currentScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutScale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::RegrowTick(class USkeletalMeshComponent* Appendage, const struct FVector& currentScale, struct FVector* OutScale, bool* Complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowTick");
		
		AForestKaiju_Character_BP_C_RegrowTick_Params params {};
		params.Appendage = Appendage;
		params.currentScale = currentScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutScale != nullptr)
			*OutScale = params.OutScale;
		if (Complete != nullptr)
			*Complete = params.Complete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Regrow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeftArm                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Regrow(bool LeftArm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Regrow");
		
		AForestKaiju_Character_BP_C_Regrow_Params params {};
		params.LeftArm = LeftArm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Dismember
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Appendage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Dismember(class USkeletalMeshComponent* Appendage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Dismember");
		
		AForestKaiju_Character_BP_C_Dismember_Params params {};
		params.Appendage = Appendage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Root Attacking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsAttacking                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::IsRootAttacking(bool* IsAttacking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Root Attacking");
		
		AForestKaiju_Character_BP_C_IsRootAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAttacking != nullptr)
			*IsAttacking = params.IsAttacking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetRootAttackChargeLEvel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SmoothedValues                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::GetRootAttackChargeLEvel(bool SmoothedValues, float* Value, float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetRootAttackChargeLEvel");
		
		AForestKaiju_Character_BP_C_GetRootAttackChargeLEvel_Params params {};
		params.SmoothedValues = SmoothedValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AForestKaiju_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetHUDElements");
		
		AForestKaiju_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventInputType
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BPPreventInputType(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventInputType");
		
		AForestKaiju_Character_BP_C_BPPreventInputType_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PreventLocomotion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AForestKaiju_Character_BP_C::PreventLocomotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PreventLocomotion");
		
		AForestKaiju_Character_BP_C_PreventLocomotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeExposeNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DmgCauser                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDesertKaiju_ControlNodes                          Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::MaybeExposeNode(class AActor* DmgCauser, EDesertKaiju_ControlNodes Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeExposeNode");
		
		AForestKaiju_Character_BP_C_MaybeExposeNode_Params params {};
		params.DmgCauser = DmgCauser;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StartTorpid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::StartTorpid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StartTorpid");
		
		AForestKaiju_Character_BP_C_StartTorpid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTree
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SpawnOnEnemy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::SpawnPoisonTree(class AActor* SpawnOnEnemy, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTree");
		
		AForestKaiju_Character_BP_C_SpawnPoisonTree_Params params {};
		params.SpawnOnEnemy = SpawnOnEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerServer");
		
		AForestKaiju_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AForestKaiju_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleOnStopTargeting");
		
		AForestKaiju_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShortestAngleDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShortestAngleDistance");
		
		AForestKaiju_Character_BP_C_ShortestAngleDistance_Params params {};
		params.AngleCurrent = AngleCurrent;
		params.AngleTarget = AngleTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difference != nullptr)
			*Difference = params.Difference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, struct FVector* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetClampedLookDir");
		
		AForestKaiju_Character_BP_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AForestKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::GrabTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabTrace");
		
		AForestKaiju_Character_BP_C_GrabTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AForestKaiju_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustAttackIndex");
		
		AForestKaiju_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		AForestKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AForestKaiju_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveRight");
		
		AForestKaiju_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SwitchTPVCamView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::SwitchTPVCamView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SwitchTPVCamView");
		
		AForestKaiju_Character_BP_C_SwitchTPVCamView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsFirstPersonView
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::IsFirstPersonView(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsFirstPersonView");
		
		AForestKaiju_Character_BP_C_IsFirstPersonView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerNonDedicated");
		
		AForestKaiju_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyCenterNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::DestroyCenterNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyCenterNode");
		
		AForestKaiju_Character_BP_C_DestroyCenterNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageCenterNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::DamageCenterNode(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageCenterNode");
		
		AForestKaiju_Character_BP_C_DamageCenterNode_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyRightNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::DestroyRightNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyRightNode");
		
		AForestKaiju_Character_BP_C_DestroyRightNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageRightNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::DamageRightNode(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageRightNode");
		
		AForestKaiju_Character_BP_C_DamageRightNode_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExposeNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ExposeNode(bool Hide, bool Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExposeNode");
		
		AForestKaiju_Character_BP_C_ExposeNode_Params params {};
		params.Hide = Hide;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyLeftNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::DestroyLeftNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyLeftNode");
		
		AForestKaiju_Character_BP_C_DestroyLeftNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageLeftNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::DamageLeftNode(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageLeftNode");
		
		AForestKaiju_Character_BP_C_DamageLeftNode_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AForestKaiju_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustDamage");
		
		AForestKaiju_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanTargetCorpse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AForestKaiju_Character_BP_C::BPCanTargetCorpse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanTargetCorpse");
		
		AForestKaiju_Character_BP_C_BPCanTargetCorpse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UserConstructionScript");
		
		AForestKaiju_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_186
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_186()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_186");
		
		AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_186_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_185
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_185()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_185");
		
		AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_185_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_184
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_184()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_184");
		
		AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_184_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_183
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_183()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_183");
		
		AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_183_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CallFunc_StunKaiju
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::CallFunc_StunKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CallFunc_StunKaiju");
		
		AForestKaiju_Character_BP_C_CallFunc_StunKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetVar_FKArenaManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ArenaManager                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::SetVar_FKArenaManager(class AActor* ArenaManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetVar_FKArenaManager");
		
		AForestKaiju_Character_BP_C_SetVar_FKArenaManager_Params params {};
		params.ArenaManager = ArenaManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveTick");
		
		AForestKaiju_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveBeginPlay");
		
		AForestKaiju_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_SetNodeColor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Activated                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DamageNode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::MULTI_SetNodeColor(int32_t Node, float Alpha, bool Activated, bool DamageNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_SetNodeColor");
		
		AForestKaiju_Character_BP_C_MULTI_SetNodeColor_Params params {};
		params.Node = Node;
		params.Alpha = Alpha;
		params.Activated = Activated;
		params.DamageNode = DamageNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Rep_ExposeLeftRightNodes
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Rep_ExposeLeftRightNodes(bool Hide, bool Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Rep_ExposeLeftRightNodes");
		
		AForestKaiju_Character_BP_C_Rep_ExposeLeftRightNodes_Params params {};
		params.Hide = Hide;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateCameraDataTPVToServer
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ReplicateCameraDataTPVToServer(bool IsFirstPerson, const struct FVector& CameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateCameraDataTPVToServer");
		
		AForestKaiju_Character_BP_C_ReplicateCameraDataTPVToServer_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		params.CameraLocation = CameraLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ServerExecuteGrab
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::ServerExecuteGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ServerExecuteGrab");
		
		AForestKaiju_Character_BP_C_ServerExecuteGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_GrabTraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Server_GrabTraceTargetDir(const struct FVector& AimLoc, bool AimHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_GrabTraceTargetDir");
		
		AForestKaiju_Character_BP_C_Server_GrabTraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ExposeNodes
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               expose                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_ExposeNodes(EDesertKaiju_ControlNodes Node, bool expose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ExposeNodes");
		
		AForestKaiju_Character_BP_C_Multi_ExposeNodes_Params params {};
		params.Node = Node;
		params.expose = expose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActivateNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ActivateNode(EDesertKaiju_ControlNodes Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActivateNode");
		
		AForestKaiju_Character_BP_C_ActivateNode_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_LeftNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Deactivate_LeftNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_LeftNode");
		
		AForestKaiju_Character_BP_C_Deactivate_LeftNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_RightNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Deactivate_RightNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_RightNode");
		
		AForestKaiju_Character_BP_C_Deactivate_RightNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_CenterNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Deactivate_CenterNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_CenterNode");
		
		AForestKaiju_Character_BP_C_Deactivate_CenterNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_StartAttackRoot
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::CtS_StartAttackRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_StartAttackRoot");
		
		AForestKaiju_Character_BP_C_CtS_StartAttackRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_ExecuteAttackRoot
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::CtS_ExecuteAttackRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_ExecuteAttackRoot");
		
		AForestKaiju_Character_BP_C_CtS_ExecuteAttackRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndRootAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_EndRootAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndRootAttack");
		
		AForestKaiju_Character_BP_C_AnimNotify_EndRootAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PreventInput
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Prevent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_PreventInput(bool Prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PreventInput");
		
		AForestKaiju_Character_BP_C_Multi_PreventInput_Params params {};
		params.Prevent = Prevent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteAttackRoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::ExecuteAttackRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteAttackRoot");
		
		AForestKaiju_Character_BP_C_ExecuteAttackRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_RootTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_RootTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_RootTargets");
		
		AForestKaiju_Character_BP_C_AnimNotify_RootTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_StartAttackRoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AI_StartAttackRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_StartAttackRoot");
		
		AForestKaiju_Character_BP_C_AI_StartAttackRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_EndAttackRoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AI_EndAttackRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_EndAttackRoot");
		
		AForestKaiju_Character_BP_C_AI_EndAttackRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightArmTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::RegrowRightArmTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightArmTick");
		
		AForestKaiju_Character_BP_C_RegrowRightArmTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftArmTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::RegrowLeftArmTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftArmTick");
		
		AForestKaiju_Character_BP_C_RegrowLeftArmTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_Dismember
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeftArm                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_Dismember(bool LeftArm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_Dismember");
		
		AForestKaiju_Character_BP_C_Multi_Dismember_Params params {};
		params.LeftArm = LeftArm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::RegrowLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeft");
		
		AForestKaiju_Character_BP_C_RegrowLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::RegrowRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRight");
		
		AForestKaiju_Character_BP_C_RegrowRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EndGrabAIState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::EndGrabAIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EndGrabAIState");
		
		AForestKaiju_Character_BP_C_EndGrabAIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSmash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_GrabAttackSmash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSmash");
		
		AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSmash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_DebugDrawLine
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DurationSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::MULTI_DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float DurationSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_DebugDrawLine");
		
		AForestKaiju_Character_BP_C_MULTI_DebugDrawLine_Params params {};
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		params.DurationSeconds = DurationSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DebugDrawLine
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DurationSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float DurationSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DebugDrawLine");
		
		AForestKaiju_Character_BP_C_DebugDrawLine_Params params {};
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		params.DurationSeconds = DurationSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateRiderTPVRight
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TPVRight                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ReplicateRiderTPVRight(bool TPVRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateRiderTPVRight");
		
		AForestKaiju_Character_BP_C_ReplicateRiderTPVRight_Params params {};
		params.TPVRight = TPVRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::MULTI_GrabAttackStateStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateStart");
		
		AForestKaiju_Character_BP_C_MULTI_GrabAttackStateStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::MULTI_GrabAttackStateEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateEnd");
		
		AForestKaiju_Character_BP_C_MULTI_GrabAttackStateEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicatePlayerGrabAttackTargetLocation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ReplicatePlayerGrabAttackTargetLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicatePlayerGrabAttackTargetLocation");
		
		AForestKaiju_Character_BP_C_ReplicatePlayerGrabAttackTargetLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonSeeds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::SpawnPoisonSeeds(float Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonSeeds");
		
		AForestKaiju_Character_BP_C_SpawnPoisonSeeds_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlaySeedSpawnVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_PlaySeedSpawnVFX(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlaySeedSpawnVFX");
		
		AForestKaiju_Character_BP_C_Multi_PlaySeedSpawnVFX_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageNodeBlink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::DamageNodeBlink(EDesertKaiju_ControlNodes Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageNodeBlink");
		
		AForestKaiju_Character_BP_C_DamageNodeBlink_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpLeftNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_InterpLeftNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpLeftNode");
		
		AForestKaiju_Character_BP_C_Multi_InterpLeftNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpRightNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_InterpRightNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpRightNode");
		
		AForestKaiju_Character_BP_C_Multi_InterpRightNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpCenterNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_InterpCenterNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpCenterNode");
		
		AForestKaiju_Character_BP_C_Multi_InterpCenterNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpPressed");
		
		AForestKaiju_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpReleased");
		
		AForestKaiju_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_SetProtecting
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Protecting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Server_SetProtecting(bool Protecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_SetProtecting");
		
		AForestKaiju_Character_BP_C_Server_SetProtecting_Params params {};
		params.Protecting = Protecting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Client_SetDoingRootAttack
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Client_SetDoingRootAttack(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Client_SetDoingRootAttack");
		
		AForestKaiju_Character_BP_C_Client_SetDoingRootAttack_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_StartGrabAttackAnim
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RightArm                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LeftRight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              UpDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::MULTI_StartGrabAttackAnim(bool RightArm, float LeftRight, float UpDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_StartGrabAttackAnim");
		
		AForestKaiju_Character_BP_C_MULTI_StartGrabAttackAnim_Params params {};
		params.RightArm = RightArm;
		params.LeftRight = LeftRight;
		params.UpDown = UpDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackDetachActors
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    Targets                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AForestKaiju_Character_BP_C::GrabAttackDetachActors(TArray<class APrimalCharacter*>* Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackDetachActors");
		
		AForestKaiju_Character_BP_C_GrabAttackDetachActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::GrabAttackTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackTick");
		
		AForestKaiju_Character_BP_C_GrabAttackTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StunForestKaiju
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::StunForestKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StunForestKaiju");
		
		AForestKaiju_Character_BP_C_StunForestKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackPanCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_GrabAttackPanCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackPanCamera");
		
		AForestKaiju_Character_BP_C_AnimNotify_GrabAttackPanCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndShieldFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_EndShieldFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndShieldFX");
		
		AForestKaiju_Character_BP_C_AnimNotify_EndShieldFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetProtecting
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Protecting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_SetProtecting(bool Protecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetProtecting");
		
		AForestKaiju_Character_BP_C_Multi_SetProtecting_Params params {};
		params.Protecting = Protecting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpNodeDamage
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_InterpNodeDamage(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpNodeDamage");
		
		AForestKaiju_Character_BP_C_Multi_InterpNodeDamage_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetRunning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsRunning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::BP_OnSetRunning(bool bNewIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetRunning");
		
		AForestKaiju_Character_BP_C_BP_OnSetRunning_Params params {};
		params.bNewIsRunning = bNewIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedCorruptionDestroy
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Multi_DelayedCorruptionDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedCorruptionDestroy");
		
		AForestKaiju_Character_BP_C_Multi_DelayedCorruptionDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateGrabAttackTPVOffset
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::UpdateGrabAttackTPVOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateGrabAttackTPVOffset");
		
		AForestKaiju_Character_BP_C_UpdateGrabAttackTPVOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackAttachActors
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVineTargetData>                     Targets                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AForestKaiju_Character_BP_C::GrabAttackAttachActors(TArray<struct FVineTargetData>* Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackAttachActors");
		
		AForestKaiju_Character_BP_C_GrabAttackAttachActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_SetDoingRootAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::CtS_SetDoingRootAttack(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_SetDoingRootAttack");
		
		AForestKaiju_Character_BP_C_CtS_SetDoingRootAttack_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::DissolveLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveLeft");
		
		AForestKaiju_Character_BP_C_DissolveLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CreateDissolvingArmDynamicMATs
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeftArm                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_CreateDissolvingArmDynamicMATs(bool LeftArm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CreateDissolvingArmDynamicMATs");
		
		AForestKaiju_Character_BP_C_Multi_CreateDissolvingArmDynamicMATs_Params params {};
		params.LeftArm = LeftArm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ShowRootRadius
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_ShowRootRadius(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ShowRootRadius");
		
		AForestKaiju_Character_BP_C_Multi_ShowRootRadius_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetRootchargeAmount
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Multi_SetRootchargeAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetRootchargeAmount");
		
		AForestKaiju_Character_BP_C_Multi_SetRootchargeAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StC_SetLastTimeRootAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::StC_SetLastTimeRootAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StC_SetLastTimeRootAttack");
		
		AForestKaiju_Character_BP_C_StC_SetLastTimeRootAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_PlayNodeDestroyFX(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlayNodeDestroyFX");
		
		AForestKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_BeginDying
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_BeginDying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_BeginDying");
		
		AForestKaiju_Character_BP_C_AnimNotify_BeginDying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ApplyFallingDownForce
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Multi_ApplyFallingDownForce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ApplyFallingDownForce");
		
		AForestKaiju_Character_BP_C_Multi_ApplyFallingDownForce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EquipSaddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::EquipSaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EquipSaddle");
		
		AForestKaiju_Character_BP_C_EquipSaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSpawnVines
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_GrabAttackSpawnVines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSpawnVines");
		
		AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSpawnVines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetDoingRootAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::Multi_SetDoingRootAttack(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetDoingRootAttack");
		
		AForestKaiju_Character_BP_C_Multi_SetDoingRootAttack_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StaggeredRootTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::StaggeredRootTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StaggeredRootTargets");
		
		AForestKaiju_Character_BP_C_StaggeredRootTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SERVER_GrabAttackSpawnVines
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::SERVER_GrabAttackSpawnVines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SERVER_GrabAttackSpawnVines");
		
		AForestKaiju_Character_BP_C_SERVER_GrabAttackSpawnVines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_CheckForProtect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::AnimNotify_CheckForProtect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_CheckForProtect");
		
		AForestKaiju_Character_BP_C_AnimNotify_CheckForProtect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AForestKaiju_Character_BP_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature");
		
		AForestKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AForestKaiju_Character_BP_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature");
		
		AForestKaiju_Character_BP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateSaddlePhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::UpdateSaddlePhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateSaddlePhysics");
		
		AForestKaiju_Character_BP_C_UpdateSaddlePhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Multi_DelayedTurnOffHealthRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen");
		
		AForestKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CleanArms
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaiju_Character_BP_C::Multi_CleanArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CleanArms");
		
		AForestKaiju_Character_BP_C_Multi_CleanArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteUbergraph_ForestKaiju_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaiju_Character_BP_C::ExecuteUbergraph_ForestKaiju_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteUbergraph_ForestKaiju_Character_BP");
		
		AForestKaiju_Character_BP_C_ExecuteUbergraph_ForestKaiju_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AForestKaiju_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AForestKaiju_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaiju_Character_BP.ForestKaiju_Character_BP_C");
		return ptr;
	}

}


