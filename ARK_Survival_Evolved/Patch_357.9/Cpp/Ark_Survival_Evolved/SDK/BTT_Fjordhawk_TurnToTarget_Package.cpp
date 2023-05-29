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
	 * 		Name   -> Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_Fjordhawk_TurnToTarget_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ReceiveTick");
		
		UBTT_Fjordhawk_TurnToTarget_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_Fjordhawk_TurnToTarget_C::ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget");
		
		UBTT_Fjordhawk_TurnToTarget_C_ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_Fjordhawk_TurnToTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_Fjordhawk_TurnToTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C");
		return ptr;
	}

}


