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
	 * Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.GetDamageClass
	 */
	struct UDinoAttackState_Spindles_Base_C_GetDamageClass_Params
	{
	public:
		class UClass*                                              DamageClass;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsMinigunMode
	 */
	struct UDinoAttackState_Spindles_Base_C_IsMinigunMode_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_84T9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsAIControlled
	 */
	struct UDinoAttackState_Spindles_Base_C_IsAIControlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OY3N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.ExecuteUbergraph_DinoAttackState_Spindles_Base
	 */
	struct UDinoAttackState_Spindles_Base_C_ExecuteUbergraph_DinoAttackState_Spindles_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
