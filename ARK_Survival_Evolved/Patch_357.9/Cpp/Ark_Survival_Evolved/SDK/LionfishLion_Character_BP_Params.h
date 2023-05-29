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
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.GetHudData
	 */
	struct ALionfishLion_Character_BP_C_GetHudData_Params
	{
	public:
		float                                                      AttackComboPercent;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxComboFlashingSpeed;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     LastUncloakTime;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CloakCooldown;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFemale;                                                // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCamoActive;                                            // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H39O[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     LastRoarBuffTime;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RoarBuffCooldown;                                        // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasMateBoost;                                            // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SN4M[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     LastTimeReleasedTeleport;                                // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TeleportCooldown;                                        // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TeleportPercent;                                         // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCurrentlyChargingTeleport;                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HUO2[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    LatestQuickteleportTarget;                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LeapCooldown;                                            // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K7Z5[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     LastLeapTime;                                            // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LeapPercent;                                             // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Keep Checking if the Fish Has Spawned
	 */
	struct ALionfishLion_Character_BP_C_KeepCheckingiftheFishHasSpawned_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.try feed shadowman on delay
	 */
	struct ALionfishLion_Character_BP_C_tryfeedshadowmanondelay_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Falling Asleep Prevent Affinity Reset
	 */
	struct ALionfishLion_Character_BP_C_ShortlyAfterFallingAsleepPreventAffinityReset_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPlayDying
	 */
	struct ALionfishLion_Character_BP_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B9GO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Lerping While Jumping
	 */
	struct ALionfishLion_Character_BP_C_IsLerpingWhileJumping_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Reset Gravity
	 */
	struct ALionfishLion_Character_BP_C_DelayResetGravity_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.LFL Cloak Transition
	 */
	struct ALionfishLion_Character_BP_C_LFLCloakTransition_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceivePossessed
	 */
	struct ALionfishLion_Character_BP_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp Camera During Jump
	 */
	struct ALionfishLion_Character_BP_C_LerpCameraDuringJump_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanTakePassenger
	 */
	struct ALionfishLion_Character_BP_C_BPCanTakePassenger_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PassengerSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForcePassenger;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowFlyersAndWaterDinos;                               // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is asleep
	 */
	struct ALionfishLion_Character_BP_C_isasleep_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanCryo
	 */
	struct ALionfishLion_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FYNH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.IsPackLeader
	 */
	struct ALionfishLion_Character_BP_C_IsPackLeader_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BTO2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display No Mate Boost Notification
	 */
	struct ALionfishLion_Character_BP_C_DisplayNoMateBoostNotification_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevented Interval to Check for Boss Dinos for Cloaking
	 */
	struct ALionfishLion_Character_BP_C_PreventedIntervaltoCheckforBossDinosforCloaking_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Near Boss
	 */
	struct ALionfishLion_Character_BP_C_IsNearBoss_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorEndOverlap
	 */
	struct ALionfishLion_Character_BP_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorBeginOverlap
	 */
	struct ALionfishLion_Character_BP_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Decrease Camo Stamina
	 */
	struct ALionfishLion_Character_BP_C_DecreaseCamoStamina_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can cloak
	 */
	struct ALionfishLion_Character_BP_C_cancloak_Params
	{
	public:
		class AActor*                                              InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8Q76[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    AsPrimalCharacter;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Remove self as origin dino for cloaks
	 */
	struct ALionfishLion_Character_BP_C_Removeselfasorigindinoforcloaks_Params
	{
	public:
		class APrimalCharacter*                                    whogetsbuff;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.add cloak buff with self as origin
	 */
	struct ALionfishLion_Character_BP_C_addcloakbuffwithselfasorigin_Params
	{
	public:
		class APrimalCharacter*                                    whogetsbuff;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forsolorider;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is solo camo active
	 */
	struct ALionfishLion_Character_BP_C_OnRep_issolocamoactive_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Show Quick Teleport Indicator
	 */
	struct ALionfishLion_Character_BP_C_ShowQuickTeleportIndicator_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Check for Holding Down Crouch
	 */
	struct ALionfishLion_Character_BP_C_DelayCheckforHoldingDownCrouch_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Initialization To Determine Targeting Team
	 */
	struct ALionfishLion_Character_BP_C_ShortTimeAfterInitializationToDetermineTargetingTeam_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Long Prevent Tamed Sleeping Timer
	 */
	struct ALionfishLion_Character_BP_C_LongPreventTamedSleepingTimer_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Fish Trap Ready
	 */
	struct ALionfishLion_Character_BP_C_HasFishTrapReady_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn wild Inventory
	 */
	struct ALionfishLion_Character_BP_C_spawnwildInventory_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Spawn tamed inventory
	 */
	struct ALionfishLion_Character_BP_C_Spawntamedinventory_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check To Determine If Rider Is Still Valid For Charging Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_TimeoutCheckToDetermineIfRiderIsStillValidForChargingBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check For Still Holding Spacebar
	 */
	struct ALionfishLion_Character_BP_C_TimeoutCheckForStillHoldingSpacebar_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay And Wake Up
	 */
	struct ALionfishLion_Character_BP_C_DelayAndWakeUp_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay and fall asleep
	 */
	struct ALionfishLion_Character_BP_C_delayandfallasleep_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Teleport Attack
	 */
	struct ALionfishLion_Character_BP_C_CanTeleportAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHOG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn flame location on the ground
	 */
	struct ALionfishLion_Character_BP_C_spawnflamelocationontheground_Params
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnRefreshColorization
	 */
	struct ALionfishLion_Character_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset animbp anims to normal
	 */
	struct ALionfishLion_Character_BP_C_Resetanimbpanimstonormal_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict wild teleport attacking
	 */
	struct ALionfishLion_Character_BP_C_restrictwildteleportattacking_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.shortly after fleeing from taming
	 */
	struct ALionfishLion_Character_BP_C_shortlyafterfleeingfromtaming_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.show particle over optimal teleport target
	 */
	struct ALionfishLion_Character_BP_C_showparticleoveroptimalteleporttarget_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.toggle max combo vfx on limbs
	 */
	struct ALionfishLion_Character_BP_C_togglemaxcombovfxonlimbs_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Max Combo Kill Fx
	 */
	struct ALionfishLion_Character_BP_C_RestrictMaxComboKillFx_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict bite fx
	 */
	struct ALionfishLion_Character_BP_C_restrictbitefx_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Mouth Slash
	 */
	struct ALionfishLion_Character_BP_C_PrepForMouthSlash_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Left Paw Slash
	 */
	struct ALionfishLion_Character_BP_C_PrepForLeftPawSlash_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prep for right paw slash
	 */
	struct ALionfishLion_Character_BP_C_prepforrightpawslash_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Landing From Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_IsLandingFromBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventFallDamage
	 */
	struct ALionfishLion_Character_BP_C_BPPreventFallDamage_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		float                                                      FallDamageAmount;                                        // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPShouldForceFlee
	 */
	struct ALionfishLion_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.flee after feeding
	 */
	struct ALionfishLion_Character_BP_C_fleeafterfeeding_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.feed
	 */
	struct ALionfishLion_Character_BP_C_feed_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FishWeight;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       cheatdebugbypass;                                        // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Fallback;                                                // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DIJO[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bite slash vfx
	 */
	struct ALionfishLion_Character_BP_C_biteslashvfx_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.right paw slash vfx
	 */
	struct ALionfishLion_Character_BP_C_rightpawslashvfx_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.left paw slash vfx
	 */
	struct ALionfishLion_Character_BP_C_leftpawslashvfx_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is able to be tamed
	 */
	struct ALionfishLion_Character_BP_C_isabletobetamed_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       cantame;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8GO2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideHurtAnim
	 */
	struct ALionfishLion_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_THII[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KLCQ[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7UPA[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Print String Manual
	 */
	struct ALionfishLion_Character_BP_C_PrintStringManual_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Stop Release Big Spacebar Leap Anims
	 */
	struct ALionfishLion_Character_BP_C_StopReleaseBigSpacebarLeapAnims_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop anim montage if playing
	 */
	struct ALionfishLion_Character_BP_C_stopanimmontageifplaying_Params
	{
	public:
		class UAnimMontage*                                        InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendOut;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get aerial rotation while pouncing
	 */
	struct ALionfishLion_Character_BP_C_getaerialrotationwhilepouncing_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            meshrot;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set up dynamic mats
	 */
	struct ALionfishLion_Character_BP_C_setupdynamicmats_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Found Multiple Targets
	 */
	struct ALionfishLion_Character_BP_C_HasFoundMultipleTargets_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timer Check Teleport Targets
	 */
	struct ALionfishLion_Character_BP_C_TimerCheckTeleportTargets_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.save control rot
	 */
	struct ALionfishLion_Character_BP_C_savecontrolrot_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.retrieve control rot
	 */
	struct ALionfishLion_Character_BP_C_retrievecontrolrot_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Tele
	 */
	struct ALionfishLion_Character_BP_C_ShortlyAfterTele_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Was Seen Requests
	 */
	struct ALionfishLion_Character_BP_C_RestrictWasSeenRequests_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.someone has line of sight to lion
	 */
	struct ALionfishLion_Character_BP_C_someonehaslineofsighttolion_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G5IT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check if Viewed by Players
	 */
	struct ALionfishLion_Character_BP_C_CheckifViewedbyPlayers_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Do Attack Cloak
	 */
	struct ALionfishLion_Character_BP_C_DoAttackCloak_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Charge Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_ServerRequestChargeBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request End Charge Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_ServerRequestEndChargeBigSpacebarLeap_Params
	{
	public:
		struct FVector                                             helddirectioninputs;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z6U4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             InputPin;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    A2;                                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    InputPin2;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Jump
	 */
	struct ALionfishLion_Character_BP_C_ServerRequestJump_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Anim Start Jump
	 */
	struct ALionfishLion_Character_BP_C_ServerRequestAnimStartJump_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Requiest Crit Bite
	 */
	struct ALionfishLion_Character_BP_C_ServerRequiestCritBite_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Hold Teleport
	 */
	struct ALionfishLion_Character_BP_C_ServerRequestHoldTeleport_Params
	{
	public:
		struct FVector                                             viewdirection;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UTNL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Target;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       quicktapteleport;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GP60[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintGetAttackWeight
	 */
	struct ALionfishLion_Character_BP_C_BlueprintGetAttackWeight_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inputWeight;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add solo cloak buffs
	 */
	struct ALionfishLion_Character_BP_C_Addsolocloakbuffs_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.consolidated can attack
	 */
	struct ALionfishLion_Character_BP_C_consolidatedcanattack_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.
	 */
	struct ALionfishLion_Character_BP_C__Params
	{
	public:
		float                                                      _1;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      _2;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Output;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Appropriate Extra Distance to Land In Front the Target from Current Position
	 */
	struct ALionfishLion_Character_BP_C_GetAppropriateExtraDistancetoLandInFronttheTargetfromCurrentPosition_Params
	{
	public:
		struct FVector                                             currentlocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YNV9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Enemy;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DGCX[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport End Location Blocked
	 */
	struct ALionfishLion_Character_BP_C_IsTeleportEndLocationBlocked_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          OutHit;                                                  // 0x0018(0x0088)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XS7V[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location In Front Of the Enemy
	 */
	struct ALionfishLion_Character_BP_C_GetDesiredTeleportFinalLocationInFrontOftheEnemy_Params
	{
	public:
		struct FVector                                             currentposition;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SDW8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Enemy;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             finallocation;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check If The LFL Can Physically Fit To The Teleport Target
	 */
	struct ALionfishLion_Character_BP_C_CheckIfTheLFLCanPhysicallyFitToTheTeleportTarget_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       doublecheckedandallclear;                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.disable tele targeting vfx
	 */
	struct ALionfishLion_Character_BP_C_disableteletargetingvfx_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is sleeping state
	 */
	struct ALionfishLion_Character_BP_C_OnRep_issleepingstate_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn cloaked footstep
	 */
	struct ALionfishLion_Character_BP_C_spawncloakedfootstep_Params
	{
	public:
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             InputPin;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 */
	struct ALionfishLion_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
	{
	public:
		bool                                                       overrideTamingProgressBarIfActive;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_55DU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct ALionfishLion_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0FRV[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.cooldown after action before being able to sleep
	 */
	struct ALionfishLion_Character_BP_C_cooldownafteractionbeforebeingabletosleep_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTamedOrderReceived
	 */
	struct ALionfishLion_Character_BP_C_BP_OnTamedOrderReceived_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I3HA[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Tamed Sleeping Timer
	 */
	struct ALionfishLion_Character_BP_C_PreventTamedSleepingTimer_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ALionfishLion_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multiuse logic
	 */
	struct ALionfishLion_Character_BP_C_multiuselogic_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              localmultiuse;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class APlayerController*                                   PC;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              returnmultiuse;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPClientDoMultiUse
	 */
	struct ALionfishLion_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Natural Armor Defense Amount Calculation
	 */
	struct ALionfishLion_Character_BP_C_NaturalArmorDefenseAmountCalculation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set up Natural Armor value based on level
	 */
	struct ALionfishLion_Character_BP_C_SetupNaturalArmorvaluebasedonlevel_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.attempt to set up natural armor
	 */
	struct ALionfishLion_Character_BP_C_attempttosetupnaturalarmor_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport stun duration calculation
	 */
	struct ALionfishLion_Character_BP_C_teleportstundurationcalculation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold for Determining Held Bite
	 */
	struct ALionfishLion_Character_BP_C_TimeThresholdforDeterminingHeldBite_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Ending Teleport
	 */
	struct ALionfishLion_Character_BP_C_ShortTimeAfterEndingTeleport_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tele attack object types
	 */
	struct ALionfishLion_Character_BP_C_teleattackobjecttypes_Params
	{
	public:
		TArray<EObjectTypeQuery>                                   Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.straight line teleport charge move detection sphere
	 */
	struct ALionfishLion_Character_BP_C_straightlineteleportchargemovedetectionsphere_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.detect targets in a straight line over time
	 */
	struct ALionfishLion_Character_BP_C_detecttargetsinastraightlineovertime_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Identify Best Aimed Target For Quickteleport - Clientside
	 */
	struct ALionfishLion_Character_BP_C_IdentifyBestAimedTargetForQuickteleportClientside_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set dino and rider hidden
	 */
	struct ALionfishLion_Character_BP_C_setdinoandriderhidden_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IHF4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayRate;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontreversefromend;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Teleport Target 
	 */
	struct ALionfishLion_Character_BP_C_IsValidTeleportTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ishudelemcheck;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0N3X[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             teleporttracespherelocation;                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       cantarget;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DULQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set final location and rotation after teleport
	 */
	struct ALionfishLion_Character_BP_C_setfinallocationandrotationafterteleport_Params
	{
	public:
		struct FVector                                             startloc;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             endloc;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       turnaround;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GARZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.damage teleport target
	 */
	struct ALionfishLion_Character_BP_C_damageteleporttarget_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prepare LFL for teleporting to target
	 */
	struct ALionfishLion_Character_BP_C_prepareLFLforteleportingtotarget_Params
	{
	public:
		struct FVector                                             End;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Start;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is line of sight to target blocked
	 */
	struct ALionfishLion_Character_BP_C_islineofsighttotargetblocked_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Debug;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZQ6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             fromspecificlocation;                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       simplecheck;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLocked;                                                 // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get rotation to face opponent
	 */
	struct ALionfishLion_Character_BP_C_getrotationtofaceopponent_Params
	{
	public:
		struct FVector                                             currentlocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_609T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Enemy;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location Behind The Enemy
	 */
	struct ALionfishLion_Character_BP_C_GetDesiredTeleportFinalLocationBehindTheEnemy_Params
	{
	public:
		struct FVector                                             currentposition;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UZEG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Enemy;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             finallocation;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get appropriate extra distance to land behind the target from current position
	 */
	struct ALionfishLion_Character_BP_C_getappropriateextradistancetolandbehindthetargetfromcurrentposition_Params
	{
	public:
		struct FVector                                             currentlocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_REOU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Enemy;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LZAI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.request release charge teleport
	 */
	struct ALionfishLion_Character_BP_C_requestreleasechargeteleport_Params
	{
	public:
		bool                                                       IsQuickTapTeleport;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y725[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Sort Selected Teleport Targets By Distance From Center
	 */
	struct ALionfishLion_Character_BP_C_SortSelectedTeleportTargetsByDistanceFromCenter_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Select Next Teleport Target While Charging
	 */
	struct ALionfishLion_Character_BP_C_SelectNextTeleportTargetWhileCharging_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get teleport trace sphere location
	 */
	struct ALionfishLion_Character_BP_C_getteleporttracespherelocation_Params
	{
	public:
		struct FVector                                             viewdirection;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Teleport
	 */
	struct ALionfishLion_Character_BP_C_IsChargingTeleport_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Teleport Stop
	 */
	struct ALionfishLion_Character_BP_C_TeleportStop_Params
	{
	public:
		class UObject*                                             hittarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Teleport
	 */
	struct ALionfishLion_Character_BP_C_StartTeleport_Params
	{
	public:
		float                                                      TeleportStrengthPercentage;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsQuickTapTeleport;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DYMD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Teleport Character Octree Overlap Radius
	 */
	struct ALionfishLion_Character_BP_C_GetTeleportCharacterOctreeOverlapRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is mid teleport
	 */
	struct ALionfishLion_Character_BP_C_ismidteleport_Params
	{
	public:
		bool                                                       ismidteleport;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport Cooldown Active
	 */
	struct ALionfishLion_Character_BP_C_IsTeleportCooldownActive_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Teleport
	 */
	struct ALionfishLion_Character_BP_C_RequestReleaseTeleport_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Charge Teleport
	 */
	struct ALionfishLion_Character_BP_C_TimeThresholdForDeterminingChargeTeleport_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Jump Or Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_TimeThresholdForDeterminingJumpOrBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStopJump
	 */
	struct ALionfishLion_Character_BP_C_BPOnStopJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.sync movement inputs
	 */
	struct ALionfishLion_Character_BP_C_syncmovementinputs_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.duration to hold on to current combo count
	 */
	struct ALionfishLion_Character_BP_C_durationtoholdontocurrentcombocount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove character from max combo attacked characters array
	 */
	struct ALionfishLion_Character_BP_C_removecharacterfrommaxcomboattackedcharactersarray_Params
	{
	public:
		class AActor*                                              InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.clear recently max combo attacked characters array
	 */
	struct ALionfishLion_Character_BP_C_clearrecentlymaxcomboattackedcharactersarray_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPKilledSomethingEvent
	 */
	struct ALionfishLion_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PerformanceThrottledTick
	 */
	struct ALionfishLion_Character_BP_C_PerformanceThrottledTick_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Blend Fov Back To Normal After Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_BlendFovBackToNormalAfterBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close Enough To Hit Big Spacebar Leap Target
	 */
	struct ALionfishLion_Character_BP_C_IsCloseEnoughToHitBigSpacebarLeapTarget_Params
	{
	public:
		bool                                                       canhittarget;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Frozen From Hitstop
	 */
	struct ALionfishLion_Character_BP_C_IsFrozenFromHitstop_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Land
	 */
	struct ALionfishLion_Character_BP_C_OnBigSpacebarLeapLand_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Blending FOV Back To Normal After Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_IsBlendingFOVBackToNormalAfterBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_PreventMovementMode
	 */
	struct ALionfishLion_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Hit Target
	 */
	struct ALionfishLion_Character_BP_C_OnBigSpacebarLeapHitTarget_Params
	{
	public:
		class APrimalCharacter*                                    InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Turnaround Stop on Other Side Of Big Spacebar Leap Target
	 */
	struct ALionfishLion_Character_BP_C_RequestTurnaroundStoponOtherSideOfBigSpacebarLeapTarget_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Ground and Halt Anim
	 */
	struct ALionfishLion_Character_BP_C_CheckforGroundandHaltAnim_Params
	{
	public:
		bool                                                       retry;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Extra Big Spacebar Leap Ground Checks
	 */
	struct ALionfishLion_Character_BP_C_ExtraBigSpacebarLeapGroundChecks_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Repeated Big Spacebar Leap Anim
	 */
	struct ALionfishLion_Character_BP_C_PreventRepeatedBigSpacebarLeapAnim_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_IsMidBigSpacebarLeap_Params
	{
	public:
		bool                                                       IsMidBigSpacebarLeap;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp time to move to other side of the target
	 */
	struct ALionfishLion_Character_BP_C_lerptimetomovetoothersideofthetarget_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Finisher Buildup FOV Return To Normal
	 */
	struct ALionfishLion_Character_BP_C_PostFinisherBuildupFOVReturnToNormal_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Playing FOVIncrease On Finisher Buildup
	 */
	struct ALionfishLion_Character_BP_C_IsPlayingFOVIncreaseOnFinisherBuildup_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Short Time Before Swapping Between Big Spacebar Leap Anticipation Poses
	 */
	struct ALionfishLion_Character_BP_C_AllowShortTimeBeforeSwappingBetweenBigSpacebarLeapAnticipationPoses_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveTick
	 */
	struct ALionfishLion_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tick events
	 */
	struct ALionfishLion_Character_BP_C_tickevents_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Force Initial Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_ForceInitialBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.play sleep during day anim
	 */
	struct ALionfishLion_Character_BP_C_playsleepduringdayanim_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Should Restrict Movement
	 */
	struct ALionfishLion_Character_BP_C_ShouldRestrictMovement_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ALionfishLion_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DBHA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NGOB[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DX6F[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ALionfishLion_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStartJump
	 */
	struct ALionfishLion_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Right Swipe Attack Anim Priorities
	 */
	struct ALionfishLion_Character_BP_C_UpdateRightSwipeAttackAnimPriorities_Params
	{
	public:
		int32_t                                                    Attackindex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A76Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Bite Attack Anim Priorities
	 */
	struct ALionfishLion_Character_BP_C_UpdateBiteAttackAnimPriorities_Params
	{
	public:
		int32_t                                                    Attackindex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2TCJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.RidingTick
	 */
	struct ALionfishLion_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ALionfishLion_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YISK[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairLocation
	 */
	struct ALionfishLion_Character_BP_C_BPGetCrosshairLocation_Params
	{
	public:
		float                                                      CanvasClipX;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CanvasClipY;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutX;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutY;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairColor
	 */
	struct ALionfishLion_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering Or Exiting Roar Movement Restriction
	 */
	struct ALionfishLion_Character_BP_C_EnteringOrExitingRoarMovementRestriction_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering or Exiting Camo Movement Restriction
	 */
	struct ALionfishLion_Character_BP_C_EnteringorExitingCamoMovementRestriction_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Big Spacebar Leap Anim at First
	 */
	struct ALionfishLion_Character_BP_C_PreventBigSpacebarLeapAnimatFirst_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Gravity Timeout
	 */
	struct ALionfishLion_Character_BP_C_LowGravityTimeout_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Big Spacebar Leap Landing Reduced Friction
	 */
	struct ALionfishLion_Character_BP_C_PostBigSpacebarLeapLandingReducedFriction_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Big Spacebar Leap Friction
	 */
	struct ALionfishLion_Character_BP_C_LowBigSpacebarLeapFriction_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ALionfishLion_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerNonDedicated
	 */
	struct ALionfishLion_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Interpolate Mesh
	 */
	struct ALionfishLion_Character_BP_C_InterpolateMesh_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hard set rotation but interp mesh location
	 */
	struct ALionfishLion_Character_BP_C_hardsetrotationbutinterpmeshlocation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Rotation and Interp Mesh
	 */
	struct ALionfishLion_Character_BP_C_SetRotationandInterpMesh_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update transforms
	 */
	struct ALionfishLion_Character_BP_C_updatetransforms_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update anims
	 */
	struct ALionfishLion_Character_BP_C_updateanims_Params
	{
	public:
		bool                                                       ensureAnimsPlaying;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close To Ground
	 */
	struct ALionfishLion_Character_BP_C_IsCloseToGround_Params
	{
	public:
		float                                                      CheckDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JP2G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Use Aim Offsets
	 */
	struct ALionfishLion_Character_BP_C_SetUseAimOffsets_Params
	{
	public:
		bool                                                       newstate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZU62[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Jumping Anim
	 */
	struct ALionfishLion_Character_BP_C_UpdateJumpingAnim_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Manual Play Land Anim
	 */
	struct ALionfishLion_Character_BP_C_ManualPlayLandAnim_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Start
	 */
	struct ALionfishLion_Character_BP_C_BigSpacebarLeapStart_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_CurrentClimbingState
	 */
	struct ALionfishLion_Character_BP_C_OnRep_CurrentClimbingState_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set State
	 */
	struct ALionfishLion_Character_BP_C_NetSetState_Params
	{
	public:
		E_PredatorClimbingState                                    newstate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75WP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Keep Pouncing during Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_CanKeepPouncingduringBigSpacebarLeap_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Tick
	 */
	struct ALionfishLion_Character_BP_C_BigSpacebarLeapTick_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Default Dino
	 */
	struct ALionfishLion_Character_BP_C_GetDefaultDino_Params
	{
	public:
		class ALionfishLion_Character_BP_C*                        Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove carry buff from prey
	 */
	struct ALionfishLion_Character_BP_C_removecarrybufffromprey_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can carry creature
	 */
	struct ALionfishLion_Character_BP_C_cancarrycreature_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Stop
	 */
	struct ALionfishLion_Character_BP_C_BigSpacebarLeapStop_Params
	{
	public:
		class UObject*                                             hittarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.initilialize sleep
	 */
	struct ALionfishLion_Character_BP_C_initilializesleep_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reenable Collision
	 */
	struct ALionfishLion_Character_BP_C_ReenableCollision_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustDamage
	 */
	struct ALionfishLion_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_II4A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0WIC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Calculate Big Spacebar Leap Direction
	 */
	struct ALionfishLion_Character_BP_C_CalculateBigSpacebarLeapDirection_Params
	{
	public:
		class AActor*                                              TargettedCharacter;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BigSpacebarLeapvelocity;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BigSpacebarLeapdir;                                      // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.True Wake Up Other Pack Dinos
	 */
	struct ALionfishLion_Character_BP_C_TrueWakeUpOtherPackDinos_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.wake up other pack dinos
	 */
	struct ALionfishLion_Character_BP_C_wakeupotherpackdinos_Params
	{
	public:
		bool                                                       resettheiraffinity;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay True Wake Up
	 */
	struct ALionfishLion_Character_BP_C_DelayTrueWakeUp_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Rotate During Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_RotateDuringBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Appearance
	 */
	struct ALionfishLion_Character_BP_C_UpdateAppearance_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_bIsDaytime
	 */
	struct ALionfishLion_Character_BP_C_OnRep_bIsDaytime_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Is Fully Awake
	 */
	struct ALionfishLion_Character_BP_C_GetIsFullyAwake_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Dino Needs to Sleep
	 */
	struct ALionfishLion_Character_BP_C_DinoNeedstoSleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Valid Target
	 */
	struct ALionfishLion_Character_BP_C_HasValidTarget_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Sleep Debt to Deprived Ratio
	 */
	struct ALionfishLion_Character_BP_C_GetSleepDebttoDeprivedRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino Grounded
	 */
	struct ALionfishLion_Character_BP_C_IsDinoGrounded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino in Shallow Water
	 */
	struct ALionfishLion_Character_BP_C_IsDinoinShallowWater_Params
	{
	public:
		bool                                                       shallowWaters;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Wake
	 */
	struct ALionfishLion_Character_BP_C_CanWake_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Sleep
	 */
	struct ALionfishLion_Character_BP_C_CanSleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Fall Asleep
	 */
	struct ALionfishLion_Character_BP_C_OnFallAsleep_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Wake Up
	 */
	struct ALionfishLion_Character_BP_C_OnWakeUp_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Torpidity
	 */
	struct ALionfishLion_Character_BP_C_SetTorpidity_Params
	{
	public:
		float                                                      newTorpidity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J5WC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Related Actions
	 */
	struct ALionfishLion_Character_BP_C_UpdateSleepRelatedActions_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Play Natural Sleeping Anims
	 */
	struct ALionfishLion_Character_BP_C_PlayNaturalSleepingAnims_Params
	{
	public:
		bool                                                       isFallingAsleep;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAlerted;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LH7V[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set Natural Sleep State
	 */
	struct ALionfishLion_Character_BP_C_NetSetNaturalSleepState_Params
	{
	public:
		bool                                                       isAsleep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ALionfishLion_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeAdult
	 */
	struct ALionfishLion_Character_BP_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeBaby
	 */
	struct ALionfishLion_Character_BP_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventRiding
	 */
	struct ALionfishLion_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Possible to Sleep
	 */
	struct ALionfishLion_Character_BP_C_IsPossibletoSleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTryMultiUse
	 */
	struct ALionfishLion_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Nocturnal Logic
	 */
	struct ALionfishLion_Character_BP_C_AllowNocturnalLogic_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Debt
	 */
	struct ALionfishLion_Character_BP_C_UpdateSleepDebt_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Sleep Debt
	 */
	struct ALionfishLion_Character_BP_C_HasSleepDebt_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is time of day when lion wants to sleep
	 */
	struct ALionfishLion_Character_BP_C_Istimeofdaywhenlionwantstosleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Target Attacking Ally
	 */
	struct ALionfishLion_Character_BP_C_IsTargetAttackingAlly_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Tamed Following
	 */
	struct ALionfishLion_Character_BP_C_IsTamedFollowing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Wake
	 */
	struct ALionfishLion_Character_BP_C_CheckforWake_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Sleep
	 */
	struct ALionfishLion_Character_BP_C_CheckforSleep_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerServer
	 */
	struct ALionfishLion_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check Time Of Day
	 */
	struct ALionfishLion_Character_BP_C_CheckTimeOfDay_Params
	{
	public:
		bool                                                       ForceUpdate;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8WIV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Init Nocturnal Dino
	 */
	struct ALionfishLion_Character_BP_C_InitNocturnalDino_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Setup Refs
	 */
	struct ALionfishLion_Character_BP_C_SetupRefs_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyStructurePlacedNearby
	 */
	struct ALionfishLion_Character_BP_C_BPNotifyStructurePlacedNearby_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Wake Up
	 */
	struct ALionfishLion_Character_BP_C_WakeUp_Params
	{
	public:
		bool                                                       forceSuccess;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Fall Asleep
	 */
	struct ALionfishLion_Character_BP_C_FallAsleep_Params
	{
	public:
		bool                                                       forceSuccess;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ignoreIsPossible;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TriggeredByMultiuse;                                     // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Sleep Deprived
	 */
	struct ALionfishLion_Character_BP_C_IsSleepDeprived_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display Message
	 */
	struct ALionfishLion_Character_BP_C_DisplayMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is camo active
	 */
	struct ALionfishLion_Character_BP_C_OnRep_iscamoactive_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.net set use camo
	 */
	struct ALionfishLion_Character_BP_C_netsetusecamo_Params
	{
	public:
		bool                                                       newstate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       solo;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Use Camo
	 */
	struct ALionfishLion_Character_BP_C_CanUseCamo_Params
	{
	public:
		bool                                                       isforstart;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.does it have enough stamina
	 */
	struct ALionfishLion_Character_BP_C_doesithaveenoughstamina_Params
	{
	public:
		float                                                      staminarequirement;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UKM4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ALionfishLion_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTargetedByTamedOrder
	 */
	struct ALionfishLion_Character_BP_C_BP_OnTargetedByTamedOrder_Params
	{
	public:
		class APrimalCharacter*                                    OrderingCharacter;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                AttackingDino;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForced;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6GED[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add Rider to Camo Fade Queue
	 */
	struct ALionfishLion_Character_BP_C_AddRidertoCamoFadeQueue_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EnterCamo;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInstant;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ALionfishLion_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_USM5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
	 */
	struct ALionfishLion_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params
	{
	public:
		class APrimalCharacter*                                    launchedCharacter;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Activate Rider Camo Particles
	 */
	struct ALionfishLion_Character_BP_C_ActivateRiderCamoParticles_Params
	{
	public:
		bool                                                       EnterCamo;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NA0Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   specificRider;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Clean Allow Target when Using Camo Array
	 */
	struct ALionfishLion_Character_BP_C_CleanAllowTargetwhenUsingCamoArray_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set All Riders Hidden
	 */
	struct ALionfishLion_Character_BP_C_SetAllRidersHidden_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NR1J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Camo Active
	 */
	struct ALionfishLion_Character_BP_C_SetCamoActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A15W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Big Spacebar Leap Charge
	 */
	struct ALionfishLion_Character_BP_C_RequestReleaseBigSpacebarLeapCharge_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ALionfishLion_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1496[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get held direction relative to camera forward
	 */
	struct ALionfishLion_Character_BP_C_gethelddirectionrelativetocameraforward_Params
	{
	public:
		bool                                                       inwater;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DZ8B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveforward
	 */
	struct ALionfishLion_Character_BP_C_ResetMoveforward_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ALionfishLion_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveright
	 */
	struct ALionfishLion_Character_BP_C_ResetMoveright_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ALionfishLion_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Big Spacebar Leap Cooldown Active
	 */
	struct ALionfishLion_Character_BP_C_IsBigSpacebarLeapCooldownActive_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is in Initial Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_IsinInitialBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_StartBigSpacebarLeap_Params
	{
	public:
		float                                                      BigSpacebarLeapStrengthPercentage;                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.CanJumpInternal
	 */
	struct ALionfishLion_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ALionfishLion_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanAttack
	 */
	struct ALionfishLion_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQQH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_IsChargingBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Apply Pack Buff
	 */
	struct ALionfishLion_Character_BP_C_ApplyPackBuff_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ALionfishLion_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InterceptInputEvent
	 */
	struct ALionfishLion_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Current Combo Melee Index
	 */
	struct ALionfishLion_Character_BP_C_ResetCurrentComboMeleeIndex_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Combo Count
	 */
	struct ALionfishLion_Character_BP_C_ResetComboCount_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ALionfishLion_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ALionfishLion_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDoAttack
	 */
	struct ALionfishLion_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveAnyDamage
	 */
	struct ALionfishLion_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y06U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyLevelUp
	 */
	struct ALionfishLion_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPUnstasis
	 */
	struct ALionfishLion_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifySetRider
	 */
	struct ALionfishLion_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 */
	struct ALionfishLion_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnDinoCheat
	 */
	struct ALionfishLion_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BML2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearRider
	 */
	struct ALionfishLion_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ALionfishLion_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ALionfishLion_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.UserConstructionScript
	 */
	struct ALionfishLion_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_growteleporttargetsphere__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_growteleporttargetsphere__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_movebetweenteleporttargets__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_movebetweenteleporttargets__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_fadehidedino__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_fadehidedino__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_lerptonormal__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_lerptonormal__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_2__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_2__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_stealthanimtimeline__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_stealthanimtimeline__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__FinishedFunc
	 */
	struct ALionfishLion_Character_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__UpdateFunc
	 */
	struct ALionfishLion_Character_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_clientstartchargeBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_clientendchargeBigSpacebarLeap_Params
	{
	public:
		bool                                                       ismaxcomboBigSpacebarLeap;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
	 */
	struct ALionfishLion_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_RestartCheckTargetArrayTimer
	 */
	struct ALionfishLion_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started roar
	 */
	struct ALionfishLion_Character_BP_C_multicaststartedroar_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveBeginPlay
	 */
	struct ALionfishLion_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Re initialize nocturnal dino
	 */
	struct ALionfishLion_Character_BP_C_Reinitializenocturnaldino_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsDaytime
	 */
	struct ALionfishLion_Character_BP_C_OnIsDaytime_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsNighttime
	 */
	struct ALionfishLion_Character_BP_C_OnIsNighttime_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.EnableMovementAfterDelay
	 */
	struct ALionfishLion_Character_BP_C_EnableMovementAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.DisableMovementAfterDelay
	 */
	struct ALionfishLion_Character_BP_C_DisableMovementAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature
	 */
	struct ALionfishLion_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQG5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bind sleeping buff dispatcher
	 */
	struct ALionfishLion_Character_BP_C_bindsleepingbuffdispatcher_Params
	{
	public:
		class APrimalBuff*                                         Buff;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.awoken from other buff added
	 */
	struct ALionfishLion_Character_BP_C_awokenfromotherbuffadded_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server_NetSetClimbingState
	 */
	struct ALionfishLion_Character_BP_C_Server_NetSetClimbingState_Params
	{
	public:
		E_PredatorClimbingState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PreventLandingAnimBriefly
	 */
	struct ALionfishLion_Character_BP_C_PreventLandingAnimBriefly_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnJumpPressed
	 */
	struct ALionfishLion_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.SyncGravityForBig Spacebar LeapFall
	 */
	struct ALionfishLion_Character_BP_C_SyncGravityForBigSpacebarLeapFall_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client started secondary roar
	 */
	struct ALionfishLion_Character_BP_C_clientstartedsecondaryroar_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay update cloak animbp
	 */
	struct ALionfishLion_Character_BP_C_delayupdatecloakanimbp_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit swipe on target
	 */
	struct ALionfishLion_Character_BP_C_multicasthitswipeontarget_Params
	{
	public:
		float                                                      combocount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit bite on target
	 */
	struct ALionfishLion_Character_BP_C_multicasthitbiteontarget_Params
	{
	public:
		float                                                      combovalue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             targetloc;                                               // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast start jumping
	 */
	struct ALionfishLion_Character_BP_C_multicaststartjumping_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.temporarily set fall blend to zero
	 */
	struct ALionfishLion_Character_BP_C_temporarilysetfallblendtozero_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.keep trying to init nocturnal anim
	 */
	struct ALionfishLion_Character_BP_C_keeptryingtoinitnocturnalanim_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast tame
	 */
	struct ALionfishLion_Character_BP_C_multicasttame_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast play natural sleeping anims
	 */
	struct ALionfishLion_Character_BP_C_multicastplaynaturalsleepinganims_Params
	{
	public:
		bool                                                       isfallingasleep;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isalerted;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.early end Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_earlyendBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to location after Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_lerptolocationafterBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast Big Spacebar Leap end
	 */
	struct ALionfishLion_Character_BP_C_multicastBigSpacebarLeapend_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started Big Spacebar Leap 2
	 */
	struct ALionfishLion_Character_BP_C_multicaststartedBigSpacebarLeap2_Params
	{
	public:
		float                                                      BigSpacebarLeapStrengthPercentage;                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on max combo Big Spacebar Leap hit
	 */
	struct ALionfishLion_Character_BP_C_multicastonmaxcomboBigSpacebarLeaphit_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Hitstop
	 */
	struct ALionfishLion_Character_BP_C_Hitstop_Params
	{
	public:
		float                                                      HitstopTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.max combo Big Spacebar Leap hitstop
	 */
	struct ALionfishLion_Character_BP_C_maxcomboBigSpacebarLeaphitstop_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on killed dino with max combo attack
	 */
	struct ALionfishLion_Character_BP_C_multicastonkilleddinowithmaxcomboattack_Params
	{
	public:
		struct FVector                                             targetlocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ServerSyncMovementValues
	 */
	struct ALionfishLion_Character_BP_C_ServerSyncMovementValues_Params
	{
	public:
		float                                                      syncedright;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge teleport
	 */
	struct ALionfishLion_Character_BP_C_clientstartchargeteleport_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge teleport
	 */
	struct ALionfishLion_Character_BP_C_clientendchargeteleport_Params
	{
	public:
		bool                                                       ismaxcomboTeleport;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsQuickTapTeleport;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started teleport 2
	 */
	struct ALionfishLion_Character_BP_C_multicaststartedteleport2_Params
	{
	public:
		bool                                                       IsQuickTapTeleport;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C0L8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TeleportTargetCount;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport to targets
	 */
	struct ALionfishLion_Character_BP_C_teleporttotargets_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.start teleport attack actual movement
	 */
	struct ALionfishLion_Character_BP_C_startteleportattackactualmovement_Params
	{
	public:
		struct FVector                                             initiallocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel teleport on failing to get targets
	 */
	struct ALionfishLion_Character_BP_C_softcancelteleportonfailingtogettargets_Params
	{
	public:
		bool                                                       cancelanim;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport attack to position
	 */
	struct ALionfishLion_Character_BP_C_teleportattacktoposition_Params
	{
	public:
		struct FVector                                             startloc;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             endloc;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       probablyfinalteleport;                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       turnaround;                                              // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.finished teleport attack
	 */
	struct ALionfishLion_Character_BP_C_finishedteleportattack_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hide dino for teleport
	 */
	struct ALionfishLion_Character_BP_C_hidedinoforteleport_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JX6Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayRate;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontreversefromend;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct ALionfishLion_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restart dino clientside
	 */
	struct ALionfishLion_Character_BP_C_restartdinoclientside_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel charge Big Spacebar Leap
	 */
	struct ALionfishLion_Character_BP_C_softcancelchargeBigSpacebarLeap_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612
	 */
	struct ALionfishLion_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Multi_UpdateBuffTime
	 */
	struct ALionfishLion_Character_BP_C_Multi_UpdateBuffTime_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.trace loc
	 */
	struct ALionfishLion_Character_BP_C_traceloc_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp loc to normal
	 */
	struct ALionfishLion_Character_BP_C_lerploctonormal_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop mesh lerp to normal
	 */
	struct ALionfishLion_Character_BP_C_stopmeshlerptonormal_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set New Time on Fade
	 */
	struct ALionfishLion_Character_BP_C_SetNewTimeonFade_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp While Jumping
	 */
	struct ALionfishLion_Character_BP_C_LerpWhileJumping_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnActorCustomEvent_Event
	 */
	struct ALionfishLion_Character_BP_C_OnActorCustomEvent_Event_Params
	{
	public:
		class FName                                                EventCustomName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              EventCustomString;                                       // 0x0008(0x0010)  (Parm, ZeroConstructor)
		class AActor*                                              InstigatorActor;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp rot to next tele loc
	 */
	struct ALionfishLion_Character_BP_C_lerprottonextteleloc_Params
	{
	public:
		float                                                      newyaw;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      prevyaw;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate max combo Big Spacebar Leap particle
	 */
	struct ALionfishLion_Character_BP_C_activatemaxcomboBigSpacebarLeapparticle_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate water Big Spacebar Leap particles
	 */
	struct ALionfishLion_Character_BP_C_activatewaterBigSpacebarLeapparticles_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ExecuteUbergraph_LionfishLion_Character_BP
	 */
	struct ALionfishLion_Character_BP_C_ExecuteUbergraph_LionfishLion_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
