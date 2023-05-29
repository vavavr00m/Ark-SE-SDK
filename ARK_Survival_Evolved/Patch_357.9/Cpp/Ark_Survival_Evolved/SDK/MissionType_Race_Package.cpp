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
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetRaceData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRacePlayerData>                     RaceData                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::GetRaceData(TArray<struct FRacePlayerData>* RaceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetRaceData");
		
		AMissionType_Race_C_GetRaceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RaceData != nullptr)
			*RaceData = params.RaceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetPlayerRanking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Ranking                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetPlayerRanking(int32_t PlayerIndex, int32_t* Ranking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetPlayerRanking");
		
		AMissionType_Race_C_GetPlayerRanking_Params params {};
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ranking != nullptr)
			*Ranking = params.Ranking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.RaceSetupAfterDelay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::RaceSetupAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.RaceSetupAfterDelay");
		
		AMissionType_Race_C_RaceSetupAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetRaceShooterPCAndPawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            primalChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ShooterPC                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetRaceShooterPCAndPawn(class APrimalCharacter* primalChar, class AShooterPlayerController** ShooterPC, class AShooterCharacter** ShooterChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetRaceShooterPCAndPawn");
		
		AMissionType_Race_C_GetRaceShooterPCAndPawn_Params params {};
		params.primalChar = primalChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShooterPC != nullptr)
			*ShooterPC = params.ShooterPC;
		if (ShooterChar != nullptr)
			*ShooterChar = params.ShooterChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.TeleportPlayersToStartLine
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::TeleportPlayersToStartLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.TeleportPlayersToStartLine");
		
		AMissionType_Race_C_TeleportPlayersToStartLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.OnResultOverlappedCheckpointFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Overlapped                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::OnResultOverlappedCheckpointFX(bool Overlapped, class AShooterPlayerController* ForController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnResultOverlappedCheckpointFX");
		
		AMissionType_Race_C_OnResultOverlappedCheckpointFX_Params params {};
		params.Overlapped = Overlapped;
		params.ForController = ForController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.CheckOverlappedCheckpointFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             HitTrigger                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::CheckOverlappedCheckpointFX(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.CheckOverlappedCheckpointFX");
		
		AMissionType_Race_C_CheckOverlappedCheckpointFX_Params params {};
		params.PlayerController = PlayerController;
		params.HitTrigger = HitTrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.AttemptReRideDinoOnDinoRespawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::AttemptReRideDinoOnDinoRespawn(class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.AttemptReRideDinoOnDinoRespawn");
		
		AMissionType_Race_C_AttemptReRideDinoOnDinoRespawn_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetCheckpointToTeleportTo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             Checkpoint                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetCheckpointToTeleportTo(int32_t PlayerIndex, class AMissionTrigger** Checkpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetCheckpointToTeleportTo");
		
		AMissionType_Race_C_GetCheckpointToTeleportTo_Params params {};
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Checkpoint != nullptr)
			*Checkpoint = params.Checkpoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.InitializeRaceData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::InitializeRaceData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.InitializeRaceData");
		
		AMissionType_Race_C_InitializeRaceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.OnCheckpointIncremented
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             HitTrigger                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::OnCheckpointIncremented(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnCheckpointIncremented");
		
		AMissionType_Race_C_OnCheckpointIncremented_Params params {};
		params.PlayerController = PlayerController;
		params.HitTrigger = HitTrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetSplineForOutOfBoundsCheckForPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionSpline*                              Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetSplineForOutOfBoundsCheckForPlayer(class AShooterCharacter* ShooterChar, class AMissionSpline** Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetSplineForOutOfBoundsCheckForPlayer");
		
		AMissionType_Race_C_GetSplineForOutOfBoundsCheckForPlayer_Params params {};
		params.ShooterChar = ShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Spline != nullptr)
			*Spline = params.Spline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetRaceActorsToUnhide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              actors                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::GetRaceActorsToUnhide(TArray<class AActor*>* actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetRaceActorsToUnhide");
		
		AMissionType_Race_C_GetRaceActorsToUnhide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (actors != nullptr)
			*actors = params.actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.OnTeleportedCharInBounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::OnTeleportedCharInBounds(class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnTeleportedCharInBounds");
		
		AMissionType_Race_C_OnTeleportedCharInBounds_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetNearbyWaterLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideZOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FinalLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetNearbyWaterLocation(const struct FVector& StartLocation, const struct FVector& Forward, float OverrideZOffset, struct FVector* FinalLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetNearbyWaterLocation");
		
		AMissionType_Race_C_GetNearbyWaterLocation_Params params {};
		params.StartLocation = StartLocation;
		params.Forward = Forward;
		params.OverrideZOffset = OverrideZOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FinalLocation != nullptr)
			*FinalLocation = params.FinalLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.Is Power Up Active for Player
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    SC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             Powerup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::IsPowerUpActiveforPlayer(class AShooterPlayerController* SC, class AMissionTrigger* Powerup, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Is Power Up Active for Player");
		
		AMissionType_Race_C_IsPowerUpActiveforPlayer_Params params {};
		params.SC = SC;
		params.Powerup = Powerup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.Handle Out Of Bounds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::HandleOutOfBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Handle Out Of Bounds");
		
		AMissionType_Race_C_HandleOutOfBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.TeleportPlayerAndDinoToCheckpoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::TeleportPlayerAndDinoToCheckpoint(class APrimalDinoCharacter* Dino, class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.TeleportPlayerAndDinoToCheckpoint");
		
		AMissionType_Race_C_TeleportPlayerAndDinoToCheckpoint_Params params {};
		params.Dino = Dino;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.SpawnDinoForPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        SpawnedDino                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::SpawnDinoForPlayer(class AShooterCharacter* Player, class APrimalDinoCharacter** SpawnedDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.SpawnDinoForPlayer");
		
		AMissionType_Race_C_SpawnDinoForPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedDino != nullptr)
			*SpawnedDino = params.SpawnedDino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.Handle Player Time Outs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::HandlePlayerTimeOuts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Handle Player Time Outs");
		
		AMissionType_Race_C_HandlePlayerTimeOuts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOverrideMissionTimerColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShooterContr                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                DefaultColor                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                CurrentColor                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                TimerOverrideColor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMissionType_Race_C::BPOverrideMissionTimerColor(class AShooterPlayerController* ShooterContr, struct FLinearColor* DefaultColor, struct FLinearColor* CurrentColor, struct FLinearColor* TimerOverrideColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOverrideMissionTimerColor");
		
		AMissionType_Race_C_BPOverrideMissionTimerColor_Params params {};
		params.ShooterContr = ShooterContr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DefaultColor != nullptr)
			*DefaultColor = params.DefaultColor;
		if (CurrentColor != nullptr)
			*CurrentColor = params.CurrentColor;
		if (TimerOverrideColor != nullptr)
			*TimerOverrideColor = params.TimerOverrideColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetBestTimeForPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShooterCont                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BestValidTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetBestTimeForPlayer(class AShooterPlayerController* ShooterCont, float* BestValidTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetBestTimeForPlayer");
		
		AMissionType_Race_C_GetBestTimeForPlayer_Params params {};
		params.ShooterCont = ShooterCont;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BestValidTime != nullptr)
			*BestValidTime = params.BestValidTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPGetExtraLocalMissionIndicators
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           PlayerPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMissionWorldIndicator>              IndicatorsIn                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FMissionWorldIndicator>              IndicatorsOut                                              (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::BPGetExtraLocalMissionIndicators(class APlayerController* Controller, class AShooterCharacter* PlayerPawn, TArray<struct FMissionWorldIndicator>* IndicatorsIn, TArray<struct FMissionWorldIndicator>* IndicatorsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPGetExtraLocalMissionIndicators");
		
		AMissionType_Race_C_BPGetExtraLocalMissionIndicators_Params params {};
		params.Controller = Controller;
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndicatorsIn != nullptr)
			*IndicatorsIn = params.IndicatorsIn;
		if (IndicatorsOut != nullptr)
			*IndicatorsOut = params.IndicatorsOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetBestTime
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BestTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetBestTime(float* BestTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetBestTime");
		
		AMissionType_Race_C_GetBestTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BestTime != nullptr)
			*BestTime = params.BestTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.NotifyAllTopPlayerFinish
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Finished                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::NotifyAllTopPlayerFinish(bool Finished, class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.NotifyAllTopPlayerFinish");
		
		AMissionType_Race_C_NotifyAllTopPlayerFinish_Params params {};
		params.Finished = Finished;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.Play Leaderboard Reactions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LeaderboardScoreFloat                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::PlayLeaderboardReactions(float LeaderboardScoreFloat, class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Leaderboard Reactions");
		
		AMissionType_Race_C_PlayLeaderboardReactions_Params params {};
		params.LeaderboardScoreFloat = LeaderboardScoreFloat;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.On Player Got in Top 10 Of The Leaderboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::OnPlayerGotinTop10OfTheLeaderboard(class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.On Player Got in Top 10 Of The Leaderboard");
		
		AMissionType_Race_C_OnPlayerGotinTop10OfTheLeaderboard_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.On Player Got First Place on the Leaderboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::OnPlayerGotFirstPlaceontheLeaderboard(class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.On Player Got First Place on the Leaderboard");
		
		AMissionType_Race_C_OnPlayerGotFirstPlaceontheLeaderboard_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.Play Encouragement Reactions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::PlayEncouragementReactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Encouragement Reactions");
		
		AMissionType_Race_C_PlayEncouragementReactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerLeftBounds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::BPOnMissionPlayerLeftBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerLeftBounds");
		
		AMissionType_Race_C_BPOnMissionPlayerLeftBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.AddPowerTriggersFromLastCheckPointToIgnoreList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::AddPowerTriggersFromLastCheckPointToIgnoreList(class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.AddPowerTriggersFromLastCheckPointToIgnoreList");
		
		AMissionType_Race_C_AddPowerTriggersFromLastCheckPointToIgnoreList_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.AddTriggerToIgnoreList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionTrigger*                             Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::AddTriggerToIgnoreList(class AMissionTrigger* Trigger, class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.AddTriggerToIgnoreList");
		
		AMissionType_Race_C_AddTriggerToIgnoreList_Params params {};
		params.Trigger = Trigger;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.HasPlayerHitTrigger
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasHitBefore                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::HasPlayerHitTrigger(class AShooterCharacter* Player, class AMissionTrigger* Trigger, bool* HasHitBefore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.HasPlayerHitTrigger");
		
		AMissionType_Race_C_HasPlayerHitTrigger_Params params {};
		params.Player = Player;
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasHitBefore != nullptr)
			*HasHitBefore = params.HasHitBefore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerRespawned
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::BPOnMissionPlayerRespawned(class AShooterCharacter* Player, class AShooterPlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerRespawned");
		
		AMissionType_Race_C_BPOnMissionPlayerRespawned_Params params {};
		params.Player = Player;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.OnThrottledClientTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::OnThrottledClientTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnThrottledClientTick");
		
		AMissionType_Race_C_OnThrottledClientTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.Play Reaction When Player Has Left Dino For Too Long
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::PlayReactionWhenPlayerHasLeftDinoForTooLong()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Reaction When Player Has Left Dino For Too Long");
		
		AMissionType_Race_C_PlayReactionWhenPlayerHasLeftDinoForTooLong_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetSpawnPointsForStartingLine
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionServerSidePoint*                     MissionServerSidePoint                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumberOfRacers                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            PrimalCharacterType                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ForwardRot                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetSpawnPointsForStartingLine(class AMissionServerSidePoint* MissionServerSidePoint, int32_t NumberOfRacers, class APrimalCharacter* PrimalCharacterType, struct FRotator* ForwardRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetSpawnPointsForStartingLine");
		
		AMissionType_Race_C_GetSpawnPointsForStartingLine_Params params {};
		params.MissionServerSidePoint = MissionServerSidePoint;
		params.NumberOfRacers = NumberOfRacers;
		params.PrimalCharacterType = PrimalCharacterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForwardRot != nullptr)
			*ForwardRot = params.ForwardRot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.Play Checkpoint Reaction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FinalCheckpoint                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::PlayCheckpointReaction(bool FinalCheckpoint, class AShooterCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Checkpoint Reaction");
		
		AMissionType_Race_C_PlayCheckpointReaction_Params params {};
		params.FinalCheckpoint = FinalCheckpoint;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GeneratePerPlayerPhaseRequirements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        PhaseName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMissionPhaseRequirement>            Requirements                                               (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::GeneratePerPlayerPhaseRequirements(class AShooterPlayerController* Controller, class AShooterCharacter* Character, const class FName& PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GeneratePerPlayerPhaseRequirements");
		
		AMissionType_Race_C_GeneratePerPlayerPhaseRequirements_Params params {};
		params.Controller = Controller;
		params.Character = Character;
		params.PhaseName = PhaseName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Requirements != nullptr)
			*Requirements = params.Requirements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.ActivateRacePowerUps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionTrigger*                             Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TriggeringActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::ActivateRacePowerUps(class AMissionTrigger* Trigger, class APrimalCharacter* TriggeringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.ActivateRacePowerUps");
		
		AMissionType_Race_C_ActivateRacePowerUps_Params params {};
		params.Trigger = Trigger;
		params.TriggeringActor = TriggeringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.CalcRaceXPRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Place                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AMissionType_Race_C::CalcRaceXPRatio(class APrimalCharacter* Player, int32_t Place)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.CalcRaceXPRatio");
		
		AMissionType_Race_C_CalcRaceXPRatio_Params params {};
		params.Player = Player;
		params.Place = Place;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPGenerateMissionRewards
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterAndControllerPair                 Player                                                     (Parm)
	 * 		bool                                               bCompletedSuccessfully                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPReward                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UPrimalItem*>                         GeneratedItems                                             (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::BPGenerateMissionRewards(const struct FCharacterAndControllerPair& Player, bool bCompletedSuccessfully, float* XPReward, TArray<class UPrimalItem*>* GeneratedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPGenerateMissionRewards");
		
		AMissionType_Race_C_BPGenerateMissionRewards_Params params {};
		params.Player = Player;
		params.bCompletedSuccessfully = bCompletedSuccessfully;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XPReward != nullptr)
			*XPReward = params.XPReward;
		if (GeneratedItems != nullptr)
			*GeneratedItems = params.GeneratedItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPGetMissionTimerText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShootCont                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AMissionType_Race_C::BPGetMissionTimerText(class AShooterPlayerController* ShootCont)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPGetMissionTimerText");
		
		AMissionType_Race_C_BPGetMissionTimerText_Params params {};
		params.ShootCont = ShootCont;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GeneratePhaseRequirements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PhaseName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMissionPhaseRequirement>            Requirements                                               (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::GeneratePhaseRequirements(const class FName& PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GeneratePhaseRequirements");
		
		AMissionType_Race_C_GeneratePhaseRequirements_Params params {};
		params.PhaseName = PhaseName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Requirements != nullptr)
			*Requirements = params.Requirements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetDinoNameFromArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ArrayIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Item                                                       (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::GetDinoNameFromArray(int32_t ArrayIndex, class FString* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetDinoNameFromArray");
		
		AMissionType_Race_C_GetDinoNameFromArray_Params params {};
		params.ArrayIndex = ArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetNamedDinoSetup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDinoSetup                                  InSetup                                                    (Parm)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		struct FDinoSetup                                  Setup                                                      (Parm, OutParm)
	 */
	void AMissionType_Race_C::GetNamedDinoSetup(const struct FDinoSetup& InSetup, const class FString& Name, struct FDinoSetup* Setup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetNamedDinoSetup");
		
		AMissionType_Race_C_GetNamedDinoSetup_Params params {};
		params.InSetup = InSetup;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Setup != nullptr)
			*Setup = params.Setup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.IsMissionComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMissionType_Race_C::IsMissionComplete(class AShooterCharacter* forCharacter, class AShooterPlayerController* ForController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.IsMissionComplete");
		
		AMissionType_Race_C_IsMissionComplete_Params params {};
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
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.TryIncrementCheckpoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             HitTrigger                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AtEnd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::TryIncrementCheckpoint(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger, bool* Success, bool* AtEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.TryIncrementCheckpoint");
		
		AMissionType_Race_C_TryIncrementCheckpoint_Params params {};
		params.PlayerController = PlayerController;
		params.HitTrigger = HitTrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (AtEnd != nullptr)
			*AtEnd = params.AtEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPIsPhaseComplete
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PhaseName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMissionType_Race_C::BPIsPhaseComplete(const class FName& PhaseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPIsPhaseComplete");
		
		AMissionType_Race_C_BPIsPhaseComplete_Params params {};
		params.PhaseName = PhaseName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetPerPlayerWorldIndicators
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMissionWorldIndicator>              WorldIndicators                                            (Parm, OutParm, ZeroConstructor)
	 */
	void AMissionType_Race_C::GetPerPlayerWorldIndicators(class AShooterPlayerController* Controller, class AShooterCharacter* Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetPerPlayerWorldIndicators");
		
		AMissionType_Race_C_GetPerPlayerWorldIndicators_Params params {};
		params.Controller = Controller;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldIndicators != nullptr)
			*WorldIndicators = params.WorldIndicators;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.GetNextCheckpoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionTrigger*                             NextCheckpoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CompletedRace                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::GetNextCheckpoint(class AShooterPlayerController* Controller, class AMissionTrigger* NewParam, int32_t* index, class AMissionTrigger** NextCheckpoint, bool* CompletedRace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetNextCheckpoint");
		
		AMissionType_Race_C_GetNextCheckpoint_Params params {};
		params.Controller = Controller;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
		if (NextCheckpoint != nullptr)
			*NextCheckpoint = params.NextCheckpoint;
		if (CompletedRace != nullptr)
			*CompletedRace = params.CompletedRace;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.UserConstructionScript");
		
		AMissionType_Race_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnMissionTriggerBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionTrigger*                             Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger* Trigger, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionTriggerBeginOverlap");
		
		AMissionType_Race_C_BPOnMissionTriggerBeginOverlap_Params params {};
		params.Trigger = Trigger;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnMissionComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLastPhaseSuccess                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPRewarded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UPrimalItem*>                         ItemsRewarded                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AMissionType_Race_C::BPOnMissionComplete(class AShooterCharacter* ForPlayer, class AShooterPlayerController* ForController, bool bLastPhaseSuccess, float XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionComplete");
		
		AMissionType_Race_C_BPOnMissionComplete_Params params {};
		params.ForPlayer = ForPlayer;
		params.ForController = ForController;
		params.bLastPhaseSuccess = bLastPhaseSuccess;
		params.XPRewarded = XPRewarded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsRewarded != nullptr)
			*ItemsRewarded = params.ItemsRewarded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.OnThrottledServerTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::OnThrottledServerTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnThrottledServerTick");
		
		AMissionType_Race_C_OnThrottledServerTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnMissionServerSetup
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::BPOnMissionServerSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionServerSetup");
		
		AMissionType_Race_C_BPOnMissionServerSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.RaceStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OldPhaseName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewPhaseName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::RaceStarted(const class FName& OldPhaseName, const class FName& NewPhaseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.RaceStarted");
		
		AMissionType_Race_C_RaceStarted_Params params {};
		params.OldPhaseName = OldPhaseName;
		params.NewPhaseName = NewPhaseName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.RaceSetup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OldPhaseName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewPhaseName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::RaceSetup(const class FName& OldPhaseName, const class FName& NewPhaseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.RaceSetup");
		
		AMissionType_Race_C_RaceSetup_Params params {};
		params.OldPhaseName = OldPhaseName;
		params.NewPhaseName = NewPhaseName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.ReceiveBeginPlay");
		
		AMissionType_Race_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.TeleportToStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OldPhaseName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewPhaseName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::TeleportToStart(const class FName& OldPhaseName, const class FName& NewPhaseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.TeleportToStart");
		
		AMissionType_Race_C_TeleportToStart_Params params {};
		params.OldPhaseName = OldPhaseName;
		params.NewPhaseName = NewPhaseName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnMissionDinoDied
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::BPOnMissionDinoDied(class APrimalDinoCharacter* Dino, float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionDinoDied");
		
		AMissionType_Race_C_BPOnMissionDinoDied_Params params {};
		params.Dino = Dino;
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerDied
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::BPOnMissionPlayerDied(class AShooterCharacter* Player, class AShooterPlayerController* Controller, float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerDied");
		
		AMissionType_Race_C_BPOnMissionPlayerDied_Params params {};
		params.Player = Player;
		params.Controller = Controller;
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.PutPlayersOnMissionDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::PutPlayersOnMissionDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.PutPlayersOnMissionDino");
		
		AMissionType_Race_C_PutPlayersOnMissionDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.BPOnPlayerRemovedFromMission
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromMissionCompleteEvent                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLastPhaseSuccess                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::BPOnPlayerRemovedFromMission(class AShooterCharacter* Player, class AShooterPlayerController* Controller, bool bFromMissionCompleteEvent, bool bLastPhaseSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnPlayerRemovedFromMission");
		
		AMissionType_Race_C_BPOnPlayerRemovedFromMission_Params params {};
		params.Player = Player;
		params.Controller = Controller;
		params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
		params.bLastPhaseSuccess = bLastPhaseSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.ServerAddConsolePlayer
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AMissionType_Race_C::ServerAddConsolePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.ServerAddConsolePlayer");
		
		AMissionType_Race_C_ServerAddConsolePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MissionType_Race.MissionType_Race_C.ExecuteUbergraph_MissionType_Race
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionType_Race_C::ExecuteUbergraph_MissionType_Race(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.ExecuteUbergraph_MissionType_Race");
		
		AMissionType_Race_C_ExecuteUbergraph_MissionType_Race_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionType_Race_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionType_Race_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Race.MissionType_Race_C");
		return ptr;
	}

}


