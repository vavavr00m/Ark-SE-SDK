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
	 * Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.SetHUDText
	 */
	struct UDinopithecusHUDWidget_C_SetHUDText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		float                                                      TimeToFade;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WHWT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Initialize HUD Widget
	 */
	struct UDinopithecusHUDWidget_C_InitializeHUDWidget_Params
	{	};

	/**
	 * Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Reset HUD Widget
	 */
	struct UDinopithecusHUDWidget_C_ResetHUDWidget_Params
	{	};

	/**
	 * Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.DestroyWidget
	 */
	struct UDinopithecusHUDWidget_C_DestroyWidget_Params
	{	};

	/**
	 * Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.StartClosingWidget
	 */
	struct UDinopithecusHUDWidget_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.ExecuteUbergraph_DinopithecusHUDWidget
	 */
	struct UDinopithecusHUDWidget_C_ExecuteUbergraph_DinopithecusHUDWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.OnWidgetDestroyed__DelegateSignature
	 */
	struct UDinopithecusHUDWidget_C_OnWidgetDestroyed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
