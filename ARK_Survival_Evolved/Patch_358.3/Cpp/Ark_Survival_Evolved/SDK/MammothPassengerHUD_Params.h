#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * Function MammothPassengerHUD.MammothPassengerHUD_C.Receive Input
	 */
	struct UMammothPassengerHUD_C_ReceiveInput_Params
	{	};

	/**
	 * Function MammothPassengerHUD.MammothPassengerHUD_C.Sync Minigame Widget
	 */
	struct UMammothPassengerHUD_C_SyncMinigameWidget_Params
	{
	public:
		double                                                     NextTimeOut;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatWindow;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatTimeOut;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatExitWidth;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F03B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          BeatWidgetIcon;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseDebugMode;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MammothPassengerHUD.MammothPassengerHUD_C.Initialize HUD Widget
	 */
	struct UMammothPassengerHUD_C_InitializeHUDWidget_Params
	{
	public:
		class ABuff_MammothDrummer_C*                              MammothDrummerBuff;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MammothPassengerHUD.MammothPassengerHUD_C.Reset HUD Widget
	 */
	struct UMammothPassengerHUD_C_ResetHUDWidget_Params
	{	};

	/**
	 * Function MammothPassengerHUD.MammothPassengerHUD_C.StartClosingWidget
	 */
	struct UMammothPassengerHUD_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MammothPassengerHUD.MammothPassengerHUD_C.DestroySkiffHudWidget
	 */
	struct UMammothPassengerHUD_C_DestroySkiffHudWidget_Params
	{	};

	/**
	 * Function MammothPassengerHUD.MammothPassengerHUD_C.ExecuteUbergraph_MammothPassengerHUD
	 */
	struct UMammothPassengerHUD_C_ExecuteUbergraph_MammothPassengerHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
