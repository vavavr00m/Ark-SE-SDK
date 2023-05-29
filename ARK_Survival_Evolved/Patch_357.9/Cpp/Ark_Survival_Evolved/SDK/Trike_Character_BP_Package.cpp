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
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::StopRamAttackBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup");
		
		ATrike_Character_BP_C_StopRamAttackBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::GetRammingSpeedMax(float* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax");
		
		ATrike_Character_BP_C_GetRammingSpeedMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Tick                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::CanTickStartedRam(bool* Tick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam");
		
		ATrike_Character_BP_C_CanTickStartedRam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tick != nullptr)
			*Tick = params.Tick;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::StartRamAttackBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup");
		
		ATrike_Character_BP_C_StartRamAttackBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATrike_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllowedToRam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::CanStartRamAttack(bool* AllowedToRam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack");
		
		ATrike_Character_BP_C_CanStartRamAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedToRam != nullptr)
			*AllowedToRam = params.AllowedToRam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATrike_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ATrike_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RamBuildupTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RamDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::HandleRamStarted(float RamBuildupTime, float RamDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started");
		
		ATrike_Character_BP_C_HandleRamStarted_Params params {};
		params.RamBuildupTime = RamBuildupTime;
		params.RamDuration = RamDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::HandleRamEnded(bool HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended");
		
		ATrike_Character_BP_C_HandleRamEnded_Params params {};
		params.HitSomething = HitSomething;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::CalculateRamDuration(float HoldTime, float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration");
		
		ATrike_Character_BP_C_CalculateRamDuration_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATrike_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack");
		
		ATrike_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATrike_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ATrike_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATrike_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting");
		
		ATrike_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATrike_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");
		
		ATrike_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATrike_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack");
		
		ATrike_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         AsPrimitiveComponent                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::GetPawnRootComponent(class AActor* Target, class UPrimitiveComponent** AsPrimitiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent");
		
		ATrike_Character_BP_C_GetPawnRootComponent_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPrimitiveComponent != nullptr)
			*AsPrimitiveComponent = params.AsPrimitiveComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATrike_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage");
		
		ATrike_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.UserConstructionScript");
		
		ATrike_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       DamageTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::DoReflectDamage(class APawn* DamageTarget, float Damage, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage");
		
		ATrike_Character_BP_C_DoReflectDamage_Params params {};
		params.DamageTarget = DamageTarget;
		params.Damage = Damage;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        FromBone                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::MulticastReflectDamageEffect(const class FName& FromBone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect");
		
		ATrike_Character_BP_C_MulticastReflectDamageEffect_Params params {};
		params.FromBone = FromBone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay");
		
		ATrike_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::CheckRivalryTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick");
		
		ATrike_Character_BP_C_CheckRivalryTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::RamBuildupEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent");
		
		ATrike_Character_BP_C_RamBuildupEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed");
		
		ATrike_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrike_Character_BP_C::ExecuteUbergraph_Trike_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP");
		
		ATrike_Character_BP_C_ExecuteUbergraph_Trike_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrike_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrike_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trike_Character_BP.Trike_Character_BP_C");
		return ptr;
	}

}


