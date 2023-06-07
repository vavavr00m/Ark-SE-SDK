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
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.IsPounceTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::IsPounceTarget(class APrimalCharacter* Target, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.IsPounceTarget");
		
		ARaptor_Character_BP_C_IsPounceTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceTargetDodged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::OnPounceTargetDodged(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceTargetDodged");
		
		ARaptor_Character_BP_C_OnPounceTargetDodged_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.OnPinnedBuffEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BuffTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter* BuffTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnPinnedBuffEnded");
		
		ARaptor_Character_BP_C_OnPinnedBuffEnded_Params params {};
		params.BuffTarget = BuffTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::PushbackAfterPounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounceFn");
		
		ARaptor_Character_BP_C_PushbackAfterPounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.HasPouncePreventionBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::HasPouncePreventionBuff(class APrimalCharacter* Target, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.HasPouncePreventionBuff");
		
		ARaptor_Character_BP_C_HasPouncePreventionBuff_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.Add Dodge Buff to PounceTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::AddDodgeBufftoPounceTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Add Dodge Buff to PounceTarget");
		
		ARaptor_Character_BP_C_AddDodgeBufftoPounceTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BPDoAttack");
		
		ARaptor_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.Try Pounce Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::TryPounceTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Try Pounce Target");
		
		ARaptor_Character_BP_C_TryPounceTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.SetCurrentTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::SetCurrentTarget(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.SetCurrentTarget");
		
		ARaptor_Character_BP_C_SetCurrentTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToGround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::InterpToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToGround");
		
		ARaptor_Character_BP_C_InterpToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceLand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::OnPounceLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceLand");
		
		ARaptor_Character_BP_C_OnPounceLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.Set Amount Of Time to Pin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::SetAmountOfTimetoPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Set Amount Of Time to Pin");
		
		ARaptor_Character_BP_C_SetAmountOfTimetoPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARaptor_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanAttack");
		
		ARaptor_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARaptor_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.CanJumpInternal");
		
		ARaptor_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ApplyPackBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::ApplyPackBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ApplyPackBuff");
		
		ARaptor_Character_BP_C_ApplyPackBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::InterpToCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToCharacter");
		
		ARaptor_Character_BP_C_InterpToCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.OnRep_bCanMaul
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::OnRep_bCanMaul()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnRep_bCanMaul");
		
		ARaptor_Character_BP_C_OnRep_bCanMaul_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARaptor_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanRiderAttack");
		
		ARaptor_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BPTimerServer");
		
		ARaptor_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.CheckForPounceTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RetTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::CheckForPounceTarget(class APrimalCharacter** RetTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.CheckForPounceTarget");
		
		ARaptor_Character_BP_C_CheckForPounceTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetTarget != nullptr)
			*RetTarget = params.RetTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.PlayRaptorIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::PlayRaptorIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PlayRaptorIdle");
		
		ARaptor_Character_BP_C_PlayRaptorIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmobilize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::ImmobilizeTarget(class APrimalCharacter* Char, bool bImmobilize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeTarget");
		
		ARaptor_Character_BP_C_ImmobilizeTarget_Params params {};
		params.Char = Char;
		params.bImmobilize = bImmobilize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ARaptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.UserConstructionScript");
		
		ARaptor_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPounceIdle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::ClearPounceIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPounceIdle");
		
		ARaptor_Character_BP_C_ClearPounceIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPouncing
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::ClearPouncing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPouncing");
		
		ARaptor_Character_BP_C_ClearPouncing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.WarpToCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::WarpToCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.WarpToCharacter");
		
		ARaptor_Character_BP_C_WarpToCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeWithDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::ImmobilizeWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeWithDelay");
		
		ARaptor_Character_BP_C_ImmobilizeWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ClearInterpToTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::ClearInterpToTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ClearInterpToTimer");
		
		ARaptor_Character_BP_C_ClearInterpToTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.PreventCharacterMovementInput
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPrevent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::PreventCharacterMovementInput(bool bPrevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PreventCharacterMovementInput");
		
		ARaptor_Character_BP_C_PreventCharacterMovementInput_Params params {};
		params.bPrevent = bPrevent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.SetBuffDeactivateTime
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 PrimalBuff                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::SetBuffDeactivateTime(class APrimalBuff* PrimalBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.SetBuffDeactivateTime");
		
		ARaptor_Character_BP_C_SetBuffDeactivateTime_Params params {};
		params.PrimalBuff = PrimalBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.LandDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::LandDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.LandDelay");
		
		ARaptor_Character_BP_C_LandDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.MovePouncedDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::MovePouncedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.MovePouncedDino");
		
		ARaptor_Character_BP_C_MovePouncedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ForceMoveRider
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::ForceMoveRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ForceMoveRider");
		
		ARaptor_Character_BP_C_ForceMoveRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounce
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::PushbackAfterPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounce");
		
		ARaptor_Character_BP_C_PushbackAfterPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.Do RandomPackRoar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::DoRandomPackRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Do RandomPackRoar");
		
		ARaptor_Character_BP_C_DoRandomPackRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.DrawDebugInfo
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::DrawDebugInfo(const struct FVector& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.DrawDebugInfo");
		
		ARaptor_Character_BP_C_DrawDebugInfo_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.CheckInterpToLocations
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::CheckInterpToLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.CheckInterpToLocations");
		
		ARaptor_Character_BP_C_CheckInterpToLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ServerStartPouncing
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARaptor_Character_BP_C::ServerStartPouncing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ServerStartPouncing");
		
		ARaptor_Character_BP_C_ServerStartPouncing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Raptor_Character_BP.Raptor_Character_BP_C.ExecuteUbergraph_Raptor_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARaptor_Character_BP_C::ExecuteUbergraph_Raptor_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ExecuteUbergraph_Raptor_Character_BP");
		
		ARaptor_Character_BP_C_ExecuteUbergraph_Raptor_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaptor_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaptor_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Raptor_Character_BP.Raptor_Character_BP_C");
		return ptr;
	}

}


