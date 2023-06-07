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
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPUpdateBestTarget
	 */
	struct AHyaenodon_AIController_BP_C_BPUpdateBestTarget_Params
	{
	public:
		class AActor*                                              bestTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontSetIn;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontSetOut;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TLMZ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPSetupFindTarget
	 */
	struct AHyaenodon_AIController_BP_C_BPSetupFindTarget_Params
	{	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ChangedAITarget
	 */
	struct AHyaenodon_AIController_BP_C_ChangedAITarget_Params
	{	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.IsAThinkingHyaenodon
	 */
	struct AHyaenodon_AIController_BP_C_IsAThinkingHyaenodon_Params
	{
	public:
		bool                                                       IsAThinker;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y3Q7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPNotifyTargetSet
	 */
	struct AHyaenodon_AIController_BP_C_BPNotifyTargetSet_Params
	{	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AHyaenodon_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.UserConstructionScript
	 */
	struct AHyaenodon_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ReceiveBeginPlay
	 */
	struct AHyaenodon_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ExecuteUbergraph_Hyaenodon_AIController_BP
	 */
	struct AHyaenodon_AIController_BP_C_ExecuteUbergraph_Hyaenodon_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
