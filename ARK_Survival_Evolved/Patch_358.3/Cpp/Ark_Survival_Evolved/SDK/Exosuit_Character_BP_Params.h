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
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetHudData
	 */
	struct AExosuit_Character_BP_C_GetHudData_Params
	{
	public:
		bool                                                       bUsesChestBeam;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanUseChestBeam;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UCWT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ChestBeamEnergyPercent;                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ChestBeamState;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NH7H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalInventoryComponent*                           InventoryComponent;                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              FuelItem;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EnergyPercent;                                           // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentMode;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPreparingJump;                                        // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O79C[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasOfflineRider
	 */
	struct AExosuit_Character_BP_C_HasOfflineRider_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnCryo
	 */
	struct AExosuit_Character_BP_C_BP_OnCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetFinalBeamTarget
	 */
	struct AExosuit_Character_BP_C_GetFinalBeamTarget_Params
	{
	public:
		class AActor*                                              FinalTarget;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPForceCameraStyle
	 */
	struct AExosuit_Character_BP_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerNonDedicated
	 */
	struct AExosuit_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetFPVMaterialParamter
	 */
	struct AExosuit_Character_BP_C_SetFPVMaterialParamter_Params
	{
	public:
		bool                                                       bIsFPV;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KW2U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedCameraMode
	 */
	struct AExosuit_Character_BP_C_OnChangedCameraMode_Params
	{
	public:
		bool                                                       bIsFPV;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F03T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnJumped
	 */
	struct AExosuit_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.DisableExperienceAndLevelUps
	 */
	struct AExosuit_Character_BP_C_DisableExperienceAndLevelUps_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPSetupTamed
	 */
	struct AExosuit_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyExosuit
	 */
	struct AExosuit_Character_BP_C_DestroyExosuit_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldRequestStructuresPlacedOnFloor
	 */
	struct AExosuit_Character_BP_C_ShouldRequestStructuresPlacedOnFloor_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldKnockbackChar
	 */
	struct AExosuit_Character_BP_C_ShouldKnockbackChar_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldKnockback;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.RemovedAttachedStructure
	 */
	struct AExosuit_Character_BP_C_RemovedAttachedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAttachedStructure
	 */
	struct AExosuit_Character_BP_C_SetupAttachedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClientInitAttachedStructure
	 */
	struct AExosuit_Character_BP_C_ClientInitAttachedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_AttachedStructureID
	 */
	struct AExosuit_Character_BP_C_OnRep_AttachedStructureID_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AExosuit_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_38K2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AExosuit_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustDamage
	 */
	struct AExosuit_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7RHT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RMG0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RAYG[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsAllowedToAutoRepair
	 */
	struct AExosuit_Character_BP_C_IsAllowedToAutoRepair_Params
	{
	public:
		bool                                                       IsAllowed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S3LS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeRemaining;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerServer
	 */
	struct AExosuit_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTryMultiUse
	 */
	struct AExosuit_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AExosuit_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ModifyHudMultiUseLoc
	 */
	struct AExosuit_Character_BP_C_ModifyHudMultiUseLoc_Params
	{
	public:
		struct FVector2D                                           theVec;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class APlayerController*                                   PC;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IOJR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasSavedMaterialForComponent
	 */
	struct AExosuit_Character_BP_C_HasSavedMaterialForComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalStructure*                                    Structure;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpPressed
	 */
	struct AExosuit_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideJumpZModifier
	 */
	struct AExosuit_Character_BP_C_BPOverrideJumpZModifier_Params
	{
	public:
		float                                                      InJumpZModifier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_End
	 */
	struct AExosuit_Character_BP_C_BPAnimNotifyCustomState_End_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_Begin
	 */
	struct AExosuit_Character_BP_C_BPAnimNotifyCustomState_Begin_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TotalDuration;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MV9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_InterceptMoveRight
	 */
	struct AExosuit_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintPlayDying
	 */
	struct AExosuit_Character_BP_C_BlueprintPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H65I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateFuel
	 */
	struct AExosuit_Character_BP_C_UpdateFuel_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceUpdateEnergyPercentRep;                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IOOH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct AExosuit_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1ZDE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LE81[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetRunning
	 */
	struct AExosuit_Character_BP_C_BP_OnSetRunning_Params
	{
	public:
		bool                                                       bNewIsRunning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct AExosuit_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideCharacterParticle
	 */
	struct AExosuit_Character_BP_C_BPOverrideCharacterParticle_Params
	{
	public:
		class UParticleSystem*                                     ParticleIn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UParticleSystem*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct AExosuit_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardDirection
	 */
	struct AExosuit_Character_BP_C_BPGetRiderUnboardDirection_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveBeginPlay
	 */
	struct AExosuit_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AExosuit_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyToggleHUD
	 */
	struct AExosuit_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAimedStructure
	 */
	struct AExosuit_Character_BP_C_SetupAimedStructure_Params
	{
	public:
		class APrimalStructure*                                    InStructure;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachHandBeams
	 */
	struct AExosuit_Character_BP_C_AttachHandBeams_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustAttackIndex
	 */
	struct AExosuit_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.FillEnergy
	 */
	struct AExosuit_Character_BP_C_FillEnergy_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPostLoadedFromSaveGame
	 */
	struct AExosuit_Character_BP_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct AExosuit_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPreventRiding
	 */
	struct AExosuit_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I26B[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetChestBeamEnergy
	 */
	struct AExosuit_Character_BP_C_GetChestBeamEnergy_Params
	{
	public:
		float                                                      RemainingEnergy;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UNXS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairColor
	 */
	struct AExosuit_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Cycle Mode
	 */
	struct AExosuit_Character_BP_C_CycleMode_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SyncHUD
	 */
	struct AExosuit_Character_BP_C_SyncHUD_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyHudWidget
	 */
	struct AExosuit_Character_BP_C_DestroyHudWidget_Params
	{
	public:
		bool                                                       DestroyNow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupHUDWidget
	 */
	struct AExosuit_Character_BP_C_SetupHUDWidget_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsModeAllowed
	 */
	struct AExosuit_Character_BP_C_IsModeAllowed_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsAllowed;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetCurrentMode
	 */
	struct AExosuit_Character_BP_C_SetCurrentMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveDestroyed
	 */
	struct AExosuit_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.InterceptInputEvent
	 */
	struct AExosuit_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpReleased
	 */
	struct AExosuit_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetGravityZScale
	 */
	struct AExosuit_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AExosuit_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetJumpVelocity
	 */
	struct AExosuit_Character_BP_C_GetJumpVelocity_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndLocation;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForPreview;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MEHI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           Velocity;                                                // 0x001C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundValidTrajectory;                                   // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_81FP[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Gravity;                                                 // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AdjustedEndLocation;                                     // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnLanded
	 */
	struct AExosuit_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustImpulseFromDamage
	 */
	struct AExosuit_Character_BP_C_BPAdjustImpulseFromDamage_Params
	{
	public:
		struct FVector                                             DesiredImpulse;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0010(0x0020)  (Parm)
		class APawn*                                               PawnInstigator;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V5KD[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0048(0x0088)  (Parm)
		struct FVector                                             ReturnValue;                                             // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RA9E[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideHurtAnim
	 */
	struct AExosuit_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4DHB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5VPK[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RF4T[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetDeath
	 */
	struct AExosuit_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_OfflineRider
	 */
	struct AExosuit_Character_BP_C_OnRep_OfflineRider_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetJumpPreviewVisibility
	 */
	struct AExosuit_Character_BP_C_SetJumpPreviewVisibility_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MT43[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateJumpPreview
	 */
	struct AExosuit_Character_BP_C_UpdateJumpPreview_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPLimitPlayerRotation
	 */
	struct AExosuit_Character_BP_C_BPLimitPlayerRotation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InViewRotation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetChestBeamState
	 */
	struct AExosuit_Character_BP_C_SetChestBeamState_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReplicateToOwner;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_ChestBeamState
	 */
	struct AExosuit_Character_BP_C_OnRep_ChestBeamState_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct AExosuit_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M8T1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanUseChestBeam
	 */
	struct AExosuit_Character_BP_C_CanUseChestBeam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       ShouldDeplete;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2B6Z[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStopJump
	 */
	struct AExosuit_Character_BP_C_BPOnStopJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStartJump
	 */
	struct AExosuit_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.LocalClientUpdateChestBeamLocation
	 */
	struct AExosuit_Character_BP_C_LocalClientUpdateChestBeamLocation_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.EnableChestBeamFX
	 */
	struct AExosuit_Character_BP_C_EnableChestBeamFX_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AExosuit_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanJumpInternal
	 */
	struct AExosuit_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetAddForwardVelocityOnJump
	 */
	struct AExosuit_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetTargetingDesirability
	 */
	struct AExosuit_Character_BP_C_BPGetTargetingDesirability_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TFZX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetHighlightColor
	 */
	struct AExosuit_Character_BP_C_SetHighlightColor_Params
	{
	public:
		class APrimalStructure*                                    ForStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifySetRider
	 */
	struct AExosuit_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetStructureHighlighted
	 */
	struct AExosuit_Character_BP_C_SetStructureHighlighted_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNewHighlighted;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AE7K[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.StoreStructure
	 */
	struct AExosuit_Character_BP_C_StoreStructure_Params
	{
	public:
		class APrimalStructure*                                    StructureToGrab;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShowNotifications;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VFNP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetStructurePlacer
	 */
	struct AExosuit_Character_BP_C_GetStructurePlacer_Params
	{
	public:
		class APrimalStructurePlacer*                              OutStructurePlacer;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyClearRider
	 */
	struct AExosuit_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPDrawToRiderHUD
	 */
	struct AExosuit_Character_BP_C_BPDrawToRiderHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanAttachStructure
	 */
	struct AExosuit_Character_BP_C_CanAttachStructure_Params
	{
	public:
		class APrimalStructure*                                    PrimalStructure;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanGrab;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IX8C[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateAimedStructure
	 */
	struct AExosuit_Character_BP_C_UpdateAimedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Set Last Aimed Structure
	 */
	struct AExosuit_Character_BP_C_SetLastAimedStructure_Params
	{
	public:
		class APrimalStructure*                                    LastAimedStructure;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ResetLastAimedStructure
	 */
	struct AExosuit_Character_BP_C_ResetLastAimedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnPreviewStructure
	 */
	struct AExosuit_Character_BP_C_SpawnPreviewStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.RidingTick
	 */
	struct AExosuit_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetAimedStructure
	 */
	struct AExosuit_Character_BP_C_GetAimedStructure_Params
	{
	public:
		class APrimalStructure*                                    OutStructure;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AExosuit_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.UserConstructionScript
	 */
	struct AExosuit_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestPlacement
	 */
	struct AExosuit_Character_BP_C_Server_RequestPlacement_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ViewRotation;                                            // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestAttachStructure
	 */
	struct AExosuit_Character_BP_C_Server_RequestAttachStructure_Params
	{
	public:
		class APrimalStructure*                                    StructureToGrab;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreStructure
	 */
	struct AExosuit_Character_BP_C_Server_RequestStoreStructure_Params
	{
	public:
		class APrimalStructure*                                    StructureToGrab;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.BindReceivedStructuresDelegate
	 */
	struct AExosuit_Character_BP_C_BindReceivedStructuresDelegate_Params
	{
	public:
		class AShooterPlayerController*                            ShooterPC;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event
	 */
	struct AExosuit_Character_BP_C_OnClientReceiveStructuresPlacedOnFloor_Event_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class APrimalStructure*>                            StructuresPlacedOnFloor;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestJump
	 */
	struct AExosuit_Character_BP_C_Server_RequestJump_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HeldTime;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWasBlockingHIt;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X3DK[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitNormal;                                               // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetBeamEndLocation
	 */
	struct AExosuit_Character_BP_C_Server_SetBeamEndLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWasHit;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SetBeamEndLocation
	 */
	struct AExosuit_Character_BP_C_Multicast_SetBeamEndLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWasHit;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestChestBeamState
	 */
	struct AExosuit_Character_BP_C_Server_RequestChestBeamState_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachOfflineRider
	 */
	struct AExosuit_Character_BP_C_AttachOfflineRider_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoKnockback
	 */
	struct AExosuit_Character_BP_C_DoKnockback_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_KnockbackFX
	 */
	struct AExosuit_Character_BP_C_Multicast_KnockbackFX_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SpawnLandedFX
	 */
	struct AExosuit_Character_BP_C_Multicast_SpawnLandedFX_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnLandedFX
	 */
	struct AExosuit_Character_BP_C_SpawnLandedFX_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetPreparingJump
	 */
	struct AExosuit_Character_BP_C_Server_SetPreparingJump_Params
	{
	public:
		bool                                                       NewIsPreparingJump;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoAttachStructure
	 */
	struct AExosuit_Character_BP_C_DoAttachStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoPlacement
	 */
	struct AExosuit_Character_BP_C_DoPlacement_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_DoPlacment
	 */
	struct AExosuit_Character_BP_C_Multicast_DoPlacment_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetCurrentMode
	 */
	struct AExosuit_Character_BP_C_Server_SetCurrentMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ServerRestart
	 */
	struct AExosuit_Character_BP_C_ServerRestart_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_HideAttachedStructure
	 */
	struct AExosuit_Character_BP_C_Multicast_HideAttachedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ShowAttachedStructure
	 */
	struct AExosuit_Character_BP_C_Multicast_ShowAttachedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ResetPendingAttachedStructure
	 */
	struct AExosuit_Character_BP_C_Multicast_ResetPendingAttachedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedPhysicsVolume
	 */
	struct AExosuit_Character_BP_C_OnChangedPhysicsVolume_Params
	{
	public:
		class APhysicsVolume*                                      NewVolume;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetStartedRunning
	 */
	struct AExosuit_Character_BP_C_Server_SetStartedRunning_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_KnockbackChars
	 */
	struct AExosuit_Character_BP_C_Server_KnockbackChars_Params
	{
	public:
		TArray<class APrimalCharacter*>                            Chars;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FVector>                                     Impulses;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearMoveIgnoredActors
	 */
	struct AExosuit_Character_BP_C_ClearMoveIgnoredActors_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearHUDReference
	 */
	struct AExosuit_Character_BP_C_ClearHUDReference_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_StoredStructureFX
	 */
	struct AExosuit_Character_BP_C_Multicast_StoredStructureFX_Params
	{
	public:
		bool                                                       bForceOnOwningClient;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearRiderIgnoreExosuitCollision
	 */
	struct AExosuit_Character_BP_C_ClearRiderIgnoreExosuitCollision_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.DelayedRequestStoreStructure
	 */
	struct AExosuit_Character_BP_C_DelayedRequestStoreStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreAttachedStructure
	 */
	struct AExosuit_Character_BP_C_Server_RequestStoreAttachedStructure_Params
	{	};

	/**
	 * Function Exosuit_Character_BP.Exosuit_Character_BP_C.ExecuteUbergraph_Exosuit_Character_BP
	 */
	struct AExosuit_Character_BP_C_ExecuteUbergraph_Exosuit_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
