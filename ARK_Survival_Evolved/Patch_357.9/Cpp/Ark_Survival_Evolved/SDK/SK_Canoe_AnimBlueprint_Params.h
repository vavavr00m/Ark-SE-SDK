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
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.GetPredictedServerCanoeLocation
	 */
	struct USK_Canoe_AnimBlueprint_C_GetPredictedServerCanoeLocation_Params
	{
	public:
		struct FVector                                             PredictedLoc;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.CheckForSimCanoeTransformCorrection
	 */
	struct USK_Canoe_AnimBlueprint_C_CheckForSimCanoeTransformCorrection_Params
	{	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeRotationTargets
	 */
	struct USK_Canoe_AnimBlueprint_C_UpdateSimCanoeRotationTargets_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeLocationTargets
	 */
	struct USK_Canoe_AnimBlueprint_C_UpdateSimCanoeLocationTargets_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateValidCanoeOwnerRef
	 */
	struct USK_Canoe_AnimBlueprint_C_UpdateValidCanoeOwnerRef_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimulatedCanoeTransform
	 */
	struct USK_Canoe_AnimBlueprint_C_UpdateSimulatedCanoeTransform_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936
	 */
	struct USK_Canoe_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936_Params
	{	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct USK_Canoe_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct USK_Canoe_AnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.ExecuteUbergraph_SK_Canoe_AnimBlueprint
	 */
	struct USK_Canoe_AnimBlueprint_C_ExecuteUbergraph_SK_Canoe_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
