#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.grab beat loc from outside the ui
	 */
	struct UStriderHackingMinigameUI_C_grabbeatlocfromoutsidetheui_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Win
	 */
	struct UStriderHackingMinigameUI_C_OnWin_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Try Shut Down
	 */
	struct UStriderHackingMinigameUI_C_TryShutDown_Params
	{
	public:
		bool                                                       ForceShutDown;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Widget Visual State
	 */
	struct UStriderHackingMinigameUI_C_ResetWidgetVisualState_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set CanMinigamePlay
	 */
	struct UStriderHackingMinigameUI_C_SetCanMinigamePlay_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Hit Successfully
	 */
	struct UStriderHackingMinigameUI_C_OnBeatHitSuccessfully_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Manage Beat Widgets
	 */
	struct UStriderHackingMinigameUI_C_ManageBeatWidgets_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Post Process Params
	 */
	struct UStriderHackingMinigameUI_C_ResetPostProcessParams_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set Minigame Visual State
	 */
	struct UStriderHackingMinigameUI_C_SetMinigameVisualState_Params
	{
	public:
		bool                                                       IsBeatMissedState;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SetPostProcessColor;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0KLL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Beat to Goal Time
	 */
	struct UStriderHackingMinigameUI_C_BeattoGoalTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4GBI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Late
	 */
	struct UStriderHackingMinigameUI_C_IsBeatTooLate_Params
	{
	public:
		unsigned char                                              UnknownData_M6VW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Soon
	 */
	struct UStriderHackingMinigameUI_C_IsBeatTooSoon_Params
	{
	public:
		unsigned char                                              UnknownData_3DVQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Beat Travel Based On Timing State
	 */
	struct UStriderHackingMinigameUI_C_MapBeatTravelBasedOnTimingState_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Too Soon Percent
	 */
	struct UStriderHackingMinigameUI_C_TooSoonPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.TooLatePercent
	 */
	struct UStriderHackingMinigameUI_C_TooLatePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Distance Per Second
	 */
	struct UStriderHackingMinigameUI_C_DistancePerSecond_Params
	{
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Percent to Position
	 */
	struct UStriderHackingMinigameUI_C_MapPercenttoPosition_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set ProgressBar Color
	 */
	struct UStriderHackingMinigameUI_C_SetProgressBarColor_Params
	{
	public:
		class UProgressBar*                                        ProgressBar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        TintColor;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Get Beat Travel Percent
	 */
	struct UStriderHackingMinigameUI_C_GetBeatTravelPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Beat
	 */
	struct UStriderHackingMinigameUI_C_ResetBeat_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Stop Minigame
	 */
	struct UStriderHackingMinigameUI_C_StopMinigame_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Too Late
	 */
	struct UStriderHackingMinigameUI_C_OnBeatTooLate_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Release Input
	 */
	struct UStriderHackingMinigameUI_C_ReleaseInput_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Receive Input
	 */
	struct UStriderHackingMinigameUI_C_ReceiveInput_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.SyncWidget
	 */
	struct UStriderHackingMinigameUI_C_SyncWidget_Params
	{
	public:
		double                                                     NextTimeOut;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatWindow;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatTimeOut;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    BeatsPerLoop;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShuttingDown;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6X3T[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        PostProcessInputColorParam;                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Tick
	 */
	struct UStriderHackingMinigameUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Construct
	 */
	struct UStriderHackingMinigameUI_C_Construct_Params
	{	};

	/**
	 * Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.ExecuteUbergraph_StriderHackingMinigameUI
	 */
	struct UStriderHackingMinigameUI_C_ExecuteUbergraph_StriderHackingMinigameUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
