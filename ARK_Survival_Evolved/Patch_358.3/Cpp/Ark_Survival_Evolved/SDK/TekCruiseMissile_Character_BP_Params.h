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
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetIngoreActorsForExplosion
	 */
	struct ATekCruiseMissile_Character_BP_C_GetIngoreActorsForExplosion_Params
	{
	public:
		struct FVector                                             Oirgin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.validate proper impact location
	 */
	struct ATekCruiseMissile_Character_BP_C_validateproperimpactlocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.has missile exceeded allowed distance
	 */
	struct ATekCruiseMissile_Character_BP_C_hasmissileexceededalloweddistance_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Finished Arming
	 */
	struct ATekCruiseMissile_Character_BP_C_FinishedArming_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.manual explode
	 */
	struct ATekCruiseMissile_Character_BP_C_manualexplode_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ATekCruiseMissile_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.FuelTime
	 */
	struct ATekCruiseMissile_Character_BP_C_FuelTime_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyAddPassenger
	 */
	struct ATekCruiseMissile_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N6RM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Missile Locally Controlled
	 */
	struct ATekCruiseMissile_Character_BP_C_IsMissileLocallyControlled_Params
	{
	public:
		bool                                                       Local;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ATekCruiseMissile_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnJumpPressed
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPAdjustDamage
	 */
	struct ATekCruiseMissile_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9JIA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4559[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveActorBeginOverlap
	 */
	struct ATekCruiseMissile_Character_BP_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct ATekCruiseMissile_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct ATekCruiseMissile_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Give Player Vision Buff
	 */
	struct ATekCruiseMissile_Character_BP_C_GivePlayerVisionBuff_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ATekCruiseMissile_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MJX3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GR6E[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATekCruiseMissile_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Damage Actors By Explosion Radius
	 */
	struct ATekCruiseMissile_Character_BP_C_DamageActorsByExplosionRadius_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideDamage;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B6R8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              damagetype;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       reallydamage;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanCryo
	 */
	struct ATekCruiseMissile_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_PreventMovementMode
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerIsFiringItemInInventory
	 */
	struct ATekCruiseMissile_Character_BP_C_ServerIsFiringItemInInventory_Params
	{
	public:
		bool                                                       retVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptTurnInput
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_InterceptTurnInput_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetupScoutDisconnect
	 */
	struct ATekCruiseMissile_Character_BP_C_SetupScoutDisconnect_Params
	{
	public:
		float                                                      DelayTimeSeconds;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DestroyScout
	 */
	struct ATekCruiseMissile_Character_BP_C_DestroyScout_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyAimOffsetTargetLocation
	 */
	struct ATekCruiseMissile_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Dino Fleeing
	 */
	struct ATekCruiseMissile_Character_BP_C_IsDinoFleeing_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFleeing;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideStencilAllianceForTarget
	 */
	struct ATekCruiseMissile_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
	{
	public:
		class APrimalCharacter*                                    TargetDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EStencilAlliance                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPShouldCancelDoAttack
	 */
	struct ATekCruiseMissile_Character_BP_C_BPShouldCancelDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.OnRep_LowStamina
	 */
	struct ATekCruiseMissile_Character_BP_C_OnRep_LowStamina_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsDashing
	 */
	struct ATekCruiseMissile_Character_BP_C_IsDashing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RG5Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetHUDElements
	 */
	struct ATekCruiseMissile_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveTick
	 */
	struct ATekCruiseMissile_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutIsFirstPerson
	 */
	struct ATekCruiseMissile_Character_BP_C_ScoutIsFirstPerson_Params
	{
	public:
		bool                                                       retVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetTargetImpactMaterial
	 */
	struct ATekCruiseMissile_Character_BP_C_SetTargetImpactMaterial_Params
	{
	public:
		float                                                      ImpactDistance;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPPreventStasis
	 */
	struct ATekCruiseMissile_Character_BP_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ATekCruiseMissile_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QFHT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsScoutFirst Person
	 */
	struct ATekCruiseMissile_Character_BP_C_IsScoutFirstPerson_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetFirstPersonMaterial
	 */
	struct ATekCruiseMissile_Character_BP_C_SetFirstPersonMaterial_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FSF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsServerOrSinglePlayer
	 */
	struct ATekCruiseMissile_Character_BP_C_IsServerOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsClientOrSinglePlayer
	 */
	struct ATekCruiseMissile_Character_BP_C_IsClientOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Update Scout Vision
	 */
	struct ATekCruiseMissile_Character_BP_C_UpdateScoutVision_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideFPVViewLocation
	 */
	struct ATekCruiseMissile_Character_BP_C_BPOverrideFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetFPVViewLocation
	 */
	struct ATekCruiseMissile_Character_BP_C_BPGetFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LFCQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Dash
	 */
	struct ATekCruiseMissile_Character_BP_C_Dash_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Impulse;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BlueprintCanAttack
	 */
	struct ATekCruiseMissile_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OI7M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnSetDeath
	 */
	struct ATekCruiseMissile_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Release Possessing Survivor
	 */
	struct ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivor_Params
	{
	public:
		bool                                                       destroyed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LNC7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetPossessedByPlayer
	 */
	struct ATekCruiseMissile_Character_BP_C_GetPossessedByPlayer_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Spawned From Projectile
	 */
	struct ATekCruiseMissile_Character_BP_C_SpawnedFromProjectile_Params
	{
	public:
		class AShooterPlayerController*                            ShooterPlayerController;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PossessDelay;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OALJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         FiringItem;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPIsValidUnStasisCaster
	 */
	struct ATekCruiseMissile_Character_BP_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ABG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UserConstructionScript
	 */
	struct ATekCruiseMissile_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StopPossessingPlayerMovement
	 */
	struct ATekCruiseMissile_Character_BP_C_StopPossessingPlayerMovement_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveHit
	 */
	struct ATekCruiseMissile_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LCY2[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReplicateInputVector
	 */
	struct ATekCruiseMissile_Character_BP_C_ReplicateInputVector_Params
	{
	public:
		struct FVector                                             InputVector;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.on hit something
	 */
	struct ATekCruiseMissile_Character_BP_C_onhitsomething_Params
	{
	public:
		class AActor*                                              otheractor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDestroy
	 */
	struct ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RechargeShield
	 */
	struct ATekCruiseMissile_Character_BP_C_RechargeShield_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutDamaged
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientScoutDamaged_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientTickShieldDamageVFX
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientTickShieldDamageVFX_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRechargeShield
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientRechargeShield_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATekCruiseMissile_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SpawnEnd
	 */
	struct ATekCruiseMissile_Character_BP_C_SpawnEnd_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveEndPlay
	 */
	struct ATekCruiseMissile_Character_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TriggerDisconnectFX
	 */
	struct ATekCruiseMissile_Character_BP_C_TriggerDisconnectFX_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutDied
	 */
	struct ATekCruiseMissile_Character_BP_C_ScoutDied_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.PossessedByPlayer
	 */
	struct ATekCruiseMissile_Character_BP_C_PossessedByPlayer_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_ReleasePossessingSurvivor
	 */
	struct ATekCruiseMissile_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerDashAttack
	 */
	struct ATekCruiseMissile_Character_BP_C_ServerDashAttack_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.VerifyPossessingSurvivor
	 */
	struct ATekCruiseMissile_Character_BP_C_VerifyPossessingSurvivor_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
	 */
	struct ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedDestroyActor
	 */
	struct ATekCruiseMissile_Character_BP_C_DelayedDestroyActor_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckConsumeResource
	 */
	struct ATekCruiseMissile_Character_BP_C_CheckConsumeResource_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientConsumeResource
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientConsumeResource_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickThrusterVFX
	 */
	struct ATekCruiseMissile_Character_BP_C_TickThrusterVFX_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRanOutOfStamina
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientRanOutOfStamina_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutRangeCheck
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientScoutRangeCheck_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckSubmerged
	 */
	struct ATekCruiseMissile_Character_BP_C_CheckSubmerged_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashTick
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientDashTick_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashEnd
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientDashEnd_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StartImpactVFX
	 */
	struct ATekCruiseMissile_Character_BP_C_StartImpactVFX_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerHandleOnStopFire
	 */
	struct ATekCruiseMissile_Character_BP_C_ServerHandleOnStopFire_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ApplyStaminaCost
	 */
	struct ATekCruiseMissile_Character_BP_C_ApplyStaminaCost_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StaminaDrain
	 */
	struct ATekCruiseMissile_Character_BP_C_StaminaDrain_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientLowStamina
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientLowStamina_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
	 */
	struct ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickStaminaMeter
	 */
	struct ATekCruiseMissile_Character_BP_C_TickStaminaMeter_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DisableAI
	 */
	struct ATekCruiseMissile_Character_BP_C_DisableAI_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_SpawnedFromProjectile
	 */
	struct ATekCruiseMissile_Character_BP_C_MULTI_SpawnedFromProjectile_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
	 */
	struct ATekCruiseMissile_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UpdateScoutVisionBuff
	 */
	struct ATekCruiseMissile_Character_BP_C_UpdateScoutVisionBuff_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RequestRecallScout
	 */
	struct ATekCruiseMissile_Character_BP_C_RequestRecallScout_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Set rocket message
	 */
	struct ATekCruiseMissile_Character_BP_C_Setrocketmessage_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CustomEvent_2
	 */
	struct ATekCruiseMissile_Character_BP_C_CustomEvent_2_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientCheckClearExpiredDinoData
	 */
	struct ATekCruiseMissile_Character_BP_C_ClientCheckClearExpiredDinoData_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.set falling
	 */
	struct ATekCruiseMissile_Character_BP_C_setfalling_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.warn time almost up
	 */
	struct ATekCruiseMissile_Character_BP_C_warntimealmostup_Params
	{	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Explode
	 */
	struct ATekCruiseMissile_Character_BP_C_Explode_Params
	{
	public:
		struct FVector                                             HitNormal;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ExecuteUbergraph_TekCruiseMissile_Character_BP
	 */
	struct ATekCruiseMissile_Character_BP_C_ExecuteUbergraph_TekCruiseMissile_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
