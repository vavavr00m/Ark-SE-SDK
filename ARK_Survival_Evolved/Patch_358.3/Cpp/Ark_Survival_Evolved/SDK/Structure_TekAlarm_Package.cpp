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
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.InitSavedTribeLoggingSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::InitSavedTribeLoggingSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.InitSavedTribeLoggingSettings");
		
		AStructure_TekAlarm_C_InitSavedTribeLoggingSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    currentRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDecrease                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NextRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetNextRotation(const struct FRotator& currentRotation, bool bDecrease, bool Roll, bool Pitch, bool Yaw, struct FRotator* NextRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextRotation");
		
		AStructure_TekAlarm_C_GetNextRotation_Params params {};
		params.currentRotation = currentRotation;
		params.bDecrease = bDecrease;
		params.Roll = Roll;
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextRotation != nullptr)
			*NextRotation = params.NextRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::OnRep_CurrentStructureDetectBoxRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxRotation");
		
		AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::OnRep_CurrentTargetDetectBoxRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxRotation");
		
		AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAutoDeactivation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateAutoDeactivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAutoDeactivation");
		
		AStructure_TekAlarm_C_UpdateAutoDeactivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetTargetTypesToChange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<ETekAlarmTargetTypes>                       ActiveTypes                                                (Parm, OutParm, ZeroConstructor)
	 * 		TArray<bool>                                       ShouldActivate                                             (Parm, OutParm, ZeroConstructor)
	 */
	void AStructure_TekAlarm_C::GetTargetTypesToChange(TArray<ETekAlarmTargetTypes>* ActiveTypes, TArray<bool>* ShouldActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTargetTypesToChange");
		
		AStructure_TekAlarm_C_GetTargetTypesToChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveTypes != nullptr)
			*ActiveTypes = params.ActiveTypes;
		if (ShouldActivate != nullptr)
			*ShouldActivate = params.ShouldActivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.ToggleKeypadLink
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    OptionalShooterPC                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::ToggleKeypadLink(class AShooterPlayerController* OptionalShooterPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ToggleKeypadLink");
		
		AStructure_TekAlarm_C_ToggleKeypadLink_Params params {};
		params.OptionalShooterPC = OptionalShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AlignBoxedToWorldUp
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::AlignBoxedToWorldUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AlignBoxedToWorldUp");
		
		AStructure_TekAlarm_C_AlignBoxedToWorldUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxExtent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::OnRep_CurrentStructureDetectBoxExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxExtent");
		
		AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxExtent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::OnRep_CurrentTargetDetectBoxExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxExtent");
		
		AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Is Target Detect Box
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsBox                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::IsTargetDetectBox(bool* bIsBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Is Target Detect Box");
		
		AStructure_TekAlarm_C_IsTargetDetectBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsBox != nullptr)
			*bIsBox = params.bIsBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.IsStructureDetectBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsBox                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::IsStructureDetectBox(bool* bIsBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsStructureDetectBox");
		
		AStructure_TekAlarm_C_IsStructureDetectBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsBox != nullptr)
			*bIsBox = params.bIsBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.SetTargetDetectBoxExtent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::SetTargetDetectBoxExtent(const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetTargetDetectBoxExtent");
		
		AStructure_TekAlarm_C_SetTargetDetectBoxExtent_Params params {};
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Set Target Detect Sphere Radius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::SetTargetDetectSphereRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Set Target Detect Sphere Radius");
		
		AStructure_TekAlarm_C_SetTargetDetectSphereRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectBoxExtent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::SetStructureDetectBoxExtent(const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectBoxExtent");
		
		AStructure_TekAlarm_C_SetStructureDetectBoxExtent_Params params {};
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectSphereRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::SetStructureDetectSphereRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectSphereRadius");
		
		AStructure_TekAlarm_C_SetStructureDetectSphereRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSetting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ETekAlarmTargetTypes                               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Integer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetTribeLoggingSetting(ETekAlarmTargetTypes Type, int32_t* Integer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSetting");
		
		AStructure_TekAlarm_C_GetTribeLoggingSetting_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Integer != nullptr)
			*Integer = params.Integer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MakeReplicatedTribeLoggingSettings
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TribeLoggingSettings                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::MakeReplicatedTribeLoggingSettings(int32_t* TribeLoggingSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MakeReplicatedTribeLoggingSettings");
		
		AStructure_TekAlarm_C_MakeReplicatedTribeLoggingSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TribeLoggingSettings != nullptr)
			*TribeLoggingSettings = params.TribeLoggingSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetMappedTribeLoggingInteger
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            TribeLoggingState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TribeLoggingInteger                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetMappedTribeLoggingInteger(int32_t TribeLoggingState, int32_t* TribeLoggingInteger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetMappedTribeLoggingInteger");
		
		AStructure_TekAlarm_C_GetMappedTribeLoggingInteger_Params params {};
		params.TribeLoggingState = TribeLoggingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TribeLoggingInteger != nullptr)
			*TribeLoggingInteger = params.TribeLoggingInteger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPChangedActorTeam
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::BPChangedActorTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPChangedActorTeam");
		
		AStructure_TekAlarm_C_BPChangedActorTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveDestroyed");
		
		AStructure_TekAlarm_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Has Any PINsSet
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::HasAnyPINsSet(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Has Any PINsSet");
		
		AStructure_TekAlarm_C_HasAnyPINsSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_ShowAreaVisuals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::OnRep_ShowAreaVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_ShowAreaVisuals");
		
		AStructure_TekAlarm_C_OnRep_ShowAreaVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateAreaVisualsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibility");
		
		AStructure_TekAlarm_C_UpdateAreaVisualsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::BPContainerDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerDeactivated");
		
		AStructure_TekAlarm_C_BPContainerDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSettingForTargetType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ETekAlarmTargetTypes                               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetTribeLoggingSettingForTargetType(ETekAlarmTargetTypes Type, int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSettingForTargetType");
		
		AStructure_TekAlarm_C_GetTribeLoggingSettingForTargetType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLogNameForType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ETekAlarmTargetTypes                               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor)
	 */
	void AStructure_TekAlarm_C::GetTribeLogNameForType(ETekAlarmTargetTypes Type, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLogNameForType");
		
		AStructure_TekAlarm_C_GetTribeLogNameForType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.TryTribeLogging
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETekAlarmTargetTypes                               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::TryTribeLogging(ETekAlarmTargetTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.TryTribeLogging");
		
		AStructure_TekAlarm_C_TryTribeLogging_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextTribeLoggingSetting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentSetting                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NewSetting                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetNextTribeLoggingSetting(int32_t CurrentSetting, int32_t* NewSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextTribeLoggingSetting");
		
		AStructure_TekAlarm_C_GetNextTribeLoggingSetting_Params params {};
		params.CurrentSetting = CurrentSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSetting != nullptr)
			*NewSetting = params.NewSetting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribe Logging String
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      TypeName                                                   (Parm, ZeroConstructor)
	 * 		int32_t                                            CooldownInSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void AStructure_TekAlarm_C::GetTribeLoggingString(const class FString& TypeName, int32_t CooldownInSeconds, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribe Logging String");
		
		AStructure_TekAlarm_C_GetTribeLoggingString_Params params {};
		params.TypeName = TypeName;
		params.CooldownInSeconds = CooldownInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.HasPendingPINActivation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::HasPendingPINActivation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.HasPendingPINActivation");
		
		AStructure_TekAlarm_C_HasPendingPINActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ETekAlarmTargetTypes                               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTekAlarmPINData                            ret                                                        (Parm, OutParm)
	 */
	void AStructure_TekAlarm_C::GetPINDataByType(ETekAlarmTargetTypes Type, struct FTekAlarmPINData* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByType");
		
		AStructure_TekAlarm_C_GetPINDataByType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.SetPINCodeInPINData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            pinCode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETekAlarmTargetTypes                               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::SetPINCodeInPINData(int32_t pinCode, ETekAlarmTargetTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetPINCodeInPINData");
		
		AStructure_TekAlarm_C_SetPINCodeInPINData_Params params {};
		params.pinCode = pinCode;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetMultiUseTitleWithDelay
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              DelaySeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Title                                                      (Parm)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void AStructure_TekAlarm_C::GetMultiUseTitleWithDelay(float DelaySeconds, const class FText& Title, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetMultiUseTitleWithDelay");
		
		AStructure_TekAlarm_C_GetMultiUseTitleWithDelay_Params params {};
		params.DelaySeconds = DelaySeconds;
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByPIN
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            PIN                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTekAlarmPINData                            Res                                                        (Parm, OutParm)
	 * 		int32_t                                            retIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetPINDataByPIN(int32_t PIN, struct FTekAlarmPINData* Res, int32_t* retIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByPIN");
		
		AStructure_TekAlarm_C_GetPINDataByPIN_Params params {};
		params.PIN = PIN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Res != nullptr)
			*Res = params.Res;
		if (retIndex != nullptr)
			*retIndex = params.retIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateDelay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CurrentDelay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewDelay                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::CalcuateDelay(float CurrentDelay, float* NewDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateDelay");
		
		AStructure_TekAlarm_C_CalcuateDelay_Params params {};
		params.CurrentDelay = CurrentDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewDelay != nullptr)
			*NewDelay = params.NewDelay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.PinCodeFlagsToString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            PinCodesFlag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void AStructure_TekAlarm_C::PinCodeFlagsToString(int32_t PinCodesFlag, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.PinCodeFlagsToString");
		
		AStructure_TekAlarm_C_PinCodeFlagsToString_Params params {};
		params.PinCodesFlag = PinCodesFlag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Was Pin Code Bit Triggered
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Bit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Activated                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Deactivated                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::WasPinCodeBitTriggered(int32_t Bit, bool* ret, bool* Activated, bool* Deactivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Was Pin Code Bit Triggered");
		
		AStructure_TekAlarm_C_WasPinCodeBitTriggered_Params params {};
		params.Bit = Bit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (Activated != nullptr)
			*Activated = params.Activated;
		if (Deactivated != nullptr)
			*Deactivated = params.Deactivated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.IsRelevantPinCode
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            pinCode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDeactivation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::IsRelevantPinCode(int32_t pinCode, bool* ret, bool* IsDeactivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsRelevantPinCode");
		
		AStructure_TekAlarm_C_IsRelevantPinCode_Params params {};
		params.pinCode = pinCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (IsDeactivation != nullptr)
			*IsDeactivation = params.IsDeactivation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.IsAreaVisualsLocallyVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::IsAreaVisualsLocallyVisible(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsAreaVisualsLocallyVisible");
		
		AStructure_TekAlarm_C_IsAreaVisualsLocallyVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateMeshAlpha Fn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Mesh1                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMeshComponent*                        Mesh2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeSince                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::CalcuateMeshAlphaFn(class UStaticMeshComponent* Mesh1, class UStaticMeshComponent* Mesh2, double TimeSince, float* Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateMeshAlpha Fn");
		
		AStructure_TekAlarm_C_CalcuateMeshAlphaFn_Params params {};
		params.Mesh1 = Mesh1;
		params.Mesh2 = Mesh2;
		params.TimeSince = TimeSince;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alpha != nullptr)
			*Alpha = params.Alpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::BPContainerActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerActivated");
		
		AStructure_TekAlarm_C_BPContainerActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.SetActivateStateToStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            PrimalStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               toggle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewActivateState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::SetActivateStateToStructure(class APrimalStructure* PrimalStructure, bool toggle, bool NewActivateState, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetActivateStateToStructure");
		
		AStructure_TekAlarm_C_SetActivateStateToStructure_Params params {};
		params.PrimalStructure = PrimalStructure;
		params.toggle = toggle;
		params.NewActivateState = NewActivateState;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data For Structure Detect Area
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetOctreeDataForStructureDetectArea(float* Radius, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data For Structure Detect Area");
		
		AStructure_TekAlarm_C_GetOctreeDataForStructureDetectArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structures in Area to Goal State
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateStructuresinAreatoGoalState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structures in Area to Goal State");
		
		AStructure_TekAlarm_C_UpdateStructuresinAreatoGoalState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structure Detect Sphere
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateStructureDetectSphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structure Detect Sphere");
		
		AStructure_TekAlarm_C_UpdateStructureDetectSphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateStructureDetectBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateStructureDetectBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateStructureDetectBox");
		
		AStructure_TekAlarm_C_UpdateStructureDetectBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.SwitchStructureDetectStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::SwitchStructureDetectStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SwitchStructureDetectStyle");
		
		AStructure_TekAlarm_C_SwitchStructureDetectStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.IsActorInBoxArea
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBoxComponent*                               BoxComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::IsActorInBoxArea(class AActor* Actor, class UBoxComponent* BoxComponent, bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsActorInBoxArea");
		
		AStructure_TekAlarm_C_IsActorInBoxArea_Params params {};
		params.Actor = Actor;
		params.BoxComponent = BoxComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.GetOctreeCheckType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EServerOctreeGroup                                 Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetOctreeCheckType(EServerOctreeGroup* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetOctreeCheckType");
		
		AStructure_TekAlarm_C_GetOctreeCheckType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data ForTarget Detect Area
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetOctreeDataForTargetDetectArea(float* Radius, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data ForTarget Detect Area");
		
		AStructure_TekAlarm_C_GetOctreeDataForTargetDetectArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.HasFiltered Target in the Area
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TargetLost                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::HasFilteredTargetintheArea(bool* TargetLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.HasFiltered Target in the Area");
		
		AStructure_TekAlarm_C_HasFilteredTargetintheArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLost != nullptr)
			*TargetLost = params.TargetLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_TekAlarm_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientHandleNetExecCommand");
		
		AStructure_TekAlarm_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPApplyPinCode
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            appledPinCode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsSetting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TheCustomIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_TekAlarm_C::BPApplyPinCode(class AShooterPlayerController* ForPC, int32_t appledPinCode, bool bIsSetting, int32_t TheCustomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPApplyPinCode");
		
		AStructure_TekAlarm_C_BPApplyPinCode_Params params {};
		params.ForPC = ForPC;
		params.appledPinCode = appledPinCode;
		params.bIsSetting = bIsSetting;
		params.TheCustomIndex = TheCustomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Get Detect Area Adjust Speed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AdjustSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::GetDetectAreaAdjustSpeed(float* AdjustSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Get Detect Area Adjust Speed");
		
		AStructure_TekAlarm_C_GetDetectAreaAdjustSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AdjustSpeed != nullptr)
			*AdjustSpeed = params.AdjustSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveBeginPlay");
		
		AStructure_TekAlarm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientDoMultiUse");
		
		AStructure_TekAlarm_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectSphere
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateTargetDetectSphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectSphere");
		
		AStructure_TekAlarm_C_UpdateTargetDetectSphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateTargetDetectBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectBox");
		
		AStructure_TekAlarm_C_UpdateTargetDetectBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPPlacedStructure");
		
		AStructure_TekAlarm_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.Switch Target Detect Style
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::SwitchTargetDetectStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Switch Target Detect Style");
		
		AStructure_TekAlarm_C_SwitchTargetDetectStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_TekAlarm_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPTryMultiUse");
		
		AStructure_TekAlarm_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStructure_TekAlarm_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPGetMultiUseEntries");
		
		AStructure_TekAlarm_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UserConstructionScript");
		
		AStructure_TekAlarm_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectStyleChange
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::MulticastTargetDetectStyleChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectStyleChange");
		
		AStructure_TekAlarm_C_MulticastTargetDetectStyleChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxDepthX
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustTargetDetectBoxDepthX(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxDepthX");
		
		AStructure_TekAlarm_C_AdjustTargetDetectBoxDepthX_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxWidthY
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustTargetDetectBoxWidthY(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxWidthY");
		
		AStructure_TekAlarm_C_AdjustTargetDetectBoxWidthY_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectBoxExtent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::MulticastTargetDetectBoxExtent(const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectBoxExtent");
		
		AStructure_TekAlarm_C_MulticastTargetDetectBoxExtent_Params params {};
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxHeightZ
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustTargetDetectBoxHeightZ(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxHeightZ");
		
		AStructure_TekAlarm_C_AdjustTargetDetectBoxHeightZ_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.SignalServerToggleActivateState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::SignalServerToggleActivateState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SignalServerToggleActivateState");
		
		AStructure_TekAlarm_C_SignalServerToggleActivateState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectSphereRadius
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustTargetDetectSphereRadius(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectSphereRadius");
		
		AStructure_TekAlarm_C_AdjustTargetDetectSphereRadius_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectSphereRadius
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::MulticastTargetDetectSphereRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectSphereRadius");
		
		AStructure_TekAlarm_C_MulticastTargetDetectSphereRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.ScanTargetDetectArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::ScanTargetDetectArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ScanTargetDetectArea");
		
		AStructure_TekAlarm_C_ScanTargetDetectArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.DrawDebugSphere
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewParam1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::DrawDebugSphere(const struct FVector& NewParam, float NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.DrawDebugSphere");
		
		AStructure_TekAlarm_C_DrawDebugSphere_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectStyleChange
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::MulticastStructureDetectStyleChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectStyleChange");
		
		AStructure_TekAlarm_C_MulticastStructureDetectStyleChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectBoxExtent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::MulticastStructureDetectBoxExtent(const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectBoxExtent");
		
		AStructure_TekAlarm_C_MulticastStructureDetectBoxExtent_Params params {};
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectSphereRadius
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::MulticastStructureDetectSphereRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectSphereRadius");
		
		AStructure_TekAlarm_C_MulticastStructureDetectSphereRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxDepthX
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustStructureDetectBoxDepthX(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxDepthX");
		
		AStructure_TekAlarm_C_AdjustStructureDetectBoxDepthX_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxWidthY
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustStructureDetectBoxWidthY(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxWidthY");
		
		AStructure_TekAlarm_C_AdjustStructureDetectBoxWidthY_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxHeightZ
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustStructureDetectBoxHeightZ(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxHeightZ");
		
		AStructure_TekAlarm_C_AdjustStructureDetectBoxHeightZ_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectSphereRadius
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::AdjustStructureDetectSphereRadius(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectSphereRadius");
		
		AStructure_TekAlarm_C_AdjustStructureDetectSphereRadius_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateTargetDetectAlpha
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::CalcuateTargetDetectAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateTargetDetectAlpha");
		
		AStructure_TekAlarm_C_CalcuateTargetDetectAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateStructureDetectAlpha
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::CalcuateStructureDetectAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateStructureDetectAlpha");
		
		AStructure_TekAlarm_C_CalcuateStructureDetectAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibilityEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::UpdateAreaVisualsVisibilityEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibilityEvent");
		
		AStructure_TekAlarm_C_UpdateAreaVisualsVisibilityEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastShowPreview
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::MulticastShowPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastShowPreview");
		
		AStructure_TekAlarm_C_MulticastShowPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayActivationSound
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::MulticastPlayActivationSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayActivationSound");
		
		AStructure_TekAlarm_C_MulticastPlayActivationSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayDeactivationSound
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TekAlarm_C::MulticastPlayDeactivationSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayDeactivationSound");
		
		AStructure_TekAlarm_C_MulticastPlayDeactivationSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TekAlarm.Structure_TekAlarm_C.ExecuteUbergraph_Structure_TekAlarm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TekAlarm_C::ExecuteUbergraph_Structure_TekAlarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ExecuteUbergraph_Structure_TekAlarm");
		
		AStructure_TekAlarm_C_ExecuteUbergraph_Structure_TekAlarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_TekAlarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_TekAlarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TekAlarm.Structure_TekAlarm_C");
		return ptr;
	}

}


