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
	 * Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BuffTickServer
	 */
	struct ABuff_TekClaw_Owner_Blocking_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0B6E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPSetupForInstigator
	 */
	struct ABuff_TekClaw_Owner_Blocking_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustDamage_Ex
	 */
	struct ABuff_TekClaw_Owner_Blocking_C_BPAdjustDamage_Ex_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6B2A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpulseDir;                                              // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SGK5[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         EventInstigator;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              InDamageCauser;                                          // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustImpulseFromDamage
	 */
	struct ABuff_TekClaw_Owner_Blocking_C_BPAdjustImpulseFromDamage_Params
	{
	public:
		struct FVector                                             DesiredImpulse;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0010(0x0020)  (Parm)
		class APawn*                                               PawnInstigator;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ACBF[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0048(0x0088)  (Parm)
		struct FVector                                             ReturnValue;                                             // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.UserConstructionScript
	 */
	struct ABuff_TekClaw_Owner_Blocking_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.ExecuteUbergraph_Buff_TekClaw_Owner_Blocking
	 */
	struct ABuff_TekClaw_Owner_Blocking_C_ExecuteUbergraph_Buff_TekClaw_Owner_Blocking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
