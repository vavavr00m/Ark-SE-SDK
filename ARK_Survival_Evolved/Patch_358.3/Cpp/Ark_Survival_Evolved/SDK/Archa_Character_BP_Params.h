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
	 * Function Archa_Character_BP.Archa_Character_BP_C.DoOverrideMountedAirControl
	 */
	struct AArcha_Character_BP_C_DoOverrideMountedAirControl_Params
	{
	public:
		float                                                      AirControlIn;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AArcha_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.OnRep_bPreventGlide
	 */
	struct AArcha_Character_BP_C_OnRep_bPreventGlide_Params
	{	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.HandleMountedDinoAction
	 */
	struct AArcha_Character_BP_C_HandleMountedDinoAction_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.BPCharacterSleeped
	 */
	struct AArcha_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.GiveSap
	 */
	struct AArcha_Character_BP_C_GiveSap_Params
	{	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.BPOnAttachmentReplication
	 */
	struct AArcha_Character_BP_C_BPOnAttachmentReplication_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1QY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.BPOnSetMountedDino
	 */
	struct AArcha_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.BPOnClearMountedDino
	 */
	struct AArcha_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.ReceiveTick
	 */
	struct AArcha_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.BPGetGravityZScale
	 */
	struct AArcha_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.UserConstructionScript
	 */
	struct AArcha_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.MultiFinishAttachingToTree
	 */
	struct AArcha_Character_BP_C_MultiFinishAttachingToTree_Params
	{
	public:
		struct FVector                                             relLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            relRot;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Archa_Character_BP.Archa_Character_BP_C.ExecuteUbergraph_Archa_Character_BP
	 */
	struct AArcha_Character_BP_C_ExecuteUbergraph_Archa_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
