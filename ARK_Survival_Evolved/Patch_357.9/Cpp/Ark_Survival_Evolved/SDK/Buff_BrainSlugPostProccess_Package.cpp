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
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPInstigatorReceivedKillingDamage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugPostProccess_C::BPInstigatorReceivedKillingDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPInstigatorReceivedKillingDamage");
		
		ABuff_BrainSlugPostProccess_C_BPInstigatorReceivedKillingDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.InterceptInstigatorPlayerEmoteAnim
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                EmoteAnim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlugPostProccess_C::InterceptInstigatorPlayerEmoteAnim(class UAnimMontage* EmoteAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.InterceptInstigatorPlayerEmoteAnim");
		
		ABuff_BrainSlugPostProccess_C_InterceptInstigatorPlayerEmoteAnim_Params params {};
		params.EmoteAnim = EmoteAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_BrainSlugPostProccess_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPServerHandleNetExecCommand");
		
		ABuff_BrainSlugPostProccess_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffOverrideInventoryAccessInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 InController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInputPressed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlugPostProccess_C::BuffOverrideInventoryAccessInput(class AController* InController, bool bInputPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffOverrideInventoryAccessInput");
		
		ABuff_BrainSlugPostProccess_C_BuffOverrideInventoryAccessInput_Params params {};
		params.InController = InController;
		params.bInputPressed = bInputPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_BrainSlugPostProccess_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.AllowPostProcessEffect");
		
		ABuff_BrainSlugPostProccess_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugPostProccess_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.UserConstructionScript");
		
		ABuff_BrainSlugPostProccess_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugPostProccess_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickClient");
		
		ABuff_BrainSlugPostProccess_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugPostProccess_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickServer");
		
		ABuff_BrainSlugPostProccess_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugPostProccess_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ReceiveBeginPlay");
		
		ABuff_BrainSlugPostProccess_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ExecuteUbergraph_Buff_BrainSlugPostProccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugPostProccess_C::ExecuteUbergraph_Buff_BrainSlugPostProccess(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ExecuteUbergraph_Buff_BrainSlugPostProccess");
		
		ABuff_BrainSlugPostProccess_C_ExecuteUbergraph_Buff_BrainSlugPostProccess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BrainSlugPostProccess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BrainSlugPostProccess_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C");
		return ptr;
	}

}


