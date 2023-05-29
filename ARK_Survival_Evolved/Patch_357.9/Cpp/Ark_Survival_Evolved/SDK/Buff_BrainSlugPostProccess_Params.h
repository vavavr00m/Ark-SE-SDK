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
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPInstigatorReceivedKillingDamage
	 */
	struct ABuff_BrainSlugPostProccess_C_BPInstigatorReceivedKillingDamage_Params
	{	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.InterceptInstigatorPlayerEmoteAnim
	 */
	struct ABuff_BrainSlugPostProccess_C_InterceptInstigatorPlayerEmoteAnim_Params
	{
	public:
		class UAnimMontage*                                        EmoteAnim;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FFL7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_BrainSlugPostProccess_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffOverrideInventoryAccessInput
	 */
	struct ABuff_BrainSlugPostProccess_C_BuffOverrideInventoryAccessInput_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInputPressed;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.AllowPostProcessEffect
	 */
	struct ABuff_BrainSlugPostProccess_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_641W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.UserConstructionScript
	 */
	struct ABuff_BrainSlugPostProccess_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickClient
	 */
	struct ABuff_BrainSlugPostProccess_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickServer
	 */
	struct ABuff_BrainSlugPostProccess_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ReceiveBeginPlay
	 */
	struct ABuff_BrainSlugPostProccess_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ExecuteUbergraph_Buff_BrainSlugPostProccess
	 */
	struct ABuff_BrainSlugPostProccess_C_ExecuteUbergraph_Buff_BrainSlugPostProccess_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
