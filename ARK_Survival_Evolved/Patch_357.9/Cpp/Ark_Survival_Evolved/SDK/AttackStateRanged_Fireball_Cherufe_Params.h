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
	 * Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPCanAttack
	 */
	struct UAttackStateRanged_Fireball_Cherufe_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ELHY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.StartAnimationStateEvent
	 */
	struct UAttackStateRanged_Fireball_Cherufe_C_StartAnimationStateEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttack
	 */
	struct UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttack_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelocity;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttackOnBegin
	 */
	struct UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttackOnBegin_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelocity;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe
	 */
	struct UAttackStateRanged_Fireball_Cherufe_C_ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
