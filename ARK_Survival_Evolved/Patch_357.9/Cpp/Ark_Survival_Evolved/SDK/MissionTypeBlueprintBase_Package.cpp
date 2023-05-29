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
	 * 		Name   -> Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.PlaySoundForPlayersOnMission
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTypeBlueprintBase_C::PlaySoundForPlayersOnMission(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.PlaySoundForPlayersOnMission");
		
		AMissionTypeBlueprintBase_C_PlaySoundForPlayersOnMission_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPStaticIsPlayerEligibleForMission
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           PlayerPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff_MissionData*                     PlayerMissionData                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutReason                                                  (Parm, OutParm, ZeroConstructor)
	 */
	bool AMissionTypeBlueprintBase_C::BPStaticIsPlayerEligibleForMission(class APlayerController* Controller, class AShooterCharacter* PlayerPawn, class APrimalBuff_MissionData* PlayerMissionData, class FString* OutReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPStaticIsPlayerEligibleForMission");
		
		AMissionTypeBlueprintBase_C_BPStaticIsPlayerEligibleForMission_Params params {};
		params.Controller = Controller;
		params.PlayerPawn = PlayerPawn;
		params.PlayerMissionData = PlayerMissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReason != nullptr)
			*OutReason = params.OutReason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPGetMetaTagsAsInts
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    OutTagIds                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionTypeBlueprintBase_C::BPGetMetaTagsAsInts(TArray<int32_t>* OutTagIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPGetMetaTagsAsInts");
		
		AMissionTypeBlueprintBase_C_BPGetMetaTagsAsInts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTagIds != nullptr)
			*OutTagIds = params.OutTagIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTypeBlueprintBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.UserConstructionScript");
		
		AMissionTypeBlueprintBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.OnMissionPhaseStarted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OldPhase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewPhase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTypeBlueprintBase_C::OnMissionPhaseStarted(const class FName& OldPhase, const class FName& NewPhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.OnMissionPhaseStarted");
		
		AMissionTypeBlueprintBase_C_OnMissionPhaseStarted_Params params {};
		params.OldPhase = OldPhase;
		params.NewPhase = NewPhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPOnMissionDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTypeBlueprintBase_C::BPOnMissionDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPOnMissionDeactivated");
		
		AMissionTypeBlueprintBase_C_BPOnMissionDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.ExecuteUbergraph_MissionTypeBlueprintBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionTypeBlueprintBase_C::ExecuteUbergraph_MissionTypeBlueprintBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.ExecuteUbergraph_MissionTypeBlueprintBase");
		
		AMissionTypeBlueprintBase_C_ExecuteUbergraph_MissionTypeBlueprintBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionTypeBlueprintBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionTypeBlueprintBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionTypeBlueprintBase.MissionTypeBlueprintBase_C");
		return ptr;
	}

}


