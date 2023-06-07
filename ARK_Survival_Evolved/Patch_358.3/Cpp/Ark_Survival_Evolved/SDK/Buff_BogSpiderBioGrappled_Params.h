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
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPDeactivated
	 */
	struct ABuff_BogSpiderBioGrappled_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReleaseBioGrapple
	 */
	struct ABuff_BogSpiderBioGrappled_C_ReleaseBioGrapple_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickServer
	 */
	struct ABuff_BogSpiderBioGrappled_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LZ2C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPGetHUDElements
	 */
	struct ABuff_BogSpiderBioGrappled_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_BogSpiderBioGrappled_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ToggleEnsnareVFX
	 */
	struct ABuff_BogSpiderBioGrappled_C_ToggleEnsnareVFX_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickClient
	 */
	struct ABuff_BogSpiderBioGrappled_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPCheckPreventInput
	 */
	struct ABuff_BogSpiderBioGrappled_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartAltFire
	 */
	struct ABuff_BogSpiderBioGrappled_C_BPHandleOnStartAltFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartFire
	 */
	struct ABuff_BogSpiderBioGrappled_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnEnsnared
	 */
	struct ABuff_BogSpiderBioGrappled_C_OnEnsnared_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnBioGrappled
	 */
	struct ABuff_BogSpiderBioGrappled_C_OnBioGrappled_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.SyncGrapplingBogSpider
	 */
	struct ABuff_BogSpiderBioGrappled_C_SyncGrapplingBogSpider_Params
	{
	public:
		class ABogSpider_Character_BP_C*                           SpiderRef;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.TryStruggle
	 */
	struct ABuff_BogSpiderBioGrappled_C_TryStruggle_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.UserConstructionScript
	 */
	struct ABuff_BogSpiderBioGrappled_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__FinishedFunc
	 */
	struct ABuff_BogSpiderBioGrappled_C_StruggleShake__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__UpdateFunc
	 */
	struct ABuff_BogSpiderBioGrappled_C_StruggleShake__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Server_TryStruggle
	 */
	struct ABuff_BogSpiderBioGrappled_C_Server_TryStruggle_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Multi_OnBioGrappleEvent
	 */
	struct ABuff_BogSpiderBioGrappled_C_Multi_OnBioGrappleEvent_Params
	{
	public:
		bool                                                       bEnsnare;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReceiveBeginPlay
	 */
	struct ABuff_BogSpiderBioGrappled_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.DoHudShake
	 */
	struct ABuff_BogSpiderBioGrappled_C_DoHudShake_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Client_DidStruggle
	 */
	struct ABuff_BogSpiderBioGrappled_C_Client_DidStruggle_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ExecuteUbergraph_Buff_BogSpiderBioGrappled
	 */
	struct ABuff_BogSpiderBioGrappled_C_ExecuteUbergraph_Buff_BogSpiderBioGrappled_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
