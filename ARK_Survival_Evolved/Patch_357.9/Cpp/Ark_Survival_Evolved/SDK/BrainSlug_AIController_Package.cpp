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
	 * 		Name   -> Function BrainSlug_AIController.BrainSlug_AIController_C.ChangedAITarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_AIController_C::ChangedAITarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.ChangedAITarget");
		
		ABrainSlug_AIController_C_ChangedAITarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_AIController.BrainSlug_AIController_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABrainSlug_AIController_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.BPGetTargetingDesire");
		
		ABrainSlug_AIController_C_BPGetTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_AIController.BrainSlug_AIController_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_AIController_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.ReceiveDestroyed");
		
		ABrainSlug_AIController_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_AIController.BrainSlug_AIController_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABrainSlug_AIController_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.UserConstructionScript");
		
		ABrainSlug_AIController_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlug_AIController.BrainSlug_AIController_C.ExecuteUbergraph_BrainSlug_AIController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABrainSlug_AIController_C::ExecuteUbergraph_BrainSlug_AIController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.ExecuteUbergraph_BrainSlug_AIController");
		
		ABrainSlug_AIController_C_ExecuteUbergraph_BrainSlug_AIController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABrainSlug_AIController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrainSlug_AIController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrainSlug_AIController.BrainSlug_AIController_C");
		return ptr;
	}

}


