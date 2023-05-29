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
	 * 		Name   -> Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_StopRunningIfWithinDistance_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveTick");
		
		UBTService_StopRunningIfWithinDistance_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveDeactivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_StopRunningIfWithinDistance_C::ReceiveDeactivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveDeactivation");
		
		UBTService_StopRunningIfWithinDistance_C_ReceiveDeactivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_StopRunningIfWithinDistance_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveActivation");
		
		UBTService_StopRunningIfWithinDistance_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ExecuteUbergraph_BTService_StopRunningIfWithinDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_StopRunningIfWithinDistance_C::ExecuteUbergraph_BTService_StopRunningIfWithinDistance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ExecuteUbergraph_BTService_StopRunningIfWithinDistance");
		
		UBTService_StopRunningIfWithinDistance_C_ExecuteUbergraph_BTService_StopRunningIfWithinDistance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_StopRunningIfWithinDistance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_StopRunningIfWithinDistance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C");
		return ptr;
	}

}


