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
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.hard fix missing gen1 explorer notes
	 */
	struct ABuff_Companion_HLNA_C_hardfixmissinggen1explorernotes_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get total Glitch Mission Complete Count
	 */
	struct ABuff_Companion_HLNA_C_GettotalGlitchMissionCompleteCount_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Glitch Mission Complete Count
	 */
	struct ABuff_Companion_HLNA_C_GetGlitchMissionCompleteCount_Params
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly Pick Orbit Location Timer
	 */
	struct ABuff_Companion_HLNA_C_RandomlyPickOrbitLocationTimer_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Should Force Play Post Intro Reactions
	 */
	struct ABuff_Companion_HLNA_C_ShouldForcePlayPostIntroReactions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RK89[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerControllingValidPrimalChar
	 */
	struct ABuff_Companion_HLNA_C_IsPlayerControllingValidPrimalChar_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5W9F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.call finish on vr world
	 */
	struct ABuff_Companion_HLNA_C_callfinishonvrworld_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set player camera manager on death vfx manager
	 */
	struct ABuff_Companion_HLNA_C_setplayercameramanagerondeathvfxmanager_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.setup intro anim masking
	 */
	struct ABuff_Companion_HLNA_C_setupintroanimmasking_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.destroy intro teleport sphere
	 */
	struct ABuff_Companion_HLNA_C_destroyintroteleportsphere_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn post mass teleport vfx
	 */
	struct ABuff_Companion_HLNA_C_spawnpostmassteleportvfx_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn mass teleport vfx
	 */
	struct ABuff_Companion_HLNA_C_spawnmassteleportvfx_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pass Mass Teleport Event to Vfx And Destroy ref
	 */
	struct ABuff_Companion_HLNA_C_PassMassTeleportEventtoVfxAndDestroyref_Params
	{
	public:
		EMassTeleportState                                         State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.cancel mass teleport vfx
	 */
	struct ABuff_Companion_HLNA_C_cancelmassteleportvfx_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.pass players to teleport vfx
	 */
	struct ABuff_Companion_HLNA_C_passplayerstoteleportvfx_Params
	{
	public:
		TArray<class FString>                                      teleportingplayernames;                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateSpawnedBeamParticle
	 */
	struct ABuff_Companion_HLNA_C_UpdateSpawnedBeamParticle_Params
	{
	public:
		class UParticleSystem*                                     ParticleTemplate;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              EndPointActor;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B2W3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pre Teleport Dismount
	 */
	struct ABuff_Companion_HLNA_C_PreTeleportDismount_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.unmount teleporting players
	 */
	struct ABuff_Companion_HLNA_C_unmountteleportingplayers_Params
	{
	public:
		TArray<class APrimalCharacter*>                            teleportingplayers;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious or Dead Dinos
	 */
	struct ABuff_Companion_HLNA_C_NotifyPlayersThatTheyCantTeleportUnconsiousorDeadDinos_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious Or Dead Players
	 */
	struct ABuff_Companion_HLNA_C_NotifyPlayersThatTheyCantTeleportUnconsiousOrDeadPlayers_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Prevent Glitch Use Sphere Collision
	 */
	struct ABuff_Companion_HLNA_C_PreventGlitchUseSphereCollision_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Exceed Final Boss player Count
	 */
	struct ABuff_Companion_HLNA_C_NotifyPlayersThatTheyExceedFinalBossplayerCount_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify players that they exceed final boss tame count
	 */
	struct ABuff_Companion_HLNA_C_notifyplayersthattheyexceedfinalbosstamecount_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find associated anim texture from localized sound wave pairs
	 */
	struct ABuff_Companion_HLNA_C_findassociatedanimtexturefromlocalizedsoundwavepairs_Params
	{
	public:
		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>    Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FString                                              soundwavepath;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor)
		class FString                                              animtexturepath;                                         // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Recently Released ADS
	 */
	struct ABuff_Companion_HLNA_C_RecentlyReleasedADS_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.begin scan random location orbit
	 */
	struct ABuff_Companion_HLNA_C_beginscanrandomlocationorbit_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is fixing glitch
	 */
	struct ABuff_Companion_HLNA_C_isfixingglitch_Params
	{
	public:
		bool                                                       isfixing;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check if You Can Play Post Intro HLNA Target Alert Message
	 */
	struct ABuff_Companion_HLNA_C_CheckifYouCanPlayPostIntroHLNATargetAlertMessage_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro Mission Alert Message
	 */
	struct ABuff_Companion_HLNA_C_ShowPostIntroMissionAlertMessage_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro HLNA Target Alert Message
	 */
	struct ABuff_Companion_HLNA_C_ShowPostIntroHLNATargetAlertMessage_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reaction Equals Reaction
	 */
	struct ABuff_Companion_HLNA_C_ReactionEqualsReaction_Params
	{
	public:
		struct FCompanionReactionData                              reaction1;                                               // 0x0000(0x00A0)  (Parm)
		struct FCompanionReactionData                              reaction2;                                               // 0x00A0(0x00A0)  (Parm)
		bool                                                       isequal;                                                 // 0x0140(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HIGT[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set up aysnc loaded anim texture
	 */
	struct ABuff_Companion_HLNA_C_setupaysncloadedanimtexture_Params
	{
	public:
		class UObject*                                             InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EyeOnly;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player tpv and hlna is in the way
	 */
	struct ABuff_Companion_HLNA_C_isplayertpvandhlnaisintheway_Params
	{
	public:
		struct FVector                                             locoverride;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isintheway;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force play mission alert
	 */
	struct ABuff_Companion_HLNA_C_forceplaymissionalert_Params
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class FString                                              Label;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor)
		EMissionAlertType                                          alerttype;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K3BQ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      displaytime;                                             // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay to Play Hlna Subtitles Move Out Anim
	 */
	struct ABuff_Companion_HLNA_C_DelaytoPlayHlnaSubtitlesMoveOutAnim_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.create dynamic materials
	 */
	struct ABuff_Companion_HLNA_C_createdynamicmaterials_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clear Async Loaded Audio
	 */
	struct ABuff_Companion_HLNA_C_ClearAsyncLoadedAudio_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Player On Mission
	 */
	struct ABuff_Companion_HLNA_C_IsPlayerOnMission_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetVal;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GN5J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMissionType*                                        activemission;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player on mission and cant teleport
	 */
	struct ABuff_Companion_HLNA_C_isplayeronmissionandcantteleport_Params
	{
	public:
		class AShooterCharacter*                                   InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetVal;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Mission
	 */
	struct ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportPlayersOnMission_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Colliding with Something
	 */
	struct ABuff_Companion_HLNA_C_CollidingwithSomething_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffDeactivated
	 */
	struct ABuff_Companion_HLNA_C_BPNotifyOtherBuffDeactivated_Params
	{
	public:
		class APrimalBuff*                                         OtherBuff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionAbleToMonologue
	 */
	struct ABuff_Companion_HLNA_C_IsCompanionAbleToMonologue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C5OR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Awaiting Set Of Initial Spawn Intro Anim Timer
	 */
	struct ABuff_Companion_HLNA_C_AwaitingSetOfInitialSpawnIntroAnimTimer_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Large Dinos To Final Boss
	 */
	struct ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportLargeDinosToFinalBoss_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Seated Structures
	 */
	struct ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportPlayersOnSeatedStructures_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Temp Keep Movement Volume Up
	 */
	struct ABuff_Companion_HLNA_C_TempKeepMovementVolumeUp_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Intro sphere Mask Amount
	 */
	struct ABuff_Companion_HLNA_C_SetIntrosphereMaskAmount_Params
	{
	public:
		float                                                      InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Move Cuz In The Way
	 */
	struct ABuff_Companion_HLNA_C_MoveCuzInTheWay_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.should hlna move away from the camera
	 */
	struct ABuff_Companion_HLNA_C_shouldhlnamoveawayfromthecamera_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Probably Firing
	 */
	struct ABuff_Companion_HLNA_C_IsProbablyFiring_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStopFire
	 */
	struct ABuff_Companion_HLNA_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Getting In Front Of Camera During Firing Or Ads
	 */
	struct ABuff_Companion_HLNA_C_RestrictGettingInFrontOfCameraDuringFiringOrAds_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.StopCompanionEvent
	 */
	struct ABuff_Companion_HLNA_C_StopCompanionEvent_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FocusOnRemoteTarget
	 */
	struct ABuff_Companion_HLNA_C_FocusOnRemoteTarget_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play focused scan sfx and vfx
	 */
	struct ABuff_Companion_HLNA_C_playfocusedscansfxandvfx_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Focused Selected Remote Target Timeout
	 */
	struct ABuff_Companion_HLNA_C_FocusedSelectedRemoteTargetTimeout_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon sfx
	 */
	struct ABuff_Companion_HLNA_C_playhexagonsfx_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnHexagons
	 */
	struct ABuff_Companion_HLNA_C_OnSpawnHexagons_Params
	{
	public:
		float                                                      OverrideCollectSFXVolume;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VFXImmediatelyAttracts;                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IKIO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMadeHexagonPurchase
	 */
	struct ABuff_Companion_HLNA_C_OnMadeHexagonPurchase_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger to VR Boss Battle Flow Test
	 */
	struct ABuff_Companion_HLNA_C_HLNaMassTeleportTriggertoVRBossBattleFlowTest_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find or get mission dispatcher
	 */
	struct ABuff_Companion_HLNA_C_findorgetmissiondispatcher_Params
	{
	public:
		class AMissionDispatcher*                                  AsMissionDispatcher;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Remove Cosmetic HLNA
	 */
	struct ABuff_Companion_HLNA_C_RemoveCosmeticHLNA_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.RefreshCompanionColorization
	 */
	struct ABuff_Companion_HLNA_C_RefreshCompanionColorization_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start boss battle
	 */
	struct ABuff_Companion_HLNA_C_startbossbattle_Params
	{
	public:
		class UClass*                                              InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start mission and set reverse teleports
	 */
	struct ABuff_Companion_HLNA_C_startmissionandsetreverseteleports_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Return Teleport Locations
	 */
	struct ABuff_Companion_HLNA_C_SetReturnTeleportLocations_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPGetMultiUseEntries
	 */
	struct ABuff_Companion_HLNA_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Hard
	 */
	struct ABuff_Companion_HLNA_C_HLNaMassTeleportTriggerToVRBossBattleHard_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Med
	 */
	struct ABuff_Companion_HLNA_C_HLNaMassTeleportTriggerToVRBossBattleMed_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Easy
	 */
	struct ABuff_Companion_HLNA_C_HLNaMassTeleportTriggerToVRBossBattleEasy_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Sync Mission Complete Status
	 */
	struct ABuff_Companion_HLNA_C_SyncMissionCompleteStatus_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Sync Mission Complete Status
	 */
	struct ABuff_Companion_HLNA_C_RestrictSyncMissionCompleteStatus_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.format VR boss battle teleport multiuse options
	 */
	struct ABuff_Companion_HLNA_C_formatVRbossbattleteleportmultiuseoptions_Params
	{
	public:
		int32_t                                                    RequiredMissions;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUDB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MissionTitle;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor)
		bool                                                       RequiresAllStoryGlitches;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SNXP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AppendedString;                                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       Disabled;                                                // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted_Timed_Hexagon_Collection
	 */
	struct ABuff_Companion_HLNA_C_Restricted_Timed_Hexagon_Collection_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.restricted time since last played movement sounds
	 */
	struct ABuff_Companion_HLNA_C_restrictedtimesincelastplayedmovementsounds_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play movement sound
	 */
	struct ABuff_Companion_HLNA_C_Playmovementsound_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GMX3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly pick orbit location
	 */
	struct ABuff_Companion_HLNA_C_Randomlypickorbitlocation_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Fish
	 */
	struct ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportFish_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify player that they cannot teleport rafts
	 */
	struct ABuff_Companion_HLNA_C_notifyplayerthattheycannotteleportrafts_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Respawn Anim
	 */
	struct ABuff_Companion_HLNA_C_PlayHLNARespawnAnim_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play spawn anim
	 */
	struct ABuff_Companion_HLNA_C_playspawnanim_Params
	{
	public:
		class UClass*                                              anActorClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimMontage*                                        AnimToPlay;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Play Localized Audio cue
	 */
	struct ABuff_Companion_HLNA_C_SimplePlayLocalizedAudiocue_Params
	{
	public:
		struct FHLNALocalizedAudioEntry                            HLNALocalizedAudioEntry;                                 // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm)
		bool                                                       playanimtextures;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RFOH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPAnimNotifyCustomEvent
	 */
	struct ABuff_Companion_HLNA_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set All Components Custom Depth Stencil Value
	 */
	struct ABuff_Companion_HLNA_C_SetAllComponentsCustomDepthStencilValue_Params
	{
	public:
		int32_t                                                    stencilValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QL15[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayEnvironmentalCompanionReaction
	 */
	struct ABuff_Companion_HLNA_C_CanPlayEnvironmentalCompanionReaction_Params
	{
	public:
		struct FCompanionReactionData                              CanPlayReactionData;                                     // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7LH[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server Update Purchasable Items
	 */
	struct ABuff_Companion_HLNA_C_ServerUpdatePurchasableItems_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted Interval For Checking Updated Hex Store Purchasable Items
	 */
	struct ABuff_Companion_HLNA_C_RestrictedIntervalForCheckingUpdatedHexStorePurchasableItems_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Initial Spawn Anim
	 */
	struct ABuff_Companion_HLNA_C_PlayHLNAInitialSpawnAnim_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Companion is in first person in a seat
	 */
	struct ABuff_Companion_HLNA_C_Companionisinfirstpersoninaseat_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finish Intro Anim
	 */
	struct ABuff_Companion_HLNA_C_FinishIntroAnim_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyHasTamedDino
	 */
	struct ABuff_Companion_HLNA_C_NotifyHasTamedDino_Params
	{
	public:
		class UClass*                                              DinoClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyItemCrafted
	 */
	struct ABuff_Companion_HLNA_C_NotifyItemCrafted_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Keep Eye Hidden For Emotes
	 */
	struct ABuff_Companion_HLNA_C_KeepEyeHiddenForEmotes_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickClient
	 */
	struct ABuff_Companion_HLNA_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Delay Between Environmental Reactions
	 */
	struct ABuff_Companion_HLNA_C_ResetDelayBetweenEnvironmentalReactions_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Recieve Damage For Reactions
	 */
	struct ABuff_Companion_HLNA_C_CheckRecieveDamageForReactions_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Recent Damage Recieved
	 */
	struct ABuff_Companion_HLNA_C_ResetRecentDamageRecieved_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_Companion_HLNA_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play World Reaction
	 */
	struct ABuff_Companion_HLNA_C_PlayWorldReaction_Params
	{
	public:
		struct FCompanionReactionData                              WithReactionData;                                        // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Interval to check for HLNA world reactions
	 */
	struct ABuff_Companion_HLNA_C_IntervaltocheckforHLNAworldreactions_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Random World Reactions
	 */
	struct ABuff_Companion_HLNA_C_RestrictRandomWorldReactions_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Current Status of various things to react to
	 */
	struct ABuff_Companion_HLNA_C_CheckCurrentStatusofvariousthingstoreactto_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInventoryItemUsed
	 */
	struct ABuff_Companion_HLNA_C_BPInventoryItemUsed_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPDeactivated
	 */
	struct ABuff_Companion_HLNA_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffActivated
	 */
	struct ABuff_Companion_HLNA_C_BPNotifyOtherBuffActivated_Params
	{
	public:
		class APrimalBuff*                                         OtherBuff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyExperienceGained
	 */
	struct ABuff_Companion_HLNA_C_BPNotifyExperienceGained_Params
	{
	public:
		float                                                      ActualExpGained;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ExpectedExpGain;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EXPType                                                    ExpTypeGained;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInstigatorDied
	 */
	struct ABuff_Companion_HLNA_C_BPInstigatorDied_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStartFire
	 */
	struct ABuff_Companion_HLNA_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayJustAboutToTeleportReaction
	 */
	struct ABuff_Companion_HLNA_C_PlayJustAboutToTeleportReaction_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScanDispatcher
	 */
	struct ABuff_Companion_HLNA_C_FinishedScanDispatcher_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScan
	 */
	struct ABuff_Companion_HLNA_C_FinishedScan_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scan Reactions
	 */
	struct ABuff_Companion_HLNA_C_PlayScanReactions_Params
	{
	public:
		struct FCompanionReactionData                              PostScanReaction;                                        // 0x0000(0x00A0)  (Parm)
		float                                                      OverrideScanDuration;                                    // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TotalReactionsDuration;                                  // 0x00A4(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clean Up Teleport VFX
	 */
	struct ABuff_Companion_HLNA_C_CleanUpTeleportVFX_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.On Mass Teleport Event VFX
	 */
	struct ABuff_Companion_HLNA_C_OnMassTeleportEventVFX_Params
	{
	public:
		EMassTeleportState                                         Event;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Find Best Teleport Location
	 */
	struct ABuff_Companion_HLNA_C_FindBestTeleportLocation_Params
	{
	public:
		int32_t                                                    selectedcoordinatedirectionindex;                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    regionindex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       onlytestiftheresanyavailable;                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasFoundSpot;                                            // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyDamage
	 */
	struct ABuff_Companion_HLNA_C_NotifyDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ED1A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         EventInstigator;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              TheDamageCauser;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Best Teleport Spot From Sorted Start Points
	 */
	struct ABuff_Companion_HLNA_C_SetBestTeleportSpotFromSortedStartPoints_Params
	{
	public:
		TArray<class AActor*>                                      Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       abletosetspot;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZ11[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Biome Names
	 */
	struct ABuff_Companion_HLNA_C_GetBiomeNames_Params
	{
	public:
		TArray<class FString>                                      OverridePlayerSpawnRegions;                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCompanionWorldLocation
	 */
	struct ABuff_Companion_HLNA_C_GetCompanionWorldLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCurrentOrbitRadius
	 */
	struct ABuff_Companion_HLNA_C_GetCurrentOrbitRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPOnOwnerMassTeleportEvent
	 */
	struct ABuff_Companion_HLNA_C_BPOnOwnerMassTeleportEvent_Params
	{
	public:
		EMassTeleportState                                         EventState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S0F4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    TeleportInitiatedByChar;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMassTeleportEventReceived
	 */
	struct ABuff_Companion_HLNA_C_OnMassTeleportEventReceived_Params
	{
	public:
		EMassTeleportState                                         EventState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Cancel
	 */
	struct ABuff_Companion_HLNA_C_HLNaMassTeleport_Cancel_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CleanUpMassTeleport
	 */
	struct ABuff_Companion_HLNA_C_CleanUpMassTeleport_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionState
	 */
	struct ABuff_Companion_HLNA_C_Tick_UpdateCompanionState_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPTryMultiUse
	 */
	struct ABuff_Companion_HLNA_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7ISQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_SearchForMassTeleportChars
	 */
	struct ABuff_Companion_HLNA_C_Tick_SearchForMassTeleportChars_Params
	{
	public:
		bool                                                       bIsFinalCheck;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_470D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickServer
	 */
	struct ABuff_Companion_HLNA_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Trigger
	 */
	struct ABuff_Companion_HLNA_C_HLNaMassTeleport_Trigger_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Start
	 */
	struct ABuff_Companion_HLNA_C_HLNaMassTeleport_Start_Params
	{
	public:
		int32_t                                                    regionindex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TeleportToVRBossBattleeasy;                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TeleportToVRBossBattlemed;                               // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TeleportToVRBossBattlehard;                              // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TeleportToVRBossBattleFLOWTEST;                          // 0x0007(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetTeleportationDestinations
	 */
	struct ABuff_Companion_HLNA_C_GetTeleportationDestinations_Params
	{
	public:
		TArray<struct FTeleportDestination>                        Destinations;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetLookAtPlayerRotation
	 */
	struct ABuff_Companion_HLNA_C_GetLookAtPlayerRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetAnimMoveVelocityAxes
	 */
	struct ABuff_Companion_HLNA_C_GetAnimMoveVelocityAxes_Params
	{
	public:
		struct FVector                                             VelocityAxes;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KT5R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ShouldBeCompact
	 */
	struct ABuff_Companion_HLNA_C_ShouldBeCompact_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Determine Best Teleport Spot
	 */
	struct ABuff_Companion_HLNA_C_DetermineBestTeleportSpot_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionEventStarted
	 */
	struct ABuff_Companion_HLNA_C_OnCompanionEventStarted_Params
	{
	public:
		struct FCompanionEventData                                 StartingEventData;                                       // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanStartCompanionEvent
	 */
	struct ABuff_Companion_HLNA_C_CanStartCompanionEvent_Params
	{
	public:
		class AActor*                                              EventActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FCompanionEventData                                 WithEventData;                                           // 0x0008(0x0050)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionPlayed
	 */
	struct ABuff_Companion_HLNA_C_OnCompanionReactionPlayed_Params
	{
	public:
		struct FCompanionReactionData                              PlayedReactionData;                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    UniqueID;                                                // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BIO2[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SetCompactState
	 */
	struct ABuff_Companion_HLNA_C_SetCompactState_Params
	{
	public:
		bool                                                       bNewCompactState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E84C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionStopped
	 */
	struct ABuff_Companion_HLNA_C_OnCompanionReactionStopped_Params
	{
	public:
		struct FCompanionReactionData                              StoppedReactionData;                                     // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    UniqueID;                                                // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayCompanionReaction
	 */
	struct ABuff_Companion_HLNA_C_CanPlayCompanionReaction_Params
	{
	public:
		struct FCompanionReactionData                              CanPlayReactionData;                                     // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateHLNaSounds
	 */
	struct ABuff_Companion_HLNA_C_Tick_UpdateHLNaSounds_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompactMode
	 */
	struct ABuff_Companion_HLNA_C_Tick_CompactMode_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCurrentEventMonalogue
	 */
	struct ABuff_Companion_HLNA_C_IsCurrentEventMonalogue_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AKHA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateFakeVelocityLagOffset
	 */
	struct ABuff_Companion_HLNA_C_CalculateFakeVelocityLagOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VelocityLag;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaHeightOffset
	 */
	struct ABuff_Companion_HLNA_C_CalculateHLNaHeightOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HeightOffset_Base;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HeightOffset_WithBob;                                    // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BobOffset;                                               // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera
	 */
	struct ABuff_Companion_HLNA_C_IsAttachedToCamera_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MYYI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer
	 */
	struct ABuff_Companion_HLNA_C_IsAttachedToPlayer_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompanionEvents
	 */
	struct ABuff_Companion_HLNA_C_Tick_CompanionEvents_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionReadyToMonologue
	 */
	struct ABuff_Companion_HLNA_C_IsCompanionReadyToMonologue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ConvertTargetRelOffsetToWorld
	 */
	struct ABuff_Companion_HLNA_C_ConvertTargetRelOffsetToWorld_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZ8I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera_Pure
	 */
	struct ABuff_Companion_HLNA_C_IsAttachedToCamera_Pure_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaTargetRelLocFPV
	 */
	struct ABuff_Companion_HLNA_C_UpdateHLNaTargetRelLocFPV_Params
	{
	public:
		struct FVector                                             WithWorldLocation;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaOrbitDir
	 */
	struct ABuff_Companion_HLNA_C_CalculateHLNaOrbitDir_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OrbitDir;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetScreenPercentageWorldLocation
	 */
	struct ABuff_Companion_HLNA_C_GetScreenPercentageWorldLocation_Params
	{
	public:
		struct FVector2D                                           Percentage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ProjectionDist;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.TickUpdateHLNaEventMovement
	 */
	struct ABuff_Companion_HLNA_C_TickUpdateHLNaEventMovement_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldRotation
	 */
	struct ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldRotation_Params
	{
	public:
		struct FRotator                                            TargetWorldRotation;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldLocation
	 */
	struct ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldLocation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetWorldLocation;                                     // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerDeath
	 */
	struct ABuff_Companion_HLNA_C_OnPlayerDeath_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionTransform
	 */
	struct ABuff_Companion_HLNA_C_Tick_UpdateCompanionTransform_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayParallelEmoteMontage
	 */
	struct ABuff_Companion_HLNA_C_PlayParallelEmoteMontage_Params
	{
	public:
		class UAnimMontage*                                        PlayerEmote;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JPD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerPlayAnimation
	 */
	struct ABuff_Companion_HLNA_C_OnPlayerPlayAnimation_Params
	{
	public:
		class UAnimMontage*                                        PlayedAnim;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AnimDuration;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionStateChanged
	 */
	struct ABuff_Companion_HLNA_C_OnCompanionStateChanged_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocationRelative
	 */
	struct ABuff_Companion_HLNA_C_SoftSetHLNaLocationRelative_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshRotationInterpSpeed
	 */
	struct ABuff_Companion_HLNA_C_GetMeshRotationInterpSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YMG6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaRotation
	 */
	struct ABuff_Companion_HLNA_C_SoftSetHLNaRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerVelocity
	 */
	struct ABuff_Companion_HLNA_C_GetPlayerVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer_Pure
	 */
	struct ABuff_Companion_HLNA_C_IsAttachedToPlayer_Pure_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PretendWeAreInWorldSpace
	 */
	struct ABuff_Companion_HLNA_C_PretendWeAreInWorldSpace_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnFoundPoI
	 */
	struct ABuff_Companion_HLNA_C_OnFoundPoI_Params
	{
	public:
		struct FPointOfInterestData_ForCompanion                   FoundPointData;                                          // 0x0000(0x03F0)  (Parm, OutParm, ReferenceParm)
		class AActor*                                              FoundPointActor;                                         // 0x03F0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerADS
	 */
	struct ABuff_Companion_HLNA_C_IsPlayerADS_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshLocationInterpSpeed
	 */
	struct ABuff_Companion_HLNA_C_GetMeshLocationInterpSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerOrbitOrigin
	 */
	struct ABuff_Companion_HLNA_C_GetPlayerOrbitOrigin_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.InterpHLNaRootToOrigin
	 */
	struct ABuff_Companion_HLNA_C_InterpHLNaRootToOrigin_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocation
	 */
	struct ABuff_Companion_HLNA_C_SoftSetHLNaLocation_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaAttachment
	 */
	struct ABuff_Companion_HLNA_C_UpdateHLNaAttachment_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerLookingAtCompanion
	 */
	struct ABuff_Companion_HLNA_C_IsPlayerLookingAtCompanion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnedForPlayer
	 */
	struct ABuff_Companion_HLNA_C_OnSpawnedForPlayer_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPClientDoMultiUse
	 */
	struct ABuff_Companion_HLNA_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UserConstructionScript
	 */
	struct ABuff_Companion_HLNA_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_5__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_5__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_6__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_6__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_7__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_Timeline_7__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_delaybeforeintroshatter__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_delaybeforeintroshatter__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__FinishedFunc
	 */
	struct ABuff_Companion_HLNA_C_fixedorientationtimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__UpdateFunc
	 */
	struct ABuff_Companion_HLNA_C_fixedorientationtimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ReceiveBeginPlay
	 */
	struct ABuff_Companion_HLNA_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportStarted
	 */
	struct ABuff_Companion_HLNA_C_Client_OnMassTeleportStarted_Params
	{
	public:
		struct FVector                                             WithPlayerLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEnded
	 */
	struct ABuff_Companion_HLNA_C_Client_OnMassTeleportEnded_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEventReceived
	 */
	struct ABuff_Companion_HLNA_C_Client_OnMassTeleportEventReceived_Params
	{
	public:
		EMassTeleportState                                         EventState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateTeleportingChars
	 */
	struct ABuff_Companion_HLNA_C_Multi_UpdateTeleportingChars_Params
	{
	public:
		TArray<class APrimalCharacter*>                            NewTeleportCharsList;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.update teleporting characters vfx
	 */
	struct ABuff_Companion_HLNA_C_updateteleportingcharactersvfx_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_OnMassTeleportEvent
	 */
	struct ABuff_Companion_HLNA_C_Multi_OnMassTeleportEvent_Params
	{
	public:
		EMassTeleportState                                         EventState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Fresnel Flash
	 */
	struct ABuff_Companion_HLNA_C_FresnelFlash_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Hexagon Conversion Shop on Client
	 */
	struct ABuff_Companion_HLNA_C_ShowHexagonConversionShoponClient_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.post teleport reaction
	 */
	struct ABuff_Companion_HLNA_C_postteleportreaction_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon absorb anim
	 */
	struct ABuff_Companion_HLNA_C_playhexagonabsorbanim_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scanning SFX and VFX
	 */
	struct ABuff_Companion_HLNA_C_PlayScanningSFXandVFX_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Post Scan Reaction
	 */
	struct ABuff_Companion_HLNA_C_PlayPostScanReaction_Params
	{
	public:
		float                                                      ScanDuration;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ONIS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCompanionReactionData                              PostScanReaction;                                        // 0x0008(0x00A0)  (Parm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and React to Shot Event
	 */
	struct ABuff_Companion_HLNA_C_DelayandReacttoShotEvent_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server React To Shot Event
	 */
	struct ABuff_Companion_HLNA_C_ServerReactToShotEvent_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play friendly fire reaction
	 */
	struct ABuff_Companion_HLNA_C_tryplayfriendlyfirereaction_Params
	{
	public:
		bool                                                       isdead;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play attacked opponent reaction
	 */
	struct ABuff_Companion_HLNA_C_tryplayattackedopponentreaction_Params
	{
	public:
		bool                                                       isdead;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play creature almost dead
	 */
	struct ABuff_Companion_HLNA_C_tryplaycreaturealmostdead_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Equipping Low Durability Weapon
	 */
	struct ABuff_Companion_HLNA_C_ReactToEquippingLowDurabilityWeapon_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_ReactToCraftedItem
	 */
	struct ABuff_Companion_HLNA_C_Client_ReactToCraftedItem_Params
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Bind Dino Death Reaction
	 */
	struct ABuff_Companion_HLNA_C_BindDinoDeathReaction_Params
	{
	public:
		class APrimalDinoCharacter*                                riddendino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Try HLNA Environmental Reaction
	 */
	struct ABuff_Companion_HLNA_C_TryHLNAEnvironmentalReaction_Params
	{
	public:
		struct FCompanionReactionData                              reaction;                                                // 0x0000(0x00A0)  (Parm)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Ridden Dino Died Reaction
	 */
	struct ABuff_Companion_HLNA_C_RiddenDinoDiedReaction_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Update Purchasable Item State and update store on client
	 */
	struct ABuff_Companion_HLNA_C_UpdatePurchasableItemStateandupdatestoreonclient_Params
	{
	public:
		int32_t                                                    StoreItemIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewIndexValue;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and Disable Item Visibility In Store
	 */
	struct ABuff_Companion_HLNA_C_DelayandDisableItemVisibilityInStore_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.intro teleport materials
	 */
	struct ABuff_Companion_HLNA_C_introteleportmaterials_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force set hlna location and rotation
	 */
	struct ABuff_Companion_HLNA_C_forcesethlnalocationandrotation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade away intro PP mask
	 */
	struct ABuff_Companion_HLNA_C_fadeawayintroPPmask_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PrimalCharacterNotifyLevelUp
	 */
	struct ABuff_Companion_HLNA_C_PrimalCharacterNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Player Level Up
	 */
	struct ABuff_Companion_HLNA_C_ReactToPlayerLevelUp_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay and scan
	 */
	struct ABuff_Companion_HLNA_C_delayandscan_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tell Client To React With Hlna After Respawn
	 */
	struct ABuff_Companion_HLNA_C_TellClientToReactWithHlnaAfterRespawn_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission easy
	 */
	struct ABuff_Companion_HLNA_C_delaystartVRmissioneasy_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission med
	 */
	struct ABuff_Companion_HLNA_C_delaystartVRmissionmed_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission hard
	 */
	struct ABuff_Companion_HLNA_C_delaystartVRmissionhard_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade in audio comp
	 */
	struct ABuff_Companion_HLNA_C_fadeinaudiocomp_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade out audio comp
	 */
	struct ABuff_Companion_HLNA_C_fadeoutaudiocomp_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start vr mission flow test
	 */
	struct ABuff_Companion_HLNA_C_delaystartvrmissionflowtest_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.move hlna to focused target for tooltip
	 */
	struct ABuff_Companion_HLNA_C_movehlnatofocusedtargetfortooltip_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start looping scans
	 */
	struct ABuff_Companion_HLNA_C_startloopingscans_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.stop looping scans
	 */
	struct ABuff_Companion_HLNA_C_stoploopingscans_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.keep looping scans
	 */
	struct ABuff_Companion_HLNA_C_keeploopingscans_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Cue
	 */
	struct ABuff_Companion_HLNA_C_SimpleLoadAsyncSoundCue_Params
	{
	public:
		TArray<struct FLocalizedSoundCueEntry>                     Localized;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       playanimtextures;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
	 */
	struct ABuff_Companion_HLNA_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params
	{
	public:
		class FString                                              AssetPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UObject*                                             LoadedAsset;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play intro reaction
	 */
	struct ABuff_Companion_HLNA_C_playintroreaction_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ignore respawn reaction
	 */
	struct ABuff_Companion_HLNA_C_ignorerespawnreaction_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.prematurely cancel intro stuff
	 */
	struct ABuff_Companion_HLNA_C_prematurelycancelintrostuff_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.finished loading async loaded anim texture
	 */
	struct ABuff_Companion_HLNA_C_finishedloadingasyncloadedanimtexture_Params
	{
	public:
		class FString                                              AssetPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UObject*                                             LoadedAsset;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Wave
	 */
	struct ABuff_Companion_HLNA_C_SimpleLoadAsyncSoundWave_Params
	{
	public:
		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>    Localized;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       playanimtextures;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ResetHexTimer
	 */
	struct ABuff_Companion_HLNA_C_ResetHexTimer_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateSpawnedBeamParticle
	 */
	struct ABuff_Companion_HLNA_C_Multi_UpdateSpawnedBeamParticle_Params
	{
	public:
		class UParticleSystem*                                     ParticleTemplate;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              EndPointActor;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server_HasStartedGen2Intro
	 */
	struct ABuff_Companion_HLNA_C_Server_HasStartedGen2Intro_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroFinished
	 */
	struct ABuff_Companion_HLNA_C_ClientGen2IntroFinished_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroStart
	 */
	struct ABuff_Companion_HLNA_C_ClientGen2IntroStart_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelNotifyGen2IntroFinished
	 */
	struct ABuff_Companion_HLNA_C_LevelNotifyGen2IntroFinished_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerIntroFinished
	 */
	struct ABuff_Companion_HLNA_C_NotifyServerIntroFinished_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelCheatSetGen2IntroPlaying
	 */
	struct ABuff_Companion_HLNA_C_LevelCheatSetGen2IntroPlaying_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerCheatSetGen2IntroPlaying
	 */
	struct ABuff_Companion_HLNA_C_NotifyServerCheatSetGen2IntroPlaying_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay play death line
	 */
	struct ABuff_Companion_HLNA_C_delayplaydeathline_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnActorCustomEvent_Event
	 */
	struct ABuff_Companion_HLNA_C_OnActorCustomEvent_Event_Params
	{
	public:
		class FName                                                EventCustomName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              EventCustomString;                                       // 0x0008(0x0010)  (Parm, ZeroConstructor)
		class AActor*                                              InstigatorActor;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ExecuteUbergraph_Buff_Companion_HLNA
	 */
	struct ABuff_Companion_HLNA_C_ExecuteUbergraph_Buff_Companion_HLNA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finished Scan Dispatcher__DelegateSignature
	 */
	struct ABuff_Companion_HLNA_C_FinishedScanDispatcher__DelegateSignature_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
