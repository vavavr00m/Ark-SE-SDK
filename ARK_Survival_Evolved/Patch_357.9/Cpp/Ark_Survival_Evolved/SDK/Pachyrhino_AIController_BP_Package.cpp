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
	 * 		Name   -> Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.BPOnFleeEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APachyrhino_AIController_BP_C::BPOnFleeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.BPOnFleeEvent");
		
		APachyrhino_AIController_BP_C_BPOnFleeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APachyrhino_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.UserConstructionScript");
		
		APachyrhino_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ClearAggroAfterTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      targetWhenCalled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APachyrhino_AIController_BP_C::ClearAggroAfterTime(float Time, class AActor* targetWhenCalled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ClearAggroAfterTime");
		
		APachyrhino_AIController_BP_C_ClearAggroAfterTime_Params params {};
		params.Time = Time;
		params.targetWhenCalled = targetWhenCalled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ExecuteUbergraph_Pachyrhino_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APachyrhino_AIController_BP_C::ExecuteUbergraph_Pachyrhino_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ExecuteUbergraph_Pachyrhino_AIController_BP");
		
		APachyrhino_AIController_BP_C_ExecuteUbergraph_Pachyrhino_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APachyrhino_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APachyrhino_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C");
		return ptr;
	}

}


