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
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.Try Trigger Win
	 */
	struct UStriderHacking_HUD_C_TryTriggerWin_Params
	{	};

	/**
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.Receive Input
	 */
	struct UStriderHacking_HUD_C_ReceiveInput_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.Sync Minigame Widget
	 */
	struct UStriderHacking_HUD_C_SyncMinigameWidget_Params
	{
	public:
		double                                                     NextTimeOut;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatWindow;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeatTimeOut;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    BeatsPerLoop;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShuttingDown;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UEFE[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        PostProcessInputColorParam;                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.Initialize HUD Widget
	 */
	struct UStriderHacking_HUD_C_InitializeHUDWidget_Params
	{	};

	/**
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.Reset HUD Widget
	 */
	struct UStriderHacking_HUD_C_ResetHUDWidget_Params
	{	};

	/**
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.StartClosingWidget
	 */
	struct UStriderHacking_HUD_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.DestroyWidget
	 */
	struct UStriderHacking_HUD_C_DestroyWidget_Params
	{	};

	/**
	 * Function StriderHacking_HUD.StriderHacking_HUD_C.ExecuteUbergraph_StriderHacking_HUD
	 */
	struct UStriderHacking_HUD_C_ExecuteUbergraph_StriderHacking_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
