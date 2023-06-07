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
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.grab beat loc from outside the ui
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::grabbeatlocfromoutsidetheui(float* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.grab beat loc from outside the ui");
		
		UStriderHackingMinigameUI_C_grabbeatlocfromoutsidetheui_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Win
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::OnWin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Win");
		
		UStriderHackingMinigameUI_C_OnWin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Try Shut Down
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceShutDown                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::TryShutDown(bool ForceShutDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Try Shut Down");
		
		UStriderHackingMinigameUI_C_TryShutDown_Params params {};
		params.ForceShutDown = ForceShutDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Widget Visual State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::ResetWidgetVisualState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Widget Visual State");
		
		UStriderHackingMinigameUI_C_ResetWidgetVisualState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set CanMinigamePlay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::SetCanMinigamePlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set CanMinigamePlay");
		
		UStriderHackingMinigameUI_C_SetCanMinigamePlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Hit Successfully
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::OnBeatHitSuccessfully()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Hit Successfully");
		
		UStriderHackingMinigameUI_C_OnBeatHitSuccessfully_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Manage Beat Widgets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::ManageBeatWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Manage Beat Widgets");
		
		UStriderHackingMinigameUI_C_ManageBeatWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Post Process Params
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::ResetPostProcessParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Post Process Params");
		
		UStriderHackingMinigameUI_C_ResetPostProcessParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set Minigame Visual State
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBeatMissedState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SetPostProcessColor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::SetMinigameVisualState(bool IsBeatMissedState, bool SetPostProcessColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set Minigame Visual State");
		
		UStriderHackingMinigameUI_C_SetMinigameVisualState_Params params {};
		params.IsBeatMissedState = IsBeatMissedState;
		params.SetPostProcessColor = SetPostProcessColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Beat to Goal Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UStriderHackingMinigameUI_C::BeattoGoalTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Beat to Goal Time");
		
		UStriderHackingMinigameUI_C_BeattoGoalTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Late
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::IsBeatTooLate(bool* )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Late");
		
		UStriderHackingMinigameUI_C_IsBeatTooLate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Soon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::IsBeatTooSoon(bool* )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Soon");
		
		UStriderHackingMinigameUI_C_IsBeatTooSoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Beat Travel Based On Timing State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UStriderHackingMinigameUI_C::MapBeatTravelBasedOnTimingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Beat Travel Based On Timing State");
		
		UStriderHackingMinigameUI_C_MapBeatTravelBasedOnTimingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Too Soon Percent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UStriderHackingMinigameUI_C::TooSoonPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Too Soon Percent");
		
		UStriderHackingMinigameUI_C_TooSoonPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.TooLatePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UStriderHackingMinigameUI_C::TooLatePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.TooLatePercent");
		
		UStriderHackingMinigameUI_C_TooLatePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Distance Per Second
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                                                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::DistancePerSecond(float* )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Distance Per Second");
		
		UStriderHackingMinigameUI_C_DistancePerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Percent to Position
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::MapPercenttoPosition(float Percent, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Percent to Position");
		
		UStriderHackingMinigameUI_C_MapPercenttoPosition_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set ProgressBar Color
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UProgressBar*                                ProgressBar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                TintColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::SetProgressBarColor(class UProgressBar* ProgressBar, const struct FLinearColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set ProgressBar Color");
		
		UStriderHackingMinigameUI_C_SetProgressBarColor_Params params {};
		params.ProgressBar = ProgressBar;
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Get Beat Travel Percent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UStriderHackingMinigameUI_C::GetBeatTravelPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Get Beat Travel Percent");
		
		UStriderHackingMinigameUI_C_GetBeatTravelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Beat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::ResetBeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Beat");
		
		UStriderHackingMinigameUI_C_ResetBeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Stop Minigame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::StopMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Stop Minigame");
		
		UStriderHackingMinigameUI_C_StopMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Too Late
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::OnBeatTooLate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Too Late");
		
		UStriderHackingMinigameUI_C_OnBeatTooLate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Release Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::ReleaseInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Release Input");
		
		UStriderHackingMinigameUI_C_ReleaseInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Receive Input
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::ReceiveInput(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Receive Input");
		
		UStriderHackingMinigameUI_C_ReceiveInput_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.SyncWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NextTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatWindow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            BeatsPerLoop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShuttingDown                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                PostProcessInputColorParam                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::SyncWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, int32_t BeatsPerLoop, bool IsShuttingDown, struct FLinearColor* PostProcessInputColorParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.SyncWidget");
		
		UStriderHackingMinigameUI_C_SyncWidget_Params params {};
		params.NextTimeOut = NextTimeOut;
		params.BeatWindow = BeatWindow;
		params.BeatTimeOut = BeatTimeOut;
		params.BeatsPerLoop = BeatsPerLoop;
		params.IsShuttingDown = IsShuttingDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PostProcessInputColorParam != nullptr)
			*PostProcessInputColorParam = params.PostProcessInputColorParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Tick");
		
		UStriderHackingMinigameUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStriderHackingMinigameUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Construct");
		
		UStriderHackingMinigameUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.ExecuteUbergraph_StriderHackingMinigameUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStriderHackingMinigameUI_C::ExecuteUbergraph_StriderHackingMinigameUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.ExecuteUbergraph_StriderHackingMinigameUI");
		
		UStriderHackingMinigameUI_C_ExecuteUbergraph_StriderHackingMinigameUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStriderHackingMinigameUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStriderHackingMinigameUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StriderHackingMinigameUI.StriderHackingMinigameUI_C");
		return ptr;
	}

}


