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
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelfMoved                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void APhoenix_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveHit");
		
		APhoenix_Character_BP_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
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
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::BPPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPPlayDying");
		
		APhoenix_Character_BP_C_BPPlayDying_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanStartSuperCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::CanStartSuperCharge(bool* canStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanStartSuperCharge");
		
		APhoenix_Character_BP_C_CanStartSuperCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canStart != nullptr)
			*canStart = params.canStart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPSetupTamed");
		
		APhoenix_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanUseSuperCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canSupercharge                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::CanUseSuperCharge(bool* canSupercharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanUseSuperCharge");
		
		APhoenix_Character_BP_C_CanUseSuperCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canSupercharge != nullptr)
			*canSupercharge = params.canSupercharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateTimerServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::UpdateTimerServer(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateTimerServer");
		
		APhoenix_Character_BP_C_UpdateTimerServer_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRep_isCharging
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::OnRep_isCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRep_isCharging");
		
		APhoenix_Character_BP_C_OnRep_isCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.ApplyFireToNearbyCreatures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              fireRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::ApplyFireToNearbyCreatures(float fireRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ApplyFireToNearbyCreatures");
		
		APhoenix_Character_BP_C_ApplyFireToNearbyCreatures_Params params {};
		params.fireRadius = fireRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APhoenix_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanRiderAttack");
		
		APhoenix_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.SetAnimsWeightForAttack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::SetAnimsWeightForAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.SetAnimsWeightForAttack");
		
		APhoenix_Character_BP_C_SetAnimsWeightForAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Regular                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Blaze                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::GetMode(bool* Regular, bool* Blaze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetMode");
		
		APhoenix_Character_BP_C_GetMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Regular != nullptr)
			*Regular = params.Regular;
		if (Blaze != nullptr)
			*Blaze = params.Blaze;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintDrawFloatingHUD");
		
		APhoenix_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> APhoenix_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPGetMultiUseEntries");
		
		APhoenix_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APhoenix_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTryMultiUse");
		
		APhoenix_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.On StateChanged Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasRisen                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::OnStateChangedClient(bool hasRisen, bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.On StateChanged Client");
		
		APhoenix_Character_BP_C_OnStateChangedClient_Params params {};
		params.hasRisen = hasRisen;
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Is In Water
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               currentlyOnWater                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::IsInWater(bool* currentlyOnWater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Is In Water");
		
		APhoenix_Character_BP_C_IsInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentlyOnWater != nullptr)
			*currentlyOnWater = params.currentlyOnWater;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanAshStayOnLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canAshStay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::CanAshStayOnLocation(bool* canAshStay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanAshStayOnLocation");
		
		APhoenix_Character_BP_C_CanAshStayOnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canAshStay != nullptr)
			*canAshStay = params.canAshStay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Calculate BuryMeshTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Rise                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct UObject_FTransform                          buryMeshTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::CalculateBuryMeshTransform(bool Rise, struct UObject_FTransform* buryMeshTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Calculate BuryMeshTransform");
		
		APhoenix_Character_BP_C_CalculateBuryMeshTransform_Params params {};
		params.Rise = Rise;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (buryMeshTransform != nullptr)
			*buryMeshTransform = params.buryMeshTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetSuperheatState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               isSuperheat                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::GetSuperheatState(bool* isSuperheat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetSuperheatState");
		
		APhoenix_Character_BP_C_GetSuperheatState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isSuperheat != nullptr)
			*isSuperheat = params.isSuperheat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APhoenix_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanAttack");
		
		APhoenix_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateMoundVisibilityAndCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               skipVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::UpdateMoundVisibilityAndCollision(bool Visible, bool skipVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateMoundVisibilityAndCollision");
		
		APhoenix_Character_BP_C_UpdateMoundVisibilityAndCollision_Params params {};
		params.Visible = Visible;
		params.skipVisibility = skipVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Update MeshVisibility and Collision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               skipVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::UpdateMeshVisibilityandCollision(bool Visibility, bool skipVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Update MeshVisibility and Collision");
		
		APhoenix_Character_BP_C_UpdateMeshVisibilityandCollision_Params params {};
		params.Visibility = Visibility;
		params.skipVisibility = skipVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTimerServer");
		
		APhoenix_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float APhoenix_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPAdjustDamage");
		
		APhoenix_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.ConvertDamageToAffinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::ConvertDamageToAffinity(float DamageAmount, class AController* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ConvertDamageToAffinity");
		
		APhoenix_Character_BP_C_ConvertDamageToAffinity_Params params {};
		params.DamageAmount = DamageAmount;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UserConstructionScript");
		
		APhoenix_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::UndissolveMoundTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__FinishedFunc");
		
		APhoenix_Character_BP_C_UndissolveMoundTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::UndissolveMoundTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__UpdateFunc");
		
		APhoenix_Character_BP_C_UndissolveMoundTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::DissolveMoundTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__FinishedFunc");
		
		APhoenix_Character_BP_C_DissolveMoundTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::DissolveMoundTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__UpdateFunc");
		
		APhoenix_Character_BP_C_DissolveMoundTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::DissolvePhoenixMesh__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__FinishedFunc");
		
		APhoenix_Character_BP_C_DissolvePhoenixMesh__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::DissolvePhoenixMesh__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__UpdateFunc");
		
		APhoenix_Character_BP_C_DissolvePhoenixMesh__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnDied_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnDied_Event");
		
		APhoenix_Character_BP_C_OnDied_Event_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveBeginPlay");
		
		APhoenix_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::Rise(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise");
		
		APhoenix_Character_BP_C_Rise_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::OnRise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRise");
		
		APhoenix_Character_BP_C_OnRise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::DissolveMound(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMound");
		
		APhoenix_Character_BP_C_DissolveMound_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::FakeDie(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDie");
		
		APhoenix_Character_BP_C_FakeDie_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnFakeDie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::OnFakeDie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnFakeDie");
		
		APhoenix_Character_BP_C_OnFakeDie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AshFireParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::Die_AshFireParticles(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AshFireParticles");
		
		APhoenix_Character_BP_C_Die_AshFireParticles_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixDie_MeshVisuals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Dissolve                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::PhoenixDie_MeshVisuals(bool Dissolve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixDie_MeshVisuals");
		
		APhoenix_Character_BP_C_PhoenixDie_MeshVisuals_Params params {};
		params.Dissolve = Dissolve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixRise_MeshVisuals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::PhoenixRise_MeshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixRise_MeshVisuals");
		
		APhoenix_Character_BP_C_PhoenixRise_MeshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPUnstasis");
		
		APhoenix_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixRise_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::OnPhoenixRise_Multicast(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixRise_Multicast");
		
		APhoenix_Character_BP_C_OnPhoenixRise_Multicast_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixFakeDies_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::OnPhoenixFakeDies_Multicast(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixFakeDies_Multicast");
		
		APhoenix_Character_BP_C_OnPhoenixFakeDies_Multicast_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.KillPhoenix
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::KillPhoenix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.KillPhoenix");
		
		APhoenix_Character_BP_C_KillPhoenix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.RiseFailsafe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::RiseFailsafe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.RiseFailsafe");
		
		APhoenix_Character_BP_C_RiseFailsafe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDieFailsafe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::FakeDieFailsafe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDieFailsafe");
		
		APhoenix_Character_BP_C_FakeDieFailsafe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		APhoenix_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AshFireParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::Rise_AshFireParticles(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AshFireParticles");
		
		APhoenix_Character_BP_C_Rise_AshFireParticles_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::UndissolveMound(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMound");
		
		APhoenix_Character_BP_C_UndissolveMound_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AllEffects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::Rise_AllEffects(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AllEffects");
		
		APhoenix_Character_BP_C_Rise_AllEffects_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AllEffects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::Die_AllEffects(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AllEffects");
		
		APhoenix_Character_BP_C_Die_AllEffects_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.ChangeChargeState_Server
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::ChangeChargeState_Server(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ChangeChargeState_Server");
		
		APhoenix_Character_BP_C_ChangeChargeState_Server_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.StopSuperCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::StopSuperCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.StopSuperCharge");
		
		APhoenix_Character_BP_C_StopSuperCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.StartSuperCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::StartSuperCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.StartSuperCharge");
		
		APhoenix_Character_BP_C_StartSuperCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_BodyFireParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::Rise_BodyFireParticles(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_BodyFireParticles");
		
		APhoenix_Character_BP_C_Rise_BodyFireParticles_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_BodyFireParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::Die_BodyFireParticles(bool fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_BodyFireParticles");
		
		APhoenix_Character_BP_C_Die_BodyFireParticles_Params params {};
		params.fast = fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.DropInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::DropInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DropInventory");
		
		APhoenix_Character_BP_C_DropInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.DoChargeImpulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::DoChargeImpulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DoChargeImpulse");
		
		APhoenix_Character_BP_C_DoChargeImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpPressed");
		
		APhoenix_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpReleased");
		
		APhoenix_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.AnimNotify_FlyIdle_NoDed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APhoenix_Character_BP_C::AnimNotify_FlyIdle_NoDed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.AnimNotify_FlyIdle_NoDed");
		
		APhoenix_Character_BP_C_AnimNotify_FlyIdle_NoDed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Phoenix_Character_BP.Phoenix_Character_BP_C.ExecuteUbergraph_Phoenix_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhoenix_Character_BP_C::ExecuteUbergraph_Phoenix_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ExecuteUbergraph_Phoenix_Character_BP");
		
		APhoenix_Character_BP_C_ExecuteUbergraph_Phoenix_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APhoenix_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhoenix_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Phoenix_Character_BP.Phoenix_Character_BP_C");
		return ptr;
	}

}


