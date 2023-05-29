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
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.IsDebugMode
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_IsDebugMode_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetDamageForSpine
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_GetDamageForSpine_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QOUQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.FireSpine
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_FireSpine_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.Get Spine Start and End Position
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_GetSpineStartandEndPosition_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VFXStart;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VFXEnd;                                                  // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetAttackIndex
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_GetAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPShouldEndAttack
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KLNB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPCanAttack
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LGPJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnEndEvent
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnBeginEvent
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnTickEvent
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.PrintDPS
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_PrintDPS_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase
	 */
	struct UDinoAttackState_Spindles_MinigunBase_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
