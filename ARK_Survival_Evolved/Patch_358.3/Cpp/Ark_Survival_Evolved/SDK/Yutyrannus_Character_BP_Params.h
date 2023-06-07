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
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerNonDedicated
	 */
	struct AYutyrannus_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.SetAutoCourage
	 */
	struct AYutyrannus_Character_BP_C_SetAutoCourage_Params
	{
	public:
		bool                                                       autoCourageValue;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AYutyrannus_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PTAI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AYutyrannus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTryMultiUse
	 */
	struct AYutyrannus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPAdjustDamage
	 */
	struct AYutyrannus_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1AO4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EPSO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RSWJ[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPShouldCancelDoAttack
	 */
	struct AYutyrannus_Character_BP_C_BPShouldCancelDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.All WildFollowers Attack Target
	 */
	struct AYutyrannus_Character_BP_C_AllWildFollowersAttackTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Cone Check Custom
	 */
	struct AYutyrannus_Character_BP_C_ConeCheckCustom_Params
	{
	public:
		float                                                      coneRadius;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DC3A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    OtherCharacter;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewParam;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewParam1;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInCone;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OXPR[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AYutyrannus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsOfFollowerClass
	 */
	struct AYutyrannus_Character_BP_C_IsOfFollowerClass_Params
	{
	public:
		class UClass*                                              classToCheck;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       hasFollowerClass;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.CanAddFearCommonChecks
	 */
	struct AYutyrannus_Character_BP_C_CanAddFearCommonChecks_Params
	{
	public:
		class APrimalCharacter*                                    OtherCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canAddFear;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DVPC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ConeCheck
	 */
	struct AYutyrannus_Character_BP_C_ConeCheck_Params
	{
	public:
		float                                                      coneRadius;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    OtherCharacter;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useHeadSocketForReference;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInCone;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5N3[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             VectorA;                                                 // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VectorB;                                                 // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AYutyrannus_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsFromSameTeamOrAlliedTribe
	 */
	struct AYutyrannus_Character_BP_C_IsFromSameTeamOrAlliedTribe_Params
	{
	public:
		int32_t                                                    otherTargetingTeam;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAllyOrSameTeam;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZEAY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveAnyDamage
	 */
	struct AYutyrannus_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8MNH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.GetFearCourageBuffClass
	 */
	struct AYutyrannus_Character_BP_C_GetFearCourageBuffClass_Params
	{
	public:
		bool                                                       isFear;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EWQ0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              BuffClass;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isTrustBuff;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanAttack
	 */
	struct AYutyrannus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_16N9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Fear
	 */
	struct AYutyrannus_Character_BP_C_AddFear_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.FindNearbyDinosForFear
	 */
	struct AYutyrannus_Character_BP_C_FindNearbyDinosForFear_Params
	{
	public:
		TArray<class APrimalDinoCharacter*>                        dinosFound;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildYuty Can Add Fear
	 */
	struct AYutyrannus_Character_BP_C_WildYutyCanAddFear_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canScare;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildOrderFollowersAttackTarget
	 */
	struct AYutyrannus_Character_BP_C_WildOrderFollowersAttackTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToWild
	 */
	struct AYutyrannus_Character_BP_C_CanAddCourageTamedToWild_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canAddConfidenceToDino;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Courage
	 */
	struct AYutyrannus_Character_BP_C_AddCourage_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalBuff*                                         Buff;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct AYutyrannus_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QOL3[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileTamed
	 */
	struct AYutyrannus_Character_BP_C_CanAddFollowerWhileTamed_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canBeFollower;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Follower WhileTamed
	 */
	struct AYutyrannus_Character_BP_C_TryAddFollowerWhileTamed_Params
	{
	public:
		class APrimalDinoCharacter*                                follower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage WildToWild
	 */
	struct AYutyrannus_Character_BP_C_CanAddCourageWildToWild_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canAddConfidenceToDino;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Courage
	 */
	struct AYutyrannus_Character_BP_C_TryAddCourage_Params
	{
	public:
		class APrimalDinoCharacter*                                PotentialTarget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       tamedToTamed;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       wildToWild;                                              // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       tamedToWild;                                             // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F5ZG[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToTamed
	 */
	struct AYutyrannus_Character_BP_C_CanAddCourageTamedToTamed_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canAddConfidenceToDino;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedAdd CourageTo Nearby Dinos
	 */
	struct AYutyrannus_Character_BP_C_TamedAddCourageToNearbyDinos_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedYuty Can Add Fear
	 */
	struct AYutyrannus_Character_BP_C_TamedYutyCanAddFear_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canScare;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ADKL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPDoAttack
	 */
	struct AYutyrannus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileWild
	 */
	struct AYutyrannus_Character_BP_C_CanAddFollowerWhileWild_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ignoreTerrorCheck;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canBeFollower;                                           // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add FollowerWhileWild
	 */
	struct AYutyrannus_Character_BP_C_TryAddFollowerWhileWild_Params
	{
	public:
		class APrimalDinoCharacter*                                follower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ignoreTerrorCheck;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       followerAdded;                                           // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UpdateCurrentFollowers
	 */
	struct AYutyrannus_Character_BP_C_UpdateCurrentFollowers_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Look for New Followers
	 */
	struct AYutyrannus_Character_BP_C_CanLookforNewFollowers_Params
	{
	public:
		bool                                                       canLook;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerServer
	 */
	struct AYutyrannus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Wild Find New Followers
	 */
	struct AYutyrannus_Character_BP_C_WildFindNewFollowers_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UserConstructionScript
	 */
	struct AYutyrannus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.AddFearToNearbyDinos
	 */
	struct AYutyrannus_Character_BP_C_AddFearToNearbyDinos_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildTryAddCourageToFollowers
	 */
	struct AYutyrannus_Character_BP_C_WildTryAddCourageToFollowers_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AYutyrannus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoFearAfterDelay
	 */
	struct AYutyrannus_Character_BP_C_DoFearAfterDelay_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawCone_Multicast
	 */
	struct AYutyrannus_Character_BP_C_DrawCone_Multicast_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageAfterDelay
	 */
	struct AYutyrannus_Character_BP_C_DoCourageAfterDelay_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageToFollowersAfterDelay
	 */
	struct AYutyrannus_Character_BP_C_DoCourageToFollowersAfterDelay_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DisableFollowerDistanceCheckForSeconds
	 */
	struct AYutyrannus_Character_BP_C_DisableFollowerDistanceCheckForSeconds_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawArrow_Multicast
	 */
	struct AYutyrannus_Character_BP_C_DrawArrow_Multicast_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveBeginPlay
	 */
	struct AYutyrannus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPUnstasis
	 */
	struct AYutyrannus_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ExecuteUbergraph_Yutyrannus_Character_BP
	 */
	struct AYutyrannus_Character_BP_C_ExecuteUbergraph_Yutyrannus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
