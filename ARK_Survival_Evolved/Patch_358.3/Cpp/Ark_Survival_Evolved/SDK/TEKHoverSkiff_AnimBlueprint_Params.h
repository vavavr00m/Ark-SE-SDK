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
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateHoveringRootRotationOffset
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_UpdateHoveringRootRotationOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateLandedRootRotationOffset
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_UpdateLandedRootRotationOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTraces;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ProcessHoverIK
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_ProcessHoverIK_Params
	{
	public:
		struct FRotator                                            NewTargetOffset_Rotation;                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReset;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2NRE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ComposeMeshTransformOffsets
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_ComposeMeshTransformOffsets_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.HoverIK
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_HoverIK_Params
	{
	public:
		bool                                                       bOverrideStartTransform;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TN36[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct UObject_FTransform                                  NewStartTransform;                                       // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		bool                                                       bResetting;                                              // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NVDT[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            NewTargetRotOffset;                                      // 0x0044(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewTargetLocOffset;                                      // 0x0050(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewPlaneNormal;                                          // 0x005C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateCarriedDinoWeightRatio
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_UpdateCarriedDinoWeightRatio_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q009[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.CalculateMeshRotationOffset
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_CalculateMeshRotationOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintPlayAnimationEvent
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      playedAnimLength;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_1020
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_1020_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6954
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6954_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_502
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_502_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_501
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_501_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_132
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_132_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6953
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6953_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6952
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6952_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6951
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6951_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6950
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6950_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6949
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6949_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6948
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6948_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_500
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_500_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_131
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_131_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6947
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6947_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6946
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6946_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6945
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6945_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6944
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6944_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6943
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6943_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_646
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_646_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6942
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6942_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6941
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6941_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6940
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6940_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6939
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6939_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6938
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6938_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6937
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6937_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint
	 */
	struct UTEKHoverSkiff_AnimBlueprint_C_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
