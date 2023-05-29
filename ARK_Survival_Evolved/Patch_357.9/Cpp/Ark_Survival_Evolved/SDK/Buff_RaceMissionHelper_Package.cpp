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
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPInstigatorSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSleeped                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::BPInstigatorSleeped(bool bIsSleeped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPInstigatorSleeped");
		
		ABuff_RaceMissionHelper_C_BPInstigatorSleeped_Params params {};
		params.bIsSleeped = bIsSleeped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetSpline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionSpline*                              Spline                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::SetSpline(class AMissionSpline* Spline, bool* WasSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetSpline");
		
		ABuff_RaceMissionHelper_C_SetSpline_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasSet != nullptr)
			*WasSet = params.WasSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Tick_UpdatePowerUps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::Tick_UpdatePowerUps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Tick_UpdatePowerUps");
		
		ABuff_RaceMissionHelper_C_Tick_UpdatePowerUps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ListenServerUpdateCheckpoints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMissionWorldIndicator>              MissionDataBuff                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class AShooterCharacter*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::ListenServerUpdateCheckpoints(TArray<struct FMissionWorldIndicator>* MissionDataBuff, class AShooterCharacter* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ListenServerUpdateCheckpoints");
		
		ABuff_RaceMissionHelper_C_ListenServerUpdateCheckpoints_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionDataBuff != nullptr)
			*MissionDataBuff = params.MissionDataBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateCheckpoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionTrigger_RaceCheckpoint_C*            PreviousCheckpoint                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger_RaceCheckpoint_C*            NewCheckpoint                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::UpdateCheckpoint(class AMissionTrigger_RaceCheckpoint_C* PreviousCheckpoint, class AMissionTrigger_RaceCheckpoint_C* NewCheckpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateCheckpoint");
		
		ABuff_RaceMissionHelper_C_UpdateCheckpoint_Params params {};
		params.PreviousCheckpoint = PreviousCheckpoint;
		params.NewCheckpoint = NewCheckpoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Update Out Of Bounds Particle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::UpdateOutOfBoundsParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Update Out Of Bounds Particle");
		
		ABuff_RaceMissionHelper_C_UpdateOutOfBoundsParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateNextCheckpointDirectionIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::UpdateNextCheckpointDirectionIndicator(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateNextCheckpointDirectionIndicator");
		
		ABuff_RaceMissionHelper_C_UpdateNextCheckpointDirectionIndicator_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.GetPlaceText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Place                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_RaceMissionHelper_C::GetPlaceText(int32_t Place, class FString* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.GetPlaceText");
		
		ABuff_RaceMissionHelper_C_GetPlaceText_Params params {};
		params.Place = Place;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_RaceMissionHelper_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPGetHUDElements");
		
		ABuff_RaceMissionHelper_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UserConstructionScript");
		
		ABuff_RaceMissionHelper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.MissionClientDataUpdated_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff_MissionData*                     MissionDataBuff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::MissionClientDataUpdated_Event(class APrimalBuff_MissionData* MissionDataBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.MissionClientDataUpdated_Event");
		
		ABuff_RaceMissionHelper_C_MissionClientDataUpdated_Event_Params params {};
		params.MissionDataBuff = MissionDataBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickClient");
		
		ABuff_RaceMissionHelper_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPDeactivated");
		
		ABuff_RaceMissionHelper_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdatePlace
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewPlace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumberOfPlayers                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::ClientUpdatePlace(int32_t NewPlace, int32_t NumberOfPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdatePlace");
		
		ABuff_RaceMissionHelper_C_ClientUpdatePlace_Params params {};
		params.NewPlace = NewPlace;
		params.NumberOfPlayers = NumberOfPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPSetupForInstigator");
		
		ABuff_RaceMissionHelper_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickServer");
		
		ABuff_RaceMissionHelper_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Client_UpdateCurrentCheckpointPowerUpTriggers
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AMissionTrigger*>                     PowerUpTriggers                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_RaceMissionHelper_C::Client_UpdateCurrentCheckpointPowerUpTriggers(TArray<class AMissionTrigger*>* PowerUpTriggers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Client_UpdateCurrentCheckpointPowerUpTriggers");
		
		ABuff_RaceMissionHelper_C_Client_UpdateCurrentCheckpointPowerUpTriggers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerUpTriggers != nullptr)
			*PowerUpTriggers = params.PowerUpTriggers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivatePowerUpEmitters
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::DeactivatePowerUpEmitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivatePowerUpEmitters");
		
		ABuff_RaceMissionHelper_C_DeactivatePowerUpEmitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpEmitter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TriggerOrder                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CustomDataInt                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::DeactivateSinglePowerUpEmitter(int32_t TriggerOrder, int32_t CustomDataInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpEmitter");
		
		ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpEmitter_Params params {};
		params.TriggerOrder = TriggerOrder;
		params.CustomDataInt = CustomDataInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.RideMissionDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::RideMissionDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.RideMissionDino");
		
		ABuff_RaceMissionHelper_C_RideMissionDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpTriggerEmitter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionTrigger*                             TriggerHit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::DeactivateSinglePowerUpTriggerEmitter(class AMissionTrigger* TriggerHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpTriggerEmitter");
		
		ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpTriggerEmitter_Params params {};
		params.TriggerHit = TriggerHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUnhideActors
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsToUnhide                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_RaceMissionHelper_C::ClientUnhideActors(TArray<class AActor*>* ActorsToUnhide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUnhideActors");
		
		ABuff_RaceMissionHelper_C_ClientUnhideActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToUnhide != nullptr)
			*ActorsToUnhide = params.ActorsToUnhide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdateBestTime
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BestTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::ClientUpdateBestTime(float BestTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdateBestTime");
		
		ABuff_RaceMissionHelper_C_ClientUpdateBestTime_Params params {};
		params.BestTime = BestTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetCheckPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::SetCheckPoint(int32_t newIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetCheckPoint");
		
		ABuff_RaceMissionHelper_C_SetCheckPoint_Params params {};
		params.newIndex = newIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientPlayFinishFX
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::ClientPlayFinishFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientPlayFinishFX");
		
		ABuff_RaceMissionHelper_C_ClientPlayFinishFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DestroyDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::DestroyDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DestroyDino");
		
		ABuff_RaceMissionHelper_C_DestroyDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.TeleportBackToStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::TeleportBackToStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.TeleportBackToStart");
		
		ABuff_RaceMissionHelper_C_TeleportBackToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ServerClaimConsolePlayer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RaceMissionHelper_C::ServerClaimConsolePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ServerClaimConsolePlayer");
		
		ABuff_RaceMissionHelper_C_ServerClaimConsolePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ExecuteUbergraph_Buff_RaceMissionHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RaceMissionHelper_C::ExecuteUbergraph_Buff_RaceMissionHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ExecuteUbergraph_Buff_RaceMissionHelper");
		
		ABuff_RaceMissionHelper_C_ExecuteUbergraph_Buff_RaceMissionHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_RaceMissionHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_RaceMissionHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RaceMissionHelper.Buff_RaceMissionHelper_C");
		return ptr;
	}

}


