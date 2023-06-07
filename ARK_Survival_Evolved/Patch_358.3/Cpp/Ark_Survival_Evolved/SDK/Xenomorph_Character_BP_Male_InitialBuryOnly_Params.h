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
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BlueprintAdjustOutputDamage
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.KillSelf
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_KillSelf_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BP_OnSetDeath
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.InitializeDive
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_InitializeDive_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.SetupStaticBaby
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_SetupStaticBaby_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateBuryMound
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_UpdateBuryMound_Params
	{
	public:
		bool                                                       ShouldShow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.GetDefaultXeno
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_GetDefaultXeno_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPUnstasis
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPUnstasis_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateAttackDestOffset
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_UpdateAttackDestOffset_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPAdjustDamage
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BMFP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C2P3[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPTimerServer
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPTimerServer_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UserConstructionScript
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ReceiveBeginPlay
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPDinoPostBeginPlay
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.AttemptDiveOut
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_AttemptDiveOut_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ForceDiveEnd
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_ForceDiveEnd_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly
	 */
	struct AXenomorph_Character_BP_Male_InitialBuryOnly_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
