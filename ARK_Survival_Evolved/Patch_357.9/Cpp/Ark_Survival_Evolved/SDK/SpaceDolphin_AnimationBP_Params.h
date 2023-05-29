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
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.UpdateMovementAnimRate
	 */
	struct USpaceDolphin_AnimationBP_C_UpdateMovementAnimRate_Params
	{
	public:
		float                                                      Base;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F1BD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.GetFlyingBlendspaceCoords
	 */
	struct USpaceDolphin_AnimationBP_C_GetFlyingBlendspaceCoords_Params
	{
	public:
		class APrimalDinoCharacter*                                ForDino;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           BlendspaceCoords;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.BlueprintPlayAnimationEvent
	 */
	struct USpaceDolphin_AnimationBP_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      playedAnimLength;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4855
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4855_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4854
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4854_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4853
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4853_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ApplyAdditive_486
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ApplyAdditive_486_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4852
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4852_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4858
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4858_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4850
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4850_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4849
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4849_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4846
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4846_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4845
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4845_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4844
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4844_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4843
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4843_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4859
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4859_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_RotationOffsetBlendSpace_318
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_RotationOffsetBlendSpace_318_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5902
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5902_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5898
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5898_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ModifyBone_864
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ModifyBone_864_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4840
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4840_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4839
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4839_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5887
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5887_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5886
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5886_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_330
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_330_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_329
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_329_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4860
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4860_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4838
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4838_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_328
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_328_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4837
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4837_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_327
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_327_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4836
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4836_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_326
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_326_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4835
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4835_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_325
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_325_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4834
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4834_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_324
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_324_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4833
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4833_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4832
	 */
	struct USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4832_Params
	{	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.BlueprintUpdateAnimation
	 */
	struct USpaceDolphin_AnimationBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.ExecuteUbergraph_SpaceDolphin_AnimationBP
	 */
	struct USpaceDolphin_AnimationBP_C_ExecuteUbergraph_SpaceDolphin_AnimationBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
