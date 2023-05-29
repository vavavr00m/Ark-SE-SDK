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
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearForceSearchLightTargetPrevMovement
	 */
	struct ASummoner_Character_BP_C_TimedClearForceSearchLightTargetPrevMovement_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPSetupTamed
	 */
	struct ASummoner_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifySetRider
	 */
	struct ASummoner_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyClearRider
	 */
	struct ASummoner_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ASummoner_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerNonDedicated
	 */
	struct ASummoner_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToNearbySplinePointUnstasis
	 */
	struct ASummoner_Character_BP_C_TeleportToNearbySplinePointUnstasis_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.GetMissionMinionColorSet
	 */
	struct ASummoner_Character_BP_C_GetMissionMinionColorSet_Params
	{
	public:
		class UClass*                                              ColorSet;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UpdatePetalAnimStateType
	 */
	struct ASummoner_Character_BP_C_UpdatePetalAnimStateType_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportAlongCurrentSplinePoint
	 */
	struct ASummoner_Character_BP_C_TeleportAlongCurrentSplinePoint_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPUnstasis
	 */
	struct ASummoner_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ClearStartDodgeLoc
	 */
	struct ASummoner_Character_BP_C_ClearStartDodgeLoc_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ResetPerCombatVars
	 */
	struct ASummoner_Character_BP_C_ResetPerCombatVars_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnMinionsInArea
	 */
	struct ASummoner_Character_BP_C_SpawnMinionsInArea_Params
	{
	public:
		struct FVector                                             SourceLoc;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BP_OnSetDeath
	 */
	struct ASummoner_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToCurrentSplinePoint
	 */
	struct ASummoner_Character_BP_C_TeleportToCurrentSplinePoint_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.CheckIsBeingCarried
	 */
	struct ASummoner_Character_BP_C_CheckIsBeingCarried_Params
	{
	public:
		bool                                                       ActuallyDoEscape;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBeingCarried;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ManualSpawnHitVFX
	 */
	struct ASummoner_Character_BP_C_ManualSpawnHitVFX_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088)  (Parm)
		bool                                                       Shielded;                                                // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GAPR[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TogglePetalsOpen
	 */
	struct ASummoner_Character_BP_C_TogglePetalsOpen_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamCameraShakePlayers
	 */
	struct ASummoner_Character_BP_C_ScreamCameraShakePlayers_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPOverrideHurtAnim
	 */
	struct ASummoner_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WOF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NMZC[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9PRJ[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSearchLightActive
	 */
	struct ASummoner_Character_BP_C_UpdateSearchLightActive_Params
	{
	public:
		bool                                                       ShouldSetActive;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TumorAttackSetup
	 */
	struct ASummoner_Character_BP_C_TumorAttackSetup_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.RefreshMinionAggro
	 */
	struct ASummoner_Character_BP_C_RefreshMinionAggro_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.AttemptDodgeAttack
	 */
	struct ASummoner_Character_BP_C_AttemptDodgeAttack_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleCanScreamTeleport
	 */
	struct ASummoner_Character_BP_C_ToggleCanScreamTeleport_Params
	{
	public:
		bool                                                       CanScreamTeleport;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L4V4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPDoAttack
	 */
	struct ASummoner_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OX3U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamTeleport
	 */
	struct ASummoner_Character_BP_C_ScreamTeleport_Params
	{
	public:
		bool                                                       _return_;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KUP1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.PlayFoundTargetAnim
	 */
	struct ASummoner_Character_BP_C_PlayFoundTargetAnim_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ExShouldAggroToActor
	 */
	struct ASummoner_Character_BP_C_ExShouldAggroToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AddAggroIfTrue;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReqShooterChar;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FUS4[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyBumpedByPawn
	 */
	struct ASummoner_Character_BP_C_BPNotifyBumpedByPawn_Params
	{
	public:
		class APrimalCharacter*                                    ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.GetRandomMinionsToSpawn
	 */
	struct ASummoner_Character_BP_C_GetRandomMinionsToSpawn_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveAnyDamage
	 */
	struct ASummoner_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_32X8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleHealthRegen
	 */
	struct ASummoner_Character_BP_C_ToggleHealthRegen_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MBPJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnParticlesAtAttackSockets
	 */
	struct ASummoner_Character_BP_C_SpawnParticlesAtAttackSockets_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEX2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     particle;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Scale;                                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnAttached;                                           // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearPreventMovement
	 */
	struct ASummoner_Character_BP_C_TimedClearPreventMovement_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSpline
	 */
	struct ASummoner_Character_BP_C_UpdateSpline_Params
	{
	public:
		bool                                                       ExcludeCurrent;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateDirection;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SetNewSpline;                                            // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QJD2[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.GetClosestSpline
	 */
	struct ASummoner_Character_BP_C_GetClosestSpline_Params
	{
	public:
		bool                                                       ExcludeCurrent;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1IP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASplineActor*                                        Spline;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateDodgeDurationByDistance
	 */
	struct ASummoner_Character_BP_C_UpdateDodgeDurationByDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.GetDodgeDistanceForChar
	 */
	struct ASummoner_Character_BP_C_GetDodgeDistanceForChar_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateAnimBPUseTurning
	 */
	struct ASummoner_Character_BP_C_UpdateAnimBPUseTurning_Params
	{
	public:
		bool                                                       UseTurning;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R24Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.InitSummoner
	 */
	struct ASummoner_Character_BP_C_InitSummoner_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearIsDodging
	 */
	struct ASummoner_Character_BP_C_TimedClearIsDodging_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.SetIsDodging
	 */
	struct ASummoner_Character_BP_C_SetIsDodging_Params
	{
	public:
		bool                                                       IsDodging;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsDodging
	 */
	struct ASummoner_Character_BP_C_OnRep_bIsDodging_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.SummonerServerTick
	 */
	struct ASummoner_Character_BP_C_SummonerServerTick_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsStunned
	 */
	struct ASummoner_Character_BP_C_OnRep_bIsStunned_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.GetLocationLeastPlayerLookingAt
	 */
	struct ASummoner_Character_BP_C_GetLocationLeastPlayerLookingAt_Params
	{
	public:
		struct FVector                                             retLocation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6MDD[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TickingShield
	 */
	struct ASummoner_Character_BP_C_TickingShield_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPAdjustDamage
	 */
	struct ASummoner_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I3CR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7BBT[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bShieldOn
	 */
	struct ASummoner_Character_BP_C_OnRep_bShieldOn_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleShield
	 */
	struct ASummoner_Character_BP_C_ToggleShield_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_InSleepingState
	 */
	struct ASummoner_Character_BP_C_OnRep_InSleepingState_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPOnLethalDamage
	 */
	struct ASummoner_Character_BP_C_BPOnLethalDamage_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VQHZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventDeath;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.IsBeingAimedAt
	 */
	struct ASummoner_Character_BP_C_IsBeingAimedAt_Params
	{
	public:
		bool                                                       Aimed;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3Y2Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.FireCircleTumor
	 */
	struct ASummoner_Character_BP_C_FireCircleTumor_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DinoClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.FireLineTumor
	 */
	struct ASummoner_Character_BP_C_FireLineTumor_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DinoClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.DodgeMove
	 */
	struct ASummoner_Character_BP_C_DodgeMove_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.CanDodge
	 */
	struct ASummoner_Character_BP_C_CanDodge_Params
	{
	public:
		bool                                                       IsRandomDodge;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanDodge;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ASummoner_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.PushBack
	 */
	struct ASummoner_Character_BP_C_PushBack_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Update Chasing Target
	 */
	struct ASummoner_Character_BP_C_UpdateChasingTarget_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleSleepingState
	 */
	struct ASummoner_Character_BP_C_ToggleSleepingState_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TickSleepingState
	 */
	struct ASummoner_Character_BP_C_TickSleepingState_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSleep State
	 */
	struct ASummoner_Character_BP_C_UpdateSleepState_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Get Closest PointIndex on Spline
	 */
	struct ASummoner_Character_BP_C_GetClosestPointIndexonSpline_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.TickSearchLight
	 */
	struct ASummoner_Character_BP_C_TickSearchLight_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveDestroyed
	 */
	struct ASummoner_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.StopWander
	 */
	struct ASummoner_Character_BP_C_StopWander_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.StartWanderForDuration
	 */
	struct ASummoner_Character_BP_C_StartWanderForDuration_Params
	{
	public:
		float                                                      WanderDuration;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.CleanMinionsArray
	 */
	struct ASummoner_Character_BP_C_CleanMinionsArray_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.DespawnMinions
	 */
	struct ASummoner_Character_BP_C_DespawnMinions_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.DebugSpline
	 */
	struct ASummoner_Character_BP_C_DebugSpline_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct ASummoner_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnTumor
	 */
	struct ASummoner_Character_BP_C_SpawnTumor_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnAMinionAtLocation
	 */
	struct ASummoner_Character_BP_C_SpawnAMinionAtLocation_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7JLR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DinoClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                SpawnedMinion;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnProjectiles
	 */
	struct ASummoner_Character_BP_C_SpawnProjectiles_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanAttack
	 */
	struct ASummoner_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_21BS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CF9A[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UserConstructionScript
	 */
	struct ASummoner_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__FinishedFunc
	 */
	struct ASummoner_Character_BP_C_Timeline_SpotLightAlert__FinishedFunc_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__UpdateFunc
	 */
	struct ASummoner_Character_BP_C_Timeline_SpotLightAlert__UpdateFunc_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__FinishedFunc
	 */
	struct ASummoner_Character_BP_C_Timeline_UpdateShieldMats__FinishedFunc_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__UpdateFunc
	 */
	struct ASummoner_Character_BP_C_Timeline_UpdateShieldMats__UpdateFunc_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__FinishedFunc
	 */
	struct ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__FinishedFunc_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__UpdateFunc
	 */
	struct ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__UpdateFunc_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerServer
	 */
	struct ASummoner_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveBeginPlay
	 */
	struct ASummoner_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ASummoner_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpawnParticleAtAttackSockets
	 */
	struct ASummoner_Character_BP_C_Multi_SpawnParticleAtAttackSockets_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ADG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     particle;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Scale;                                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnAttached;                                           // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_ManualSpawnHitVFX
	 */
	struct ASummoner_Character_BP_C_Multi_ManualSpawnHitVFX_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088)  (Parm)
		bool                                                       Shielded;                                                // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpotLightAlert
	 */
	struct ASummoner_Character_BP_C_Multi_SpotLightAlert_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_MinionSpawnFX
	 */
	struct ASummoner_Character_BP_C_Multi_MinionSpawnFX_Params
	{
	public:
		struct UObject_FTransform                                  Transform;                                               // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateShieldMats
	 */
	struct ASummoner_Character_BP_C_UpdateShieldMats_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.DoTeleportDissolve
	 */
	struct ASummoner_Character_BP_C_DoTeleportDissolve_Params
	{	};

	/**
	 * Function Summoner_Character_BP.Summoner_Character_BP_C.ExecuteUbergraph_Summoner_Character_BP
	 */
	struct ASummoner_Character_BP_C_ExecuteUbergraph_Summoner_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
