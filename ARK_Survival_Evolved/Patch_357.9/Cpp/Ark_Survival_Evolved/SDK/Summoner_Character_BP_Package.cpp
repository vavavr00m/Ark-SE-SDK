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
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearForceSearchLightTargetPrevMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TimedClearForceSearchLightTargetPrevMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearForceSearchLightTargetPrevMovement");
		
		ASummoner_Character_BP_C_TimedClearForceSearchLightTargetPrevMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPSetupTamed");
		
		ASummoner_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifySetRider");
		
		ASummoner_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyClearRider");
		
		ASummoner_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASummoner_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanRiderAttack");
		
		ASummoner_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerNonDedicated");
		
		ASummoner_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToNearbySplinePointUnstasis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TeleportToNearbySplinePointUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToNearbySplinePointUnstasis");
		
		ASummoner_Character_BP_C_TeleportToNearbySplinePointUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.GetMissionMinionColorSet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      ColorSet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::GetMissionMinionColorSet(class UClass** ColorSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetMissionMinionColorSet");
		
		ASummoner_Character_BP_C_GetMissionMinionColorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorSet != nullptr)
			*ColorSet = params.ColorSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UpdatePetalAnimStateType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::UpdatePetalAnimStateType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdatePetalAnimStateType");
		
		ASummoner_Character_BP_C_UpdatePetalAnimStateType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportAlongCurrentSplinePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TeleportAlongCurrentSplinePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportAlongCurrentSplinePoint");
		
		ASummoner_Character_BP_C_TeleportAlongCurrentSplinePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPUnstasis");
		
		ASummoner_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ClearStartDodgeLoc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::ClearStartDodgeLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ClearStartDodgeLoc");
		
		ASummoner_Character_BP_C_ClearStartDodgeLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ResetPerCombatVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::ResetPerCombatVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ResetPerCombatVars");
		
		ASummoner_Character_BP_C_ResetPerCombatVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnMinionsInArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SourceLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::SpawnMinionsInArea(const struct FVector& SourceLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnMinionsInArea");
		
		ASummoner_Character_BP_C_SpawnMinionsInArea_Params params {};
		params.SourceLoc = SourceLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BP_OnSetDeath");
		
		ASummoner_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToCurrentSplinePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TeleportToCurrentSplinePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToCurrentSplinePoint");
		
		ASummoner_Character_BP_C_TeleportToCurrentSplinePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.CheckIsBeingCarried
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ActuallyDoEscape                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBeingCarried                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::CheckIsBeingCarried(bool ActuallyDoEscape, bool* IsBeingCarried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.CheckIsBeingCarried");
		
		ASummoner_Character_BP_C_CheckIsBeingCarried_Params params {};
		params.ActuallyDoEscape = ActuallyDoEscape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBeingCarried != nullptr)
			*IsBeingCarried = params.IsBeingCarried;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ManualSpawnHitVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (Parm)
	 * 		bool                                               Shielded                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::ManualSpawnHitVFX(const struct FHitResult& HitInfo, bool Shielded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ManualSpawnHitVFX");
		
		ASummoner_Character_BP_C_ManualSpawnHitVFX_Params params {};
		params.HitInfo = HitInfo;
		params.Shielded = Shielded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TogglePetalsOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Open                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::TogglePetalsOpen(bool Open)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TogglePetalsOpen");
		
		ASummoner_Character_BP_C_TogglePetalsOpen_Params params {};
		params.Open = Open;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamCameraShakePlayers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::ScreamCameraShakePlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamCameraShakePlayers");
		
		ASummoner_Character_BP_C_ScreamCameraShakePlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPOverrideHurtAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPath                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageHitNormal                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimMontage* ASummoner_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPOverrideHurtAnim");
		
		ASummoner_Character_BP_C_BPOverrideHurtAnim_Params params {};
		params.DamageTaken = DamageTaken;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsLocalPath = bIsLocalPath;
		params.bIsPointDamage = bIsPointDamage;
		params.PointDamageLocation = PointDamageLocation;
		params.PointDamageHitNormal = PointDamageHitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSearchLightActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldSetActive                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::UpdateSearchLightActive(bool ShouldSetActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSearchLightActive");
		
		ASummoner_Character_BP_C_UpdateSearchLightActive_Params params {};
		params.ShouldSetActive = ShouldSetActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TumorAttackSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TumorAttackSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TumorAttackSetup");
		
		ASummoner_Character_BP_C_TumorAttackSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.RefreshMinionAggro
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::RefreshMinionAggro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.RefreshMinionAggro");
		
		ASummoner_Character_BP_C_RefreshMinionAggro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.AttemptDodgeAttack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::AttemptDodgeAttack(int32_t index, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.AttemptDodgeAttack");
		
		ASummoner_Character_BP_C_AttemptDodgeAttack_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleCanScreamTeleport
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanScreamTeleport                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::ToggleCanScreamTeleport(bool CanScreamTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleCanScreamTeleport");
		
		ASummoner_Character_BP_C_ToggleCanScreamTeleport_Params params {};
		params.CanScreamTeleport = CanScreamTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPDoAttack");
		
		ASummoner_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamTeleport
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _return_                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::ScreamTeleport(bool _return_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamTeleport");
		
		ASummoner_Character_BP_C_ScreamTeleport_Params params {};
		params._return_ = _return_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.PlayFoundTargetAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::PlayFoundTargetAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.PlayFoundTargetAnim");
		
		ASummoner_Character_BP_C_PlayFoundTargetAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ExShouldAggroToActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AddAggroIfTrue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReqShooterChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::ExShouldAggroToActor(class AActor* Actor, bool AddAggroIfTrue, bool ReqShooterChar, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ExShouldAggroToActor");
		
		ASummoner_Character_BP_C_ExShouldAggroToActor_Params params {};
		params.Actor = Actor;
		params.AddAggroIfTrue = AddAggroIfTrue;
		params.ReqShooterChar = ReqShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyBumpedByPawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::BPNotifyBumpedByPawn(class APrimalCharacter* ByPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyBumpedByPawn");
		
		ASummoner_Character_BP_C_BPNotifyBumpedByPawn_Params params {};
		params.ByPawn = ByPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.GetRandomMinionsToSpawn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::GetRandomMinionsToSpawn(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetRandomMinionsToSpawn");
		
		ASummoner_Character_BP_C_GetRandomMinionsToSpawn_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveAnyDamage");
		
		ASummoner_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleHealthRegen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::ToggleHealthRegen(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleHealthRegen");
		
		ASummoner_Character_BP_C_ToggleHealthRegen_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnParticlesAtAttackSockets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystem*                             particle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnAttached                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::SpawnParticlesAtAttackSockets(int32_t AttackIndex, class UParticleSystem* particle, const struct FVector& Scale, bool SpawnAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnParticlesAtAttackSockets");
		
		ASummoner_Character_BP_C_SpawnParticlesAtAttackSockets_Params params {};
		params.AttackIndex = AttackIndex;
		params.particle = particle;
		params.Scale = Scale;
		params.SpawnAttached = SpawnAttached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearPreventMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TimedClearPreventMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearPreventMovement");
		
		ASummoner_Character_BP_C_TimedClearPreventMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSpline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ExcludeCurrent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdateDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SetNewSpline                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::UpdateSpline(bool ExcludeCurrent, bool UpdateDirection, bool* SetNewSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSpline");
		
		ASummoner_Character_BP_C_UpdateSpline_Params params {};
		params.ExcludeCurrent = ExcludeCurrent;
		params.UpdateDirection = UpdateDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SetNewSpline != nullptr)
			*SetNewSpline = params.SetNewSpline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.GetClosestSpline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ExcludeCurrent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASplineActor*                                Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::GetClosestSpline(bool ExcludeCurrent, class ASplineActor** Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetClosestSpline");
		
		ASummoner_Character_BP_C_GetClosestSpline_Params params {};
		params.ExcludeCurrent = ExcludeCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Spline != nullptr)
			*Spline = params.Spline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateDodgeDurationByDistance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::UpdateDodgeDurationByDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateDodgeDurationByDistance");
		
		ASummoner_Character_BP_C_UpdateDodgeDurationByDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.GetDodgeDistanceForChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::GetDodgeDistanceForChar(class APrimalCharacter* Character, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetDodgeDistanceForChar");
		
		ASummoner_Character_BP_C_GetDodgeDistanceForChar_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateAnimBPUseTurning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseTurning                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::UpdateAnimBPUseTurning(bool UseTurning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateAnimBPUseTurning");
		
		ASummoner_Character_BP_C_UpdateAnimBPUseTurning_Params params {};
		params.UseTurning = UseTurning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.InitSummoner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::InitSummoner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.InitSummoner");
		
		ASummoner_Character_BP_C_InitSummoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearIsDodging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TimedClearIsDodging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearIsDodging");
		
		ASummoner_Character_BP_C_TimedClearIsDodging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.SetIsDodging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDodging                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::SetIsDodging(bool IsDodging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SetIsDodging");
		
		ASummoner_Character_BP_C_SetIsDodging_Params params {};
		params.IsDodging = IsDodging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsDodging
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::OnRep_bIsDodging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsDodging");
		
		ASummoner_Character_BP_C_OnRep_bIsDodging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.SummonerServerTick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::SummonerServerTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SummonerServerTick");
		
		ASummoner_Character_BP_C_SummonerServerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsStunned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::OnRep_bIsStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsStunned");
		
		ASummoner_Character_BP_C_OnRep_bIsStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.GetLocationLeastPlayerLookingAt
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     retLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::GetLocationLeastPlayerLookingAt(struct FVector* retLocation, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetLocationLeastPlayerLookingAt");
		
		ASummoner_Character_BP_C_GetLocationLeastPlayerLookingAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retLocation != nullptr)
			*retLocation = params.retLocation;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TickingShield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TickingShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TickingShield");
		
		ASummoner_Character_BP_C_TickingShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ASummoner_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPAdjustDamage");
		
		ASummoner_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bShieldOn
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::OnRep_bShieldOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bShieldOn");
		
		ASummoner_Character_BP_C_OnRep_bShieldOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleShield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::ToggleShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleShield");
		
		ASummoner_Character_BP_C_ToggleShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_InSleepingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::OnRep_InSleepingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_InSleepingState");
		
		ASummoner_Character_BP_C_OnRep_InSleepingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPOnLethalDamage
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventDeath                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPOnLethalDamage");
		
		ASummoner_Character_BP_C_BPOnLethalDamage_Params params {};
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		if (bPreventDeath != nullptr)
			*bPreventDeath = params.bPreventDeath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.IsBeingAimedAt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Aimed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::IsBeingAimedAt(bool* Aimed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.IsBeingAimedAt");
		
		ASummoner_Character_BP_C_IsBeingAimedAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aimed != nullptr)
			*Aimed = params.Aimed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.FireCircleTumor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DinoClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::FireCircleTumor(const struct FVector& Loc, int32_t index, class UClass* DinoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.FireCircleTumor");
		
		ASummoner_Character_BP_C_FireCircleTumor_Params params {};
		params.Loc = Loc;
		params.index = index;
		params.DinoClass = DinoClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.FireLineTumor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DinoClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::FireLineTumor(const struct FVector& Loc, int32_t index, class UClass* DinoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.FireLineTumor");
		
		ASummoner_Character_BP_C_FireLineTumor_Params params {};
		params.Loc = Loc;
		params.index = index;
		params.DinoClass = DinoClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.DodgeMove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::DodgeMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DodgeMove");
		
		ASummoner_Character_BP_C_DodgeMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.CanDodge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRandomDodge                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanDodge                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::CanDodge(bool IsRandomDodge, bool* CanDodge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.CanDodge");
		
		ASummoner_Character_BP_C_CanDodge_Params params {};
		params.IsRandomDodge = IsRandomDodge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDodge != nullptr)
			*CanDodge = params.CanDodge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASummoner_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPModifyDesiredRotation");
		
		ASummoner_Character_BP_C_BPModifyDesiredRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDesiredRotation != nullptr)
			*InDesiredRotation = params.InDesiredRotation;
		if (OutDesiredRotation != nullptr)
			*OutDesiredRotation = params.OutDesiredRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.PushBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::PushBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.PushBack");
		
		ASummoner_Character_BP_C_PushBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Update Chasing Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::UpdateChasingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Update Chasing Target");
		
		ASummoner_Character_BP_C_UpdateChasingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleSleepingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::ToggleSleepingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleSleepingState");
		
		ASummoner_Character_BP_C_ToggleSleepingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TickSleepingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::TickSleepingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TickSleepingState");
		
		ASummoner_Character_BP_C_TickSleepingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSleep State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::UpdateSleepState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSleep State");
		
		ASummoner_Character_BP_C_UpdateSleepState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Get Closest PointIndex on Spline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::GetClosestPointIndexonSpline(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Get Closest PointIndex on Spline");
		
		ASummoner_Character_BP_C_GetClosestPointIndexonSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.TickSearchLight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::TickSearchLight(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TickSearchLight");
		
		ASummoner_Character_BP_C_TickSearchLight_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveDestroyed");
		
		ASummoner_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.StopWander
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::StopWander()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.StopWander");
		
		ASummoner_Character_BP_C_StopWander_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.StartWanderForDuration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              WanderDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::StartWanderForDuration(float WanderDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.StartWanderForDuration");
		
		ASummoner_Character_BP_C_StartWanderForDuration_Params params {};
		params.WanderDuration = WanderDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.CleanMinionsArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::CleanMinionsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.CleanMinionsArray");
		
		ASummoner_Character_BP_C_CleanMinionsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.DespawnMinions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::DespawnMinions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DespawnMinions");
		
		ASummoner_Character_BP_C_DespawnMinions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.DebugSpline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::DebugSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DebugSpline");
		
		ASummoner_Character_BP_C_DebugSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OverrideRandomWanderLocation");
		
		ASummoner_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (originalDestination != nullptr)
			*originalDestination = params.originalDestination;
		if (inVec != nullptr)
			*inVec = params.inVec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnTumor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::SpawnTumor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnTumor");
		
		ASummoner_Character_BP_C_SpawnTumor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnAMinionAtLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DinoClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        SpawnedMinion                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::SpawnAMinionAtLocation(const struct FVector& SpawnLocation, class UClass* DinoClass, class APrimalDinoCharacter** SpawnedMinion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnAMinionAtLocation");
		
		ASummoner_Character_BP_C_SpawnAMinionAtLocation_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.DinoClass = DinoClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedMinion != nullptr)
			*SpawnedMinion = params.SpawnedMinion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnProjectiles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::SpawnProjectiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnProjectiles");
		
		ASummoner_Character_BP_C_SpawnProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASummoner_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanAttack");
		
		ASummoner_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UserConstructionScript");
		
		ASummoner_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::Timeline_SpotLightAlert__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__FinishedFunc");
		
		ASummoner_Character_BP_C_Timeline_SpotLightAlert__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::Timeline_SpotLightAlert__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__UpdateFunc");
		
		ASummoner_Character_BP_C_Timeline_SpotLightAlert__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::Timeline_UpdateShieldMats__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__FinishedFunc");
		
		ASummoner_Character_BP_C_Timeline_UpdateShieldMats__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::Timeline_UpdateShieldMats__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__UpdateFunc");
		
		ASummoner_Character_BP_C_Timeline_UpdateShieldMats__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::Timeline_DoTeleportDissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__FinishedFunc");
		
		ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::Timeline_DoTeleportDissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__UpdateFunc");
		
		ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerServer");
		
		ASummoner_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveBeginPlay");
		
		ASummoner_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ASummoner_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpawnParticleAtAttackSockets
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystem*                             particle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnAttached                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::Multi_SpawnParticleAtAttackSockets(int32_t AttackIndex, class UParticleSystem* particle, const struct FVector& Scale, bool SpawnAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpawnParticleAtAttackSockets");
		
		ASummoner_Character_BP_C_Multi_SpawnParticleAtAttackSockets_Params params {};
		params.AttackIndex = AttackIndex;
		params.particle = particle;
		params.Scale = Scale;
		params.SpawnAttached = SpawnAttached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_ManualSpawnHitVFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (Parm)
	 * 		bool                                               Shielded                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::Multi_ManualSpawnHitVFX(const struct FHitResult& HitInfo, bool Shielded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_ManualSpawnHitVFX");
		
		ASummoner_Character_BP_C_Multi_ManualSpawnHitVFX_Params params {};
		params.HitInfo = HitInfo;
		params.Shielded = Shielded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpotLightAlert
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::Multi_SpotLightAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpotLightAlert");
		
		ASummoner_Character_BP_C_Multi_SpotLightAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_MinionSpawnFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          Transform                                                  (Parm, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::Multi_MinionSpawnFX(const struct UObject_FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_MinionSpawnFX");
		
		ASummoner_Character_BP_C_Multi_MinionSpawnFX_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateShieldMats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::UpdateShieldMats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateShieldMats");
		
		ASummoner_Character_BP_C_UpdateShieldMats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.DoTeleportDissolve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_Character_BP_C::DoTeleportDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DoTeleportDissolve");
		
		ASummoner_Character_BP_C_DoTeleportDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_Character_BP.Summoner_Character_BP_C.ExecuteUbergraph_Summoner_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_Character_BP_C::ExecuteUbergraph_Summoner_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ExecuteUbergraph_Summoner_Character_BP");
		
		ASummoner_Character_BP_C_ExecuteUbergraph_Summoner_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASummoner_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASummoner_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Summoner_Character_BP.Summoner_Character_BP_C");
		return ptr;
	}

}


