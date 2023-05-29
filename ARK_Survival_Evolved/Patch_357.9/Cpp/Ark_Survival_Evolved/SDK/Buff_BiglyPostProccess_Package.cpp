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
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_BiglyPostProccess_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.GetBuffPostprocessIntensity");
		
		ABuff_BiglyPostProccess_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_BiglyPostProccess_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.AllowPostProcessEffect");
		
		ABuff_BiglyPostProccess_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Is Valid PounceTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BiglyPostProccess_C::IsValidPounceTarget(class APrimalCharacter* Target, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Is Valid PounceTarget");
		
		ABuff_BiglyPostProccess_C_IsValidPounceTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_BiglyPostProccess_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BPGetHUDElements");
		
		ABuff_BiglyPostProccess_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.IsAnotherDinoAlreadyAttached
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BiglyPostProccess_C::IsAnotherDinoAlreadyAttached(class AActor* Target, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.IsAnotherDinoAlreadyAttached");
		
		ABuff_BiglyPostProccess_C_IsAnotherDinoAlreadyAttached_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Can Ignore Traced Actor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanBeIgnored                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BiglyPostProccess_C::CanIgnoreTracedActor(class AActor* Actor, bool* CanBeIgnored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Can Ignore Traced Actor");
		
		ABuff_BiglyPostProccess_C_CanIgnoreTracedActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBeIgnored != nullptr)
			*CanBeIgnored = params.CanBeIgnored;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BiglyPostProccess_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BuffTickClient");
		
		ABuff_BiglyPostProccess_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BiglyPostProccess_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.UserConstructionScript");
		
		ABuff_BiglyPostProccess_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.ExecuteUbergraph_Buff_BiglyPostProccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BiglyPostProccess_C::ExecuteUbergraph_Buff_BiglyPostProccess(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.ExecuteUbergraph_Buff_BiglyPostProccess");
		
		ABuff_BiglyPostProccess_C_ExecuteUbergraph_Buff_BiglyPostProccess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BiglyPostProccess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BiglyPostProccess_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BiglyPostProccess.Buff_BiglyPostProccess_C");
		return ptr;
	}

}


