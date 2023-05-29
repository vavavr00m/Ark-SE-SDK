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
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ReceiveBeginPlay");
		
		AMissionTrigger_RaceCheckpoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ResetCheckpoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::ResetCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ResetCheckpoint");
		
		AMissionTrigger_RaceCheckpoint_C_ResetCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive_PURE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RaceCheckpoint_C::IsCheckpointActive_PURE(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive_PURE");
		
		AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_PURE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RaceCheckpoint_C::IsCheckpointActive(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive");
		
		AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DeactivateCheckpoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::DeactivateCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DeactivateCheckpoint");
		
		AMissionTrigger_RaceCheckpoint_C_DeactivateCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.InitCheckpoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::InitCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.InitCheckpoint");
		
		AMissionTrigger_RaceCheckpoint_C_InitCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RaceCheckpoint_C::SetCheckpointEnabled(bool NewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointEnabled");
		
		AMissionTrigger_RaceCheckpoint_C_SetCheckpointEnabled_Params params {};
		params.NewEnabled = NewEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.OnCheckpointHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::OnCheckpointHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.OnCheckpointHit");
		
		AMissionTrigger_RaceCheckpoint_C_OnCheckpointHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointFX_Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AlsoEnable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RaceCheckpoint_C::SetCheckpointFX_Active(bool newActive, bool AlsoEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointFX_Active");
		
		AMissionTrigger_RaceCheckpoint_C_SetCheckpointFX_Active_Params params {};
		params.newActive = newActive;
		params.AlsoEnable = AlsoEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.BP_OverrideTargetingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMissionTrigger_RaceCheckpoint_C::BP_OverrideTargetingLocation(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.BP_OverrideTargetingLocation");
		
		AMissionTrigger_RaceCheckpoint_C_BP_OverrideTargetingLocation_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.UserConstructionScript");
		
		AMissionTrigger_RaceCheckpoint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::Timeline_PulseColor__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__FinishedFunc");
		
		AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::Timeline_PulseColor__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__UpdateFunc");
		
		AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::Timeline_CheckpointActivate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__FinishedFunc");
		
		AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::Timeline_CheckpointActivate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__UpdateFunc");
		
		AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::Timeline_FadeInCheckpoint__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__FinishedFunc");
		
		AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::Timeline_FadeInCheckpoint__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__UpdateFunc");
		
		AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeOut");
		
		AMissionTrigger_RaceCheckpoint_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeIn");
		
		AMissionTrigger_RaceCheckpoint_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::CheckpointPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointPulse");
		
		AMissionTrigger_RaceCheckpoint_C_CheckpointPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::DisableCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint");
		
		AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::EnableCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint");
		
		AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint_NOW
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::DisableCheckpoint_NOW()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint_NOW");
		
		AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_NOW_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint_NOW
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTrigger_RaceCheckpoint_C::EnableCheckpoint_NOW()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint_NOW");
		
		AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_NOW_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointHitServerReaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TriggeringActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RaceCheckpoint_C::CheckpointHitServerReaction(class APrimalCharacter* TriggeringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointHitServerReaction");
		
		AMissionTrigger_RaceCheckpoint_C_CheckpointHitServerReaction_Params params {};
		params.TriggeringActor = TriggeringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTrigger_RaceCheckpoint_C::ExecuteUbergraph_MissionTrigger_RaceCheckpoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint");
		
		AMissionTrigger_RaceCheckpoint_C_ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionTrigger_RaceCheckpoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionTrigger_RaceCheckpoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C");
		return ptr;
	}

}


