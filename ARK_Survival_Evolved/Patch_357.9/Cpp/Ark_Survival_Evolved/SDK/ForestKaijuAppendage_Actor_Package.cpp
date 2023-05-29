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
	 * 		Name   -> Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaijuAppendage_Actor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveTick");
		
		AForestKaijuAppendage_Actor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaijuAppendage_Actor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveBeginPlay");
		
		AForestKaijuAppendage_Actor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AForestKaijuAppendage_Actor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.UserConstructionScript");
		
		AForestKaijuAppendage_Actor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ExecuteUbergraph_ForestKaijuAppendage_Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AForestKaijuAppendage_Actor_C::ExecuteUbergraph_ForestKaijuAppendage_Actor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ExecuteUbergraph_ForestKaijuAppendage_Actor");
		
		AForestKaijuAppendage_Actor_C_ExecuteUbergraph_ForestKaijuAppendage_Actor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AForestKaijuAppendage_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AForestKaijuAppendage_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C");
		return ptr;
	}

}


