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
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.Get_AbilityTextBlock_Text_1
	 */
	struct UGiantTurtleHUD_C_Get_AbilityTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.Get_BubbleBreathProgressBar_Percent_1
	 */
	struct UGiantTurtleHUD_C_Get_BubbleBreathProgressBar_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.InitFromGiantTurtle
	 */
	struct UGiantTurtleHUD_C_InitFromGiantTurtle_Params
	{
	public:
		class AGiantTurtle_Character_BP_C*                         GiantTurtle_Char_BP;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.StartClosingWidget
	 */
	struct UGiantTurtleHUD_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.DestroyHudWidget
	 */
	struct UGiantTurtleHUD_C_DestroyHudWidget_Params
	{	};

	/**
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.ResetHudWidget
	 */
	struct UGiantTurtleHUD_C_ResetHudWidget_Params
	{	};

	/**
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.Tick
	 */
	struct UGiantTurtleHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtleHUD.GiantTurtleHUD_C.ExecuteUbergraph_GiantTurtleHUD
	 */
	struct UGiantTurtleHUD_C_ExecuteUbergraph_GiantTurtleHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
