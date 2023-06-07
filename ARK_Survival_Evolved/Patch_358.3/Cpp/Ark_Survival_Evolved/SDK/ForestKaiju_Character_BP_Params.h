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
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetVar_IsProtecting
	 */
	struct AForestKaiju_Character_BP_C_GetVar_IsProtecting_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideHealthBarOffset
	 */
	struct AForestKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_77A1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventRiding
	 */
	struct AForestKaiju_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedBegin
	 */
	struct AForestKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetDebugInfoString
	 */
	struct AForestKaiju_Character_BP_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBaseOnCharacter
	 */
	struct AForestKaiju_Character_BP_C_BPCanBaseOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    BaseCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActorIsKaiju
	 */
	struct AForestKaiju_Character_BP_C_ActorIsKaiju_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsKaiju;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedEnd
	 */
	struct AForestKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_UseTamedPhysics
	 */
	struct AForestKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterSound
	 */
	struct AForestKaiju_Character_BP_C_BPOverrideCharacterSound_Params
	{
	public:
		class USoundBase*                                          SoundIn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundBase*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
	 */
	struct AForestKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
	 */
	struct AForestKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params
	{
	public:
		class AShooterPlayerController*                            DamageCauserController;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHitFriendlyTarget;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NBMM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PreDamageHealth;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageAmount;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4ENI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0020)  (Parm, OutParm, ReferenceParm)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H28Z[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointDamageHitResult;                                    // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FHitMarkerSettings                                  ReturnValue;                                             // 0x00C8(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnDinoCheat
	 */
	struct AForestKaiju_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IA0V[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HasCantRootBuff
	 */
	struct AForestKaiju_Character_BP_C_HasCantRootBuff_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RidingTick
	 */
	struct AForestKaiju_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AForestKaiju_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct AForestKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct AForestKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpSpawnInMesh
	 */
	struct AForestKaiju_Character_BP_C_InterpSpawnInMesh_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanFit
	 */
	struct AForestKaiju_Character_BP_C_CanFit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VerticalOffset;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Angle;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HorizontalOffset;                                        // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HalfHeight;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              IgnoreActor;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Can;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_48R9[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.LerpDyingMaterials
	 */
	struct AForestKaiju_Character_BP_C_LerpDyingMaterials_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AForestKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeShowRootRadiusRing
	 */
	struct AForestKaiju_Character_BP_C_MaybeShowRootRadiusRing_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShowRootRadiusRing
	 */
	struct AForestKaiju_Character_BP_C_ShowRootRadiusRing_Params
	{
	public:
		bool                                                       ShowRing;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_26M9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveForward
	 */
	struct AForestKaiju_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get Grab Attack Vine AttachTargetsSocket Name
	 */
	struct AForestKaiju_Character_BP_C_GetGrabAttackVineAttachTargetsSocketName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveArm
	 */
	struct AForestKaiju_Character_BP_C_DissolveArm_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Location Valid Vine Attack Range
	 */
	struct AForestKaiju_Character_BP_C_IsLocationValidVineAttackRange_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47V9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeLoseArmWhileProtecting
	 */
	struct AForestKaiju_Character_BP_C_MaybeLoseArmWhileProtecting_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyAllNearbyPoisonTrees
	 */
	struct AForestKaiju_Character_BP_C_DestroyAllNearbyPoisonTrees_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPSetupTamed
	 */
	struct AForestKaiju_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontageSection
	 */
	struct AForestKaiju_Character_BP_C_GetMovementMontageSection_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpProtectShieldStatus
	 */
	struct AForestKaiju_Character_BP_C_InterpProtectShieldStatus_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpNodeStates
	 */
	struct AForestKaiju_Character_BP_C_InterpNodeStates_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CreateDynamicMats
	 */
	struct AForestKaiju_Character_BP_C_CreateDynamicMats_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct AForestKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicate;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicateToOwner;                                       // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseAndServerUpdateMesh;                       // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseOnServer;                                  // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
	 */
	struct AForestKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params
	{
	public:
		struct FRotator                                            Delta;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.WantsLocomotionTransition
	 */
	struct AForestKaiju_Character_BP_C_WantsLocomotionTransition_Params
	{
	public:
		bool                                                       WantsTransition;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsLocomotionBlocked
	 */
	struct AForestKaiju_Character_BP_C_IsLocomotionBlocked_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1SGI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontage
	 */
	struct AForestKaiju_Character_BP_C_GetMovementMontage_Params
	{
	public:
		ERootMotionMovementMode                                    Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FIQ4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PlayAIProtectSelfBriefly
	 */
	struct AForestKaiju_Character_BP_C_PlayAIProtectSelfBriefly_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_CurrentAttackIndexReplicated
	 */
	struct AForestKaiju_Character_BP_C_OnRep_CurrentAttackIndexReplicated_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnMaxVinesThisFrame
	 */
	struct AForestKaiju_Character_BP_C_SpawnMaxVinesThisFrame_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVineInternal
	 */
	struct AForestKaiju_Character_BP_C_SpawnVineInternal_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AForestKaiju_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanAttack
	 */
	struct AForestKaiju_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B93V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPNotifyClearRider
	 */
	struct AForestKaiju_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetDeath
	 */
	struct AForestKaiju_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlinkDamageNodeInterp
	 */
	struct AForestKaiju_Character_BP_C_BlinkDamageNodeInterp_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTreeSeeds
	 */
	struct AForestKaiju_Character_BP_C_SpawnPoisonTreeSeeds_Params
	{
	public:
		float                                                      TreeCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetLastPlayerGrabAttackTargetLocation
	 */
	struct AForestKaiju_Character_BP_C_SetLastPlayerGrabAttackTargetLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_FollowControlRotation
	 */
	struct AForestKaiju_Character_BP_C_OnRep_FollowControlRotation_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_GrabAttacking
	 */
	struct AForestKaiju_Character_BP_C_OnRep_GrabAttacking_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.TurnOffAttackBBKeys
	 */
	struct AForestKaiju_Character_BP_C_TurnOffAttackBBKeys_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct AForestKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsRightArmGrabAttack
	 */
	struct AForestKaiju_Character_BP_C_IsRightArmGrabAttack_Params
	{
	public:
		bool                                                       RightArmGrabAttack;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanPlayerGrabAttack
	 */
	struct AForestKaiju_Character_BP_C_CanPlayerGrabAttack_Params
	{
	public:
		bool                                                       GrabAttack;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Hit;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetCrosshairColor
	 */
	struct AForestKaiju_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetGrabAttackVineSocketName
	 */
	struct AForestKaiju_Character_BP_C_GetGrabAttackVineSocketName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVine
	 */
	struct AForestKaiju_Character_BP_C_SpawnVine_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get GrabAttackVineStartLocation
	 */
	struct AForestKaiju_Character_BP_C_GetGrabAttackVineStartLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InitVars
	 */
	struct AForestKaiju_Character_BP_C_InitVars_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabHit
	 */
	struct AForestKaiju_Character_BP_C_VineGrabHit_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabMissed
	 */
	struct AForestKaiju_Character_BP_C_VineGrabMissed_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AForestKaiju_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTryMultiUse
	 */
	struct AForestKaiju_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AFQ6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightComplete
	 */
	struct AForestKaiju_Character_BP_C_RegrowRightComplete_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftComplete
	 */
	struct AForestKaiju_Character_BP_C_RegrowLeftComplete_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowTick
	 */
	struct AForestKaiju_Character_BP_C_RegrowTick_Params
	{
	public:
		class USkeletalMeshComponent*                              Appendage;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             currentScale;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutScale;                                                // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Complete;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZWR0[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Regrow
	 */
	struct AForestKaiju_Character_BP_C_Regrow_Params
	{
	public:
		bool                                                       LeftArm;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_536T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Dismember
	 */
	struct AForestKaiju_Character_BP_C_Dismember_Params
	{
	public:
		class USkeletalMeshComponent*                              Appendage;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Root Attacking
	 */
	struct AForestKaiju_Character_BP_C_IsRootAttacking_Params
	{
	public:
		bool                                                       IsAttacking;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MJDM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetRootAttackChargeLEvel
	 */
	struct AForestKaiju_Character_BP_C_GetRootAttackChargeLEvel_Params
	{
	public:
		bool                                                       SmoothedValues;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EIND[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Percent;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetHUDElements
	 */
	struct AForestKaiju_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventInputType
	 */
	struct AForestKaiju_Character_BP_C_BPPreventInputType_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PreventLocomotion
	 */
	struct AForestKaiju_Character_BP_C_PreventLocomotion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BWIQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeExposeNode
	 */
	struct AForestKaiju_Character_BP_C_MaybeExposeNode_Params
	{
	public:
		class AActor*                                              DmgCauser;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDesertKaiju_ControlNodes                                  Node;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StartTorpid
	 */
	struct AForestKaiju_Character_BP_C_StartTorpid_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTree
	 */
	struct AForestKaiju_Character_BP_C_SpawnPoisonTree_Params
	{
	public:
		class AActor*                                              SpawnOnEnemy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerServer
	 */
	struct AForestKaiju_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AForestKaiju_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShortestAngleDistance
	 */
	struct AForestKaiju_Character_BP_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetClampedLookDir
	 */
	struct AForestKaiju_Character_BP_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PJHE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Return;                                                  // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AForestKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabTrace
	 */
	struct AForestKaiju_Character_BP_C_GrabTrace_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustAttackIndex
	 */
	struct AForestKaiju_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct AForestKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveRight
	 */
	struct AForestKaiju_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SwitchTPVCamView
	 */
	struct AForestKaiju_Character_BP_C_SwitchTPVCamView_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsFirstPersonView
	 */
	struct AForestKaiju_Character_BP_C_IsFirstPersonView_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GKGA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerNonDedicated
	 */
	struct AForestKaiju_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyCenterNode
	 */
	struct AForestKaiju_Character_BP_C_DestroyCenterNode_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageCenterNode
	 */
	struct AForestKaiju_Character_BP_C_DamageCenterNode_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyRightNode
	 */
	struct AForestKaiju_Character_BP_C_DestroyRightNode_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageRightNode
	 */
	struct AForestKaiju_Character_BP_C_DamageRightNode_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExposeNode
	 */
	struct AForestKaiju_Character_BP_C_ExposeNode_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyLeftNode
	 */
	struct AForestKaiju_Character_BP_C_DestroyLeftNode_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageLeftNode
	 */
	struct AForestKaiju_Character_BP_C_DamageLeftNode_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustDamage
	 */
	struct AForestKaiju_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2KP0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QN3B[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanTargetCorpse
	 */
	struct AForestKaiju_Character_BP_C_BPCanTargetCorpse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UserConstructionScript
	 */
	struct AForestKaiju_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_186
	 */
	struct AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_186_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_185
	 */
	struct AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_185_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_184
	 */
	struct AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_184_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_183
	 */
	struct AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_183_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CallFunc_StunKaiju
	 */
	struct AForestKaiju_Character_BP_C_CallFunc_StunKaiju_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetVar_FKArenaManager
	 */
	struct AForestKaiju_Character_BP_C_SetVar_FKArenaManager_Params
	{
	public:
		class AActor*                                              ArenaManager;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveTick
	 */
	struct AForestKaiju_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveBeginPlay
	 */
	struct AForestKaiju_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_SetNodeColor
	 */
	struct AForestKaiju_Character_BP_C_MULTI_SetNodeColor_Params
	{
	public:
		int32_t                                                    Node;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Activated;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DamageNode;                                              // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Rep_ExposeLeftRightNodes
	 */
	struct AForestKaiju_Character_BP_C_Rep_ExposeLeftRightNodes_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateCameraDataTPVToServer
	 */
	struct AForestKaiju_Character_BP_C_ReplicateCameraDataTPVToServer_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6GVH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ServerExecuteGrab
	 */
	struct AForestKaiju_Character_BP_C_ServerExecuteGrab_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_GrabTraceTargetDir
	 */
	struct AForestKaiju_Character_BP_C_Server_GrabTraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ExposeNodes
	 */
	struct AForestKaiju_Character_BP_C_Multi_ExposeNodes_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  Node;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       expose;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActivateNode
	 */
	struct AForestKaiju_Character_BP_C_ActivateNode_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  Node;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_LeftNode
	 */
	struct AForestKaiju_Character_BP_C_Deactivate_LeftNode_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_RightNode
	 */
	struct AForestKaiju_Character_BP_C_Deactivate_RightNode_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_CenterNode
	 */
	struct AForestKaiju_Character_BP_C_Deactivate_CenterNode_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_StartAttackRoot
	 */
	struct AForestKaiju_Character_BP_C_CtS_StartAttackRoot_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_ExecuteAttackRoot
	 */
	struct AForestKaiju_Character_BP_C_CtS_ExecuteAttackRoot_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndRootAttack
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_EndRootAttack_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PreventInput
	 */
	struct AForestKaiju_Character_BP_C_Multi_PreventInput_Params
	{
	public:
		bool                                                       Prevent;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteAttackRoot
	 */
	struct AForestKaiju_Character_BP_C_ExecuteAttackRoot_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_RootTargets
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_RootTargets_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_StartAttackRoot
	 */
	struct AForestKaiju_Character_BP_C_AI_StartAttackRoot_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_EndAttackRoot
	 */
	struct AForestKaiju_Character_BP_C_AI_EndAttackRoot_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightArmTick
	 */
	struct AForestKaiju_Character_BP_C_RegrowRightArmTick_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftArmTick
	 */
	struct AForestKaiju_Character_BP_C_RegrowLeftArmTick_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_Dismember
	 */
	struct AForestKaiju_Character_BP_C_Multi_Dismember_Params
	{
	public:
		bool                                                       LeftArm;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeft
	 */
	struct AForestKaiju_Character_BP_C_RegrowLeft_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRight
	 */
	struct AForestKaiju_Character_BP_C_RegrowRight_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EndGrabAIState
	 */
	struct AForestKaiju_Character_BP_C_EndGrabAIState_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSmash
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSmash_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_DebugDrawLine
	 */
	struct AForestKaiju_Character_BP_C_MULTI_DebugDrawLine_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DurationSeconds;                                         // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DebugDrawLine
	 */
	struct AForestKaiju_Character_BP_C_DebugDrawLine_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DurationSeconds;                                         // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateRiderTPVRight
	 */
	struct AForestKaiju_Character_BP_C_ReplicateRiderTPVRight_Params
	{
	public:
		bool                                                       TPVRight;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateStart
	 */
	struct AForestKaiju_Character_BP_C_MULTI_GrabAttackStateStart_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateEnd
	 */
	struct AForestKaiju_Character_BP_C_MULTI_GrabAttackStateEnd_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicatePlayerGrabAttackTargetLocation
	 */
	struct AForestKaiju_Character_BP_C_ReplicatePlayerGrabAttackTargetLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonSeeds
	 */
	struct AForestKaiju_Character_BP_C_SpawnPoisonSeeds_Params
	{
	public:
		float                                                      Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlaySeedSpawnVFX
	 */
	struct AForestKaiju_Character_BP_C_Multi_PlaySeedSpawnVFX_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageNodeBlink
	 */
	struct AForestKaiju_Character_BP_C_DamageNodeBlink_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  Node;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpLeftNode
	 */
	struct AForestKaiju_Character_BP_C_Multi_InterpLeftNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpRightNode
	 */
	struct AForestKaiju_Character_BP_C_Multi_InterpRightNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpCenterNode
	 */
	struct AForestKaiju_Character_BP_C_Multi_InterpCenterNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpPressed
	 */
	struct AForestKaiju_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpReleased
	 */
	struct AForestKaiju_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_SetProtecting
	 */
	struct AForestKaiju_Character_BP_C_Server_SetProtecting_Params
	{
	public:
		bool                                                       Protecting;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Client_SetDoingRootAttack
	 */
	struct AForestKaiju_Character_BP_C_Client_SetDoingRootAttack_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_StartGrabAttackAnim
	 */
	struct AForestKaiju_Character_BP_C_MULTI_StartGrabAttackAnim_Params
	{
	public:
		bool                                                       RightArm;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZC0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LeftRight;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      UpDown;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackDetachActors
	 */
	struct AForestKaiju_Character_BP_C_GrabAttackDetachActors_Params
	{
	public:
		TArray<class APrimalCharacter*>                            Targets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackTick
	 */
	struct AForestKaiju_Character_BP_C_GrabAttackTick_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StunForestKaiju
	 */
	struct AForestKaiju_Character_BP_C_StunForestKaiju_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackPanCamera
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_GrabAttackPanCamera_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndShieldFX
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_EndShieldFX_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetProtecting
	 */
	struct AForestKaiju_Character_BP_C_Multi_SetProtecting_Params
	{
	public:
		bool                                                       Protecting;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpNodeDamage
	 */
	struct AForestKaiju_Character_BP_C_Multi_InterpNodeDamage_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetRunning
	 */
	struct AForestKaiju_Character_BP_C_BP_OnSetRunning_Params
	{
	public:
		bool                                                       bNewIsRunning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedCorruptionDestroy
	 */
	struct AForestKaiju_Character_BP_C_Multi_DelayedCorruptionDestroy_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateGrabAttackTPVOffset
	 */
	struct AForestKaiju_Character_BP_C_UpdateGrabAttackTPVOffset_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackAttachActors
	 */
	struct AForestKaiju_Character_BP_C_GrabAttackAttachActors_Params
	{
	public:
		TArray<struct FVineTargetData>                             Targets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_SetDoingRootAttack
	 */
	struct AForestKaiju_Character_BP_C_CtS_SetDoingRootAttack_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveLeft
	 */
	struct AForestKaiju_Character_BP_C_DissolveLeft_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CreateDissolvingArmDynamicMATs
	 */
	struct AForestKaiju_Character_BP_C_Multi_CreateDissolvingArmDynamicMATs_Params
	{
	public:
		bool                                                       LeftArm;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ShowRootRadius
	 */
	struct AForestKaiju_Character_BP_C_Multi_ShowRootRadius_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetRootchargeAmount
	 */
	struct AForestKaiju_Character_BP_C_Multi_SetRootchargeAmount_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StC_SetLastTimeRootAttack
	 */
	struct AForestKaiju_Character_BP_C_StC_SetLastTimeRootAttack_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
	 */
	struct AForestKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_BeginDying
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_BeginDying_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ApplyFallingDownForce
	 */
	struct AForestKaiju_Character_BP_C_Multi_ApplyFallingDownForce_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EquipSaddle
	 */
	struct AForestKaiju_Character_BP_C_EquipSaddle_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSpawnVines
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSpawnVines_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetDoingRootAttack
	 */
	struct AForestKaiju_Character_BP_C_Multi_SetDoingRootAttack_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StaggeredRootTargets
	 */
	struct AForestKaiju_Character_BP_C_StaggeredRootTargets_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SERVER_GrabAttackSpawnVines
	 */
	struct AForestKaiju_Character_BP_C_SERVER_GrabAttackSpawnVines_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_CheckForProtect
	 */
	struct AForestKaiju_Character_BP_C_AnimNotify_CheckForProtect_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature
	 */
	struct AForestKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7S6T[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature
	 */
	struct AForestKaiju_Character_BP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TE3S[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateSaddlePhysics
	 */
	struct AForestKaiju_Character_BP_C_UpdateSaddlePhysics_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
	 */
	struct AForestKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CleanArms
	 */
	struct AForestKaiju_Character_BP_C_Multi_CleanArms_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteUbergraph_ForestKaiju_Character_BP
	 */
	struct AForestKaiju_Character_BP_C_ExecuteUbergraph_ForestKaiju_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
