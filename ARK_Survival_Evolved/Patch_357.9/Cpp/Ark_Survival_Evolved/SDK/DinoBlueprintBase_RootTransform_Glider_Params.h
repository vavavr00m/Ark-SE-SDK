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
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.PassengerUpdateAnim
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_PassengerUpdateAnim_Params
	{
	public:
		class APrimalDinoCharacter*                                CarryingDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.UpdateAnimFromShooterChar
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_UpdateAnimFromShooterChar_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasBuffFromPawnOwner;                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XM7Y[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.BlueprintPlayAnimationEvent
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      playedAnimLength;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7434
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7434_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9113
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9113_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ModifyBone_1056
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ModifyBone_1056_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7433
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7433_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_RotationOffsetBlendSpace_462
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_RotationOffsetBlendSpace_462_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7432
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7432_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7431
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7431_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9111
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9111_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7430
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7430_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7429
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7429_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9110
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9110_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9109
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9109_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7428
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7428_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9108
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9108_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7427
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7427_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7426
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7426_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_696
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_696_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7425
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7425_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7424
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7424_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7423
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7423_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9103
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9103_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7422
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7422_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7421
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7421_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9102
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9102_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9101
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9101_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_695
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_695_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7420
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7420_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7419
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7419_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7418
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7418_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7417
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7417_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7416
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7416_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7415
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7415_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByInt_48
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByInt_48_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9094
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9094_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9093
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9093_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9092
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9092_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9091
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9091_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7414
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7414_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9090
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9090_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7413
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7413_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7412
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7412_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9089
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9089_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9088
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9088_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7411
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7411_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9087
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9087_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7410
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7410_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9086
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9086_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9085
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9085_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7409
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7409_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_30
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_30_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_29
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_29_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7408
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7408_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7407
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7407_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.BlueprintUpdateAnimation
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider
	 */
	struct UDinoBlueprintBase_RootTransform_Glider_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
