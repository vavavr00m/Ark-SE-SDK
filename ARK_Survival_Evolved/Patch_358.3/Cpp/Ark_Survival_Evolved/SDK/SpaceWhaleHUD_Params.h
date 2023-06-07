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
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveValueTextBlock_Text_1
	 */
	struct USpaceWhaleHUD_C_Get_HyperdriveValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Set Progress Bar Foreground Color
	 */
	struct USpaceWhaleHUD_C_SetProgressBarForegroundColor_Params
	{
	public:
		class UObject*                                             ProgressBarObject;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        LinearColor;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerBelowProgressBar_Percent_1
	 */
	struct USpaceWhaleHUD_C_Get_CosmicPowerBelowProgressBar_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerValueTextBlock_Text_1
	 */
	struct USpaceWhaleHUD_C_Get_CosmicPowerValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerAboveProgressBar_Percent_1
	 */
	struct USpaceWhaleHUD_C_Get_CosmicPowerAboveProgressBar_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveProgressBar_Percent_1
	 */
	struct USpaceWhaleHUD_C_Get_HyperdriveProgressBar_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R4BR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get BombsHintText 0
	 */
	struct USpaceWhaleHUD_C_GetBombsHintText0_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.InitFromSpaceWhale
	 */
	struct USpaceWhaleHUD_C_InitFromSpaceWhale_Params
	{
	public:
		class ASpaceWhale_Character_BP_C*                          SpaceWhaleCharBP;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.StartClosingWidget
	 */
	struct USpaceWhaleHUD_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.DestroyHudWidget
	 */
	struct USpaceWhaleHUD_C_DestroyHudWidget_Params
	{	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.ResetHudWidget
	 */
	struct USpaceWhaleHUD_C_ResetHudWidget_Params
	{	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Tick
	 */
	struct USpaceWhaleHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.Construct
	 */
	struct USpaceWhaleHUD_C_Construct_Params
	{	};

	/**
	 * Function SpaceWhaleHUD.SpaceWhaleHUD_C.ExecuteUbergraph_SpaceWhaleHUD
	 */
	struct USpaceWhaleHUD_C_ExecuteUbergraph_SpaceWhaleHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
