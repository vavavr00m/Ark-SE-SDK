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
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.CheckForTargetOrDino
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::CheckForTargetOrDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.CheckForTargetOrDino");
		
		AMicroraptor_Character_BP_C_CheckForTargetOrDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMicroraptor_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPShouldForceFlee");
		
		AMicroraptor_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.ReturnToPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::ReturnToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.ReturnToPlayer");
		
		AMicroraptor_Character_BP_C_ReturnToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMicroraptor_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanRiderAttack");
		
		AMicroraptor_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.Add Z Velocity Toward Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::AddZVelocityTowardTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.Add Z Velocity Toward Target");
		
		AMicroraptor_Character_BP_C_AddZVelocityTowardTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.SwapToCorrectAttackAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::SwapToCorrectAttackAnim(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.SwapToCorrectAttackAnim");
		
		AMicroraptor_Character_BP_C_SwapToCorrectAttackAnim_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPCanTargetCorpse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMicroraptor_Character_BP_C::BPCanTargetCorpse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPCanTargetCorpse");
		
		AMicroraptor_Character_BP_C_BPCanTargetCorpse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPDoAttack");
		
		AMicroraptor_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPUnstasis");
		
		AMicroraptor_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPOnSetMountedDino");
		
		AMicroraptor_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.DinoShoulderMountedLaunch
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     launchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           throwingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::DinoShoulderMountedLaunch(const struct FVector& launchDir, class AShooterCharacter* throwingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.DinoShoulderMountedLaunch");
		
		AMicroraptor_Character_BP_C_DinoShoulderMountedLaunch_Params params {};
		params.launchDir = launchDir;
		params.throwingCharacter = throwingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.Get Height Difference To Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              HeightDifference                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsTargetValid                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::GetHeightDifferenceToTarget(float* HeightDifference, bool* IsTargetValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.Get Height Difference To Target");
		
		AMicroraptor_Character_BP_C_GetHeightDifferenceToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeightDifference != nullptr)
			*HeightDifference = params.HeightDifference;
		if (IsTargetValid != nullptr)
			*IsTargetValid = params.IsTargetValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMicroraptor_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanAttack");
		
		AMicroraptor_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.OnLaunched
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LaunchVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bXYOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bZOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.OnLaunched");
		
		AMicroraptor_Character_BP_C_OnLaunched_Params params {};
		params.LaunchVelocity = LaunchVelocity;
		params.bXYOverride = bXYOverride;
		params.bZOverride = bZOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AMicroraptor_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AMicroraptor_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.UserConstructionScript");
		
		AMicroraptor_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.EndGlide
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DontSetPhysicsState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::EndGlide(bool DontSetPhysicsState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.EndGlide");
		
		AMicroraptor_Character_BP_C_EndGlide_Params params {};
		params.DontSetPhysicsState = DontSetPhysicsState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlide
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::StartGlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlide");
		
		AMicroraptor_Character_BP_C_StartGlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPTimerServer");
		
		AMicroraptor_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlideAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::StartGlideAfterDelay(float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlideAfterDelay");
		
		AMicroraptor_Character_BP_C_StartGlideAfterDelay_Params params {};
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.ResetAndAllowJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::ResetAndAllowJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.ResetAndAllowJump");
		
		AMicroraptor_Character_BP_C_ResetAndAllowJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartRaptorJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::StartRaptorJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartRaptorJump");
		
		AMicroraptor_Character_BP_C_StartRaptorJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.DelayedImpulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ImpulseTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::DelayedImpulse(class APrimalCharacter* ImpulseTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.DelayedImpulse");
		
		AMicroraptor_Character_BP_C_DelayedImpulse_Params params {};
		params.ImpulseTarget = ImpulseTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.AnimNotify_NonGlideJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMicroraptor_Character_BP_C::AnimNotify_NonGlideJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.AnimNotify_NonGlideJump");
		
		AMicroraptor_Character_BP_C_AnimNotify_NonGlideJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Microraptor_Character_BP.Microraptor_Character_BP_C.ExecuteUbergraph_Microraptor_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMicroraptor_Character_BP_C::ExecuteUbergraph_Microraptor_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.ExecuteUbergraph_Microraptor_Character_BP");
		
		AMicroraptor_Character_BP_C_ExecuteUbergraph_Microraptor_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMicroraptor_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMicroraptor_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Microraptor_Character_BP.Microraptor_Character_BP_C");
		return ptr;
	}

}


