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
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChanceWild
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CrystalQuality                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AGacha_Character_BP_C::CalculateItemChanceWild(float CrystalQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChanceWild");
		
		AGacha_Character_BP_C_CalculateItemChanceWild_Params params {};
		params.CrystalQuality = CrystalQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CrystalQuality                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AGacha_Character_BP_C::CalculateItemChance(float CrystalQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChance");
		
		AGacha_Character_BP_C_CalculateItemChance_Params params {};
		params.CrystalQuality = CrystalQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.HasEnemyTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AGacha_Character_BP_C::HasEnemyTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.HasEnemyTarget");
		
		AGacha_Character_BP_C_HasEnemyTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.HasFriendlyTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AGacha_Character_BP_C::HasFriendlyTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.HasFriendlyTarget");
		
		AGacha_Character_BP_C_HasFriendlyTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalDropTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AGacha_Character_BP_C::GetCrystalDropTransform(struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalDropTransform");
		
		AGacha_Character_BP_C_GetCrystalDropTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGacha_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BlueprintCanRiderAttack");
		
		AGacha_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetNoTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Aim                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AGacha_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetNoTarget");
		
		AGacha_Character_BP_C_BPModifyAimOffsetNoTarget_Params params {};
		
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
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.OverrideRandomWanderLocation");
		
		AGacha_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
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
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveAnyDamage");
		
		AGacha_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeProduction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::InitializeProduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeProduction");
		
		AGacha_Character_BP_C_InitializeProduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeCrystals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::InitializeCrystals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeCrystals");
		
		AGacha_Character_BP_C_InitializeCrystals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.FindWanderTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::FindWanderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.FindWanderTarget");
		
		AGacha_Character_BP_C_FindWanderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GetDigestionFrequencyMultiplier
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Mult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::GetDigestionFrequencyMultiplier(float* Mult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetDigestionFrequencyMultiplier");
		
		AGacha_Character_BP_C_GetDigestionFrequencyMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mult != nullptr)
			*Mult = params.Mult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalQualityMultiplier
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Mult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::GetCrystalQualityMultiplier(float* Mult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalQualityMultiplier");
		
		AGacha_Character_BP_C_GetCrystalQualityMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mult != nullptr)
			*Mult = params.Mult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.Get Digestion Amount Multiplier
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::GetDigestionAmountMultiplier(float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Get Digestion Amount Multiplier");
		
		AGacha_Character_BP_C_GetDigestionAmountMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimTargetLocation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector AGacha_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetTargetLocation");
		
		AGacha_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimTargetLocation != nullptr)
			*AimTargetLocation = params.AimTargetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPUnstasisConsumeFood
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FoodNeeded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AGacha_Character_BP_C::BPUnstasisConsumeFood(float FoodNeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPUnstasisConsumeFood");
		
		AGacha_Character_BP_C_BPUnstasisConsumeFood_Params params {};
		params.FoodNeeded = FoodNeeded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GetEfficiencyFactor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float AGacha_Character_BP_C::GetEfficiencyFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetEfficiencyFactor");
		
		AGacha_Character_BP_C_GetEfficiencyFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.ResetDigestionTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::ResetDigestionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ResetDigestionTimer");
		
		AGacha_Character_BP_C_ResetDigestionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BabyDigestion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AteSomething                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::BabyDigestion(bool* AteSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BabyDigestion");
		
		AGacha_Character_BP_C_BabyDigestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AteSomething != nullptr)
			*AteSomething = params.AteSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.Is Unhappy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AGacha_Character_BP_C::IsUnhappy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Is Unhappy");
		
		AGacha_Character_BP_C_IsUnhappy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.IsHappy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AGacha_Character_BP_C::IsHappy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.IsHappy");
		
		AGacha_Character_BP_C_IsHappy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateCrystalQuality
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AGacha_Character_BP_C::CalculateCrystalQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateCrystalQuality");
		
		AGacha_Character_BP_C_CalculateCrystalQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.OnRep_EmotionLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::OnRep_EmotionLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.OnRep_EmotionLevel");
		
		AGacha_Character_BP_C_OnRep_EmotionLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.EmotionCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::EmotionCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.EmotionCheck");
		
		AGacha_Character_BP_C_EmotionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveTick");
		
		AGacha_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.Play Start Digest Animation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::PlayStartDigestAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Play Start Digest Animation");
		
		AGacha_Character_BP_C_PlayStartDigestAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPOnDinoCheat");
		
		AGacha_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.DistributeFood
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FoodEaten                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::DistributeFood(float FoodEaten)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.DistributeFood");
		
		AGacha_Character_BP_C_DistributeFood_Params params {};
		params.FoodEaten = FoodEaten;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.Look for Food Drops
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayerAttack                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FoundSomething                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::LookforFoodDrops(bool PlayerAttack, bool* FoundSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Look for Food Drops");
		
		AGacha_Character_BP_C_LookforFoodDrops_Params params {};
		params.PlayerAttack = PlayerAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundSomething != nullptr)
			*FoundSomething = params.FoundSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemTamingValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              affinity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsWanted                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::GetItemTamingValue(class UPrimalItem* Object, float* affinity, bool* IsWanted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemTamingValue");
		
		AGacha_Character_BP_C_GetItemTamingValue_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (affinity != nullptr)
			*affinity = params.affinity;
		if (IsWanted != nullptr)
			*IsWanted = params.IsWanted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemFoodValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsPremium                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FoodValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::GetItemFoodValue(class UPrimalItem* Object, bool* IsPremium, float* FoodValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemFoodValue");
		
		AGacha_Character_BP_C_GetItemFoodValue_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPremium != nullptr)
			*IsPremium = params.IsPremium;
		if (FoodValue != nullptr)
			*FoodValue = params.FoodValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.Stop Eating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::StopEating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Stop Eating");
		
		AGacha_Character_BP_C_StopEating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.StartEating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::StartEating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.StartEating");
		
		AGacha_Character_BP_C_StartEating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPNotifyWildHarvestAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            harvestIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::BPNotifyWildHarvestAttack(int32_t harvestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPNotifyWildHarvestAttack");
		
		AGacha_Character_BP_C_BPNotifyWildHarvestAttack_Params params {};
		params.harvestIndex = harvestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemBaseValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 PrimalItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BaseValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::GetItemBaseValue(class UPrimalItem* PrimalItem, float BaseValue, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemBaseValue");
		
		AGacha_Character_BP_C_GetItemBaseValue_Params params {};
		params.PrimalItem = PrimalItem;
		params.BaseValue = BaseValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.ChooseLootSet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::ChooseLootSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ChooseLootSet");
		
		AGacha_Character_BP_C_ChooseLootSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPClientDoMultiUse");
		
		AGacha_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGacha_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPTryMultiUse");
		
		AGacha_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AGacha_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPGetMultiUseEntries");
		
		AGacha_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.WildDigestion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::WildDigestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.WildDigestion");
		
		AGacha_Character_BP_C_WildDigestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.Play Digest Animation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::PlayDigestAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Play Digest Animation");
		
		AGacha_Character_BP_C_PlayDigestAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.SetCrystalScale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::SetCrystalScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.SetCrystalScale");
		
		AGacha_Character_BP_C_SetCrystalScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.DropCrystal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::DropCrystal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.DropCrystal");
		
		AGacha_Character_BP_C_DropCrystal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.FinishDigestion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::FinishDigestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.FinishDigestion");
		
		AGacha_Character_BP_C_FinishDigestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.TamedDigestion
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AteSomething                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::TamedDigestion(bool* AteSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.TamedDigestion");
		
		AGacha_Character_BP_C_TamedDigestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AteSomething != nullptr)
			*AteSomething = params.AteSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.Play Release Animation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::PlayReleaseAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Play Release Animation");
		
		AGacha_Character_BP_C_PlayReleaseAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.DigestionTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::DigestionTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.DigestionTick");
		
		AGacha_Character_BP_C_DigestionTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.TamingTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::TamingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.TamingTick");
		
		AGacha_Character_BP_C_TamingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.LookForTamingDrops
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FoundSomething                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::LookForTamingDrops(bool* FoundSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.LookForTamingDrops");
		
		AGacha_Character_BP_C_LookForTamingDrops_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundSomething != nullptr)
			*FoundSomething = params.FoundSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.GiveAffinity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            tamer                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              AffinityToGive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasTamed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::GiveAffinity(class APrimalCharacter** tamer, float AffinityToGive, bool* WasTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GiveAffinity");
		
		AGacha_Character_BP_C_GiveAffinity_Params params {};
		params.AffinityToGive = AffinityToGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tamer != nullptr)
			*tamer = params.tamer;
		if (WasTamed != nullptr)
			*WasTamed = params.WasTamed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.WantsResource
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsWanted                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              affinity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::WantsResource(class UPrimalItem** Item, bool* IsWanted, float* affinity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.WantsResource");
		
		AGacha_Character_BP_C_WantsResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
		if (IsWanted != nullptr)
			*IsWanted = params.IsWanted;
		if (affinity != nullptr)
			*affinity = params.affinity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPDoHarvestAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            harvestIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::BPDoHarvestAttack(int32_t harvestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPDoHarvestAttack");
		
		AGacha_Character_BP_C_BPDoHarvestAttack_Params params {};
		params.harvestIndex = harvestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestingQuantity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              originalQuantity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      resourceSelected                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AGacha_Character_BP_C::BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestingQuantity");
		
		AGacha_Character_BP_C_BPModifyHarvestingQuantity_Params params {};
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
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalHarvestingComponent*                  harvestComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              inDamage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AGacha_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent* harvestComponent, float inDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestDamage");
		
		AGacha_Character_BP_C_BPModifyHarvestDamage_Params params {};
		params.harvestComponent = harvestComponent;
		params.inDamage = inDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.UserConstructionScript");
		
		AGacha_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DoneEating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::AnimNotify_DoneEating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DoneEating");
		
		AGacha_Character_BP_C_AnimNotify_DoneEating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DropCrystal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::AnimNotify_DropCrystal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DropCrystal");
		
		AGacha_Character_BP_C_AnimNotify_DropCrystal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPDinoPostBeginPlay");
		
		AGacha_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_CheckForCrystal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::AnimNotify_CheckForCrystal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_CheckForCrystal");
		
		AGacha_Character_BP_C_AnimNotify_CheckForCrystal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.CleanUpEating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGacha_Character_BP_C::CleanUpEating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CleanUpEating");
		
		AGacha_Character_BP_C_CleanUpEating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gacha_Character_BP.Gacha_Character_BP_C.ExecuteUbergraph_Gacha_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGacha_Character_BP_C::ExecuteUbergraph_Gacha_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ExecuteUbergraph_Gacha_Character_BP");
		
		AGacha_Character_BP_C_ExecuteUbergraph_Gacha_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGacha_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGacha_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gacha_Character_BP.Gacha_Character_BP_C");
		return ptr;
	}

}


