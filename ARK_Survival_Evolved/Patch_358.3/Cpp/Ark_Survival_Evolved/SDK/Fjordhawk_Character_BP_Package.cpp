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
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetMinimumTimeBetweenRetrieval
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MinTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::GetMinimumTimeBetweenRetrieval(float* MinTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetMinimumTimeBetweenRetrieval");
		
		AFjordhawk_Character_BP_C_GetMinimumTimeBetweenRetrieval_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinTime != nullptr)
			*MinTime = params.MinTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryRetrieveDeadPlayerInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::TryRetrieveDeadPlayerInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryRetrieveDeadPlayerInventory");
		
		AFjordhawk_Character_BP_C_TryRetrieveDeadPlayerInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AFjordhawk_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		AFjordhawk_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLootTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::UpdateLootTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLootTarget");
		
		AFjordhawk_Character_BP_C_UpdateLootTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SetDestination
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewDestination                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::SetDestination(const struct FVector& NewDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SetDestination");
		
		AFjordhawk_Character_BP_C_SetDestination_Params params {};
		params.NewDestination = NewDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetFlight
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BPOnSetFlight(bool bFly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetFlight");
		
		AFjordhawk_Character_BP_C_BPOnSetFlight_Params params {};
		params.bFly = bFly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PreventShowingDinoTooltip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AFjordhawk_Character_BP_C::PreventShowingDinoTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PreventShowingDinoTooltip");
		
		AFjordhawk_Character_BP_C_PreventShowingDinoTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventOrderAllowed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventOrderAllowed");
		
		AFjordhawk_Character_BP_C_BPPreventOrderAllowed_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.MulticastShieldBreakSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Break                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::MulticastShieldBreakSound(bool Break)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.MulticastShieldBreakSound");
		
		AFjordhawk_Character_BP_C_MulticastShieldBreakSound_Params params {};
		params.Break = Break;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BreakShield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::BreakShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BreakShield");
		
		AFjordhawk_Character_BP_C_BreakShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BuffClassIsStun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsStun                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BuffClassIsStun(class UClass* BuffClass, bool* IsStun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BuffClassIsStun");
		
		AFjordhawk_Character_BP_C_BuffClassIsStun_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStun != nullptr)
			*IsStun = params.IsStun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_ForceAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::BP_ForceAllowAddBuff(class UClass* BuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_ForceAllowAddBuff");
		
		AFjordhawk_Character_BP_C_BP_ForceAllowAddBuff_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPostLoadedFromSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::BPPostLoadedFromSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPostLoadedFromSaveGame");
		
		AFjordhawk_Character_BP_C_BPPostLoadedFromSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_PreventCarryingByCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ByCarrier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::BP_PreventCarryingByCharacter(class APrimalCharacter* ByCarrier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_PreventCarryingByCharacter");
		
		AFjordhawk_Character_BP_C_BP_PreventCarryingByCharacter_Params params {};
		params.ByCarrier = ByCarrier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CanEatCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::CanEatCharacter(class APrimalCharacter* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CanEatCharacter");
		
		AFjordhawk_Character_BP_C_CanEatCharacter_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishEating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::FinishEating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishEating");
		
		AFjordhawk_Character_BP_C_FinishEating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnPlayerDied
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::OnPlayerDied(class APrimalCharacter* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnPlayerDied");
		
		AFjordhawk_Character_BP_C_OnPlayerDied_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.StopWaitingForPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::StopWaitingForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.StopWaitingForPlayer");
		
		AFjordhawk_Character_BP_C_StopWaitingForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetApproachPoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InAir                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::GetApproachPoint(class AActor* Target, bool InAir, struct FVector* Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetApproachPoint");
		
		AFjordhawk_Character_BP_C_GetApproachPoint_Params params {};
		params.Target = Target;
		params.InAir = InAir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnDinoCheat");
		
		AFjordhawk_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ClientUpdate(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientUpdate");
		
		AFjordhawk_Character_BP_C_ClientUpdate_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ServerUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ServerUpdate(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ServerUpdate");
		
		AFjordhawk_Character_BP_C_ServerUpdate_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AFjordhawk_Character_BP_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventStasis");
		
		AFjordhawk_Character_BP_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnMassTeleportEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 EventState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TeleportInitiatedByChar                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BPOnMassTeleportEvent(EMassTeleportState EventState, class APrimalCharacter* TeleportInitiatedByChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnMassTeleportEvent");
		
		AFjordhawk_Character_BP_C_BPOnMassTeleportEvent_Params params {};
		params.EventState = EventState;
		params.TeleportInitiatedByChar = TeleportInitiatedByChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RetrievePlayerInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::RetrievePlayerInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RetrievePlayerInventory");
		
		AFjordhawk_Character_BP_C_RetrievePlayerInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishedTame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::FinishedTame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishedTame");
		
		AFjordhawk_Character_BP_C_FinishedTame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.WildLookForCorpses
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::WildLookForCorpses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.WildLookForCorpses");
		
		AFjordhawk_Character_BP_C_WildLookForCorpses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientHideDino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ClientHideDino(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientHideDino");
		
		AFjordhawk_Character_BP_C_ClientHideDino_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPUnstasis");
		
		AFjordhawk_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForLootDrop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::CheckForLootDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForLootDrop");
		
		AFjordhawk_Character_BP_C_CheckForLootDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReacquirePlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ReacquirePlayer(class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReacquirePlayer");
		
		AFjordhawk_Character_BP_C_ReacquirePlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPIsBlockedByShield
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ShotDirection                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBlockAllPointDamage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::BPIsBlockedByShield(struct FHitResult* HitInfo, struct FVector* ShotDirection, bool bBlockAllPointDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPIsBlockedByShield");
		
		AFjordhawk_Character_BP_C_BPIsBlockedByShield_Params params {};
		params.bBlockAllPointDamage = bBlockAllPointDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		if (ShotDirection != nullptr)
			*ShotDirection = params.ShotDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLoot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Loot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor)
	 */
	void AFjordhawk_Character_BP_C::UpdateLoot(bool Loot, const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLoot");
		
		AFjordhawk_Character_BP_C_UpdateLoot_Params params {};
		params.Loot = Loot;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TogglePreyDetection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::TogglePreyDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TogglePreyDetection");
		
		AFjordhawk_Character_BP_C_TogglePreyDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PostLaunchUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::PostLaunchUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PostLaunchUpdate");
		
		AFjordhawk_Character_BP_C_PostLaunchUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLaunchVectors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::VerifyLaunchVectors(const struct FVector& Loc, const struct FVector& Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLaunchVectors");
		
		AFjordhawk_Character_BP_C_VerifyLaunchVectors_Params params {};
		params.Loc = Loc;
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPrepareForLaunchFromShoulder
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     viewLoc                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     viewDir                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BPPrepareForLaunchFromShoulder(struct FVector* viewLoc, struct FVector* viewDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPrepareForLaunchFromShoulder");
		
		AFjordhawk_Character_BP_C_BPPrepareForLaunchFromShoulder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (viewLoc != nullptr)
			*viewLoc = params.viewLoc;
		if (viewDir != nullptr)
			*viewDir = params.viewDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPGetTargetingDesirability
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AFjordhawk_Character_BP_C::BPGetTargetingDesirability(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPGetTargetingDesirability");
		
		AFjordhawk_Character_BP_C_BPGetTargetingDesirability_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForPlayerDeath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::CheckForPlayerDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForPlayerDeath");
		
		AFjordhawk_Character_BP_C_CheckForPlayerDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BPPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPlayDying");
		
		AFjordhawk_Character_BP_C_BPPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateForcedTickSetting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::UpdateForcedTickSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateForcedTickSetting");
		
		AFjordhawk_Character_BP_C_UpdateForcedTickSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetEatTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class AActor* AFjordhawk_Character_BP_C::GetEatTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetEatTarget");
		
		AFjordhawk_Character_BP_C_GetEatTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Net Show Bag
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::NetShowBag(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Net Show Bag");
		
		AFjordhawk_Character_BP_C_NetShowBag_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DinoShoulderMountedLaunch
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     launchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           throwingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::DinoShoulderMountedLaunch(const struct FVector& launchDir, class AShooterCharacter* throwingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DinoShoulderMountedLaunch");
		
		AFjordhawk_Character_BP_C_DinoShoulderMountedLaunch_Params params {};
		params.launchDir = launchDir;
		params.throwingCharacter = throwingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLootTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::VerifyLootTarget(class APrimalCharacter* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLootTarget");
		
		AFjordhawk_Character_BP_C_VerifyLootTarget_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AFjordhawk_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPShouldForceFlee");
		
		AFjordhawk_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PickUpLoot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::PickUpLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PickUpLoot");
		
		AFjordhawk_Character_BP_C_PickUpLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPSetupTamed");
		
		AFjordhawk_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LookForLoot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SearchRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LookForBetterLoot                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::LookForLoot(float SearchRadius, bool LookForBetterLoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LookForLoot");
		
		AFjordhawk_Character_BP_C_LookForLoot_Params params {};
		params.SearchRadius = SearchRadius;
		params.LookForBetterLoot = LookForBetterLoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LootCache
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               StructureToLoot                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::LootCache(class APrimalStructureItemContainer* StructureToLoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LootCache");
		
		AFjordhawk_Character_BP_C_LootCache_Params params {};
		params.StructureToLoot = StructureToLoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveDestroyed");
		
		AFjordhawk_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DropLoot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::DropLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DropLoot");
		
		AFjordhawk_Character_BP_C_DropLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPDinoPostBeginPlay");
		
		AFjordhawk_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindAimedTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AimDir                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::FindAimedTarget(const struct FVector& AimLoc, const struct FVector& AimDir, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindAimedTarget");
		
		AFjordhawk_Character_BP_C_FindAimedTarget_Params params {};
		params.AimLoc = AimLoc;
		params.AimDir = AimDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnLaunched
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LaunchVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bXYOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bZOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnLaunched");
		
		AFjordhawk_Character_BP_C_OnLaunched_Params params {};
		params.LaunchVelocity = LaunchVelocity;
		params.bXYOverride = bXYOverride;
		params.bZOverride = bZOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnClearMountedDino");
		
		AFjordhawk_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetMountedDino");
		
		AFjordhawk_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OverrideRandomWanderLocation");
		
		AFjordhawk_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
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
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindWanderAroundActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::FindWanderAroundActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindWanderAroundActor");
		
		AFjordhawk_Character_BP_C_FindWanderAroundActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Eat  Corpse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DinoToEat                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::EatCorpse(class APrimalCharacter* DinoToEat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Eat  Corpse");
		
		AFjordhawk_Character_BP_C_EatCorpse_Params params {};
		params.DinoToEat = DinoToEat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AFjordhawk_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFjordhawk_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintCanAttack");
		
		AFjordhawk_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RestoreShield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::RestoreShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RestoreShield");
		
		AFjordhawk_Character_BP_C_RestoreShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnRep_HasShield
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::OnRep_HasShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnRep_HasShield");
		
		AFjordhawk_Character_BP_C_OnRep_HasShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AFjordhawk_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPAdjustDamage");
		
		AFjordhawk_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveTick");
		
		AFjordhawk_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Disable Landing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::DisableLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Disable Landing");
		
		AFjordhawk_Character_BP_C_DisableLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.AllowLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::AllowLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.AllowLanding");
		
		AFjordhawk_Character_BP_C_AllowLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnTamedProcessOrder");
		
		AFjordhawk_Character_BP_C_BPOnTamedProcessOrder_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveAnyDamage");
		
		AFjordhawk_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z To Point
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     offsetFromCurrentLocation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::RotateZToPoint(const struct FVector& offsetFromCurrentLocation, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z To Point");
		
		AFjordhawk_Character_BP_C_RotateZToPoint_Params params {};
		params.offsetFromCurrentLocation = offsetFromCurrentLocation;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z to Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::RotateZtoTarget(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z to Target");
		
		AFjordhawk_Character_BP_C_RotateZtoTarget_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UserConstructionScript");
		
		AFjordhawk_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::RotationToTarget__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__FinishedFunc");
		
		AFjordhawk_Character_BP_C_RotationToTarget__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::RotationToTarget__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__UpdateFunc");
		
		AFjordhawk_Character_BP_C_RotationToTarget__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SlowlyRotateZTo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    initialRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::SlowlyRotateZTo(const struct FRotator& TargetRotation, float Time, const struct FRotator& initialRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SlowlyRotateZTo");
		
		AFjordhawk_Character_BP_C_SlowlyRotateZTo_Params params {};
		params.TargetRotation = TargetRotation;
		params.Time = Time;
		params.initialRotation = initialRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.HideDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::HideDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.HideDino");
		
		AFjordhawk_Character_BP_C_HideDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ShowDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::ShowDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ShowDino");
		
		AFjordhawk_Character_BP_C_ShowDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientSetHidden
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ClientSetHidden(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientSetHidden");
		
		AFjordhawk_Character_BP_C_ClientSetHidden_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateVisibilityAfterUnstasis
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::UpdateVisibilityAfterUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateVisibilityAfterUnstasis");
		
		AFjordhawk_Character_BP_C_UpdateVisibilityAfterUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyEscape
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::VerifyEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyEscape");
		
		AFjordhawk_Character_BP_C_VerifyEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryLanding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_Character_BP_C::TryLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryLanding");
		
		AFjordhawk_Character_BP_C_TryLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ExecuteUbergraph_Fjordhawk_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_Character_BP_C::ExecuteUbergraph_Fjordhawk_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ExecuteUbergraph_Fjordhawk_Character_BP");
		
		AFjordhawk_Character_BP_C_ExecuteUbergraph_Fjordhawk_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFjordhawk_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFjordhawk_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Fjordhawk_Character_BP.Fjordhawk_Character_BP_C");
		return ptr;
	}

}


