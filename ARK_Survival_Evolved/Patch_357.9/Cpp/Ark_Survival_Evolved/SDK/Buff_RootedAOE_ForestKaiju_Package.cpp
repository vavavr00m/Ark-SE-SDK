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
	 * 		Name   -> Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RootedAOE_ForestKaiju_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPActivated");
		
		ABuff_RootedAOE_ForestKaiju_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.RootEnemiesInside
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RootedAOE_ForestKaiju_C::RootEnemiesInside(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.RootEnemiesInside");
		
		ABuff_RootedAOE_ForestKaiju_C_RootEnemiesInside_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RootedAOE_ForestKaiju_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPDeactivated");
		
		ABuff_RootedAOE_ForestKaiju_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RootedAOE_ForestKaiju_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.UserConstructionScript");
		
		ABuff_RootedAOE_ForestKaiju_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RootedAOE_ForestKaiju_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveTick");
		
		ABuff_RootedAOE_ForestKaiju_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RootedAOE_ForestKaiju_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveBeginPlay");
		
		ABuff_RootedAOE_ForestKaiju_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ExecuteUbergraph_Buff_RootedAOE_ForestKaiju
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RootedAOE_ForestKaiju_C::ExecuteUbergraph_Buff_RootedAOE_ForestKaiju(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ExecuteUbergraph_Buff_RootedAOE_ForestKaiju");
		
		ABuff_RootedAOE_ForestKaiju_C_ExecuteUbergraph_Buff_RootedAOE_ForestKaiju_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_RootedAOE_ForestKaiju_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_RootedAOE_ForestKaiju_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C");
		return ptr;
	}

}


