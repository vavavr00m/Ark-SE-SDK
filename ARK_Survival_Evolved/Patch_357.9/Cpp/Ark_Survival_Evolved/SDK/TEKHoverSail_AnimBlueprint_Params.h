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
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.compose mesh transform offsets
	 */
	struct UTEKHoverSail_AnimBlueprint_C_composemeshtransformoffsets_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Process Hover IK
	 */
	struct UTEKHoverSail_AnimBlueprint_C_ProcessHoverIK_Params
	{
	public:
		struct FRotator                                            NewTargetOffsetRot;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delta;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Reset;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H0NG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Hover IK
	 */
	struct UTEKHoverSail_AnimBlueprint_C_HoverIK_Params
	{
	public:
		bool                                                       resetting;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0QFY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            newtargetrotoffset;                                      // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Calculate Mesh Rotation Offset
	 */
	struct UTEKHoverSail_AnimBlueprint_C_CalculateMeshRotationOffset_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Update Root Rotation Offset
	 */
	struct UTEKHoverSail_AnimBlueprint_C_UpdateRootRotationOffset_Params
	{
	public:
		float                                                      deltatime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2238
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2238_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2237
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2237_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2236
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2236_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2235
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2235_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2234
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2234_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2233
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2233_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2232
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2232_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2231
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2231_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2230
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2230_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2229
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2229_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2228
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2228_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2226
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2226_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2225
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2225_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2223
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2223_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2222
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2222_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2221
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2221_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2220
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2220_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2219
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2219_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2218
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2218_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2217
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2217_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2216
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2216_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2215
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2215_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2214
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2214_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2213
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2213_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2212
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2212_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2211
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2211_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2210
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2210_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2209
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2209_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2208
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2208_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2207
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2207_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2206
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2206_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2205
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2205_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2204
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2204_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2203
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2203_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2202
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2202_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2201
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2201_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2200
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2200_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2199
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2199_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2198
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2198_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2197
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2197_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2196
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2196_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2195
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2195_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2194
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2194_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2193
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2193_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2192
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2192_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2191
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2191_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2190
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2190_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2189
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_2189_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_222
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_222_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_221
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_221_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_220
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_220_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_219
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_219_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendListByBool_2880
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendListByBool_2880_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_ApplyAdditive_289
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_ApplyAdditive_289_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendListByBool_2879
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendListByBool_2879_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_218
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_218_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_ModifyBone_612
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_ModifyBone_612_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UTEKHoverSail_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct UTEKHoverSail_AnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.ExecuteUbergraph_TEKHoverSail_AnimBlueprint
	 */
	struct UTEKHoverSail_AnimBlueprint_C_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
