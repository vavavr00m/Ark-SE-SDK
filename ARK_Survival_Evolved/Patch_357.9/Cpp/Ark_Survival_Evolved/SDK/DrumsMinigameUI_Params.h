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
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Set Minigame Visual State
	 */
	struct UDrumsMinigameUI_C_SetMinigameVisualState_Params
	{
	public:
		bool                                                       IsBeatMissedState;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Next Beat Time
	 */
	struct UDrumsMinigameUI_C_NextBeatTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z66I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Late
	 */
	struct UDrumsMinigameUI_C_IsBeatTooLate_Params
	{
	public:
		unsigned char                                              UnknownData_F9NV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Soon
	 */
	struct UDrumsMinigameUI_C_IsBeatTooSoon_Params
	{
	public:
		unsigned char                                              UnknownData_8CRO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Map Beat Travel Based On Timing State
	 */
	struct UDrumsMinigameUI_C_MapBeatTravelBasedOnTimingState_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Too Soon Percent
	 */
	struct UDrumsMinigameUI_C_TooSoonPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.TooLatePercent
	 */
	struct UDrumsMinigameUI_C_TooLatePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Map Percent to Position
	 */
	struct UDrumsMinigameUI_C_MapPercenttoPosition_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Set ProgressBar Color
	 */
	struct UDrumsMinigameUI_C_SetProgressBarColor_Params
	{
	public:
		class UProgressBar*                                        ProgressBar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        TintColor;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Get Beat Travel Percent
	 */
	struct UDrumsMinigameUI_C_GetBeatTravelPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Reset Beat
	 */
	struct UDrumsMinigameUI_C_ResetBeat_Params
	{
	public:
		bool                                                       TryToResetBeatPosition;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Stop Minigame
	 */
	struct UDrumsMinigameUI_C_StopMinigame_Params
	{	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.On Beat Too Late
	 */
	struct UDrumsMinigameUI_C_OnBeatTooLate_Params
	{	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Release Input
	 */
	struct UDrumsMinigameUI_C_ReleaseInput_Params
	{	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Receive Input
	 */
	struct UDrumsMinigameUI_C_ReceiveInput_Params
	{	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.SyncWidget
	 */
	struct UDrumsMinigameUI_C_SyncWidget_Params
	{
	public:
		double                                                     NextTimeOut;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatWindow;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatTimeOut;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatExitWidth;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FHW1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          BeatWidgetIcon;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseDebugMode;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Tick
	 */
	struct UDrumsMinigameUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.Construct
	 */
	struct UDrumsMinigameUI_C_Construct_Params
	{	};

	/**
	 * Function DrumsMinigameUI.DrumsMinigameUI_C.ExecuteUbergraph_DrumsMinigameUI
	 */
	struct UDrumsMinigameUI_C_ExecuteUbergraph_DrumsMinigameUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
