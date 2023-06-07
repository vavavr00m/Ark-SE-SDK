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
	 * Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Notify Minigame Ready
	 */
	struct UStriderHackingBeatWidget_C_NotifyMinigameReady_Params
	{	};

	/**
	 * Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.UpdateGlyphTextures
	 */
	struct UStriderHackingBeatWidget_C_UpdateGlyphTextures_Params
	{
	public:
		class UTexture2D*                                          Glyph0_Top;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          Glyph1_TopMiddle;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          Glyph2_Middle;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          Glyph3_MiddleBottom;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          Glyph4_Bottom;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Tick
	 */
	struct UStriderHackingBeatWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.Construct
	 */
	struct UStriderHackingBeatWidget_C_Construct_Params
	{	};

	/**
	 * Function StriderHackingBeatWidget.StriderHackingBeatWidget_C.ExecuteUbergraph_StriderHackingBeatWidget
	 */
	struct UStriderHackingBeatWidget_C_ExecuteUbergraph_StriderHackingBeatWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
