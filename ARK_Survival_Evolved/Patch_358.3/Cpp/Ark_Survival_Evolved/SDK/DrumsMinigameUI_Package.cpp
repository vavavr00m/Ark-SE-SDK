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
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Set Minigame Visual State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBeatMissedState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::SetMinigameVisualState(bool IsBeatMissedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Set Minigame Visual State");
		
		UDrumsMinigameUI_C_SetMinigameVisualState_Params params {};
		params.IsBeatMissedState = IsBeatMissedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Next Beat Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UDrumsMinigameUI_C::NextBeatTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Next Beat Time");
		
		UDrumsMinigameUI_C_NextBeatTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Late
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::IsBeatTooLate(bool* )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Late");
		
		UDrumsMinigameUI_C_IsBeatTooLate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Soon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::IsBeatTooSoon(bool* )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Soon");
		
		UDrumsMinigameUI_C_IsBeatTooSoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Map Beat Travel Based On Timing State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UDrumsMinigameUI_C::MapBeatTravelBasedOnTimingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Map Beat Travel Based On Timing State");
		
		UDrumsMinigameUI_C_MapBeatTravelBasedOnTimingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Too Soon Percent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UDrumsMinigameUI_C::TooSoonPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Too Soon Percent");
		
		UDrumsMinigameUI_C_TooSoonPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.TooLatePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UDrumsMinigameUI_C::TooLatePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.TooLatePercent");
		
		UDrumsMinigameUI_C_TooLatePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Map Percent to Position
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::MapPercenttoPosition(float Percent, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Map Percent to Position");
		
		UDrumsMinigameUI_C_MapPercenttoPosition_Params params {};
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
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Set ProgressBar Color
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UProgressBar*                                ProgressBar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                TintColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::SetProgressBarColor(class UProgressBar* ProgressBar, const struct FLinearColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Set ProgressBar Color");
		
		UDrumsMinigameUI_C_SetProgressBarColor_Params params {};
		params.ProgressBar = ProgressBar;
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Get Beat Travel Percent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UDrumsMinigameUI_C::GetBeatTravelPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Get Beat Travel Percent");
		
		UDrumsMinigameUI_C_GetBeatTravelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Reset Beat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TryToResetBeatPosition                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::ResetBeat(bool TryToResetBeatPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Reset Beat");
		
		UDrumsMinigameUI_C_ResetBeat_Params params {};
		params.TryToResetBeatPosition = TryToResetBeatPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Stop Minigame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDrumsMinigameUI_C::StopMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Stop Minigame");
		
		UDrumsMinigameUI_C_StopMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.On Beat Too Late
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDrumsMinigameUI_C::OnBeatTooLate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.On Beat Too Late");
		
		UDrumsMinigameUI_C_OnBeatTooLate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Release Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDrumsMinigameUI_C::ReleaseInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Release Input");
		
		UDrumsMinigameUI_C_ReleaseInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Receive Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDrumsMinigameUI_C::ReceiveInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Receive Input");
		
		UDrumsMinigameUI_C_ReceiveInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.SyncWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NextTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatWindow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatTimeOut                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeatExitWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  BeatWidgetIcon                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::SyncWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, float BeatExitWidth, class UTexture2D* BeatWidgetIcon, bool UseDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.SyncWidget");
		
		UDrumsMinigameUI_C_SyncWidget_Params params {};
		params.NextTimeOut = NextTimeOut;
		params.BeatWindow = BeatWindow;
		params.BeatTimeOut = BeatTimeOut;
		params.BeatExitWidth = BeatExitWidth;
		params.BeatWidgetIcon = BeatWidgetIcon;
		params.UseDebugMode = UseDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Tick");
		
		UDrumsMinigameUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDrumsMinigameUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Construct");
		
		UDrumsMinigameUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DrumsMinigameUI.DrumsMinigameUI_C.ExecuteUbergraph_DrumsMinigameUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDrumsMinigameUI_C::ExecuteUbergraph_DrumsMinigameUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.ExecuteUbergraph_DrumsMinigameUI");
		
		UDrumsMinigameUI_C_ExecuteUbergraph_DrumsMinigameUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrumsMinigameUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrumsMinigameUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DrumsMinigameUI.DrumsMinigameUI_C");
		return ptr;
	}

}


