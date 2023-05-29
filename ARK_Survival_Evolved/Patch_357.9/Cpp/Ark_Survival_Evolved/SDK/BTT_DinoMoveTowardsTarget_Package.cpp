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
	 * 		Name   -> Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_DinoMoveTowardsTarget_C::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveAbort");
		
		UBTT_DinoMoveTowardsTarget_C_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_DinoMoveTowardsTarget_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveTick");
		
		UBTT_DinoMoveTowardsTarget_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_DinoMoveTowardsTarget_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveExecute");
		
		UBTT_DinoMoveTowardsTarget_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ExecuteUbergraph_BTT_DinoMoveTowardsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_DinoMoveTowardsTarget_C::ExecuteUbergraph_BTT_DinoMoveTowardsTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ExecuteUbergraph_BTT_DinoMoveTowardsTarget");
		
		UBTT_DinoMoveTowardsTarget_C_ExecuteUbergraph_BTT_DinoMoveTowardsTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_DinoMoveTowardsTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_DinoMoveTowardsTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C");
		return ptr;
	}

}


