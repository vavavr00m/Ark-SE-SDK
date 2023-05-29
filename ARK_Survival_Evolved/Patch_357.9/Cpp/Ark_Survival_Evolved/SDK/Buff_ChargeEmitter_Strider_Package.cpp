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
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetHUDElements");
		
		ABuff_ChargeEmitter_Strider_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_ChargeEmitter_Strider_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetMultiUseEntries");
		
		ABuff_ChargeEmitter_Strider_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Get Current Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentCharge                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::GetCurrentCharge(float* CurrentCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Get Current Charge");
		
		ABuff_ChargeEmitter_Strider_C_GetCurrentCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCharge != nullptr)
			*CurrentCharge = params.CurrentCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ChargeVariableEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ChargeVariableEvent");
		
		ABuff_ChargeEmitter_Strider_C_ChargeVariableEvent_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Modify Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               triggerEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeAdded                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::ModifyCharge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Modify Charge");
		
		ABuff_ChargeEmitter_Strider_C_ModifyCharge_Params params {};
		params.SetValue = SetValue;
		params.amount = amount;
		params.multicast = multicast;
		params.triggerEvent = triggerEvent;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeAdded != nullptr)
			*chargeAdded = params.chargeAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Pre Timer Modify Charge Actions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldSkipModify                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::PreTimerModifyChargeActions(bool* shouldSkipModify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Pre Timer Modify Charge Actions");
		
		ABuff_ChargeEmitter_Strider_C_PreTimerModifyChargeActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldSkipModify != nullptr)
			*shouldSkipModify = params.shouldSkipModify;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is Harvest Cooldown Over
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               isOver                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::IsHarvestCooldownOver(bool* isOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is Harvest Cooldown Over");
		
		ABuff_ChargeEmitter_Strider_C_IsHarvestCooldownOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isOver != nullptr)
			*isOver = params.isOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanPlayerHarvest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               toBattery                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canHarvest                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::CanPlayerHarvest(class APlayerController* Controller, bool toBattery, bool* canHarvest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanPlayerHarvest");
		
		ABuff_ChargeEmitter_Strider_C_CanPlayerHarvest_Params params {};
		params.Controller = Controller;
		params.toBattery = toBattery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canHarvest != nullptr)
			*canHarvest = params.canHarvest;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanEmitCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canEmit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::CanEmitCharge(bool* canEmit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanEmitCharge");
		
		ABuff_ChargeEmitter_Strider_C_CanEmitCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canEmit != nullptr)
			*canEmit = params.canEmit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Take Harvesting Charge From Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargeHarvested                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeTaken                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::TakeHarvestingChargeFromCharacter(float chargeHarvested, float* chargeTaken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Take Harvesting Charge From Character");
		
		ABuff_ChargeEmitter_Strider_C_TakeHarvestingChargeFromCharacter_Params params {};
		params.chargeHarvested = chargeHarvested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeTaken != nullptr)
			*chargeTaken = params.chargeTaken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ShouldEnableTimers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickServer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TickClient                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ShouldEnableTimers");
		
		ABuff_ChargeEmitter_Strider_C_ShouldEnableTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tickServer != nullptr)
			*tickServer = params.tickServer;
		if (TickClient != nullptr)
			*TickClient = params.TickClient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.OnChargeHarvested
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountHarvested                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::OnChargeHarvested(float amountHarvested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.OnChargeHarvested");
		
		ABuff_ChargeEmitter_Strider_C_OnChargeHarvested_Params params {};
		params.amountHarvested = amountHarvested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is EmitterAvailableForHarvesting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::IsEmitterAvailableForHarvesting(bool* available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is EmitterAvailableForHarvesting");
		
		ABuff_ChargeEmitter_Strider_C_IsEmitterAvailableForHarvesting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (available != nullptr)
			*available = params.available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Should Update Charge On Timer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldUpdateWithTimer                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::ShouldUpdateChargeOnTimer(bool* shouldUpdateWithTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Should Update Charge On Timer");
		
		ABuff_ChargeEmitter_Strider_C_ShouldUpdateChargeOnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldUpdateWithTimer != nullptr)
			*shouldUpdateWithTimer = params.shouldUpdateWithTimer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanReceive Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canReceive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::CanReceiveCharge(bool* canReceive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanReceive Charge");
		
		ABuff_ChargeEmitter_Strider_C_CanReceiveCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canReceive != nullptr)
			*canReceive = params.canReceive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_Strider_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.UserConstructionScript");
		
		ABuff_ChargeEmitter_Strider_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ExecuteUbergraph_Buff_ChargeEmitter_Strider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Strider_C::ExecuteUbergraph_Buff_ChargeEmitter_Strider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ExecuteUbergraph_Buff_ChargeEmitter_Strider");
		
		ABuff_ChargeEmitter_Strider_C_ExecuteUbergraph_Buff_ChargeEmitter_Strider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitter_Strider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitter_Strider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C");
		return ptr;
	}

}


