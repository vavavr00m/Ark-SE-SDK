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
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.HasSelfBuried
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool APurlovia_Character_BP_C::HasSelfBuried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.HasSelfBuried");
		
		APurlovia_Character_BP_C_HasSelfBuried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPIsHidden
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool APurlovia_Character_BP_C::BPIsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPIsHidden");
		
		APurlovia_Character_BP_C_BPIsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateCollisions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Buried                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::UpdateCollisions(bool Buried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateCollisions");
		
		APurlovia_Character_BP_C_UpdateCollisions_Params params {};
		params.Buried = Buried;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanUnburyNormal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Can                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::CanUnburyNormal(bool* Can)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanUnburyNormal");
		
		APurlovia_Character_BP_C_CanUnburyNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can != nullptr)
			*Can = params.Can;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound Out Particles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::ShowMoundOutParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound Out Particles");
		
		APurlovia_Character_BP_C_ShowMoundOutParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerNonDedicated");
		
		APurlovia_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Update Bury Mesh Transform Variable
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               updateMeshLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::UpdateBuryMeshTransformVariable(bool updateMeshLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Update Bury Mesh Transform Variable");
		
		APurlovia_Character_BP_C_UpdateBuryMeshTransformVariable_Params params {};
		params.updateMeshLocation = updateMeshLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound In Particles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::ShowMoundInParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound In Particles");
		
		APurlovia_Character_BP_C_ShowMoundInParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Bury MoundIfNeeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::ShowBuryMoundIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Bury MoundIfNeeded");
		
		APurlovia_Character_BP_C_ShowBuryMoundIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Hide Bury Mound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::HideBuryMound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Hide Bury Mound");
		
		APurlovia_Character_BP_C_HideBuryMound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.RotateToTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::RotateToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.RotateToTarget");
		
		APurlovia_Character_BP_C_RotateToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DoWeightCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::IsValidTarget(bool DoWeightCheck, class AActor* Target, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidTarget");
		
		APurlovia_Character_BP_C_IsValidTarget_Params params {};
		params.DoWeightCheck = DoWeightCheck;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float APurlovia_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAdjustOutputDamage");
		
		APurlovia_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.isBuryAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isBuryAttack                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::isBuryAttack(int32_t AttackIndex, bool* isBuryAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.isBuryAttack");
		
		APurlovia_Character_BP_C_isBuryAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isBuryAttack != nullptr)
			*isBuryAttack = params.isBuryAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPDoAttack");
		
		APurlovia_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryBury
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               skipBuriedCheck                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               couldBury                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::TryBury(bool PlayAnim, bool skipBuriedCheck, bool* couldBury)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryBury");
		
		APurlovia_Character_BP_C_TryBury_Params params {};
		params.PlayAnim = PlayAnim;
		params.skipBuriedCheck = skipBuriedCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (couldBury != nullptr)
			*couldBury = params.couldBury;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Should Show Bury Mound
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldShowMesh                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::ShouldShowBuryMound(bool* shouldShowMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Should Show Bury Mound");
		
		APurlovia_Character_BP_C_ShouldShowBuryMound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldShowMesh != nullptr)
			*shouldShowMesh = params.shouldShowMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float APurlovia_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPAdjustDamage");
		
		APurlovia_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidSurface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::IsValidSurface(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidSurface");
		
		APurlovia_Character_BP_C_IsValidSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPCharacterSleeped");
		
		APurlovia_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnAnimPlayedNotify
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
	void APurlovia_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnAnimPlayedNotify");
		
		APurlovia_Character_BP_C_BPOnAnimPlayedNotify_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishBuriedJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::FinishBuriedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishBuriedJump");
		
		APurlovia_Character_BP_C_FinishBuriedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.CalculateBuryMeshTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::CalculateBuryMeshTransform(struct UObject_FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CalculateBuryMeshTransform");
		
		APurlovia_Character_BP_C_CalculateBuryMeshTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintDrawFloatingHUD");
		
		APurlovia_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Up Impulse
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     UpImpulse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::GetBuriedAttackUpImpulse(struct FVector* UpImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Up Impulse");
		
		APurlovia_Character_BP_C_GetBuriedAttackUpImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpImpulse != nullptr)
			*UpImpulse = params.UpImpulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Down Impulse
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::GetBuriedAttackDownImpulse(struct FVector* Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Down Impulse");
		
		APurlovia_Character_BP_C_GetBuriedAttackDownImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impulse != nullptr)
			*Impulse = params.Impulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnRep_isBuried
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnRep_isBuried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnRep_isBuried");
		
		APurlovia_Character_BP_C_OnRep_isBuried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsDinoInWater
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               onWater                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::IsDinoInWater(bool* onWater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsDinoInWater");
		
		APurlovia_Character_BP_C_IsDinoInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (onWater != nullptr)
			*onWater = params.onWater;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishNormalJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::FinishNormalJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishNormalJump");
		
		APurlovia_Character_BP_C_FinishNormalJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ApplyNormalJumpImpulse
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::ApplyNormalJumpImpulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ApplyNormalJumpImpulse");
		
		APurlovia_Character_BP_C_ApplyNormalJumpImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnJumped");
		
		APurlovia_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APurlovia_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintCanAttack");
		
		APurlovia_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnMovementModeChangedNotify");
		
		APurlovia_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPNotifyBumpedPawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BumpedPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPNotifyBumpedPawn");
		
		APurlovia_Character_BP_C_BPNotifyBumpedPawn_Params params {};
		params.BumpedPawn = BumpedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Can Unbury
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canComeOut                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::CanUnbury(bool* canComeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Can Unbury");
		
		APurlovia_Character_BP_C_CanUnbury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canComeOut != nullptr)
			*canComeOut = params.canComeOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShouldComeOut
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               comeOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::ShouldComeOut(bool* comeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShouldComeOut");
		
		APurlovia_Character_BP_C_ShouldComeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (comeOut != nullptr)
			*comeOut = params.comeOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Has Conflict with AI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasConflict                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::HasConflictwithAI(bool* hasConflict)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Has Conflict with AI");
		
		APurlovia_Character_BP_C_HasConflictwithAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasConflict != nullptr)
			*hasConflict = params.hasConflict;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.canBury
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceBury                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canBury                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::canBury(bool forceBury, bool* canBury)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.canBury");
		
		APurlovia_Character_BP_C_canBury_Params params {};
		params.forceBury = forceBury;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canBury != nullptr)
			*canBury = params.canBury;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanPlayBuryAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canPlayBury                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::CanPlayBuryAnim(bool* canPlayBury)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanPlayBuryAnim");
		
		APurlovia_Character_BP_C_CanPlayBuryAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canPlayBury != nullptr)
			*canPlayBury = params.canPlayBury;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanJumpAtTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FoundTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::CanJumpAtTarget(bool* FoundTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanJumpAtTarget");
		
		APurlovia_Character_BP_C_CanJumpAtTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundTarget != nullptr)
			*FoundTarget = params.FoundTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerServer");
		
		APurlovia_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> APurlovia_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPGetMultiUseEntries");
		
		APurlovia_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APurlovia_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTryMultiUse");
		
		APurlovia_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.UserConstructionScript");
		
		APurlovia_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.Bury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::Bury(bool PlayAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Bury");
		
		APurlovia_Character_BP_C_Bury_Params params {};
		params.PlayAnim = PlayAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Attack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::ComeOut_Attack(int32_t Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Attack");
		
		APurlovia_Character_BP_C_ComeOut_Attack_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Normal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::ComeOut_Normal(bool PlayAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Normal");
		
		APurlovia_Character_BP_C_ComeOut_Normal_Params params {};
		params.PlayAnim = PlayAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::TryComeOutAttack(int32_t Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutAttack");
		
		APurlovia_Character_BP_C_TryComeOutAttack_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnComeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnComeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnComeOut");
		
		APurlovia_Character_BP_C_OnComeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnNormalJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnNormalJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnNormalJump");
		
		APurlovia_Character_BP_C_OnNormalJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPUnstasis");
		
		APurlovia_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnMovementChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnMovementChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnMovementChanged");
		
		APurlovia_Character_BP_C_OnMovementChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		APurlovia_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateMeshesAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::UpdateMeshesAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateMeshesAfterDelay");
		
		APurlovia_Character_BP_C_UpdateMeshesAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutShortRange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::ComeOutShortRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutShortRange");
		
		APurlovia_Character_BP_C_ComeOutShortRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutLongRange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::ComeOutLongRange(int32_t Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutLongRange");
		
		APurlovia_Character_BP_C_ComeOutLongRange_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnPurloviaSleeped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnPurloviaSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnPurloviaSleeped");
		
		APurlovia_Character_BP_C_OnPurloviaSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.PreComeOutActions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::PreComeOutActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.PreComeOutActions");
		
		APurlovia_Character_BP_C_PreComeOutActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               forceUnbury                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::TryComeOutNormal(bool PlayAnim, bool forceUnbury)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutNormal");
		
		APurlovia_Character_BP_C_TryComeOutNormal_Params params {};
		params.PlayAnim = PlayAnim;
		params.forceUnbury = forceUnbury;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnBuried
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnBuried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnBuried");
		
		APurlovia_Character_BP_C_OnBuried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShowBuryMeshAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::ShowBuryMeshAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShowBuryMeshAfterDelay");
		
		APurlovia_Character_BP_C_ShowBuryMeshAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.HideBuryMeshAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::HideBuryMeshAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.HideBuryMeshAfterDelay");
		
		APurlovia_Character_BP_C_HideBuryMeshAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.FastBury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::FastBury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.FastBury");
		
		APurlovia_Character_BP_C_FastBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnClientConnect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnClientConnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnClientConnect");
		
		APurlovia_Character_BP_C_OnClientConnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnWildServerConnect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnWildServerConnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnWildServerConnect");
		
		APurlovia_Character_BP_C_OnWildServerConnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnTamedServerConnect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::OnTamedServerConnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnTamedServerConnect");
		
		APurlovia_Character_BP_C_OnTamedServerConnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ReceiveBeginPlay");
		
		APurlovia_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Purlovia_Character_BP.Purlovia_Character_BP_C.ExecuteUbergraph_Purlovia_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_C::ExecuteUbergraph_Purlovia_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ExecuteUbergraph_Purlovia_Character_BP");
		
		APurlovia_Character_BP_C_ExecuteUbergraph_Purlovia_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APurlovia_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APurlovia_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Purlovia_Character_BP.Purlovia_Character_BP_C");
		return ptr;
	}

}


