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
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.HasSelfBuried
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABasilisk_Character_BP_C::HasSelfBuried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.HasSelfBuried");
		
		ABasilisk_Character_BP_C_HasSelfBuried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventAttachments
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ForItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::BPPreventAttachments(class UObject* ForItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventAttachments");
		
		ABasilisk_Character_BP_C_BPPreventAttachments_Params params {};
		params.ForItem = ForItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.RefreshTamedAttachments
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::RefreshTamedAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.RefreshTamedAttachments");
		
		ABasilisk_Character_BP_C_RefreshTamedAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AllowPlayMontage");
		
		ABasilisk_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPIsHidden
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABasilisk_Character_BP_C::BPIsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPIsHidden");
		
		ABasilisk_Character_BP_C_BPIsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPostLoadedFromSaveGame
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::BPPostLoadedFromSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPostLoadedFromSaveGame");
		
		ABasilisk_Character_BP_C_BPPostLoadedFromSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTurretMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::SetTurretMode(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTurretMode");
		
		ABasilisk_Character_BP_C_SetTurretMode_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABasilisk_Character_BP_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventFirstPerson");
		
		ABasilisk_Character_BP_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetSaddleHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewHidden                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::SetSaddleHidden(bool NewHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetSaddleHidden");
		
		ABasilisk_Character_BP_C_SetSaddleHidden_Params params {};
		params.NewHidden = NewHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyInventoryItemChange");
		
		ABasilisk_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdatedTracedMoundTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::UpdatedTracedMoundTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdatedTracedMoundTransform");
		
		ABasilisk_Character_BP_C_UpdatedTracedMoundTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.GetBuriedMoundTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              HeightAlpha                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct UObject_FTransform ABasilisk_Character_BP_C::GetBuriedMoundTransform(float HeightAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.GetBuriedMoundTransform");
		
		ABasilisk_Character_BP_C_GetBuriedMoundTransform_Params params {};
		params.HeightAlpha = HeightAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Check Unburied State and Add Hungry Ineffectiveness
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      State                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ABasilisk_Character_BP_C::CheckUnburiedStateandAddHungryIneffectiveness(class FString* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Check Unburied State and Add Hungry Ineffectiveness");
		
		ABasilisk_Character_BP_C_CheckUnburiedStateandAddHungryIneffectiveness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.AddTameIneffectiveness
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IneffectivenessValue                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::AddTameIneffectiveness(float IneffectivenessValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AddTameIneffectiveness");
		
		ABasilisk_Character_BP_C_AddTameIneffectiveness_Params params {};
		params.IneffectivenessValue = IneffectivenessValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTailMoundVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::SetTailMoundVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTailMoundVisibility");
		
		ABasilisk_Character_BP_C_SetTailMoundVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.FindNearbyEggs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StartSeeking                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::FindNearbyEggs(bool StartSeeking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.FindNearbyEggs");
		
		ABasilisk_Character_BP_C_FindNearbyEggs_Params params {};
		params.StartSeeking = StartSeeking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPSetupTamed");
		
		ABasilisk_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ABasilisk_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPOnTamedProcessOrder");
		
		ABasilisk_Character_BP_C_BPOnTamedProcessOrder_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayUndergroundEffectPulse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::PlayUndergroundEffectPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayUndergroundEffectPulse");
		
		ABasilisk_Character_BP_C_PlayUndergroundEffectPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.TraceForInvalidGround
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::TraceForInvalidGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.TraceForInvalidGround");
		
		ABasilisk_Character_BP_C_TraceForInvalidGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifySetRider");
		
		ABasilisk_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.MeshVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             InputComponent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::MeshVisibility(class USceneComponent* InputComponent, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MeshVisibility");
		
		ABasilisk_Character_BP_C_MeshVisibility_Params params {};
		params.InputComponent = InputComponent;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearPassenger");
		
		ABasilisk_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearRider");
		
		ABasilisk_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Set Visibility Of Riding and Dino Meshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::SetVisibilityOfRidingandDinoMeshes(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Set Visibility Of Riding and Dino Meshes");
		
		ABasilisk_Character_BP_C_SetVisibilityOfRidingandDinoMeshes_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.OffSetFromBuriedGroundLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABasilisk_Character_BP_C::OffSetFromBuriedGroundLocation(const struct FVector& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.OffSetFromBuriedGroundLocation");
		
		ABasilisk_Character_BP_C_OffSetFromBuriedGroundLocation_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.K2_OnMovementModeChanged");
		
		ABasilisk_Character_BP_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.SharedCanAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::SharedCanAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SharedCanAttack");
		
		ABasilisk_Character_BP_C_SharedCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanRiderAttack");
		
		ABasilisk_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanAttack");
		
		ABasilisk_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABasilisk_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPGetMultiUseEntries");
		
		ABasilisk_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTryMultiUse");
		
		ABasilisk_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.TimeSinceLastAttackForIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABasilisk_Character_BP_C::TimeSinceLastAttackForIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.TimeSinceLastAttackForIndex");
		
		ABasilisk_Character_BP_C_TimeSinceLastAttackForIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldUnbury
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::ShouldUnbury(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldUnbury");
		
		ABasilisk_Character_BP_C_ShouldUnbury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldBury
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::ShouldBury(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldBury");
		
		ABasilisk_Character_BP_C_ShouldBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerServer");
		
		ABasilisk_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Update Bury Mound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldShow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::UpdateBuryMound(bool ShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Update Bury Mound");
		
		ABasilisk_Character_BP_C_UpdateBuryMound_Params params {};
		params.ShouldShow = ShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateUndergroundTrail
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::UpdateUndergroundTrail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateUndergroundTrail");
		
		ABasilisk_Character_BP_C_UpdateUndergroundTrail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerNonDedicated");
		
		ABasilisk_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.InitializeDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::InitializeDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.InitializeDive");
		
		ABasilisk_Character_BP_C_InitializeDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.IsAnimationPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UAnimMontage*>                        Montages                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::IsAnimationPlaying(TArray<class UAnimMontage*>* Montages, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.IsAnimationPlaying");
		
		ABasilisk_Character_BP_C_IsAnimationPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montages != nullptr)
			*Montages = params.Montages;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.DetachChildren
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::DetachChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DetachChildren");
		
		ABasilisk_Character_BP_C_DetachChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::DiveEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveEnd");
		
		ABasilisk_Character_BP_C_DiveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::DiveSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveSetup");
		
		ABasilisk_Character_BP_C_DiveSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::DiveIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveIdle");
		
		ABasilisk_Character_BP_C_DiveIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.CanDive
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DiveInCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABasilisk_Character_BP_C::CanDive(bool DiveInCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.CanDive");
		
		ABasilisk_Character_BP_C_CanDive_Params params {};
		params.DiveInCheck = DiveInCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Get Scaled Affinity Based on Dino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              InputAffinity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABasilisk_Character_BP_C::GetScaledAffinityBasedonDino(float InputAffinity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Get Scaled Affinity Based on Dino");
		
		ABasilisk_Character_BP_C_GetScaledAffinityBasedonDino_Params params {};
		params.InputAffinity = InputAffinity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ABasilisk_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPAdjustDamage");
		
		ABasilisk_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.TameIfAllowed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::TameIfAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.TameIfAllowed");
		
		ABasilisk_Character_BP_C_TameIfAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetEggSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::ResetEggSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetEggSeeking");
		
		ABasilisk_Character_BP_C_ResetEggSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.IncreaseTamingAffinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TamingPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ValueForTaming                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::IncreaseTamingAffinity(class AShooterCharacter* TamingPlayer, float ValueForTaming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.IncreaseTamingAffinity");
		
		ABasilisk_Character_BP_C_IncreaseTamingAffinity_Params params {};
		params.TamingPlayer = TamingPlayer;
		params.ValueForTaming = ValueForTaming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UserConstructionScript");
		
		ABasilisk_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__FinishedFunc");
		
		ABasilisk_Character_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__UpdateFunc");
		
		ABasilisk_Character_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::MoundTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__FinishedFunc");
		
		ABasilisk_Character_BP_C_MoundTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::MoundTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__UpdateFunc");
		
		ABasilisk_Character_BP_C_MoundTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ReceiveBeginPlay");
		
		ABasilisk_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPUnstasis");
		
		ABasilisk_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPDinoPostBeginPlay");
		
		ABasilisk_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_Death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::AnimNotify_Death()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_Death");
		
		ABasilisk_Character_BP_C_AnimNotify_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BP_OnJumpPressed");
		
		ABasilisk_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Proxy_RefreshAttachments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::Proxy_RefreshAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Proxy_RefreshAttachments");
		
		ABasilisk_Character_BP_C_Proxy_RefreshAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoveToEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::MoveToEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoveToEgg");
		
		ABasilisk_Character_BP_C_MoveToEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartUpdateEggSeekTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::StartUpdateEggSeekTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartUpdateEggSeekTimer");
		
		ABasilisk_Character_BP_C_StartUpdateEggSeekTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartEggMoving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::StartEggMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartEggMoving");
		
		ABasilisk_Character_BP_C_StartEggMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.RestartBrain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::RestartBrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.RestartBrain");
		
		ABasilisk_Character_BP_C_RestartBrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateSeekEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::UpdateSeekEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateSeekEgg");
		
		ABasilisk_Character_BP_C_UpdateSeekEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.EatEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::EatEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.EatEgg");
		
		ABasilisk_Character_BP_C_EatEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.DissolveEggItem
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::DissolveEggItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DissolveEggItem");
		
		ABasilisk_Character_BP_C_DissolveEggItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGroundParticleVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               orientToGround                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystem*                             ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OffsetFromRoot                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::PlayGroundParticleVFX(bool orientToGround, class UParticleSystem* ParticleSystem, const struct FVector& OffsetFromRoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGroundParticleVFX");
		
		ABasilisk_Character_BP_C_PlayGroundParticleVFX_Params params {};
		params.orientToGround = orientToGround;
		params.ParticleSystem = ParticleSystem;
		params.OffsetFromRoot = OffsetFromRoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_SetSaddleHidden
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewHidden                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::Multi_SetSaddleHidden(bool NewHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_SetSaddleHidden");
		
		ABasilisk_Character_BP_C_Multi_SetSaddleHidden_Params params {};
		params.NewHidden = NewHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceUpdateBuriedMound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::ForceUpdateBuriedMound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceUpdateBuriedMound");
		
		ABasilisk_Character_BP_C_ForceUpdateBuriedMound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetInterp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BuriedState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::ResetInterp(bool BuriedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetInterp");
		
		ABasilisk_Character_BP_C_ResetInterp_Params params {};
		params.BuriedState = BuriedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGatedFXPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::PlayGatedFXPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGatedFXPulse");
		
		ABasilisk_Character_BP_C_PlayGatedFXPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartMoundVisual
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::StartMoundVisual(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartMoundVisual");
		
		ABasilisk_Character_BP_C_StartMoundVisual_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_ForceDiveEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::Multi_ForceDiveEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_ForceDiveEnd");
		
		ABasilisk_Character_BP_C_Multi_ForceDiveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceDiveEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::ForceDiveEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceDiveEnd");
		
		ABasilisk_Character_BP_C_ForceDiveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartBuried
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::StartBuried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartBuried");
		
		ABasilisk_Character_BP_C_StartBuried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveIn
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::Multi_DiveIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveIn");
		
		ABasilisk_Character_BP_C_Multi_DiveIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Attempt Dive In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::AttemptDiveIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Attempt Dive In");
		
		ABasilisk_Character_BP_C_AttemptDiveIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.AttemptDiveOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::AttemptDiveOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AttemptDiveOut");
		
		ABasilisk_Character_BP_C_AttemptDiveOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveOut
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::Multi_DiveOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveOut");
		
		ABasilisk_Character_BP_C_Multi_DiveOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_EndBury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::AnimNotify_EndBury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_EndBury");
		
		ABasilisk_Character_BP_C_AnimNotify_EndBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_StartBury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABasilisk_Character_BP_C::AnimNotify_StartBury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_StartBury");
		
		ABasilisk_Character_BP_C_AnimNotify_StartBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.Server_TryDive
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewUnderground                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ImmediateOut                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::Server_TryDive(bool NewUnderground, bool ImmediateOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Server_TryDive");
		
		ABasilisk_Character_BP_C_Server_TryDive_Params params {};
		params.NewUnderground = NewUnderground;
		params.ImmediateOut = ImmediateOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Basilisk_Character_BP.Basilisk_Character_BP_C.ExecuteUbergraph_Basilisk_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasilisk_Character_BP_C::ExecuteUbergraph_Basilisk_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ExecuteUbergraph_Basilisk_Character_BP");
		
		ABasilisk_Character_BP_C_ExecuteUbergraph_Basilisk_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABasilisk_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasilisk_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Basilisk_Character_BP.Basilisk_Character_BP_C");
		return ptr;
	}

}


