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
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateAttackAnimWeights
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::UpdateAttackAnimWeights(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateAttackAnimWeights");
		
		ABigfoot_Character_BP_C_UpdateAttackAnimWeights_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifySetRider");
		
		ABigfoot_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyAddPassenger");
		
		ABigfoot_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearPassenger");
		
		ABigfoot_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABigfoot_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanJumpInternal");
		
		ABigfoot_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::RemovePassengers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers");
		
		ABigfoot_Character_BP_C_RemovePassengers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABigfoot_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanAttack");
		
		ABigfoot_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABigfoot_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanRiderAttack");
		
		ABigfoot_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABigfoot_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTryMultiUse");
		
		ABigfoot_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABigfoot_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPGetMultiUseEntries");
		
		ABigfoot_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Update Non Dedi Limits
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::UpdateNonDediLimits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Update Non Dedi Limits");
		
		ABigfoot_Character_BP_C_UpdateNonDediLimits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateNonDediActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::UpdateNonDediActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateNonDediActive");
		
		ABigfoot_Character_BP_C_UpdateNonDediActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::UpdateCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateCrosshair");
		
		ABigfoot_Character_BP_C_UpdateCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DrawCrosshairIfNeeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::DrawCrosshairIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DrawCrosshairIfNeeded");
		
		ABigfoot_Character_BP_C_DrawCrosshairIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Get Throw Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               overheadThrow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                StartThrowAnim                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::GetThrowAnim(bool overheadThrow, class UAnimMontage** StartThrowAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Get Throw Anim");
		
		ABigfoot_Character_BP_C_GetThrowAnim_Params params {};
		params.overheadThrow = overheadThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartThrowAnim != nullptr)
			*StartThrowAnim = params.StartThrowAnim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsStartThrowAnimPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::IsStartThrowAnimPlaying(bool* IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsStartThrowAnimPlaying");
		
		ABigfoot_Character_BP_C_IsStartThrowAnimPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlaying != nullptr)
			*IsPlaying = params.IsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetStartThrowAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               overheadThrow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                StartThrowAnim                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::GetStartThrowAnim(bool overheadThrow, class UAnimMontage** StartThrowAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetStartThrowAnim");
		
		ABigfoot_Character_BP_C_GetStartThrowAnim_Params params {};
		params.overheadThrow = overheadThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartThrowAnim != nullptr)
			*StartThrowAnim = params.StartThrowAnim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.isGrabbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               isGrabbing                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::isGrabbing(bool* isGrabbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.isGrabbing");
		
		ABigfoot_Character_BP_C_isGrabbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isGrabbing != nullptr)
			*isGrabbing = params.isGrabbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               releasedOverhead                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::OnThrowReleased(bool releasedOverhead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Released");
		
		ABigfoot_Character_BP_C_OnThrowReleased_Params params {};
		params.releasedOverhead = releasedOverhead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overheadThrow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::OnThrowPressed(bool overheadThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Pressed");
		
		ABigfoot_Character_BP_C_OnThrowPressed_Params params {};
		params.overheadThrow = overheadThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsThrowing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               RetValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::IsThrowing(bool* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsThrowing");
		
		ABigfoot_Character_BP_C_IsThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetLaunchDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::GetLaunchDirection(struct FVector* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetLaunchDirection");
		
		ABigfoot_Character_BP_C_GetLaunchDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.LaunchAtTracePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::LaunchAtTracePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.LaunchAtTracePoint");
		
		ABigfoot_Character_BP_C_LaunchAtTracePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowGrabbedCharacters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::ThrowGrabbedCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowGrabbedCharacters");
		
		ABigfoot_Character_BP_C_ThrowGrabbedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ABigfoot_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearRider");
		
		ABigfoot_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPCharacterSleeped");
		
		ABigfoot_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPDoAttack");
		
		ABigfoot_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerStopThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::ServerStopThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerStopThrow");
		
		ABigfoot_Character_BP_C_ServerStopThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTimerNonDedicated");
		
		ABigfoot_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ProcessThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::ProcessThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ProcessThrow");
		
		ABigfoot_Character_BP_C_ProcessThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsBigfootSubmerged
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABigfoot_Character_BP_C::IsBigfootSubmerged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsBigfootSubmerged");
		
		ABigfoot_Character_BP_C_IsBigfootSubmerged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ShortestAngleDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ShortestAngleDistance");
		
		ABigfoot_Character_BP_C_ShortestAngleDistance_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABigfoot_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetClampedLookDir");
		
		ABigfoot_Character_BP_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::ThrowTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowTrace");
		
		ABigfoot_Character_BP_C_ThrowTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CarryDino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            dinoToCarry                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::CarryDino(class APrimalCharacter* dinoToCarry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CarryDino");
		
		ABigfoot_Character_BP_C_CarryDino_Params params {};
		params.dinoToCarry = dinoToCarry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABigfoot_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ABigfoot_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABigfoot_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleOnStopTargeting");
		
		ABigfoot_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanThrowRidingDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canThrow                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::CanThrowRidingDino(bool* canThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanThrowRidingDino");
		
		ABigfoot_Character_BP_C_CanThrowRidingDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canThrow != nullptr)
			*canThrow = params.canThrow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABigfoot_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ABigfoot_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPModifyHarvestDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalHarvestingComponent*                  harvestComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              inDamage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABigfoot_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent* harvestComponent, float inDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPModifyHarvestDamage");
		
		ABigfoot_Character_BP_C_BPModifyHarvestDamage_Params params {};
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
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UserConstructionScript");
		
		ABigfoot_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_266
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_266()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_266");
		
		ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_266_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_265
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_265()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_265");
		
		ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_265_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_264
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_264()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_264");
		
		ABigfoot_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_264_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263");
		
		ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262");
		
		ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestGrab
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ButtonHeld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::ServerRequestGrab(bool ButtonHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestGrab");
		
		ABigfoot_Character_BP_C_ServerRequestGrab_Params params {};
		params.ButtonHeld = ButtonHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestThrow
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ButtonHeld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::ServerRequestThrow(bool ButtonHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestThrow");
		
		ABigfoot_Character_BP_C_ServerRequestThrow_Params params {};
		params.ButtonHeld = ButtonHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::DelayedGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedGrab");
		
		ABigfoot_Character_BP_C_DelayedGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Server_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ThrowInstant                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool ThrowInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Server_TraceTargetDir");
		
		ABigfoot_Character_BP_C_Server_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		params.ThrowInstant = ThrowInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_TraceTargetDir");
		
		ABigfoot_Character_BP_C_Multi_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Request Throw
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHolding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ToggleAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               overheadThrow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::RequestThrow(bool IsHolding, bool ToggleAction, bool overheadThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Request Throw");
		
		ABigfoot_Character_BP_C_RequestThrow_Params params {};
		params.IsHolding = IsHolding;
		params.ToggleAction = ToggleAction;
		params.overheadThrow = overheadThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.StartThrowIdle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overheadThrow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::StartThrowIdle(bool overheadThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.StartThrowIdle");
		
		ABigfoot_Character_BP_C_StartThrowIdle_Params params {};
		params.overheadThrow = overheadThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_SetPreventMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewPreventMovement                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_SetPreventMovement");
		
		ABigfoot_Character_BP_C_Multi_SetPreventMovement_Params params {};
		params.NewPreventMovement = NewPreventMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ClearThrow
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::ClearThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ClearThrow");
		
		ABigfoot_Character_BP_C_ClearThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedThrowPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::DelayedThrowPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedThrowPress");
		
		ABigfoot_Character_BP_C_DelayedThrowPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedClearThrowing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::DelayedClearThrowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedClearThrowing");
		
		ABigfoot_Character_BP_C_DelayedClearThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ABigfoot_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers_Server
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABigfoot_Character_BP_C::RemovePassengers_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers_Server");
		
		ABigfoot_Character_BP_C_RemovePassengers_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ExecuteUbergraph_Bigfoot_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABigfoot_Character_BP_C::ExecuteUbergraph_Bigfoot_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ExecuteUbergraph_Bigfoot_Character_BP");
		
		ABigfoot_Character_BP_C_ExecuteUbergraph_Bigfoot_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABigfoot_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABigfoot_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bigfoot_Character_BP.Bigfoot_Character_BP_C");
		return ptr;
	}

}


