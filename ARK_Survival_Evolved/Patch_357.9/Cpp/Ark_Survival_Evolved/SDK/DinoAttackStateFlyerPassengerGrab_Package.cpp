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
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Grab Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::GrabCharacter(class APrimalCharacter* Character, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Grab Character");
		
		UDinoAttackStateFlyerPassengerGrab_C_GrabCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Can Grab Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ACharacter                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PassengerSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackStateFlyerPassengerGrab_C::CanGrabCharacter(class APrimalCharacter* ACharacter, int32_t PassengerSeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Can Grab Character");
		
		UDinoAttackStateFlyerPassengerGrab_C_CanGrabCharacter_Params params {};
		params.ACharacter = ACharacter;
		params.PassengerSeatIndex = PassengerSeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Reset State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Reset State");
		
		UDinoAttackStateFlyerPassengerGrab_C_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnEndEvent");
		
		UDinoAttackStateFlyerPassengerGrab_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnTickEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::OnTickEvent(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnTickEvent");
		
		UDinoAttackStateFlyerPassengerGrab_C_OnTickEvent_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.StartAnimationStateEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetRole                                           Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.StartAnimationStateEvent");
		
		UDinoAttackStateFlyerPassengerGrab_C_StartAnimationStateEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.GetAttackSocketLocations
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct UObject_FTransform>                  Locations                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::GetAttackSocketLocations(TArray<struct UObject_FTransform>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.GetAttackSocketLocations");
		
		UDinoAttackStateFlyerPassengerGrab_C_GetAttackSocketLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Find Best Grab Target
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            bestTarget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::FindBestGrabTarget(class APrimalCharacter** bestTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Find Best Grab Target");
		
		UDinoAttackStateFlyerPassengerGrab_C_FindBestGrabTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bestTarget != nullptr)
			*bestTarget = params.bestTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Get Best Passenger Candidate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              Chars                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     SocketWorldPos                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      BestChar                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::GetBestPassengerCandidate(TArray<class AActor*>* Chars, const struct FVector& SocketWorldPos, class AActor** BestChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Get Best Passenger Candidate");
		
		UDinoAttackStateFlyerPassengerGrab_C_GetBestPassengerCandidate_Params params {};
		params.SocketWorldPos = SocketWorldPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chars != nullptr)
			*Chars = params.Chars;
		if (BestChar != nullptr)
			*BestChar = params.BestChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnBeginEvent");
		
		UDinoAttackStateFlyerPassengerGrab_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_C::ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab");
		
		UDinoAttackStateFlyerPassengerGrab_C_ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateFlyerPassengerGrab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateFlyerPassengerGrab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C");
		return ptr;
	}

}


