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
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPUpdateBestTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      bestTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontSetIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontSetOut                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* AHyaenodon_AIController_BP_C::BPUpdateBestTarget(class AActor* bestTarget, bool dontSetIn, bool* dontSetOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPUpdateBestTarget");
		
		AHyaenodon_AIController_BP_C_BPUpdateBestTarget_Params params {};
		params.bestTarget = bestTarget;
		params.dontSetIn = dontSetIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dontSetOut != nullptr)
			*dontSetOut = params.dontSetOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPSetupFindTarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_AIController_BP_C::BPSetupFindTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPSetupFindTarget");
		
		AHyaenodon_AIController_BP_C_BPSetupFindTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ChangedAITarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_AIController_BP_C::ChangedAITarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ChangedAITarget");
		
		AHyaenodon_AIController_BP_C_ChangedAITarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.IsAThinkingHyaenodon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsAThinker                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_AIController_BP_C::IsAThinkingHyaenodon(bool* IsAThinker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.IsAThinkingHyaenodon");
		
		AHyaenodon_AIController_BP_C_IsAThinkingHyaenodon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAThinker != nullptr)
			*IsAThinker = params.IsAThinker;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPNotifyTargetSet
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_AIController_BP_C::BPNotifyTargetSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPNotifyTargetSet");
		
		AHyaenodon_AIController_BP_C_BPNotifyTargetSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AHyaenodon_AIController_BP_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPGetTargetingDesire");
		
		AHyaenodon_AIController_BP_C_BPGetTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.UserConstructionScript");
		
		AHyaenodon_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_AIController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ReceiveBeginPlay");
		
		AHyaenodon_AIController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ExecuteUbergraph_Hyaenodon_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_AIController_BP_C::ExecuteUbergraph_Hyaenodon_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ExecuteUbergraph_Hyaenodon_AIController_BP");
		
		AHyaenodon_AIController_BP_C_ExecuteUbergraph_Hyaenodon_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHyaenodon_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHyaenodon_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C");
		return ptr;
	}

}


