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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerNonDedicated");
		
		AYutyrannus_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.SetAutoCourage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               autoCourageValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::SetAutoCourage(bool autoCourageValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.SetAutoCourage");
		
		AYutyrannus_Character_BP_C_SetAutoCourage_Params params {};
		params.autoCourageValue = autoCourageValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintDrawFloatingHUD");
		
		AYutyrannus_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AYutyrannus_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPGetMultiUseEntries");
		
		AYutyrannus_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AYutyrannus_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTryMultiUse");
		
		AYutyrannus_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AYutyrannus_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPAdjustDamage");
		
		AYutyrannus_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPShouldCancelDoAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AYutyrannus_Character_BP_C::BPShouldCancelDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPShouldCancelDoAttack");
		
		AYutyrannus_Character_BP_C_BPShouldCancelDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.All WildFollowers Attack Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::AllWildFollowersAttackTarget(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.All WildFollowers Attack Target");
		
		AYutyrannus_Character_BP_C_AllWildFollowersAttackTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Cone Check Custom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              coneRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            OtherCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewParam1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInCone                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::ConeCheckCustom(float coneRadius, class APrimalCharacter* OtherCharacter, const struct FVector& NewParam, const struct FVector& NewParam1, bool* IsInCone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Cone Check Custom");
		
		AYutyrannus_Character_BP_C_ConeCheckCustom_Params params {};
		params.coneRadius = coneRadius;
		params.OtherCharacter = OtherCharacter;
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInCone != nullptr)
			*IsInCone = params.IsInCone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AYutyrannus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanRiderAttack");
		
		AYutyrannus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsOfFollowerClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      classToCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               hasFollowerClass                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::IsOfFollowerClass(class UClass* classToCheck, bool* hasFollowerClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsOfFollowerClass");
		
		AYutyrannus_Character_BP_C_IsOfFollowerClass_Params params {};
		params.classToCheck = classToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasFollowerClass != nullptr)
			*hasFollowerClass = params.hasFollowerClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.CanAddFearCommonChecks
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            OtherCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canAddFear                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::CanAddFearCommonChecks(class APrimalCharacter* OtherCharacter, bool* canAddFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.CanAddFearCommonChecks");
		
		AYutyrannus_Character_BP_C_CanAddFearCommonChecks_Params params {};
		params.OtherCharacter = OtherCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canAddFear != nullptr)
			*canAddFear = params.canAddFear;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ConeCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              coneRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            OtherCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useHeadSocketForReference                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInCone                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VectorA                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VectorB                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::ConeCheck(float coneRadius, class APrimalCharacter* OtherCharacter, bool useHeadSocketForReference, bool* IsInCone, struct FVector* VectorA, struct FVector* VectorB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ConeCheck");
		
		AYutyrannus_Character_BP_C_ConeCheck_Params params {};
		params.coneRadius = coneRadius;
		params.OtherCharacter = OtherCharacter;
		params.useHeadSocketForReference = useHeadSocketForReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInCone != nullptr)
			*IsInCone = params.IsInCone;
		if (VectorA != nullptr)
			*VectorA = params.VectorA;
		if (VectorB != nullptr)
			*VectorB = params.VectorB;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AYutyrannus_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AYutyrannus_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsFromSameTeamOrAlliedTribe
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            otherTargetingTeam                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAllyOrSameTeam                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::IsFromSameTeamOrAlliedTribe(int32_t otherTargetingTeam, bool* isAllyOrSameTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsFromSameTeamOrAlliedTribe");
		
		AYutyrannus_Character_BP_C_IsFromSameTeamOrAlliedTribe_Params params {};
		params.otherTargetingTeam = otherTargetingTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAllyOrSameTeam != nullptr)
			*isAllyOrSameTeam = params.isAllyOrSameTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveAnyDamage");
		
		AYutyrannus_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.GetFearCourageBuffClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      BuffClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isTrustBuff                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::GetFearCourageBuffClass(bool isFear, class APrimalDinoCharacter* DinoCharacter, class UClass** BuffClass, bool* isTrustBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.GetFearCourageBuffClass");
		
		AYutyrannus_Character_BP_C_GetFearCourageBuffClass_Params params {};
		params.isFear = isFear;
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BuffClass != nullptr)
			*BuffClass = params.BuffClass;
		if (isTrustBuff != nullptr)
			*isTrustBuff = params.isTrustBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AYutyrannus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanAttack");
		
		AYutyrannus_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Fear
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::AddFear(class APrimalDinoCharacter* DinoCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Fear");
		
		AYutyrannus_Character_BP_C_AddFear_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.FindNearbyDinosForFear
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalDinoCharacter*>                dinosFound                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void AYutyrannus_Character_BP_C::FindNearbyDinosForFear(TArray<class APrimalDinoCharacter*>* dinosFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.FindNearbyDinosForFear");
		
		AYutyrannus_Character_BP_C_FindNearbyDinosForFear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dinosFound != nullptr)
			*dinosFound = params.dinosFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildYuty Can Add Fear
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canScare                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::WildYutyCanAddFear(class APrimalDinoCharacter* DinoCharacter, bool* canScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildYuty Can Add Fear");
		
		AYutyrannus_Character_BP_C_WildYutyCanAddFear_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canScare != nullptr)
			*canScare = params.canScare;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildOrderFollowersAttackTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::WildOrderFollowersAttackTarget(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildOrderFollowersAttackTarget");
		
		AYutyrannus_Character_BP_C_WildOrderFollowersAttackTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToWild
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canAddConfidenceToDino                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::CanAddCourageTamedToWild(class APrimalDinoCharacter* DinoCharacter, bool* canAddConfidenceToDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToWild");
		
		AYutyrannus_Character_BP_C_CanAddCourageTamedToWild_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canAddConfidenceToDino != nullptr)
			*canAddConfidenceToDino = params.canAddConfidenceToDino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Courage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::AddCourage(class APrimalDinoCharacter* DinoCharacter, class APrimalBuff** Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Courage");
		
		AYutyrannus_Character_BP_C_AddCourage_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buff != nullptr)
			*Buff = params.Buff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPOnTamedProcessOrder");
		
		AYutyrannus_Character_BP_C_BPOnTamedProcessOrder_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileTamed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canBeFollower                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::CanAddFollowerWhileTamed(class APrimalDinoCharacter* Dino, bool* canBeFollower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileTamed");
		
		AYutyrannus_Character_BP_C_CanAddFollowerWhileTamed_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canBeFollower != nullptr)
			*canBeFollower = params.canBeFollower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Follower WhileTamed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        follower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::TryAddFollowerWhileTamed(class APrimalDinoCharacter* follower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Follower WhileTamed");
		
		AYutyrannus_Character_BP_C_TryAddFollowerWhileTamed_Params params {};
		params.follower = follower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage WildToWild
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canAddConfidenceToDino                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::CanAddCourageWildToWild(class APrimalDinoCharacter* DinoCharacter, bool* canAddConfidenceToDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage WildToWild");
		
		AYutyrannus_Character_BP_C_CanAddCourageWildToWild_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canAddConfidenceToDino != nullptr)
			*canAddConfidenceToDino = params.canAddConfidenceToDino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Courage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        PotentialTarget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               tamedToTamed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               wildToWild                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               tamedToWild                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::TryAddCourage(class APrimalDinoCharacter* PotentialTarget, bool tamedToTamed, bool wildToWild, bool tamedToWild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Courage");
		
		AYutyrannus_Character_BP_C_TryAddCourage_Params params {};
		params.PotentialTarget = PotentialTarget;
		params.tamedToTamed = tamedToTamed;
		params.wildToWild = wildToWild;
		params.tamedToWild = tamedToWild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToTamed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canAddConfidenceToDino                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::CanAddCourageTamedToTamed(class APrimalDinoCharacter* DinoCharacter, bool* canAddConfidenceToDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToTamed");
		
		AYutyrannus_Character_BP_C_CanAddCourageTamedToTamed_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canAddConfidenceToDino != nullptr)
			*canAddConfidenceToDino = params.canAddConfidenceToDino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedAdd CourageTo Nearby Dinos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::TamedAddCourageToNearbyDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedAdd CourageTo Nearby Dinos");
		
		AYutyrannus_Character_BP_C_TamedAddCourageToNearbyDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedYuty Can Add Fear
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canScare                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::TamedYutyCanAddFear(class APrimalDinoCharacter* DinoCharacter, bool* canScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedYuty Can Add Fear");
		
		AYutyrannus_Character_BP_C_TamedYutyCanAddFear_Params params {};
		params.DinoCharacter = DinoCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canScare != nullptr)
			*canScare = params.canScare;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPDoAttack");
		
		AYutyrannus_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileWild
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ignoreTerrorCheck                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canBeFollower                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::CanAddFollowerWhileWild(class APrimalDinoCharacter* Dino, bool ignoreTerrorCheck, bool* canBeFollower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileWild");
		
		AYutyrannus_Character_BP_C_CanAddFollowerWhileWild_Params params {};
		params.Dino = Dino;
		params.ignoreTerrorCheck = ignoreTerrorCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canBeFollower != nullptr)
			*canBeFollower = params.canBeFollower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add FollowerWhileWild
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        follower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ignoreTerrorCheck                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               followerAdded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::TryAddFollowerWhileWild(class APrimalDinoCharacter* follower, bool ignoreTerrorCheck, bool* followerAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add FollowerWhileWild");
		
		AYutyrannus_Character_BP_C_TryAddFollowerWhileWild_Params params {};
		params.follower = follower;
		params.ignoreTerrorCheck = ignoreTerrorCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (followerAdded != nullptr)
			*followerAdded = params.followerAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UpdateCurrentFollowers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::UpdateCurrentFollowers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UpdateCurrentFollowers");
		
		AYutyrannus_Character_BP_C_UpdateCurrentFollowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Look for New Followers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canLook                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::CanLookforNewFollowers(bool* canLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Look for New Followers");
		
		AYutyrannus_Character_BP_C_CanLookforNewFollowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canLook != nullptr)
			*canLook = params.canLook;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerServer");
		
		AYutyrannus_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Wild Find New Followers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::WildFindNewFollowers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Wild Find New Followers");
		
		AYutyrannus_Character_BP_C_WildFindNewFollowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UserConstructionScript");
		
		AYutyrannus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.AddFearToNearbyDinos
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::AddFearToNearbyDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.AddFearToNearbyDinos");
		
		AYutyrannus_Character_BP_C_AddFearToNearbyDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildTryAddCourageToFollowers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::WildTryAddCourageToFollowers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildTryAddCourageToFollowers");
		
		AYutyrannus_Character_BP_C_WildTryAddCourageToFollowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AYutyrannus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoFearAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::DoFearAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoFearAfterDelay");
		
		AYutyrannus_Character_BP_C_DoFearAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawCone_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::DrawCone_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawCone_Multicast");
		
		AYutyrannus_Character_BP_C_DrawCone_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::DoCourageAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageAfterDelay");
		
		AYutyrannus_Character_BP_C_DoCourageAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageToFollowersAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::DoCourageToFollowersAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageToFollowersAfterDelay");
		
		AYutyrannus_Character_BP_C_DoCourageToFollowersAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DisableFollowerDistanceCheckForSeconds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::DisableFollowerDistanceCheckForSeconds(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DisableFollowerDistanceCheckForSeconds");
		
		AYutyrannus_Character_BP_C_DisableFollowerDistanceCheckForSeconds_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawArrow_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::DrawArrow_Multicast(const struct FVector& Origin, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawArrow_Multicast");
		
		AYutyrannus_Character_BP_C_DrawArrow_Multicast_Params params {};
		params.Origin = Origin;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveBeginPlay");
		
		AYutyrannus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYutyrannus_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPUnstasis");
		
		AYutyrannus_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ExecuteUbergraph_Yutyrannus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYutyrannus_Character_BP_C::ExecuteUbergraph_Yutyrannus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ExecuteUbergraph_Yutyrannus_Character_BP");
		
		AYutyrannus_Character_BP_C_ExecuteUbergraph_Yutyrannus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AYutyrannus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AYutyrannus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Yutyrannus_Character_BP.Yutyrannus_Character_BP_C");
		return ptr;
	}

}


