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
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetHUDElements
	 */
	struct ADesmodus_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOnLifeSteal
	 */
	struct ADesmodus_Character_BP_C_TurnOnLifeSteal_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetRidingMultiUseEntries
	 */
	struct ADesmodus_Character_BP_C_BPGetRidingMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAdjustDamage
	 */
	struct ADesmodus_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UT69[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QQCS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetTargetingDesirability
	 */
	struct ADesmodus_Character_BP_C_BPGetTargetingDesirability_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetGravityZScale
	 */
	struct ADesmodus_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.Multicast Lifesteal Sound
	 */
	struct ADesmodus_Character_BP_C_MulticastLifestealSound_Params
	{
	public:
		bool                                                       isStealing;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFromInit;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoPingSound
	 */
	struct ADesmodus_Character_BP_C_MulticastEchoPingSound_Params
	{
	public:
		class USceneComponent*                                     CharacterComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoBuffSound
	 */
	struct ADesmodus_Character_BP_C_MulticastEchoBuffSound_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastInvisibleSound
	 */
	struct ADesmodus_Character_BP_C_MulticastInvisibleSound_Params
	{
	public:
		bool                                                       isInvisible;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TPC6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPUnstasis
	 */
	struct ADesmodus_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterruptLatching
	 */
	struct ADesmodus_Character_BP_C_InterruptLatching_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetLatchValues
	 */
	struct ADesmodus_Character_BP_C_SetLatchValues_Params
	{
	public:
		bool                                                       LatchedDownwards;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IA4R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LatchingSurfaceNormal;                                   // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LatchingLoc;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InitialSpawn;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UOPM[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOnStartJump
	 */
	struct ADesmodus_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanAttack
	 */
	struct ADesmodus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CVSP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HXVC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShouldTryLatch
	 */
	struct ADesmodus_Character_BP_C_ShouldTryLatch_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LandOnFailureToLatch;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAllowCarryCharacter
	 */
	struct ADesmodus_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.UpdateHUD
	 */
	struct ADesmodus_Character_BP_C_UpdateHUD_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanScreech
	 */
	struct ADesmodus_Character_BP_C_CanScreech_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3CVI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ADesmodus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyFOV
	 */
	struct ADesmodus_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPCanLand
	 */
	struct ADesmodus_Character_BP_C_BPCanLand_Params
	{
	public:
		bool                                                       CanLand;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ADesmodus_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MMCT[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KI9B[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MORY[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct ADesmodus_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPLimitPlayerRotation
	 */
	struct ADesmodus_Character_BP_C_BPLimitPlayerRotation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InViewRotation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeAdult
	 */
	struct ADesmodus_Character_BP_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeBaby
	 */
	struct ADesmodus_Character_BP_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPIsValidUnStasisCaster
	 */
	struct ADesmodus_Character_BP_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.LatchToCeilingOnSpawn
	 */
	struct ADesmodus_Character_BP_C_LatchToCeilingOnSpawn_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_OnTamedOrderReceived
	 */
	struct ADesmodus_Character_BP_C_BP_OnTamedOrderReceived_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_04X9[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideMoveToOrder
	 */
	struct ADesmodus_Character_BP_C_BPOverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             MoveToLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OSN4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   OrderingPlayer;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ADesmodus_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideStencilAllianceForTarget
	 */
	struct ADesmodus_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
	{
	public:
		class APrimalCharacter*                                    TargetDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EStencilAlliance                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bInCave
	 */
	struct ADesmodus_Character_BP_C_OnRep_bInCave_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckInCave
	 */
	struct ADesmodus_Character_BP_C_CheckInCave_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.StopInvisibility
	 */
	struct ADesmodus_Character_BP_C_StopInvisibility_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.DecreaseInvisibilityStamina
	 */
	struct ADesmodus_Character_BP_C_DecreaseInvisibilityStamina_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ADesmodus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9QV1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryLatch
	 */
	struct ADesmodus_Character_BP_C_TryLatch_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       backwardsLatching;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsDiving
	 */
	struct ADesmodus_Character_BP_C_OnRep_bIsDiving_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveHit
	 */
	struct ADesmodus_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7FU2[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ADesmodus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveAnyDamage
	 */
	struct ADesmodus_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RL81[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ADesmodus_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct ADesmodus_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnKillGrabbedDino
	 */
	struct ADesmodus_Character_BP_C_OnKillGrabbedDino_Params
	{
	public:
		class APrimalDinoCharacter*                                KilledDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bNightVisionOn
	 */
	struct ADesmodus_Character_BP_C_OnRep_bNightVisionOn_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPTryMultiUse
	 */
	struct ADesmodus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShowMultiUse
	 */
	struct ADesmodus_Character_BP_C_ShowMultiUse_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ADesmodus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ToggleNightVision
	 */
	struct ADesmodus_Character_BP_C_ToggleNightVision_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickDiving
	 */
	struct ADesmodus_Character_BP_C_TickDiving_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPShouldForceFlee
	 */
	struct ADesmodus_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.RemoveNightVisionForRider
	 */
	struct ADesmodus_Character_BP_C_RemoveNightVisionForRider_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.Add Night VisionForRider
	 */
	struct ADesmodus_Character_BP_C_AddNightVisionForRider_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.DestroyHUD
	 */
	struct ADesmodus_Character_BP_C_DestroyHUD_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetupHUD
	 */
	struct ADesmodus_Character_BP_C_SetupHUD_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifySetRider
	 */
	struct ADesmodus_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddTamingAffinityFromLifeSteal
	 */
	struct ADesmodus_Character_BP_C_AddTamingAffinityFromLifeSteal_Params
	{
	public:
		class AShooterCharacter*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyAimOffsetTargetLocation
	 */
	struct ADesmodus_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickTameGrabAttack
	 */
	struct ADesmodus_Character_BP_C_TickTameGrabAttack_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInNight
	 */
	struct ADesmodus_Character_BP_C_OnRep_bIsInNight_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickCanLatchClient
	 */
	struct ADesmodus_Character_BP_C_TickCanLatchClient_Params
	{
	public:
		bool                                                       CanLatch;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryUseBloodPack
	 */
	struct ADesmodus_Character_BP_C_TryUseBloodPack_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.SendToServerTryToggleInvisible
	 */
	struct ADesmodus_Character_BP_C_SendToServerTryToggleInvisible_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ADesmodus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanStartLifeSteal
	 */
	struct ADesmodus_Character_BP_C_CanStartLifeSteal_Params
	{
	public:
		bool                                                       canStart;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOffLifeSteal
	 */
	struct ADesmodus_Character_BP_C_TurnOffLifeSteal_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsLifeStealing
	 */
	struct ADesmodus_Character_BP_C_OnRep_bIsLifeStealing_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleLifeSteal
	 */
	struct ADesmodus_Character_BP_C_TryToggleLifeSteal_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDoAttack
	 */
	struct ADesmodus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInvisible
	 */
	struct ADesmodus_Character_BP_C_OnRep_bIsInvisible_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleInvisible
	 */
	struct ADesmodus_Character_BP_C_TryToggleInvisible_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ADesmodus_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQBQ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterceptInputEvent
	 */
	struct ADesmodus_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.RidingTick
	 */
	struct ADesmodus_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifyClearRider
	 */
	struct ADesmodus_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckTrackingActors
	 */
	struct ADesmodus_Character_BP_C_CheckTrackingActors_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddActorToTrackingList
	 */
	struct ADesmodus_Character_BP_C_AddActorToTrackingList_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.Get All Revealed TargetForCurrentScream
	 */
	struct ADesmodus_Character_BP_C_GetAllRevealedTargetForCurrentScream_Params
	{
	public:
		TArray<class AActor*>                                      RevealedCharacter;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ADesmodus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.GetLifeStealAmountFromCurrentAttack
	 */
	struct ADesmodus_Character_BP_C_GetLifeStealAmountFromCurrentAttack_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAnimNotifyCustomState_End
	 */
	struct ADesmodus_Character_BP_C_BPAnimNotifyCustomState_End_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.LineTrace
	 */
	struct ADesmodus_Character_BP_C_LineTrace_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardLatching;                                        // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomthing;                                             // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_54LC[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.UserConstructionScript
	 */
	struct ADesmodus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_288
	 */
	struct ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_288_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_287
	 */
	struct ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_287_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_286
	 */
	struct ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_286_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_285
	 */
	struct ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_285_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.LocalFaceLatchingObject
	 */
	struct ADesmodus_Character_BP_C_LocalFaceLatchingObject_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveTick
	 */
	struct ADesmodus_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveBeginPlay
	 */
	struct ADesmodus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartDaytime_Event
	 */
	struct ADesmodus_Character_BP_C_OnStartDaytime_Event_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartNighttime_Event
	 */
	struct ADesmodus_Character_BP_C_OnStartNighttime_Event_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClearHUDReference
	 */
	struct ADesmodus_Character_BP_C_ClearHUDReference_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ResetTamingVars
	 */
	struct ADesmodus_Character_BP_C_ResetTamingVars_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.Client_SpawnSuccessBloddpackVFX
	 */
	struct ADesmodus_Character_BP_C_Client_SpawnSuccessBloddpackVFX_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.BindDayCycleManager
	 */
	struct ADesmodus_Character_BP_C_BindDayCycleManager_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.MoveDuringUnlatching
	 */
	struct ADesmodus_Character_BP_C_MoveDuringUnlatching_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClientNotEnoughStamina
	 */
	struct ADesmodus_Character_BP_C_ClientNotEnoughStamina_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryLatch
	 */
	struct ADesmodus_Character_BP_C_ServerTryLatch_Params
	{
	public:
		bool                                                       LatchedBackwards;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_04IU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LatchingSurfaceNormal;                                   // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LatchingLoc;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.CrouchTick
	 */
	struct ADesmodus_Character_BP_C_CrouchTick_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.JumpTick
	 */
	struct ADesmodus_Character_BP_C_JumpTick_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryToggleLifeSteal
	 */
	struct ADesmodus_Character_BP_C_ServerTryToggleLifeSteal_Params
	{	};

	/**
	 * Function Desmodus_Character_BP.Desmodus_Character_BP_C.ExecuteUbergraph_Desmodus_Character_BP
	 */
	struct ADesmodus_Character_BP_C_ExecuteUbergraph_Desmodus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
