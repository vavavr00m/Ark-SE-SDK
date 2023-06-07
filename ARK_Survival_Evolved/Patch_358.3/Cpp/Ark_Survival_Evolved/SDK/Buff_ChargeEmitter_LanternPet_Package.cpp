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
	 * 		Name   -> Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ShouldEnableTimers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickServer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TickClient                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_LanternPet_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ShouldEnableTimers");
		
		ABuff_ChargeEmitter_LanternPet_C_ShouldEnableTimers_Params params {};
		
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ChargeVariableEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_LanternPet_C::ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ChargeVariableEvent");
		
		ABuff_ChargeEmitter_LanternPet_C_ChargeVariableEvent_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_LanternPet_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ReceiveDestroyed");
		
		ABuff_ChargeEmitter_LanternPet_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_LanternPet_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.BuffTickServer");
		
		ABuff_ChargeEmitter_LanternPet_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_LanternPet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.UserConstructionScript");
		
		ABuff_ChargeEmitter_LanternPet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ExecuteUbergraph_Buff_ChargeEmitter_LanternPet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_LanternPet_C::ExecuteUbergraph_Buff_ChargeEmitter_LanternPet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ExecuteUbergraph_Buff_ChargeEmitter_LanternPet");
		
		ABuff_ChargeEmitter_LanternPet_C_ExecuteUbergraph_Buff_ChargeEmitter_LanternPet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitter_LanternPet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitter_LanternPet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C");
		return ptr;
	}

}


