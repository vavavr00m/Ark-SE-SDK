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
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.BPExcludeAoEActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToConsider                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_MagmaAoE_C::BPExcludeAoEActor(class AActor* ActorToConsider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.BPExcludeAoEActor");
		
		ABuff_MagmaAoE_C_BPExcludeAoEActor_Params params {};
		params.ActorToConsider = ActorToConsider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MagmaAoE_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.UserConstructionScript");
		
		ABuff_MagmaAoE_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_MagmaAoE_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__FinishedFunc");
		
		ABuff_MagmaAoE_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_MagmaAoE_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__UpdateFunc");
		
		ABuff_MagmaAoE_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MagmaAoE_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveTick");
		
		ABuff_MagmaAoE_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.SetStructure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MagmaAoE_C::SetStructure(class APrimalStructure* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.SetStructure");
		
		ABuff_MagmaAoE_C_SetStructure_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.DoFadeOutMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MagmaAoE_C::DoFadeOutMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.DoFadeOutMesh");
		
		ABuff_MagmaAoE_C_DoFadeOutMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.CheckForRain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MagmaAoE_C::CheckForRain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.CheckForRain");
		
		ABuff_MagmaAoE_C_CheckForRain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MagmaAoE_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveBeginPlay");
		
		ABuff_MagmaAoE_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MagmaAoE.Buff_MagmaAoE_C.ExecuteUbergraph_Buff_MagmaAoE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MagmaAoE_C::ExecuteUbergraph_Buff_MagmaAoE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.ExecuteUbergraph_Buff_MagmaAoE");
		
		ABuff_MagmaAoE_C_ExecuteUbergraph_Buff_MagmaAoE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MagmaAoE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MagmaAoE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MagmaAoE.Buff_MagmaAoE_C");
		return ptr;
	}

}


