﻿/**
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
	 * 		Name   -> Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ForestKaijuHealForLeash_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ReceiveExecute");
		
		UTask_ForestKaijuHealForLeash_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ExecuteUbergraph_Task_ForestKaijuHealForLeash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ForestKaijuHealForLeash_C::ExecuteUbergraph_Task_ForestKaijuHealForLeash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ExecuteUbergraph_Task_ForestKaijuHealForLeash");
		
		UTask_ForestKaijuHealForLeash_C_ExecuteUbergraph_Task_ForestKaijuHealForLeash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_ForestKaijuHealForLeash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_ForestKaijuHealForLeash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C");
		return ptr;
	}

}

