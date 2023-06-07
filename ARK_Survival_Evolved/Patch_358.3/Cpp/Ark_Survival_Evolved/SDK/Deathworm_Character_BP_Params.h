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
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPIsHidden
	 */
	struct ADeathworm_Character_BP_C_BPIsHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPAdjustDamage
	 */
	struct ADeathworm_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QFF2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O77G[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerNonDedicated
	 */
	struct ADeathworm_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerServer
	 */
	struct ADeathworm_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.Set Death Worm CollisionState
	 */
	struct ADeathworm_Character_BP_C_SetDeathWormCollisionState_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.UpdateDeathwormTrail
	 */
	struct ADeathworm_Character_BP_C_UpdateDeathwormTrail_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.RefreshDeathwormState
	 */
	struct ADeathworm_Character_BP_C_RefreshDeathwormState_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.OnRep_isUnderground
	 */
	struct ADeathworm_Character_BP_C_OnRep_isUnderground_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.CheckTime
	 */
	struct ADeathworm_Character_BP_C_CheckTime_Params
	{
	public:
		double                                                     lasttime;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TimeHasPassed;                                           // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GM59[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.Pop Up
	 */
	struct ADeathworm_Character_BP_C_PopUp_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.DiveIn
	 */
	struct ADeathworm_Character_BP_C_DiveIn_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.BlueprintCanAttack
	 */
	struct ADeathworm_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R3MA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_USQE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.UserConstructionScript
	 */
	struct ADeathworm_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.ReceiveBeginPlay
	 */
	struct ADeathworm_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.PlayDeathwormVFX
	 */
	struct ADeathworm_Character_BP_C_PlayDeathwormVFX_Params
	{
	public:
		bool                                                       orientToGround;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AAI5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OffsetFromRoot;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.EnableUndergroundMovement
	 */
	struct ADeathworm_Character_BP_C_EnableUndergroundMovement_Params
	{	};

	/**
	 * Function Deathworm_Character_BP.Deathworm_Character_BP_C.ExecuteUbergraph_Deathworm_Character_BP
	 */
	struct ADeathworm_Character_BP_C_ExecuteUbergraph_Deathworm_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
