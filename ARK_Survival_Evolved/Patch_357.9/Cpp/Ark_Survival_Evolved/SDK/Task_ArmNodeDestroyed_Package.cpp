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
	 * 		Name   -> Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ArmNodeDestroyed_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ReceiveExecute");
		
		UTask_ArmNodeDestroyed_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ArmNodeDestroyed_C::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ReceiveAbort");
		
		UTask_ArmNodeDestroyed_C_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ExecuteUbergraph_Task_ArmNodeDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ArmNodeDestroyed_C::ExecuteUbergraph_Task_ArmNodeDestroyed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ExecuteUbergraph_Task_ArmNodeDestroyed");
		
		UTask_ArmNodeDestroyed_C_ExecuteUbergraph_Task_ArmNodeDestroyed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_ArmNodeDestroyed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_ArmNodeDestroyed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C");
		return ptr;
	}

}


