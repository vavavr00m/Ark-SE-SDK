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
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPGetHUDElements
	 */
	struct ABuff_FishingNetXrayVision_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.clear caught animals
	 */
	struct ABuff_FishingNetXrayVision_C_clearcaughtanimals_Params
	{	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.Set All Components Render Custom Depth
	 */
	struct ABuff_FishingNetXrayVision_C_SetAllComponentsRenderCustomDepth_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       rendercustomdepth;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CQW1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.set all components custom depth stencil value
	 */
	struct ABuff_FishingNetXrayVision_C_setallcomponentscustomdepthstencilvalue_Params
	{
	public:
		int32_t                                                    StencilValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EPHX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickClient
	 */
	struct ABuff_FishingNetXrayVision_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickServer
	 */
	struct ABuff_FishingNetXrayVision_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JLQE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ReceiveBeginPlay
	 */
	struct ABuff_FishingNetXrayVision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPDeactivated
	 */
	struct ABuff_FishingNetXrayVision_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.UserConstructionScript
	 */
	struct ABuff_FishingNetXrayVision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ExecuteUbergraph_Buff_FishingNetXrayVision
	 */
	struct ABuff_FishingNetXrayVision_C_ExecuteUbergraph_Buff_FishingNetXrayVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
