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
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceTeleport
	 */
	struct ASpaceWhale_Character_BP_C_ForceTeleport_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct ASpaceWhale_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyToggleHUD
	 */
	struct ASpaceWhale_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ASpaceWhale_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VOEI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPCustomIsRelevantForClient
	 */
	struct ASpaceWhale_Character_BP_C_BPCustomIsRelevantForClient_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPSetupTamed
	 */
	struct ASpaceWhale_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DestroyHudWidget
	 */
	struct ASpaceWhale_Character_BP_C_DestroyHudWidget_Params
	{
	public:
		bool                                                       DestroyNow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifySetRider
	 */
	struct ASpaceWhale_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PlayTurretRotationSound
	 */
	struct ASpaceWhale_Character_BP_C_PlayTurretRotationSound_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HXQX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CalculateUpshiftCameraOffset
	 */
	struct ASpaceWhale_Character_BP_C_CalculateUpshiftCameraOffset_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAdjustDamage
	 */
	struct ASpaceWhale_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CKT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H5KN[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_PreventMovementMode
	 */
	struct ASpaceWhale_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnSetDeath
	 */
	struct ASpaceWhale_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombProduction
	 */
	struct ASpaceWhale_Character_BP_C_UpdateBombProduction_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CurrentTeleportCost
	 */
	struct ASpaceWhale_Character_BP_C_CurrentTeleportCost_Params
	{
	public:
		int32_t                                                    NumCharacters;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BreakGrapples
	 */
	struct ASpaceWhale_Character_BP_C_BreakGrapples_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SpawnDownShiftBurst
	 */
	struct ASpaceWhale_Character_BP_C_SpawnDownShiftBurst_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSaddleColor
	 */
	struct ASpaceWhale_Character_BP_C_GetSaddleColor_Params
	{
	public:
		int32_t                                                    theRegion;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_21XF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTeleportingCharacters
	 */
	struct ASpaceWhale_Character_BP_C_UpdateTeleportingCharacters_Params
	{
	public:
		TArray<class APrimalCharacter*>                            TeleportingCharacters;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.Local Request Bomb Targeting
	 */
	struct ASpaceWhale_Character_BP_C_LocalRequestBombTargeting_Params
	{
	public:
		bool                                                       NewBombTargetingMode;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VKH1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTarget
	 */
	struct ASpaceWhale_Character_BP_C_UpdateHyperdriveTarget_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombing
	 */
	struct ASpaceWhale_Character_BP_C_UpdateBombing_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DropBomb
	 */
	struct ASpaceWhale_Character_BP_C_DropBomb_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleOnStopFire
	 */
	struct ASpaceWhale_Character_BP_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ShouldPlayBlinkEffect
	 */
	struct ASpaceWhale_Character_BP_C_ShouldPlayBlinkEffect_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SetSaddleVisibility
	 */
	struct ASpaceWhale_Character_BP_C_SetSaddleVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LP1F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ResetMaterials
	 */
	struct ASpaceWhale_Character_BP_C_ResetMaterials_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAnimNotifyCustomState_Begin
	 */
	struct ASpaceWhale_Character_BP_C_BPAnimNotifyCustomState_Begin_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TotalDuration;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H0RC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ASpaceWhale_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceFleeTeleport
	 */
	struct ASpaceWhale_Character_BP_C_ForceFleeTeleport_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateSpeedEffects
	 */
	struct ASpaceWhale_Character_BP_C_UpdateSpeedEffects_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTurretRotation
	 */
	struct ASpaceWhale_Character_BP_C_UpdateTurretRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.IsLocalControllerTagged
	 */
	struct ASpaceWhale_Character_BP_C_IsLocalControllerTagged_Params
	{
	public:
		TArray<class APrimalCharacter*>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EAYM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBlinkEffect
	 */
	struct ASpaceWhale_Character_BP_C_UpdateBlinkEffect_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CompleteTeleport
	 */
	struct ASpaceWhale_Character_BP_C_CompleteTeleport_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A7R4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ChargeTimeLeft
	 */
	struct ASpaceWhale_Character_BP_C_ChargeTimeLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G1P4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CheckTeleportAngle
	 */
	struct ASpaceWhale_Character_BP_C_CheckTeleportAngle_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6GW1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.FireForTurretForPlayer
	 */
	struct ASpaceWhale_Character_BP_C_FireForTurretForPlayer_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FireLeft;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetFireTransformForPlayer
	 */
	struct ASpaceWhale_Character_BP_C_GetFireTransformForPlayer_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             FirePosition;                                            // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             FireDirection;                                           // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FireLeft;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9T3[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnSaddleEquipped
	 */
	struct ASpaceWhale_Character_BP_C_OnSaddleEquipped_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0C14[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsChargingHyperspaceJump
	 */
	struct ASpaceWhale_Character_BP_C_OnRep_IsChargingHyperspaceJump_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearRider
	 */
	struct ASpaceWhale_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPDrawToRiderHUD
	 */
	struct ASpaceWhale_Character_BP_C_BPDrawToRiderHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdatePassengerSeatRotation
	 */
	struct ASpaceWhale_Character_BP_C_UpdatePassengerSeatRotation_Params
	{
	public:
		int32_t                                                    PassengerIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCurrentTeleportRadius
	 */
	struct ASpaceWhale_Character_BP_C_GetCurrentTeleportRadius_Params
	{
	public:
		bool                                                       GetSmoothedDisplayValue;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AVQ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPForceCameraStyle
	 */
	struct ASpaceWhale_Character_BP_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.InTargetingMode
	 */
	struct ASpaceWhale_Character_BP_C_InTargetingMode_Params
	{
	public:
		bool                                                       IsTargeting;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingBomb
	 */
	struct ASpaceWhale_Character_BP_C_OnRep_IsTargetingBomb_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingHyperdrive
	 */
	struct ASpaceWhale_Character_BP_C_OnRep_IsTargetingHyperdrive_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyForwardDirectionInput
	 */
	struct ASpaceWhale_Character_BP_C_BPModifyForwardDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPShouldLimitForwardDirection
	 */
	struct ASpaceWhale_Character_BP_C_BPShouldLimitForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideFlyingVelocity
	 */
	struct ASpaceWhale_Character_BP_C_BPOverrideFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCharactersToMassTeleport
	 */
	struct ASpaceWhale_Character_BP_C_GetCharactersToMassTeleport_Params
	{
	public:
		struct FVector                                             NearWorldLoc;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DGG4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class APrimalCharacter*>                            FriendlyCharacters;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.AllowedToUseHyperdrive
	 */
	struct ASpaceWhale_Character_BP_C_AllowedToUseHyperdrive_Params
	{
	public:
		bool                                                       CheckTimer;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AAF0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Target;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ModifyCosmicEnergy
	 */
	struct ASpaceWhale_Character_BP_C_ModifyCosmicEnergy_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceNetUpdate;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PCTT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewValue;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCosmicEnergy
	 */
	struct ASpaceWhale_Character_BP_C_GetCosmicEnergy_Params
	{
	public:
		bool                                                       GetSmoothedDisplayValue;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1U6C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      current;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetMaxCosmicEnergy
	 */
	struct ASpaceWhale_Character_BP_C_GetMaxCosmicEnergy_Params
	{
	public:
		float                                                      MaxEnergy;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOnMassTeleportEvent
	 */
	struct ASpaceWhale_Character_BP_C_BPOnMassTeleportEvent_Params
	{
	public:
		EMassTeleportState                                         EventState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KKT3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    TeleportInitiatedByChar;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPGetHUDElements
	 */
	struct ASpaceWhale_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.HyperdriveTargetingTrace
	 */
	struct ASpaceWhale_Character_BP_C_HyperdriveTargetingTrace_Params
	{
	public:
		struct FVector                                             TraceStartLoc;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceStartDir;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WhaleStartLoc;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DebugDrawDuration;                                       // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       foundValidLocation;                                      // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0E5Y[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTargetingMode
	 */
	struct ASpaceWhale_Character_BP_C_UpdateHyperdriveTargetingMode_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ASpaceWhale_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_23QV[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4X38[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H9RV[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveTick
	 */
	struct ASpaceWhale_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ASpaceWhale_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A63C[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ASpaceWhale_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanAttack
	 */
	struct ASpaceWhale_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OQCA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GRDS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ASpaceWhale_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBLY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ASpaceWhale_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyAddPassenger
	 */
	struct ASpaceWhale_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UserConstructionScript
	 */
	struct ASpaceWhale_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStartHyperspaceJump
	 */
	struct ASpaceWhale_Character_BP_C_ServerRequestStartHyperspaceJump_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientAckHyperspaceJump
	 */
	struct ASpaceWhale_Character_BP_C_ClientAckHyperspaceJump_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SNRY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OrigLocation;                                            // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiUpdateCurrentGear
	 */
	struct ASpaceWhale_Character_BP_C_MultiUpdateCurrentGear_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveBeginPlay
	 */
	struct ASpaceWhale_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DelayedGearFixup
	 */
	struct ASpaceWhale_Character_BP_C_DelayedGearFixup_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateCurrentGear
	 */
	struct ASpaceWhale_Character_BP_C_UpdateCurrentGear_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetHyperdriveTargetingMode
	 */
	struct ASpaceWhale_Character_BP_C_ServerRequestSetHyperdriveTargetingMode_Params
	{
	public:
		bool                                                       NewTargetingMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestDropBomb
	 */
	struct ASpaceWhale_Character_BP_C_ServerRequestDropBomb_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetBombTargetingMode
	 */
	struct ASpaceWhale_Character_BP_C_ServerRequestSetBombTargetingMode_Params
	{
	public:
		bool                                                       NewBombTargetingMode;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpPressed
	 */
	struct ASpaceWhale_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpReleased
	 */
	struct ASpaceWhale_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiHyperspaceJumpVFX
	 */
	struct ASpaceWhale_Character_BP_C_MultiHyperspaceJumpVFX_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.StartHyperspaceJump
	 */
	struct ASpaceWhale_Character_BP_C_StartHyperspaceJump_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestCancelHyperspaceJump
	 */
	struct ASpaceWhale_Character_BP_C_ServerRequestCancelHyperspaceJump_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientStartHyperspaceJump
	 */
	struct ASpaceWhale_Character_BP_C_ClientStartHyperspaceJump_Params
	{
	public:
		TArray<class APrimalCharacter*>                            TaggedCharacters;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientCancelHyperspaceJump
	 */
	struct ASpaceWhale_Character_BP_C_ClientCancelHyperspaceJump_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStopBombs
	 */
	struct ASpaceWhale_Character_BP_C_ServerRequestStopBombs_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientPlayBombVFX
	 */
	struct ASpaceWhale_Character_BP_C_ClientPlayBombVFX_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForPlayers
	 */
	struct ASpaceWhale_Character_BP_C_ScanForPlayers_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientForceMeshRelevant
	 */
	struct ASpaceWhale_Character_BP_C_ClientForceMeshRelevant_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceHideSaddle
	 */
	struct ASpaceWhale_Character_BP_C_ForceHideSaddle_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PostJumpComplete
	 */
	struct ASpaceWhale_Character_BP_C_PostJumpComplete_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForTeleportActors
	 */
	struct ASpaceWhale_Character_BP_C_ScanForTeleportActors_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHit
	 */
	struct ASpaceWhale_Character_BP_C_TorporHit_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitRight
	 */
	struct ASpaceWhale_Character_BP_C_TorporHitRight_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitLeft
	 */
	struct ASpaceWhale_Character_BP_C_TorporHitLeft_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClearTorporHit
	 */
	struct ASpaceWhale_Character_BP_C_ClearTorporHit_Params
	{	};

	/**
	 * Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ExecuteUbergraph_SpaceWhale_Character_BP
	 */
	struct ASpaceWhale_Character_BP_C_ExecuteUbergraph_SpaceWhale_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
