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
	 * Function Buff_StriderVision.Buff_StriderVision_C.GetHudData
	 */
	struct ABuff_StriderVision_C_GetHudData_Params
	{
	public:
		struct FVector                                             PingWorldLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ProgressBarValue;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        BaseColor;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RingScale;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Visibility;                                              // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.stop highlighting target
	 */
	struct ABuff_StriderVision_C_stophighlightingtarget_Params
	{
	public:
		class APrimalCharacter*                                    InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.set all target bounds to 1
	 */
	struct ABuff_StriderVision_C_setalltargetboundsto1_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.update viewed targets
	 */
	struct ABuff_StriderVision_C_updateviewedtargets_Params
	{
	public:
		bool                                                       Deactivate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.Keep Visible
	 */
	struct ABuff_StriderVision_C_KeepVisible_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.HideBuffFromHUD
	 */
	struct ABuff_StriderVision_C_HideBuffFromHUD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.Setup HUDWidget
	 */
	struct ABuff_StriderVision_C_SetupHUDWidget_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.DestroyHudWidget
	 */
	struct ABuff_StriderVision_C_DestroyHudWidget_Params
	{
	public:
		bool                                                       Bypass;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.Flash Target
	 */
	struct ABuff_StriderVision_C_FlashTarget_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.Highlight latest shared target
	 */
	struct ABuff_StriderVision_C_Highlightlatestsharedtarget_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.Keep Shared Targets Active
	 */
	struct ABuff_StriderVision_C_KeepSharedTargetsActive_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.BPActivated
	 */
	struct ABuff_StriderVision_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.Set All Components Render Custom Depth
	 */
	struct ABuff_StriderVision_C_SetAllComponentsRenderCustomDepth_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       rendercustomdepth;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EVEN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.set all components custom depth stencil value
	 */
	struct ABuff_StriderVision_C_setallcomponentscustomdepthstencilvalue_Params
	{
	public:
		int32_t                                                    StencilValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RBTQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.BuffTickClient
	 */
	struct ABuff_StriderVision_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.BuffTickServer
	 */
	struct ABuff_StriderVision_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.ReceiveBeginPlay
	 */
	struct ABuff_StriderVision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.BPDeactivated
	 */
	struct ABuff_StriderVision_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.UserConstructionScript
	 */
	struct ABuff_StriderVision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.ClearHUDReference
	 */
	struct ABuff_StriderVision_C_ClearHUDReference_Params
	{	};

	/**
	 * Function Buff_StriderVision.Buff_StriderVision_C.ExecuteUbergraph_Buff_StriderVision
	 */
	struct ABuff_StriderVision_C_ExecuteUbergraph_Buff_StriderVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
