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
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPGetDebugInfoString
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetRandomVectorOnCircle
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_GetRandomVectorOnCircle_Params
	{
	public:
		float                                                      MinRadius;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxRadius;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             RandomVector;                                            // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPShouldEndAttack
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ZOD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnEndEvent
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnBeginEvent
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnCanUseStateEvent
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_OnCanUseStateEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPCanAttack
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetAttackIndex
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_GetAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.Get Spine Start and End Position
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_GetSpineStartandEndPosition_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VFXStart;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VFXEnd;                                                  // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.UpdateAimedActors
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_UpdateAimedActors_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected
	 */
	struct UDinoAttackState_Spindles_MinigunDirected_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
