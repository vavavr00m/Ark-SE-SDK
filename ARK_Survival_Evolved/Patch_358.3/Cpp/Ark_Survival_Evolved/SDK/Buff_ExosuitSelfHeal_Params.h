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
	 * Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.InitBuff
	 */
	struct ABuff_ExosuitSelfHeal_C_InitBuff_Params
	{	};

	/**
	 * Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BPActivated
	 */
	struct ABuff_ExosuitSelfHeal_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffPostAdjustDamage
	 */
	struct ABuff_ExosuitSelfHeal_C_BuffPostAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TOJF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffTickServer
	 */
	struct ABuff_ExosuitSelfHeal_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.UserConstructionScript
	 */
	struct ABuff_ExosuitSelfHeal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.ExecuteUbergraph_Buff_ExosuitSelfHeal
	 */
	struct ABuff_ExosuitSelfHeal_C_ExecuteUbergraph_Buff_ExosuitSelfHeal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
