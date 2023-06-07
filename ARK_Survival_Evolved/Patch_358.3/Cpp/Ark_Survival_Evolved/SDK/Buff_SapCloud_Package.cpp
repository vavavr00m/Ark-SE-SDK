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
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.DecreaseSapSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SapCloud_C::DecreaseSapSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.DecreaseSapSize");
		
		ABuff_SapCloud_C_DecreaseSapSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SapCloud_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.ReceiveBeginPlay");
		
		ABuff_SapCloud_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SapCloud_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.UserConstructionScript");
		
		ABuff_SapCloud_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMatIncrease__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_SapCloud_C::Timeline_SapMatIncrease__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMatIncrease__FinishedFunc");
		
		ABuff_SapCloud_C_Timeline_SapMatIncrease__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMatIncrease__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_SapCloud_C::Timeline_SapMatIncrease__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMatIncrease__UpdateFunc");
		
		ABuff_SapCloud_C_Timeline_SapMatIncrease__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMeshDecrease__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_SapCloud_C::Timeline_SapMeshDecrease__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMeshDecrease__FinishedFunc");
		
		ABuff_SapCloud_C_Timeline_SapMeshDecrease__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMeshDecrease__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_SapCloud_C::Timeline_SapMeshDecrease__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMeshDecrease__UpdateFunc");
		
		ABuff_SapCloud_C_Timeline_SapMeshDecrease__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.UpdateSapSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Increase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SapCloud_C::UpdateSapSize(bool Increase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.UpdateSapSize");
		
		ABuff_SapCloud_C_UpdateSapSize_Params params {};
		params.Increase = Increase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SapCloud.Buff_SapCloud_C.ExecuteUbergraph_Buff_SapCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SapCloud_C::ExecuteUbergraph_Buff_SapCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SapCloud.Buff_SapCloud_C.ExecuteUbergraph_Buff_SapCloud");
		
		ABuff_SapCloud_C_ExecuteUbergraph_Buff_SapCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_SapCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SapCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SapCloud.Buff_SapCloud_C");
		return ptr;
	}

}


