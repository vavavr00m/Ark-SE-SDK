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
	 * Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.ClampDirectionToOwnerDino
	 */
	struct UDinoAttackStateRanged_Rhynio_C_ClampDirectionToOwnerDino_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutDir;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.BPRangedAttackOnBegin
	 */
	struct UDinoAttackStateRanged_Rhynio_C_BPRangedAttackOnBegin_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelocity;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.BPRangedAttack
	 */
	struct UDinoAttackStateRanged_Rhynio_C_BPRangedAttack_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelocity;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C.ExecuteUbergraph_DinoAttackStateRanged_Rhynio
	 */
	struct UDinoAttackStateRanged_Rhynio_C_ExecuteUbergraph_DinoAttackStateRanged_Rhynio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
