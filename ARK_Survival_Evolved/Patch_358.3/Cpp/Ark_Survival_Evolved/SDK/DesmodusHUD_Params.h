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
	 * Function DesmodusHUD.DesmodusHUD_C.ClearString
	 */
	struct UDesmodusHUD_C_ClearString_Params
	{	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.FadeOutHUDString
	 */
	struct UDesmodusHUD_C_FadeOutHUDString_Params
	{	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.SetHUDString
	 */
	struct UDesmodusHUD_C_SetHUDString_Params
	{
	public:
		class FString                                              HudString;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    Priority;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TargetOpacity;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentOpacity;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ColorRed;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.Initialize HUD Widget
	 */
	struct UDesmodusHUD_C_InitializeHUDWidget_Params
	{	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.Reset HUD Widget
	 */
	struct UDesmodusHUD_C_ResetHUDWidget_Params
	{	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.DestroyWidget
	 */
	struct UDesmodusHUD_C_DestroyWidget_Params
	{	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.StartClosingWidget
	 */
	struct UDesmodusHUD_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.ExecuteUbergraph_DesmodusHUD
	 */
	struct UDesmodusHUD_C_ExecuteUbergraph_DesmodusHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesmodusHUD.DesmodusHUD_C.OnWidgetDestroyed__DelegateSignature
	 */
	struct UDesmodusHUD_C_OnWidgetDestroyed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
