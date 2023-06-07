﻿/**
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
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FireAoE_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.UserConstructionScript");
		
		ABuff_FireAoE_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FireAoE_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__FinishedFunc");
		
		ABuff_FireAoE_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_FireAoE_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__UpdateFunc");
		
		ABuff_FireAoE_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FireAoE_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.ReceiveTick");
		
		ABuff_FireAoE_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.SetStructure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FireAoE_C::SetStructure(class APrimalStructure* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.SetStructure");
		
		ABuff_FireAoE_C_SetStructure_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.DoFadeOutMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FireAoE_C::DoFadeOutMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.DoFadeOutMesh");
		
		ABuff_FireAoE_C_DoFadeOutMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.CheckForRain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FireAoE_C::CheckForRain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.CheckForRain");
		
		ABuff_FireAoE_C_CheckForRain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FireAoE_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.ReceiveBeginPlay");
		
		ABuff_FireAoE_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FireAoE.Buff_FireAoE_C.ExecuteUbergraph_Buff_FireAoE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FireAoE_C::ExecuteUbergraph_Buff_FireAoE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.ExecuteUbergraph_Buff_FireAoE");
		
		ABuff_FireAoE_C_ExecuteUbergraph_Buff_FireAoE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_FireAoE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_FireAoE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FireAoE.Buff_FireAoE_C");
		return ptr;
	}

}


