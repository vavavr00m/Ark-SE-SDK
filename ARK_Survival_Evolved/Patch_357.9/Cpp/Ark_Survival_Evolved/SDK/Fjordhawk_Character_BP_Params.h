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
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetMinimumTimeBetweenRetrieval
	 */
	struct AFjordhawk_Character_BP_C_GetMinimumTimeBetweenRetrieval_Params
	{
	public:
		float                                                      MinTime;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_85GC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryRetrieveDeadPlayerInventory
	 */
	struct AFjordhawk_Character_BP_C_TryRetrieveDeadPlayerInventory_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct AFjordhawk_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLootTarget
	 */
	struct AFjordhawk_Character_BP_C_UpdateLootTarget_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SetDestination
	 */
	struct AFjordhawk_Character_BP_C_SetDestination_Params
	{
	public:
		struct FVector                                             NewDestination;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetFlight
	 */
	struct AFjordhawk_Character_BP_C_BPOnSetFlight_Params
	{
	public:
		bool                                                       bFly;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PreventShowingDinoTooltip
	 */
	struct AFjordhawk_Character_BP_C_PreventShowingDinoTooltip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventOrderAllowed
	 */
	struct AFjordhawk_Character_BP_C_BPPreventOrderAllowed_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V1U5[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.MulticastShieldBreakSound
	 */
	struct AFjordhawk_Character_BP_C_MulticastShieldBreakSound_Params
	{
	public:
		bool                                                       Break;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8EWU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BreakShield
	 */
	struct AFjordhawk_Character_BP_C_BreakShield_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BuffClassIsStun
	 */
	struct AFjordhawk_Character_BP_C_BuffClassIsStun_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsStun;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SHR3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_ForceAllowAddBuff
	 */
	struct AFjordhawk_Character_BP_C_BP_ForceAllowAddBuff_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPostLoadedFromSaveGame
	 */
	struct AFjordhawk_Character_BP_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_PreventCarryingByCharacter
	 */
	struct AFjordhawk_Character_BP_C_BP_PreventCarryingByCharacter_Params
	{
	public:
		class APrimalCharacter*                                    ByCarrier;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CanEatCharacter
	 */
	struct AFjordhawk_Character_BP_C_CanEatCharacter_Params
	{
	public:
		class APrimalCharacter*                                    InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishEating
	 */
	struct AFjordhawk_Character_BP_C_FinishEating_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnPlayerDied
	 */
	struct AFjordhawk_Character_BP_C_OnPlayerDied_Params
	{
	public:
		class APrimalCharacter*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.StopWaitingForPlayer
	 */
	struct AFjordhawk_Character_BP_C_StopWaitingForPlayer_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetApproachPoint
	 */
	struct AFjordhawk_Character_BP_C_GetApproachPoint_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InAir;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4T3O[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Point;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnDinoCheat
	 */
	struct AFjordhawk_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O22O[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientUpdate
	 */
	struct AFjordhawk_Character_BP_C_ClientUpdate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ServerUpdate
	 */
	struct AFjordhawk_Character_BP_C_ServerUpdate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventStasis
	 */
	struct AFjordhawk_Character_BP_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnMassTeleportEvent
	 */
	struct AFjordhawk_Character_BP_C_BPOnMassTeleportEvent_Params
	{
	public:
		EMassTeleportState                                         EventState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UHCL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    TeleportInitiatedByChar;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RetrievePlayerInventory
	 */
	struct AFjordhawk_Character_BP_C_RetrievePlayerInventory_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishedTame
	 */
	struct AFjordhawk_Character_BP_C_FinishedTame_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.WildLookForCorpses
	 */
	struct AFjordhawk_Character_BP_C_WildLookForCorpses_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientHideDino
	 */
	struct AFjordhawk_Character_BP_C_ClientHideDino_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPUnstasis
	 */
	struct AFjordhawk_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForLootDrop
	 */
	struct AFjordhawk_Character_BP_C_CheckForLootDrop_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReacquirePlayer
	 */
	struct AFjordhawk_Character_BP_C_ReacquirePlayer_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPIsBlockedByShield
	 */
	struct AFjordhawk_Character_BP_C_BPIsBlockedByShield_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShotDirection;                                           // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bBlockAllPointDamage;                                    // 0x0094(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0095(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLoot
	 */
	struct AFjordhawk_Character_BP_C_UpdateLoot_Params
	{
	public:
		bool                                                       Loot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XWN2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerId;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TogglePreyDetection
	 */
	struct AFjordhawk_Character_BP_C_TogglePreyDetection_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PostLaunchUpdate
	 */
	struct AFjordhawk_Character_BP_C_PostLaunchUpdate_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLaunchVectors
	 */
	struct AFjordhawk_Character_BP_C_VerifyLaunchVectors_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Dir;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LXZW[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPrepareForLaunchFromShoulder
	 */
	struct AFjordhawk_Character_BP_C_BPPrepareForLaunchFromShoulder_Params
	{
	public:
		struct FVector                                             viewLoc;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             viewDir;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPGetTargetingDesirability
	 */
	struct AFjordhawk_Character_BP_C_BPGetTargetingDesirability_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8KD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForPlayerDeath
	 */
	struct AFjordhawk_Character_BP_C_CheckForPlayerDeath_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPlayDying
	 */
	struct AFjordhawk_Character_BP_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MSD1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateForcedTickSetting
	 */
	struct AFjordhawk_Character_BP_C_UpdateForcedTickSetting_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetEatTarget
	 */
	struct AFjordhawk_Character_BP_C_GetEatTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Net Show Bag
	 */
	struct AFjordhawk_Character_BP_C_NetShowBag_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DinoShoulderMountedLaunch
	 */
	struct AFjordhawk_Character_BP_C_DinoShoulderMountedLaunch_Params
	{
	public:
		struct FVector                                             launchDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BL9I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   throwingCharacter;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLootTarget
	 */
	struct AFjordhawk_Character_BP_C_VerifyLootTarget_Params
	{
	public:
		class APrimalCharacter*                                    InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HD8F[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPShouldForceFlee
	 */
	struct AFjordhawk_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PickUpLoot
	 */
	struct AFjordhawk_Character_BP_C_PickUpLoot_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPSetupTamed
	 */
	struct AFjordhawk_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LookForLoot
	 */
	struct AFjordhawk_Character_BP_C_LookForLoot_Params
	{
	public:
		float                                                      SearchRadius;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LookForBetterLoot;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6401[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LootCache
	 */
	struct AFjordhawk_Character_BP_C_LootCache_Params
	{
	public:
		class APrimalStructureItemContainer*                       StructureToLoot;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveDestroyed
	 */
	struct AFjordhawk_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DropLoot
	 */
	struct AFjordhawk_Character_BP_C_DropLoot_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct AFjordhawk_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindAimedTarget
	 */
	struct AFjordhawk_Character_BP_C_FindAimedTarget_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AimDir;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnLaunched
	 */
	struct AFjordhawk_Character_BP_C_OnLaunched_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bXYOverride;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bZOverride;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnClearMountedDino
	 */
	struct AFjordhawk_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetMountedDino
	 */
	struct AFjordhawk_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct AFjordhawk_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindWanderAroundActor
	 */
	struct AFjordhawk_Character_BP_C_FindWanderAroundActor_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Eat  Corpse
	 */
	struct AFjordhawk_Character_BP_C_EatCorpse_Params
	{
	public:
		class APrimalCharacter*                                    DinoToEat;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AFjordhawk_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintCanAttack
	 */
	struct AFjordhawk_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3S66[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RestoreShield
	 */
	struct AFjordhawk_Character_BP_C_RestoreShield_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnRep_HasShield
	 */
	struct AFjordhawk_Character_BP_C_OnRep_HasShield_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPAdjustDamage
	 */
	struct AFjordhawk_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQTK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M6VL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LQNY[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveTick
	 */
	struct AFjordhawk_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Disable Landing
	 */
	struct AFjordhawk_Character_BP_C_DisableLanding_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.AllowLanding
	 */
	struct AFjordhawk_Character_BP_C_AllowLanding_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct AFjordhawk_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UY8F[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveAnyDamage
	 */
	struct AFjordhawk_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XJ8K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z To Point
	 */
	struct AFjordhawk_Character_BP_C_RotateZToPoint_Params
	{
	public:
		struct FVector                                             offsetFromCurrentLocation;                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z to Target
	 */
	struct AFjordhawk_Character_BP_C_RotateZtoTarget_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UserConstructionScript
	 */
	struct AFjordhawk_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__FinishedFunc
	 */
	struct AFjordhawk_Character_BP_C_RotationToTarget__FinishedFunc_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__UpdateFunc
	 */
	struct AFjordhawk_Character_BP_C_RotationToTarget__UpdateFunc_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SlowlyRotateZTo
	 */
	struct AFjordhawk_Character_BP_C_SlowlyRotateZTo_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            initialRotation;                                         // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.HideDino
	 */
	struct AFjordhawk_Character_BP_C_HideDino_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ShowDino
	 */
	struct AFjordhawk_Character_BP_C_ShowDino_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientSetHidden
	 */
	struct AFjordhawk_Character_BP_C_ClientSetHidden_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateVisibilityAfterUnstasis
	 */
	struct AFjordhawk_Character_BP_C_UpdateVisibilityAfterUnstasis_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyEscape
	 */
	struct AFjordhawk_Character_BP_C_VerifyEscape_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryLanding
	 */
	struct AFjordhawk_Character_BP_C_TryLanding_Params
	{	};

	/**
	 * Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ExecuteUbergraph_Fjordhawk_Character_BP
	 */
	struct AFjordhawk_Character_BP_C_ExecuteUbergraph_Fjordhawk_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
