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
	 * Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Content Opacity
	 */
	struct UDrumBeatWidget_C_SetWidgetContentOpacity_Params
	{
	public:
		float                                                      NewOpacity;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Coloration
	 */
	struct UDrumBeatWidget_C_SetWidgetColoration_Params
	{
	public:
		struct FLinearColor                                        NewColor;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrumBeatWidget.DrumBeatWidget_C.ExecuteUbergraph_DrumBeatWidget
	 */
	struct UDrumBeatWidget_C_ExecuteUbergraph_DrumBeatWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
