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
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPDidClearCarriedCharacter");
		
		AArgent_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.Allow Passenger in Slot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::AllowPassengerinSlot(class APrimalCharacter* Character, int32_t Slot, bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Allow Passenger in Slot");
		
		AArgent_Character_BP_C_AllowPassengerinSlot_Params params {};
		params.Character = Character;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPAllowCarryCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            checkCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AArgent_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter* checkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPAllowCarryCharacter");
		
		AArgent_Character_BP_C_BPAllowCarryCharacter_Params params {};
		params.checkCharacter = checkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.Remove Passenger In Slot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::RemovePassengerInSlot(int32_t Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Remove Passenger In Slot");
		
		AArgent_Character_BP_C_RemovePassengerInSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.Get Passenger
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Char                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::GetPassenger(int32_t Slot, class APrimalCharacter** Char)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Get Passenger");
		
		AArgent_Character_BP_C_GetPassenger_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Char != nullptr)
			*Char = params.Char;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.Has Passenger In Slot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::HasPassengerInSlot(int32_t Slot, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Has Passenger In Slot");
		
		AArgent_Character_BP_C_HasPassengerInSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearRider");
		
		AArgent_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPDoAttack");
		
		AArgent_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.UpdateCarryAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AArgent_Character_BP_C::UpdateCarryAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.UpdateCarryAnim");
		
		AArgent_Character_BP_C_UpdateCarryAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AArgent_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AArgent_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.ReceiveBeginPlay");
		
		AArgent_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearPassenger");
		
		AArgent_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.ReceiveTick");
		
		AArgent_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AArgent_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BlueprintCanRiderAttack");
		
		AArgent_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPCanTakePassenger
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PassengerSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForcePassenger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowFlyersAndWaterDinos                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AArgent_Character_BP_C::BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPCanTakePassenger");
		
		AArgent_Character_BP_C_BPCanTakePassenger_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyAddPassenger");
		
		AArgent_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AArgent_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.UserConstructionScript");
		
		AArgent_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.MulticastOnAttack
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AArgent_Character_BP_C::MulticastOnAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.MulticastOnAttack");
		
		AArgent_Character_BP_C_MulticastOnAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.MulticastUpdateCarryAnim
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AArgent_Character_BP_C::MulticastUpdateCarryAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.MulticastUpdateCarryAnim");
		
		AArgent_Character_BP_C_MulticastUpdateCarryAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Argent_Character_BP.Argent_Character_BP_C.ExecuteUbergraph_Argent_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArgent_Character_BP_C::ExecuteUbergraph_Argent_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.ExecuteUbergraph_Argent_Character_BP");
		
		AArgent_Character_BP_C_ExecuteUbergraph_Argent_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArgent_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArgent_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Argent_Character_BP.Argent_Character_BP_C");
		return ptr;
	}

}


