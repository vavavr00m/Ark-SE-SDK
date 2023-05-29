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
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.OnUnlockedExplorerNote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_GlitchCounter_Base_C::OnUnlockedExplorerNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.OnUnlockedExplorerNote");
		
		AMissionType_GlitchCounter_Base_C_OnUnlockedExplorerNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetCompletedGlitchCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CountCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_GlitchCounter_Base_C::GetCompletedGlitchCount(class AShooterCharacter* Character, int32_t* CountCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetCompletedGlitchCount");
		
		AMissionType_GlitchCounter_Base_C_GetCompletedGlitchCount_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountCompleted != nullptr)
			*CountCompleted = params.CountCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnReplicatedMissionDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff_MissionData*                     missionData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_GlitchCounter_Base_C::StaticOnReplicatedMissionDataUpdated(class APrimalBuff_MissionData* missionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnReplicatedMissionDataUpdated");
		
		AMissionType_GlitchCounter_Base_C_StaticOnReplicatedMissionDataUpdated_Params params {};
		params.missionData = missionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnMissionDataInitialized
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff_MissionData*                     missionData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_GlitchCounter_Base_C::StaticOnMissionDataInitialized(class APrimalBuff_MissionData* missionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnMissionDataInitialized");
		
		AMissionType_GlitchCounter_Base_C_StaticOnMissionDataInitialized_Params params {};
		params.missionData = missionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetMissionDisplayName
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ShootCont                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AMissionType_GlitchCounter_Base_C::GetMissionDisplayName(class APlayerController* ShootCont)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetMissionDisplayName");
		
		AMissionType_GlitchCounter_Base_C_GetMissionDisplayName_Params params {};
		params.ShootCont = ShootCont;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetNumGlitchesCompleted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_GlitchCounter_Base_C::GetNumGlitchesCompleted(class AShooterCharacter* ShooterCharacter, int32_t* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetNumGlitchesCompleted");
		
		AMissionType_GlitchCounter_Base_C_GetNumGlitchesCompleted_Params params {};
		params.ShooterCharacter = ShooterCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetIntFromMissionType
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           PlayerPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AMissionType_GlitchCounter_Base_C::GetIntFromMissionType(const class FName& Tag, class AShooterCharacter* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetIntFromMissionType");
		
		AMissionType_GlitchCounter_Base_C_GetIntFromMissionType_Params params {};
		params.Tag = Tag;
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.IsMissionComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMissionType_GlitchCounter_Base_C::IsMissionComplete(class AShooterCharacter* forCharacter, class AShooterPlayerController* ForController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.IsMissionComplete");
		
		AMissionType_GlitchCounter_Base_C_IsMissionComplete_Params params {};
		params.forCharacter = forCharacter;
		params.ForController = ForController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_GlitchCounter_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.UserConstructionScript");
		
		AMissionType_GlitchCounter_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.ExecuteUbergraph_MissionType_GlitchCounter_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_GlitchCounter_Base_C::ExecuteUbergraph_MissionType_GlitchCounter_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.ExecuteUbergraph_MissionType_GlitchCounter_Base");
		
		AMissionType_GlitchCounter_Base_C_ExecuteUbergraph_MissionType_GlitchCounter_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionType_GlitchCounter_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionType_GlitchCounter_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C");
		return ptr;
	}

}


