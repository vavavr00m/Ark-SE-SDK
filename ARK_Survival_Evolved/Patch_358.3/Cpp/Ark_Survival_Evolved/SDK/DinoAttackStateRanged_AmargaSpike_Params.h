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
	 * Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.StartAnimationStateEvent
	 */
	struct UDinoAttackStateRanged_AmargaSpike_C_StartAnimationStateEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttack
	 */
	struct UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttack_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelocity;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttackOnBegin
	 */
	struct UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttackOnBegin_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelocity;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike
	 */
	struct UDinoAttackStateRanged_AmargaSpike_C_ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
