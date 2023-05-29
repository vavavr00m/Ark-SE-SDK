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
	 * 		Name   -> Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BasilReplaceAttackTargetingAndFollowDistance_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.ReceiveEndPlay");
		
		ABuff_BasilReplaceAttackTargetingAndFollowDistance_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BasilReplaceAttackTargetingAndFollowDistance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.ReceiveBeginPlay");
		
		ABuff_BasilReplaceAttackTargetingAndFollowDistance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BasilReplaceAttackTargetingAndFollowDistance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.UserConstructionScript");
		
		ABuff_BasilReplaceAttackTargetingAndFollowDistance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.ExecuteUbergraph_Buff_BasilReplaceAttackTargetingAndFollowDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BasilReplaceAttackTargetingAndFollowDistance_C::ExecuteUbergraph_Buff_BasilReplaceAttackTargetingAndFollowDistance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C.ExecuteUbergraph_Buff_BasilReplaceAttackTargetingAndFollowDistance");
		
		ABuff_BasilReplaceAttackTargetingAndFollowDistance_C_ExecuteUbergraph_Buff_BasilReplaceAttackTargetingAndFollowDistance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BasilReplaceAttackTargetingAndFollowDistance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BasilReplaceAttackTargetingAndFollowDistance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C");
		return ptr;
	}

}


