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
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWyvern_Character_BP_Fire_Minion_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanRiderAttack");
		
		AWyvern_Character_BP_Fire_Minion_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPNotifySetRider");
		
		AWyvern_Character_BP_Fire_Minion_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AWyvern_Character_BP_Fire_Minion_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintAdjustOutputDamage");
		
		AWyvern_Character_BP_Fire_Minion_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BP_OnSetDeath");
		
		AWyvern_Character_BP_Fire_Minion_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTimerServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTimerServer");
		
		AWyvern_Character_BP_Fire_Minion_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AWyvern_Character_BP_Fire_Minion_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustDamage");
		
		AWyvern_Character_BP_Fire_Minion_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPOnStaminaDrained
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::BPOnStaminaDrained()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPOnStaminaDrained");
		
		AWyvern_Character_BP_Fire_Minion_C_BPOnStaminaDrained_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.OnLanded");
		
		AWyvern_Character_BP_Fire_Minion_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWyvern_Character_BP_Fire_Minion_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanAttack");
		
		AWyvern_Character_BP_Fire_Minion_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ReceiveTick");
		
		AWyvern_Character_BP_Fire_Minion_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetHUDElements");
		
		AWyvern_Character_BP_Fire_Minion_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPDoAttack");
		
		AWyvern_Character_BP_Fire_Minion_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AWyvern_Character_BP_Fire_Minion_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustAttackIndex");
		
		AWyvern_Character_BP_Fire_Minion_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWyvern_Character_BP_Fire_Minion_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTryMultiUse");
		
		AWyvern_Character_BP_Fire_Minion_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AWyvern_Character_BP_Fire_Minion_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetMultiUseEntries");
		
		AWyvern_Character_BP_Fire_Minion_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.UserConstructionScript");
		
		AWyvern_Character_BP_Fire_Minion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.Multi_ClearRider
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::Multi_ClearRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.Multi_ClearRider");
		
		AWyvern_Character_BP_Fire_Minion_C_Multi_ClearRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.DelayedClearRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::DelayedClearRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.DelayedClearRider");
		
		AWyvern_Character_BP_Fire_Minion_C_DelayedClearRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_Fire_Minion_C::ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion");
		
		AWyvern_Character_BP_Fire_Minion_C_ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvern_Character_BP_Fire_Minion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvern_Character_BP_Fire_Minion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C");
		return ptr;
	}

}


