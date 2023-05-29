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
	 * 		Name   -> Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.Set Custom Depth Stencil ValueForActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StencilValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasCustomDepth                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_EcholocationDetect_C::SetCustomDepthStencilValueForActor(class AActor* Actor, int32_t StencilValue, bool HasCustomDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.Set Custom Depth Stencil ValueForActor");
		
		ABuff_EcholocationDetect_C_SetCustomDepthStencilValueForActor_Params params {};
		params.Actor = Actor;
		params.StencilValue = StencilValue;
		params.HasCustomDepth = HasCustomDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_EcholocationDetect_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BuffTickClient");
		
		ABuff_EcholocationDetect_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_EcholocationDetect_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BPDeactivated");
		
		ABuff_EcholocationDetect_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_EcholocationDetect_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ReceiveBeginPlay");
		
		ABuff_EcholocationDetect_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_EcholocationDetect_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.UserConstructionScript");
		
		ABuff_EcholocationDetect_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ExecuteUbergraph_Buff_EcholocationDetect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_EcholocationDetect_C::ExecuteUbergraph_Buff_EcholocationDetect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ExecuteUbergraph_Buff_EcholocationDetect");
		
		ABuff_EcholocationDetect_C_ExecuteUbergraph_Buff_EcholocationDetect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_EcholocationDetect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_EcholocationDetect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EcholocationDetect.Buff_EcholocationDetect_C");
		return ptr;
	}

}


