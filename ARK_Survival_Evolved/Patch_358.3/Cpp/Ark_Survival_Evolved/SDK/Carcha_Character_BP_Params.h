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
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.CanBeViewed
	 */
	struct ACarcha_Character_BP_C_CanBeViewed_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.GetPointCustomData
	 */
	struct ACarcha_Character_BP_C_GetPointCustomData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.GetPointOfInterestData
	 */
	struct ACarcha_Character_BP_C_GetPointOfInterestData_Params
	{
	public:
		struct FPointOfInterestData                                ReturnValue;                                             // 0x0000(0x0140)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ReceiveTick
	 */
	struct ACarcha_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BloodRageDecayed
	 */
	struct ACarcha_Character_BP_C_BloodRageDecayed_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.PlayEndFriendModeAnim
	 */
	struct ACarcha_Character_BP_C_PlayEndFriendModeAnim_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.StackDecayProgress
	 */
	struct ACarcha_Character_BP_C_StackDecayProgress_Params
	{
	public:
		float                                                      DecayProgress;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IQ5D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.IsInGracePeriod
	 */
	struct ACarcha_Character_BP_C_IsInGracePeriod_Params
	{
	public:
		class APrimalCharacter*                                    TestTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       safe;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.UpdateWinded
	 */
	struct ACarcha_Character_BP_C_UpdateWinded_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ClientEndFriendMode
	 */
	struct ACarcha_Character_BP_C_ClientEndFriendMode_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.PostFriendMode
	 */
	struct ACarcha_Character_BP_C_PostFriendMode_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.CheckForTrapped
	 */
	struct ACarcha_Character_BP_C_CheckForTrapped_Params
	{
	public:
		bool                                                       IsTrapped;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHZB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPAdjustDamage
	 */
	struct ACarcha_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IPDL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VT53[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3EC2[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.PreventPVEDamage
	 */
	struct ACarcha_Character_BP_C_PreventPVEDamage_Params
	{
	public:
		int32_t                                                    OtherTeam;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Prevent;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.NetSyncStatusValues
	 */
	struct ACarcha_Character_BP_C_NetSyncStatusValues_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.UpdateStatusValues
	 */
	struct ACarcha_Character_BP_C_UpdateStatusValues_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ACarcha_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CD0Y[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ReceiveBeginPlay
	 */
	struct ACarcha_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPCanIgnoreImmobilizationTrap
	 */
	struct ACarcha_Character_BP_C_BPCanIgnoreImmobilizationTrap_Params
	{
	public:
		class UClass*                                              TrapClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTrigger;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_161L[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ReceiveEndPlay
	 */
	struct ACarcha_Character_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0YUN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.DecayFriendship
	 */
	struct ACarcha_Character_BP_C_DecayFriendship_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_91OR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.FindTeamRecord
	 */
	struct ACarcha_Character_BP_C_FindTeamRecord_Params
	{
	public:
		int32_t                                                    Team;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RecordIndex;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       New;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.AddOffering
	 */
	struct ACarcha_Character_BP_C_AddOffering_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Team;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MaxedOut;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.InitializePointOfInterest
	 */
	struct ACarcha_Character_BP_C_InitializePointOfInterest_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPOverrideHurtAnim
	 */
	struct ACarcha_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NPK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_13AU[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2XY3[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.IsInFriendMode
	 */
	struct ACarcha_Character_BP_C_IsInFriendMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct ACarcha_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPGetTargetingDesirability
	 */
	struct ACarcha_Character_BP_C_BPGetTargetingDesirability_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V7E1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ReceiveAnyDamage
	 */
	struct ACarcha_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHGQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BloodRageAdded
	 */
	struct ACarcha_Character_BP_C_BloodRageAdded_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.StartFriendMode
	 */
	struct ACarcha_Character_BP_C_StartFriendMode_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ClearBloodrageStacks
	 */
	struct ACarcha_Character_BP_C_ClearBloodrageStacks_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ACarcha_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct ACarcha_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OKGQ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.TossRider
	 */
	struct ACarcha_Character_BP_C_TossRider_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPGetRiderSocket
	 */
	struct ACarcha_Character_BP_C_BPGetRiderSocket_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.EndFriendMode
	 */
	struct ACarcha_Character_BP_C_EndFriendMode_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPOnDinoCheat
	 */
	struct ACarcha_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UVWC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPPreventRiding
	 */
	struct ACarcha_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.PerformanceThrottledTick
	 */
	struct ACarcha_Character_BP_C_PerformanceThrottledTick_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.CheckCorpse
	 */
	struct ACarcha_Character_BP_C_CheckCorpse_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ACarcha_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.OnTargetSet
	 */
	struct ACarcha_Character_BP_C_OnTargetSet_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ACarcha_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5NGN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.Is Same Team or Allied
	 */
	struct ACarcha_Character_BP_C_IsSameTeamorAllied_Params
	{
	public:
		int32_t                                                    OtherTeam;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSameTeam;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.TryAddRoarBuff
	 */
	struct ACarcha_Character_BP_C_TryAddRoarBuff_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    StackCount;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.DoRoar
	 */
	struct ACarcha_Character_BP_C_DoRoar_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.GetMaxBloodrageStacks
	 */
	struct ACarcha_Character_BP_C_GetMaxBloodrageStacks_Params
	{
	public:
		int32_t                                                    MaxStackCountAllowed;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TABX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.GetBloodrageStacks
	 */
	struct ACarcha_Character_BP_C_GetBloodrageStacks_Params
	{
	public:
		int32_t                                                    StackCount;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RNHQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPGetHUDElements
	 */
	struct ACarcha_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPDoAttack
	 */
	struct ACarcha_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPNotifyClearRider
	 */
	struct ACarcha_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.BPNotifySetRider
	 */
	struct ACarcha_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct ACarcha_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.UserConstructionScript
	 */
	struct ACarcha_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.SetPointTagUniqueState
	 */
	struct ACarcha_Character_BP_C_SetPointTagUniqueState_Params
	{
	public:
		bool                                                       bNewUniqueState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.UnviewPoint
	 */
	struct ACarcha_Character_BP_C_UnviewPoint_Params
	{
	public:
		class AActor*                                              UnviewedByActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ViewPoint
	 */
	struct ACarcha_Character_BP_C_ViewPoint_Params
	{
	public:
		class AActor*                                              ViewedByActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Carcha_Character_BP.Carcha_Character_BP_C.ExecuteUbergraph_Carcha_Character_BP
	 */
	struct ACarcha_Character_BP_C_ExecuteUbergraph_Carcha_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
