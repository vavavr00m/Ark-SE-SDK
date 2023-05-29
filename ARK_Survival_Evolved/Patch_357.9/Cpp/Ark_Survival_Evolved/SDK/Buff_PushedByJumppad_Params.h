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
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.BPNotifyOtherBuffActivated
	 */
	struct ABuff_PushedByJumppad_C_BPNotifyOtherBuffActivated_Params
	{
	public:
		class APrimalBuff*                                         OtherBuff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.BPOnInstigatorMovementModeChangedNotify
	 */
	struct ABuff_PushedByJumppad_C_BPOnInstigatorMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.BPSetupForInstigator
	 */
	struct ABuff_PushedByJumppad_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.Set ColorOfTrail
	 */
	struct ABuff_PushedByJumppad_C_SetColorOfTrail_Params
	{
	public:
		struct FVector                                             InColorVector;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.NotifyDamage
	 */
	struct ABuff_PushedByJumppad_C_NotifyDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1EI4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         EventInstigator;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              TheDamageCauser;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.BuffAdjustDamage
	 */
	struct ABuff_PushedByJumppad_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N9Q5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.UserConstructionScript
	 */
	struct ABuff_PushedByJumppad_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.ExecuteUbergraph_Buff_PushedByJumppad
	 */
	struct ABuff_PushedByJumppad_C_ExecuteUbergraph_Buff_PushedByJumppad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
