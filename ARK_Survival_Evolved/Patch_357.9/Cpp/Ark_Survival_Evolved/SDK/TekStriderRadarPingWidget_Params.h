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
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Tick
	 */
	struct UTekStriderRadarPingWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetMaterialHostScaleAndLocation
	 */
	struct UTekStriderRadarPingWidget_C_SetMaterialHostScaleAndLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IPEX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SyncHUDData
	 */
	struct UTekStriderRadarPingWidget_C_SyncHUDData_Params
	{	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetupDynamicMaterial
	 */
	struct UTekStriderRadarPingWidget_C_SetupDynamicMaterial_Params
	{	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.InitializeHUDWidget
	 */
	struct UTekStriderRadarPingWidget_C_InitializeHUDWidget_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Reset HUD Widget
	 */
	struct UTekStriderRadarPingWidget_C_ResetHUDWidget_Params
	{	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.DestroyWidget
	 */
	struct UTekStriderRadarPingWidget_C_DestroyWidget_Params
	{	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.ExecuteUbergraph_TekStriderRadarPingWidget
	 */
	struct UTekStriderRadarPingWidget_C_ExecuteUbergraph_TekStriderRadarPingWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.OnWidgetDestroyed__DelegateSignature
	 */
	struct UTekStriderRadarPingWidget_C_OnWidgetDestroyed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
