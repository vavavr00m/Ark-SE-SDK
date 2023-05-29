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
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ResetAttackTimers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::ResetAttackTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ResetAttackTimers");
		
		AFjordhawk_AIController_BP_C_ResetAttackTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.StartWaitingForRespawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::StartWaitingForRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.StartWaitingForRespawn");
		
		AFjordhawk_AIController_BP_C_StartWaitingForRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindTeleportLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterCharacter*                           InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ReturnValue2                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AFjordhawk_AIController_BP_C::FindTeleportLocation(class AShooterCharacter* InputPin, struct FRotator* ReturnValue2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindTeleportLocation");
		
		AFjordhawk_AIController_BP_C_FindTeleportLocation_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue2 != nullptr)
			*ReturnValue2 = params.ReturnValue2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.OnPossess
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_AIController_BP_C::OnPossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.OnPossess");
		
		AFjordhawk_AIController_BP_C_OnPossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.CheckForRespawnedPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::CheckForRespawnedPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.CheckForRespawnedPlayer");
		
		AFjordhawk_AIController_BP_C_CheckForRespawnedPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveDestroyed");
		
		AFjordhawk_AIController_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveBeginPlay");
		
		AFjordhawk_AIController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.PerformanceThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::PerformanceThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.PerformanceThrottledTick");
		
		AFjordhawk_AIController_BP_C_PerformanceThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindLandingLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DesiredLOocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_AIController_BP_C::FindLandingLocation(struct FVector* DesiredLOocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindLandingLocation");
		
		AFjordhawk_AIController_BP_C_FindLandingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredLOocation != nullptr)
			*DesiredLOocation = params.DesiredLOocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPOnFleeEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::BPOnFleeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPOnFleeEvent");
		
		AFjordhawk_AIController_BP_C_BPOnFleeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AFjordhawk_AIController_BP_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPGetTargetingDesire");
		
		AFjordhawk_AIController_BP_C_BPGetTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFjordhawk_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.UserConstructionScript");
		
		AFjordhawk_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ExecuteUbergraph_Fjordhawk_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFjordhawk_AIController_BP_C::ExecuteUbergraph_Fjordhawk_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ExecuteUbergraph_Fjordhawk_AIController_BP");
		
		AFjordhawk_AIController_BP_C_ExecuteUbergraph_Fjordhawk_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFjordhawk_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFjordhawk_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C");
		return ptr;
	}

}


