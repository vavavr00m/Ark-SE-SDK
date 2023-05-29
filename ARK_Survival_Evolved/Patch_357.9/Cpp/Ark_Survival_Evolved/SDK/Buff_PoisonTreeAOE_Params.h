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
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.BPDeactivated
	 */
	struct ABuff_PoisonTreeAOE_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.GetGrowthScale
	 */
	struct ABuff_PoisonTreeAOE_C_GetGrowthScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveAnyDamage
	 */
	struct ABuff_PoisonTreeAOE_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SN79[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.NotifyDamage
	 */
	struct ABuff_PoisonTreeAOE_C_NotifyDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_67AV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         EventInstigator;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              TheDamageCauser;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.UserConstructionScript
	 */
	struct ABuff_PoisonTreeAOE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveBeginPlay
	 */
	struct ABuff_PoisonTreeAOE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveTick
	 */
	struct ABuff_PoisonTreeAOE_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.Multi-SetScale
	 */
	struct ABuff_PoisonTreeAOE_C_MultiSetScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ExecuteUbergraph_Buff_PoisonTreeAOE
	 */
	struct ABuff_PoisonTreeAOE_C_ExecuteUbergraph_Buff_PoisonTreeAOE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
