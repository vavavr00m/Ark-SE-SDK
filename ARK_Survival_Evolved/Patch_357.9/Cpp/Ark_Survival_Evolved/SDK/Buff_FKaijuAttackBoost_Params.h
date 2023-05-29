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
	 * Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BPDeactivated
	 */
	struct ABuff_FKaijuAttackBoost_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffTickServer
	 */
	struct ABuff_FKaijuAttackBoost_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffAdjustDamage
	 */
	struct ABuff_FKaijuAttackBoost_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XKWE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffPostAdjustDamage
	 */
	struct ABuff_FKaijuAttackBoost_C_BuffPostAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Y9T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.UserConstructionScript
	 */
	struct ABuff_FKaijuAttackBoost_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.Multi_RefreshDeactivationTime
	 */
	struct ABuff_FKaijuAttackBoost_C_Multi_RefreshDeactivationTime_Params
	{	};

	/**
	 * Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.ExecuteUbergraph_Buff_FKaijuAttackBoost
	 */
	struct ABuff_FKaijuAttackBoost_C_ExecuteUbergraph_Buff_FKaijuAttackBoost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
