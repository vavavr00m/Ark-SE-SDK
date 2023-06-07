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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CheckTeamAndToggleTroughVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::CheckTeamAndToggleTroughVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CheckTeamAndToggleTroughVisibility");
		
		AMilkGlider_Character_BP_C_CheckTeamAndToggleTroughVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bNurseVisualActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::OnRep_bNurseVisualActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bNurseVisualActive");
		
		AMilkGlider_Character_BP_C_OnRep_bNurseVisualActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceivePossessed");
		
		AMilkGlider_Character_BP_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void AMilkGlider_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InterceptInputEvent");
		
		AMilkGlider_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.PickUpBabies
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::PickUpBabies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.PickUpBabies");
		
		AMilkGlider_Character_BP_C_PickUpBabies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetPassengerDinoAdditionalOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMilkGlider_Character_BP_C::BPGetPassengerDinoAdditionalOffset(class APrimalDinoCharacter* Passenger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetPassengerDinoAdditionalOffset");
		
		AMilkGlider_Character_BP_C_BPGetPassengerDinoAdditionalOffset_Params params {};
		params.Passenger = Passenger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AMilkGlider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideRandomWanderLocation");
		
		AMilkGlider_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateNursingFx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUseOverrideIsNursing                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsNursing                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::UpdateNursingFx(bool bUseOverrideIsNursing, bool IsNursing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateNursingFx");
		
		AMilkGlider_Character_BP_C_UpdateNursingFx_Params params {};
		params.bUseOverrideIsNursing = bUseOverrideIsNursing;
		params.IsNursing = IsNursing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanNurseDino
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        OtherDino                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::CanNurseDino(class APrimalDinoCharacter* OtherDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanNurseDino");
		
		AMilkGlider_Character_BP_C_CanNurseDino_Params params {};
		params.OtherDino = OtherDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPApplyCharacterSnapshot
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      To                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Pose                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCollisionOn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPApplyCharacterSnapshot(class UPrimalItem* Item, class AActor* To, const struct FVector& Offset, float MaxExtent, int32_t Pose, bool bCollisionOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPApplyCharacterSnapshot");
		
		AMilkGlider_Character_BP_C_BPApplyCharacterSnapshot_Params params {};
		params.Item = Item;
		params.To = To;
		params.Offset = Offset;
		params.MaxExtent = MaxExtent;
		params.Pose = Pose;
		params.bCollisionOn = bCollisionOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.TryToPlayBabyPassengerCuddleAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::TryToPlayBabyPassengerCuddleAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.TryToPlayBabyPassengerCuddleAnim");
		
		AMilkGlider_Character_BP_C_TryToPlayBabyPassengerCuddleAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateClientCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::UpdateClientCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateClientCameraShake");
		
		AMilkGlider_Character_BP_C_UpdateClientCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AMilkGlider_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPAdjustAttackIndex");
		
		AMilkGlider_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetAIGlideDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetAIGlideDirection(struct FVector* MoveDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetAIGlideDirection");
		
		AMilkGlider_Character_BP_C_GetAIGlideDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveDirection != nullptr)
			*MoveDirection = params.MoveDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMilkGlider_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldForceFlee");
		
		AMilkGlider_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideFinalWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     outVec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideFinalWanderLocation");
		
		AMilkGlider_Character_BP_C_OverrideFinalWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outVec != nullptr)
			*outVec = params.outVec;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.NotifyTribesOfBabyStolen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        StolenBaby                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    TheifSC                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::NotifyTribesOfBabyStolen(class APrimalDinoCharacter* StolenBaby, class AShooterPlayerController* TheifSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.NotifyTribesOfBabyStolen");
		
		AMilkGlider_Character_BP_C_NotifyTribesOfBabyStolen_Params params {};
		params.StolenBaby = StolenBaby;
		params.TheifSC = TheifSC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetBonesToHideOnAllocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class FName> AMilkGlider_Character_BP_C::BPGetBonesToHideOnAllocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetBonesToHideOnAllocation");
		
		AMilkGlider_Character_BP_C_BPGetBonesToHideOnAllocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Til Pass Hide Seats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::TickTilPassHideSeats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Til Pass Hide Seats");
		
		AMilkGlider_Character_BP_C_TickTilPassHideSeats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UnhidePassengerSeats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::UnhidePassengerSeats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UnhidePassengerSeats");
		
		AMilkGlider_Character_BP_C_UnhidePassengerSeats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerGlideClearFoilage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreGlideCheck                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ServerGlideClearFoilage(bool bIgnoreGlideCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerGlideClearFoilage");
		
		AMilkGlider_Character_BP_C_ServerGlideClearFoilage_Params params {};
		params.bIgnoreGlideCheck = bIgnoreGlideCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_ForceAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::BP_ForceAllowAddBuff(class UClass* BuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_ForceAllowAddBuff");
		
		AMilkGlider_Character_BP_C_BP_ForceAllowAddBuff_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.HasGeyserBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bHasBuff                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::HasGeyserBuff(bool* bHasBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.HasGeyserBuff");
		
		AMilkGlider_Character_BP_C_HasGeyserBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasBuff != nullptr)
			*bHasBuff = params.bHasBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AMilkGlider_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AMilkGlider_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearPassenger");
		
		AMilkGlider_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyAddPassenger");
		
		AMilkGlider_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCarriedDinoBabyRescaled
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        AgingCarriedDino                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPCarriedDinoBabyRescaled(class APrimalDinoCharacter* AgingCarriedDino, float NewAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCarriedDinoBabyRescaled");
		
		AMilkGlider_Character_BP_C_BPCarriedDinoBabyRescaled_Params params {};
		params.AgingCarriedDino = AgingCarriedDino;
		params.NewAge = NewAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ScaleBabyDino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        BabyToScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ScaleBabyDino(class APrimalDinoCharacter* BabyToScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ScaleBabyDino");
		
		AMilkGlider_Character_BP_C_ScaleBabyDino_Params params {};
		params.BabyToScale = BabyToScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Can Parachute
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ToStart                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowedToParachute                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::CanParachute(bool ToStart, bool* bAllowedToParachute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Can Parachute");
		
		AMilkGlider_Character_BP_C_CanParachute_Params params {};
		params.ToStart = ToStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAllowedToParachute != nullptr)
			*bAllowedToParachute = params.bAllowedToParachute;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RotateToZeroPitch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::RotateToZeroPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RotateToZeroPitch");
		
		AMilkGlider_Character_BP_C_RotateToZeroPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bWantsToParachute
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::OnRep_bWantsToParachute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bWantsToParachute");
		
		AMilkGlider_Character_BP_C_OnRep_bWantsToParachute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetParachuteState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bStartParachute                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseCD                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::SetParachuteState(bool bStartParachute, bool bUseCD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetParachuteState");
		
		AMilkGlider_Character_BP_C_SetParachuteState_Params params {};
		params.bStartParachute = bStartParachute;
		params.bUseCD = bUseCD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMilkGlider_Character_BP_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideCharacterNewFallVelocity");
		
		AMilkGlider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanStartAutoGlide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bStartGlide                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::CanStartAutoGlide(bool* bStartGlide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanStartAutoGlide");
		
		AMilkGlider_Character_BP_C_CanStartAutoGlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStartGlide != nullptr)
			*bStartGlide = params.bStartGlide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateSlidingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::UpdateSlidingState(EMovementMode NewMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateSlidingState");
		
		AMilkGlider_Character_BP_C_UpdateSlidingState_Params params {};
		params.NewMovementMode = NewMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AMilkGlider_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetGravityZScale");
		
		AMilkGlider_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        AgingCarriedDino                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PreviousAge                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPNotifyCarriedDinoBabyAgeIncrement(class APrimalDinoCharacter* AgingCarriedDino, float PreviousAge, float NewAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement");
		
		AMilkGlider_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params params {};
		params.AgingCarriedDino = AgingCarriedDino;
		params.PreviousAge = PreviousAge;
		params.NewAge = NewAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetNextValidEmptySeat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SeatNum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetNextValidEmptySeat(int32_t* SeatNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetNextValidEmptySeat");
		
		AMilkGlider_Character_BP_C_GetNextValidEmptySeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeatNum != nullptr)
			*SeatNum = params.SeatNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AMilkGlider_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPServerHandleNetExecCommand");
		
		AMilkGlider_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPClientDoMultiUse");
		
		AMilkGlider_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Valid Baby Dino for Passenger
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoToCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSkipAllyCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSkipDistanceCheck                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ValidPassenger                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::IsValidBabyDinoforPassenger(class APrimalDinoCharacter* DinoToCheck, bool bSkipAllyCheck, bool bSkipDistanceCheck, bool* ValidPassenger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Valid Baby Dino for Passenger");
		
		AMilkGlider_Character_BP_C_IsValidBabyDinoforPassenger_Params params {};
		params.DinoToCheck = DinoToCheck;
		params.bSkipAllyCheck = bSkipAllyCheck;
		params.bSkipDistanceCheck = bSkipDistanceCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidPassenger != nullptr)
			*ValidPassenger = params.ValidPassenger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCanTakePassenger
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PassengerSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForcePassenger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowFlyersAndWaterDinos                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCanTakePassenger");
		
		AMilkGlider_Character_BP_C_BPCanTakePassenger_Params params {};
		params.Character = Character;
		params.PassengerSeatIndex = PassengerSeatIndex;
		params.bForcePassenger = bForcePassenger;
		params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintDrawFloatingHUD");
		
		AMilkGlider_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetDivingRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetDivingRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetDivingRatio");
		
		AMilkGlider_Character_BP_C_GetDivingRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOVInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVInterpSpeedIn                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AMilkGlider_Character_BP_C::BPModifyFOVInterpSpeed(float FOVInterpSpeedIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOVInterpSpeed");
		
		AMilkGlider_Character_BP_C_BPModifyFOVInterpSpeed_Params params {};
		params.FOVInterpSpeedIn = FOVInterpSpeedIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetFOVRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetFOVRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetFOVRatio");
		
		AMilkGlider_Character_BP_C_GetFOVRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AMilkGlider_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOV");
		
		AMilkGlider_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsDiving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDiving                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::IsDiving(bool* bIsDiving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsDiving");
		
		AMilkGlider_Character_BP_C_IsDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsDiving != nullptr)
			*bIsDiving = params.bIsDiving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDiveBomb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGlide                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanAttack                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::CanDiveBomb(bool bFromGlide, bool* CanAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDiveBomb");
		
		AMilkGlider_Character_BP_C_CanDiveBomb_Params params {};
		params.bFromGlide = bFromGlide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAttack != nullptr)
			*CanAttack = params.CanAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPDoAttack");
		
		AMilkGlider_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMilkGlider_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnStartJump");
		
		AMilkGlider_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanDive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::CanDive(bool* bCanDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDive");
		
		AMilkGlider_Character_BP_C_CanDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanDive != nullptr)
			*bCanDive = params.bCanDive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingPitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentPitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewPitch                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetGlidingPitch(float Delta, float CurrentPitch, float* NewPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingPitch");
		
		AMilkGlider_Character_BP_C_GetGlidingPitch_Params params {};
		params.Delta = Delta;
		params.CurrentPitch = CurrentPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewPitch != nullptr)
			*NewPitch = params.NewPitch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyLevelUp");
		
		AMilkGlider_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearGliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::ClearGliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearGliding");
		
		AMilkGlider_Character_BP_C_ClearGliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DisableNursing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::DisableNursing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DisableNursing");
		
		AMilkGlider_Character_BP_C_DisableNursing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EnableNursing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::EnableNursing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EnableNursing");
		
		AMilkGlider_Character_BP_C_EnableNursing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AMilkGlider_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetMultiUseEntries");
		
		AMilkGlider_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTryMultiUse");
		
		AMilkGlider_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldLimitRightDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMilkGlider_Character_BP_C::BPShouldLimitRightDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldLimitRightDirection");
		
		AMilkGlider_Character_BP_C_BPShouldLimitRightDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveRight");
		
		AMilkGlider_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyRightDirectionInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     directionInput                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMilkGlider_Character_BP_C::BPModifyRightDirectionInput(struct FVector* directionInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyRightDirectionInput");
		
		AMilkGlider_Character_BP_C_BPModifyRightDirectionInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (directionInput != nullptr)
			*directionInput = params.directionInput;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintOverrideWantsToRun
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInputWantsToRun                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintOverrideWantsToRun");
		
		AMilkGlider_Character_BP_C_BlueprintOverrideWantsToRun_Params params {};
		params.bInputWantsToRun = bInputWantsToRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintCanRiderAttack");
		
		AMilkGlider_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMilkGlider_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPHandleOnStopTargeting");
		
		AMilkGlider_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LookDirectionForJumpRefactor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     OutDir                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::LookDirectionForJumpRefactor(struct FVector* OutDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LookDirectionForJumpRefactor");
		
		AMilkGlider_Character_BP_C_LookDirectionForJumpRefactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDir != nullptr)
			*OutDir = params.OutDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMilkGlider_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveForward");
		
		AMilkGlider_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Sliding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsSliding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::IsSliding(bool* bIsSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Sliding");
		
		AMilkGlider_Character_BP_C_IsSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSliding != nullptr)
			*bIsSliding = params.bIsSliding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetSlideDecayMultiplierFromSlope
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MultiRatioDirection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CharSlideAngle                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetSlideDecayMultiplierFromSlope(float* MultiRatioDirection, float* CharSlideAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetSlideDecayMultiplierFromSlope");
		
		AMilkGlider_Character_BP_C_GetSlideDecayMultiplierFromSlope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiRatioDirection != nullptr)
			*MultiRatioDirection = params.MultiRatioDirection;
		if (CharSlideAngle != nullptr)
			*CharSlideAngle = params.CharSlideAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Sliding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ClientTickSliding(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Sliding");
		
		AMilkGlider_Character_BP_C_ClientTickSliding_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server Tick Sliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ServerTickSliding(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server Tick Sliding");
		
		AMilkGlider_Character_BP_C_ServerTickSliding_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Clear Sliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::ClearSliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Clear Sliding");
		
		AMilkGlider_Character_BP_C_ClearSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartSliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGlide                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bJustDiveBombed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::StartSliding(bool bFromGlide, bool bJustDiveBombed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartSliding");
		
		AMilkGlider_Character_BP_C_StartSliding_Params params {};
		params.bFromGlide = bFromGlide;
		params.bJustDiveBombed = bJustDiveBombed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanSlide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bCanSlide                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::CanSlide(bool* bCanSlide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanSlide");
		
		AMilkGlider_Character_BP_C_CanSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanSlide != nullptr)
			*bCanSlide = params.bCanSlide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanChargeJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bCanJump                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::CanChargeJump(bool* bCanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanChargeJump");
		
		AMilkGlider_Character_BP_C_CanChargeJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanJump != nullptr)
			*bCanJump = params.bCanJump;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideFlyingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMilkGlider_Character_BP_C::BPOverrideFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideFlyingVelocity");
		
		AMilkGlider_Character_BP_C_BPOverrideFlyingVelocity_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AMilkGlider_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		AMilkGlider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Get Gliding Rotation Rate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetGlidingRotationRate(float* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Get Gliding Rotation Rate");
		
		AMilkGlider_Character_BP_C_GetGlidingRotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AMilkGlider_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		AMilkGlider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingSpeedRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::GetGlidingSpeedRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingSpeedRatio");
		
		AMilkGlider_Character_BP_C_GetGlidingSpeedRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Gliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ClientTickGliding(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Gliding");
		
		AMilkGlider_Character_BP_C_ClientTickGliding_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_CurrentExtraState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::OnRep_CurrentExtraState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_CurrentExtraState");
		
		AMilkGlider_Character_BP_C_OnRep_CurrentExtraState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::InputRunReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunReleased");
		
		AMilkGlider_Character_BP_C_InputRunReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::InputRunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunPressed");
		
		AMilkGlider_Character_BP_C_InputRunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerServer");
		
		AMilkGlider_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsGliding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsGliding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::IsGliding(bool* bIsGliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsGliding");
		
		AMilkGlider_Character_BP_C_IsGliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsGliding != nullptr)
			*bIsGliding = params.bIsGliding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Force ForwardInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::TickForceForwardInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Force ForwardInput");
		
		AMilkGlider_Character_BP_C_TickForceForwardInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanGlide
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ToStart                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowedToGlide                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::CanGlide(bool ToStart, bool* bAllowedToGlide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanGlide");
		
		AMilkGlider_Character_BP_C_CanGlide_Params params {};
		params.ToStart = ToStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAllowedToGlide != nullptr)
			*bAllowedToGlide = params.bAllowedToGlide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartGlide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromSlide                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::StartGlide(bool bFromSlide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartGlide");
		
		AMilkGlider_Character_BP_C_StartGlide_Params params {};
		params.bFromSlide = bFromSlide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerTickGliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ServerTickGliding(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerTickGliding");
		
		AMilkGlider_Character_BP_C_ServerTickGliding_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AMilkGlider_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetHUDElements");
		
		AMilkGlider_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerNonDedicated");
		
		AMilkGlider_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifySetRider");
		
		AMilkGlider_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCharacterSleeped");
		
		AMilkGlider_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearRider");
		
		AMilkGlider_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerStopJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::ServerStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerStopJump");
		
		AMilkGlider_Character_BP_C_ServerStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AMilkGlider_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetLaunchDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      CalcActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMilkGlider_Character_BP_C::GetLaunchDirection(class AActor* CalcActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetLaunchDirection");
		
		AMilkGlider_Character_BP_C_GetLaunchDirection_Params params {};
		params.CalcActor = CalcActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LaunchAtTracePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::LaunchAtTracePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LaunchAtTracePoint");
		
		AMilkGlider_Character_BP_C_LaunchAtTracePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::ExecuteJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteJump");
		
		AMilkGlider_Character_BP_C_ExecuteJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Prep Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::PrepJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Prep Jump");
		
		AMilkGlider_Character_BP_C_PrepJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShouldStopJumpRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMilkGlider_Character_BP_C::ShouldStopJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShouldStopJumpRotation");
		
		AMilkGlider_Character_BP_C_ShouldStopJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bClamp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMilkGlider_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, bool bClamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetClampedLookDir");
		
		AMilkGlider_Character_BP_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		params.bClamp = bClamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.JumpingTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::JumpingTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.JumpingTrace");
		
		AMilkGlider_Character_BP_C_JumpingTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShortestAngleDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShortestAngleDistance");
		
		AMilkGlider_Character_BP_C_ShortestAngleDistance_Params params {};
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
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Find Leap Dir
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector AMilkGlider_Character_BP_C::FindLeapDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Find Leap Dir");
		
		AMilkGlider_Character_BP_C_FindLeapDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UserConstructionScript");
		
		AMilkGlider_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_RunToggle_K2Node_InputActionEvent_200
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::InpActEvt_RunToggle_K2Node_InputActionEvent_200()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_RunToggle_K2Node_InputActionEvent_200");
		
		AMilkGlider_Character_BP_C_InpActEvt_RunToggle_K2Node_InputActionEvent_200_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_199
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::InpActEvt_Run_K2Node_InputActionEvent_199()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_199");
		
		AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_199_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_198
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::InpActEvt_Run_K2Node_InputActionEvent_198()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_198");
		
		AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_198_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpPressed");
		
		AMilkGlider_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpReleased");
		
		AMilkGlider_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::DelayedPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedPress");
		
		AMilkGlider_Character_BP_C_DelayedPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Request Jump Response
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHoldingJump                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ChargeTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::RequestJumpResponse(bool isHoldingJump, float ChargeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Request Jump Response");
		
		AMilkGlider_Character_BP_C_RequestJumpResponse_Params params {};
		params.isHoldingJump = isHoldingJump;
		params.ChargeTime = ChargeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_SetPreventMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewPreventMovement                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_SetPreventMovement");
		
		AMilkGlider_Character_BP_C_Multi_SetPreventMovement_Params params {};
		params.NewPreventMovement = NewPreventMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedClearJumping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::DelayedClearJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedClearJumping");
		
		AMilkGlider_Character_BP_C_DelayedClearJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               JumpInstant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TraceTargetDir");
		
		AMilkGlider_Character_BP_C_Server_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		params.JumpInstant = JumpInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartJumpIdle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::StartJumpIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartJumpIdle");
		
		AMilkGlider_Character_BP_C_StartJumpIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceImmediateClear                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ClearJump(bool ForceImmediateClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearJump");
		
		AMilkGlider_Character_BP_C_ClearJump_Params params {};
		params.ForceImmediateClear = ForceImmediateClear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_TraceTargetDir");
		
		AMilkGlider_Character_BP_C_Multi_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateAllJumpRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::UpdateAllJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateAllJumpRotation");
		
		AMilkGlider_Character_BP_C_UpdateAllJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateJumpRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::UpdateJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateJumpRotation");
		
		AMilkGlider_Character_BP_C_UpdateJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RequestJumpReady
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::RequestJumpReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RequestJumpReady");
		
		AMilkGlider_Character_BP_C_RequestJumpReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_JumpStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::Event_JumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_JumpStart");
		
		AMilkGlider_Character_BP_C_Event_JumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StartGlide
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewSpeedMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Multi_StartGlide(const struct FRotator& NewRotation, float NewSpeedMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StartGlide");
		
		AMilkGlider_Character_BP_C_Multi_StartGlide_Params params {};
		params.NewRotation = NewRotation;
		params.NewSpeedMultiplier = NewSpeedMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::Server_RunInputPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputPressed");
		
		AMilkGlider_Character_BP_C_Server_RunInputPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputReleased
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::Server_RunInputReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputReleased");
		
		AMilkGlider_Character_BP_C_Server_RunInputReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceiveBeginPlay");
		
		AMilkGlider_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TargetInput
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPressed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Server_TargetInput(bool IsPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TargetInput");
		
		AMilkGlider_Character_BP_C_Server_TargetInput_Params params {};
		params.IsPressed = IsPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPUnstasis");
		
		AMilkGlider_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DiveBomb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromDive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::DiveBomb(bool bFromDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DiveBomb");
		
		AMilkGlider_Character_BP_C_DiveBomb_Params params {};
		params.bFromDive = bFromDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OwningClientDiveBombCameraShake
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromDiveBomb                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::OwningClientDiveBombCameraShake(float Intensity, bool bFromDiveBomb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OwningClientDiveBombCameraShake");
		
		AMilkGlider_Character_BP_C_OwningClientDiveBombCameraShake_Params params {};
		params.Intensity = Intensity;
		params.bFromDiveBomb = bFromDiveBomb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnJumpPressedReroute
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::OnJumpPressedReroute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnJumpPressedReroute");
		
		AMilkGlider_Character_BP_C_OnJumpPressedReroute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.WaterJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::WaterJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.WaterJump");
		
		AMilkGlider_Character_BP_C_WaterJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnDied_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnDied_Event");
		
		AMilkGlider_Character_BP_C_OnDied_Event_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_SetParachuteInput
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ParachuteInputVector                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Server_SetParachuteInput(const struct FVector& ParachuteInputVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_SetParachuteInput");
		
		AMilkGlider_Character_BP_C_Server_SetParachuteInput_Params params {};
		params.ParachuteInputVector = ParachuteInputVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetToStoredVelocity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::SetToStoredVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetToStoredVelocity");
		
		AMilkGlider_Character_BP_C_SetToStoredVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::Event_Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_Init");
		
		AMilkGlider_Character_BP_C_Event_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StealBaby
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Multi_StealBaby(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StealBaby");
		
		AMilkGlider_Character_BP_C_Multi_StealBaby_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.AIJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::AIJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.AIJump");
		
		AMilkGlider_Character_BP_C_AIJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EventStopPara
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::EventStopPara()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EventStopPara");
		
		AMilkGlider_Character_BP_C_EventStopPara_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BellyFlopJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::BellyFlopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BellyFlopJump");
		
		AMilkGlider_Character_BP_C_BellyFlopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_UpdateNursingFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsNursing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::Multi_UpdateNursingFX(bool bNewIsNursing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_UpdateNursingFX");
		
		AMilkGlider_Character_BP_C_Multi_UpdateNursingFX_Params params {};
		params.bNewIsNursing = bNewIsNursing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DropAllBabes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::DropAllBabes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DropAllBabes");
		
		AMilkGlider_Character_BP_C_DropAllBabes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerDropBabes
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    Shooter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ServerDropBabes(class AShooterPlayerController* Shooter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerDropBabes");
		
		AMilkGlider_Character_BP_C_ServerDropBabes_Params params {};
		params.Shooter = Shooter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerPickUpBabes
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    Shooter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ServerPickUpBabes(class AShooterPlayerController* Shooter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerPickUpBabes");
		
		AMilkGlider_Character_BP_C_ServerPickUpBabes_Params params {};
		params.Shooter = Shooter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopSlideSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::Event_StopSlideSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopSlideSound");
		
		AMilkGlider_Character_BP_C_Event_StopSlideSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopGlideSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::Event_StopGlideSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopGlideSound");
		
		AMilkGlider_Character_BP_C_Event_StopGlideSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopParaSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMilkGlider_Character_BP_C::Event_StopParaSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopParaSound");
		
		AMilkGlider_Character_BP_C_Event_StopParaSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteUbergraph_MilkGlider_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMilkGlider_Character_BP_C::ExecuteUbergraph_MilkGlider_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteUbergraph_MilkGlider_Character_BP");
		
		AMilkGlider_Character_BP_C_ExecuteUbergraph_MilkGlider_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMilkGlider_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMilkGlider_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MilkGlider_Character_BP.MilkGlider_Character_BP_C");
		return ptr;
	}

}


