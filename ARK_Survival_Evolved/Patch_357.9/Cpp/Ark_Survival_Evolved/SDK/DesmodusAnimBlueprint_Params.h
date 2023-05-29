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
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.IsDiving
	 */
	struct UDesmodusAnimBlueprint_C_IsDiving_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TGYJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.UpdateDivingLeftRight
	 */
	struct UDesmodusAnimBlueprint_C_UpdateDivingLeftRight_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUSB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDiving;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JGKZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.UpdateDivingForwardBack
	 */
	struct UDesmodusAnimBlueprint_C_UpdateDivingForwardBack_Params
	{
	public:
		class APrimalDinoCharacter*                                Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.BlueprintPlayAnimationEvent
	 */
	struct UDesmodusAnimBlueprint_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      playedAnimLength;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6654
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6654_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ModifyBone_1002
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ModifyBone_1002_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6653
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6653_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6652
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6652_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6651
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6651_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8285
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8285_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6650
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6650_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6649
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6649_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8283
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8283_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6648
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6648_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6647
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6647_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8282
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8282_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8281
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8281_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6646
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6646_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6645
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6645_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6644
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6644_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8280
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8280_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8279
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8279_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8278
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8278_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6643
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6643_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6642
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6642_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6641
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6641_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ApplyAdditive_617
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ApplyAdditive_617_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6640
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6640_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6639
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6639_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_426
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_426_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_474
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_474_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_473
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_473_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_425
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_425_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_424
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_424_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6638
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6638_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_472
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_472_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6637
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6637_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6636
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6636_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6635
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6635_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6634
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6634_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6633
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6633_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6632
	 */
	struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6632_Params
	{	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UDesmodusAnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.ExecuteUbergraph_DesmodusAnimBlueprint
	 */
	struct UDesmodusAnimBlueprint_C_ExecuteUbergraph_DesmodusAnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
