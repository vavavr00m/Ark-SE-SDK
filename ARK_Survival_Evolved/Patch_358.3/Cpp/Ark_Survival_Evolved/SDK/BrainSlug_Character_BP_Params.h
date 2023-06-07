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
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Sync Crosshair Color
	 */
	struct ABrainSlug_Character_BP_C_SyncCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        outColor;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetHudData
	 */
	struct ABrainSlug_Character_BP_C_GetHudData_Params
	{
	public:
		class APrimalCharacter*                                    TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAllowedToControlTarget;                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NC9E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TargetValidationString;                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              InvalidTargetString_PreventHUD;                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FHUDElement                                         HUDElementTemplate;                                      // 0x0030(0x0150)  (Parm, OutParm)
		float                                                      BrainJumpTargetCheckDistance;                            // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OverrideTargetingLocation
	 */
	struct ABrainSlug_Character_BP_C_BP_OverrideTargetingLocation_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetTargetingDesirability
	 */
	struct ABrainSlug_Character_BP_C_BPGetTargetingDesirability_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EU83[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsPlayerOnMission
	 */
	struct ABrainSlug_Character_BP_C_IsPlayerOnMission_Params
	{
	public:
		class APawn*                                               OverrideCharacterToTest;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOnMission;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F8NJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetBrainSlugAimDirection
	 */
	struct ABrainSlug_Character_BP_C_GetBrainSlugAimDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DecreaseStamina
	 */
	struct ABrainSlug_Character_BP_C_DecreaseStamina_Params
	{
	public:
		float                                                      StaminaCost;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateComponentVisibilityWithCameraStyle
	 */
	struct ABrainSlug_Character_BP_C_UpdateComponentVisibilityWithCameraStyle_Params
	{
	public:
		class FName                                                CameraStyle;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnCameraStyleChangedNotify
	 */
	struct ABrainSlug_Character_BP_C_BP_OnCameraStyleChangedNotify_Params
	{
	public:
		class FName                                                NewCameraStyle;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                OldCameraStyle;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToBrainJump
	 */
	struct ABrainSlug_Character_BP_C_IsAllowedToBrainJump_Params
	{
	public:
		bool                                                       IsAttackJump;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SVYR[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct ABrainSlug_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PGI8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTriggerStasisEvent
	 */
	struct ABrainSlug_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasHumanControllerOrDinoDoes
	 */
	struct ABrainSlug_Character_BP_C_HasHumanControllerOrDinoDoes_Params
	{
	public:
		bool                                                       bHasHumanController;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnstasis
	 */
	struct ABrainSlug_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventStasis
	 */
	struct ABrainSlug_Character_BP_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptItemContainerActivationToggle
	 */
	struct ABrainSlug_Character_BP_C_AttemptItemContainerActivationToggle_Params
	{
	public:
		class APrimalStructureItemContainer*                       StructureRef;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ActivationChanged;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ABrainSlug_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AOAL[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ABrainSlug_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasForbiddenDinoCustomTag
	 */
	struct ABrainSlug_Character_BP_C_HasForbiddenDinoCustomTag_Params
	{
	public:
		class FName                                                TagToCheck;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOverrideInventoryAccessInput
	 */
	struct ABrainSlug_Character_BP_C_BPOverrideInventoryAccessInput_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateBuffControlDur
	 */
	struct ABrainSlug_Character_BP_C_UpdateBuffControlDur_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanCryo
	 */
	struct ABrainSlug_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPSetupTamed
	 */
	struct ABrainSlug_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct ABrainSlug_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoInPastTameAffinityTargets
	 */
	struct ABrainSlug_Character_BP_C_IsDinoInPastTameAffinityTargets_Params
	{
	public:
		int32_t                                                    ID1;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    ID2;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NRGN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnsetupDinoTameable
	 */
	struct ABrainSlug_Character_BP_C_BPUnsetupDinoTameable_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainSlugIterateAffinity
	 */
	struct ABrainSlug_Character_BP_C_BrainSlugIterateAffinity_Params
	{
	public:
		class APrimalCharacter*                                    DinoToGetAffinityFrom;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyAimOffsetNoTarget
	 */
	struct ABrainSlug_Character_BP_C_BPModifyAimOffsetNoTarget_Params
	{
	public:
		struct FRotator                                            Aim;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ABrainSlug_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanAttack
	 */
	struct ABrainSlug_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OJMO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N0ZK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPShouldForceFlee
	 */
	struct ABrainSlug_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.EndBrainHunt
	 */
	struct ABrainSlug_Character_BP_C_EndBrainHunt_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPIsValidUnStasisCaster
	 */
	struct ABrainSlug_Character_BP_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNotifyClearRider
	 */
	struct ABrainSlug_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPDoAttack
	 */
	struct ABrainSlug_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventFirstPerson
	 */
	struct ABrainSlug_Character_BP_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetHUDElements
	 */
	struct ABrainSlug_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNewDoorInteractionDrawHUD
	 */
	struct ABrainSlug_Character_BP_C_BPNewDoorInteractionDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           DoorDescriptionLoc;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReturnToPlayer
	 */
	struct ABrainSlug_Character_BP_C_ReturnToPlayer_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ABrainSlug_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1LAJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ABrainSlug_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RNA6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainSlugAttachment
	 */
	struct ABrainSlug_Character_BP_C_StartBrainSlugAttachment_Params
	{
	public:
		class APrimalCharacter*                                    AttachedToChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FindViableBrainJumpTargetFromControlRot
	 */
	struct ABrainSlug_Character_BP_C_FindViableBrainJumpTargetFromControlRot_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    ViableTarget;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnClearMountedDino
	 */
	struct ABrainSlug_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnSetMountedDino
	 */
	struct ABrainSlug_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustDamage
	 */
	struct ABrainSlug_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WU6Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NK1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DWNH[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ABrainSlug_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoBrainFood
	 */
	struct ABrainSlug_Character_BP_C_IsDinoBrainFood_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMWI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCharacterSleeped
	 */
	struct ABrainSlug_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Get Aim Adjusted Throwing Dir
	 */
	struct ABrainSlug_Character_BP_C_GetAimAdjustedThrowingDir_Params
	{
	public:
		struct FRotator                                            AdjustedThrowingDir;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FullyTameTarget
	 */
	struct ABrainSlug_Character_BP_C_FullyTameTarget_Params
	{
	public:
		class APrimalDinoCharacter*                                TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DidTame;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToFullyTame
	 */
	struct ABrainSlug_Character_BP_C_IsAllowedToFullyTame_Params
	{
	public:
		class APrimalCharacter*                                    TestChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveDestroyed
	 */
	struct ABrainSlug_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnSetDeath
	 */
	struct ABrainSlug_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerServer
	 */
	struct ABrainSlug_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ABrainSlug_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintPlayDying
	 */
	struct ABrainSlug_Character_BP_C_BlueprintPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KNW2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.InterceptInputEvent
	 */
	struct ABrainSlug_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanMountOnCharacter
	 */
	struct ABrainSlug_Character_BP_C_BPCanMountOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ABrainSlug_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToControl
	 */
	struct ABrainSlug_Character_BP_C_IsAllowedToControl_Params
	{
	public:
		class APrimalCharacter*                                    TestChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQ0A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TargetValidationString;                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetCrosshairColor
	 */
	struct ABrainSlug_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveUnpossessed
	 */
	struct ABrainSlug_Character_BP_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceivePossessed
	 */
	struct ABrainSlug_Character_BP_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerNonDedicated
	 */
	struct ABrainSlug_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTryMultiUse
	 */
	struct ABrainSlug_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ABrainSlug_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DinoShoulderMountedLaunch
	 */
	struct ABrainSlug_Character_BP_C_DinoShoulderMountedLaunch_Params
	{
	public:
		struct FVector                                             launchDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2E53[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   throwingCharacter;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UserConstructionScript
	 */
	struct ABrainSlug_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerAttemptBrainControl
	 */
	struct ABrainSlug_Character_BP_C_ServerAttemptBrainControl_Params
	{
	public:
		class APrimalCharacter*                                    TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.MultiEnableNonDediTimer
	 */
	struct ABrainSlug_Character_BP_C_MultiEnableNonDediTimer_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerClearBrainHunt
	 */
	struct ABrainSlug_Character_BP_C_ServerClearBrainHunt_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_EndBrainHunt
	 */
	struct ABrainSlug_Character_BP_C_Multi_EndBrainHunt_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossession
	 */
	struct ABrainSlug_Character_BP_C_ClearPossession_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TemporaryPlayerPassThrough
	 */
	struct ABrainSlug_Character_BP_C_TemporaryPlayerPassThrough_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainSlugAttachment
	 */
	struct ABrainSlug_Character_BP_C_ClearBrainSlugAttachment_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_PlayFullyTamedVFX
	 */
	struct ABrainSlug_Character_BP_C_Multi_PlayFullyTamedVFX_Params
	{
	public:
		class APrimalCharacter*                                    TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetDrawCrosshair
	 */
	struct ABrainSlug_Character_BP_C_Multi_SetDrawCrosshair_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerTryDoorInteraction
	 */
	struct ABrainSlug_Character_BP_C_ServerTryDoorInteraction_Params
	{
	public:
		class APrimalStructure*                                    TargetedDoor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_ClearBrainSlugAttachment
	 */
	struct ABrainSlug_Character_BP_C_Server_ClearBrainSlugAttachment_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DestroyController
	 */
	struct ABrainSlug_Character_BP_C_Multi_DestroyController_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ResetFlee
	 */
	struct ABrainSlug_Character_BP_C_ResetFlee_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveBeginPlay
	 */
	struct ABrainSlug_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SpawnEffect
	 */
	struct ABrainSlug_Character_BP_C_Multi_SpawnEffect_Params
	{
	public:
		class UParticleSystem*                                     particle;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9W5E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              AttachToActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                AttachToSocket;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoJumpParticle
	 */
	struct ABrainSlug_Character_BP_C_Multi_DoJumpParticle_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FromThrow;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoBrainHuntParticle
	 */
	struct ABrainSlug_Character_BP_C_Multi_DoBrainHuntParticle_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerRepossess
	 */
	struct ABrainSlug_Character_BP_C_ServerRepossess_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TimerClearBrainSlugAttachment
	 */
	struct ABrainSlug_Character_BP_C_TimerClearBrainSlugAttachment_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartPossessionBehaviors
	 */
	struct ABrainSlug_Character_BP_C_StartPossessionBehaviors_Params
	{
	public:
		bool                                                       bDontActuallyPossess;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ChangeControllers
	 */
	struct ABrainSlug_Character_BP_C_ChangeControllers_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRotForController
	 */
	struct ABrainSlug_Character_BP_C_Multi_SetControlRotForController_Params
	{
	public:
		class AController*                                         Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            newRot;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TestingMessage
	 */
	struct ABrainSlug_Character_BP_C_TestingMessage_Params
	{
	public:
		class FString                                              OutMessage;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.SetupHarvestingBag
	 */
	struct ABrainSlug_Character_BP_C_SetupHarvestingBag_Params
	{
	public:
		class APrimalStructureItemContainer*                       HarvestBag;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Timer_TryUpdateComponentVisibility
	 */
	struct ABrainSlug_Character_BP_C_Timer_TryUpdateComponentVisibility_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptBrainControl
	 */
	struct ABrainSlug_Character_BP_C_AttemptBrainControl_Params
	{
	public:
		class APrimalCharacter*                                    TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpReleased
	 */
	struct ABrainSlug_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TryFire
	 */
	struct ABrainSlug_Character_BP_C_TryFire_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ForceFireWeapon
	 */
	struct ABrainSlug_Character_BP_C_ForceFireWeapon_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerFireWeapon
	 */
	struct ABrainSlug_Character_BP_C_ServerFireWeapon_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_TryJump
	 */
	struct ABrainSlug_Character_BP_C_Server_TryJump_Params
	{
	public:
		bool                                                       bStartJump;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpPressed
	 */
	struct ABrainSlug_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedUpdateRot
	 */
	struct ABrainSlug_Character_BP_C_DelayedUpdateRot_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_SetControlRot
	 */
	struct ABrainSlug_Character_BP_C_Server_SetControlRot_Params
	{
	public:
		struct FRotator                                            newRot;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_866R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            InstigatingController;                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewAimDir;                                               // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRot
	 */
	struct ABrainSlug_Character_BP_C_Multi_SetControlRot_Params
	{
	public:
		struct FRotator                                            newRot;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_MoveInput
	 */
	struct ABrainSlug_Character_BP_C_Multi_MoveInput_Params
	{
	public:
		struct FVector                                             moveDir;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_MoveBrainControlTarget
	 */
	struct ABrainSlug_Character_BP_C_Server_MoveBrainControlTarget_Params
	{
	public:
		struct FVector                                             moveDir;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SIAE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            InstigatingController;                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossessionBinds
	 */
	struct ABrainSlug_Character_BP_C_ClearPossessionBinds_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerSleep
	 */
	struct ABrainSlug_Character_BP_C_RespondToPlayerSleep_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsSleeping;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerDeath
	 */
	struct ABrainSlug_Character_BP_C_RespondToPlayerDeath_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.OnPossessionResponse
	 */
	struct ABrainSlug_Character_BP_C_OnPossessionResponse_Params
	{
	public:
		class AShooterPlayerController*                            NewPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_UpdateCollisionProfile
	 */
	struct ABrainSlug_Character_BP_C_Multi_UpdateCollisionProfile_Params
	{
	public:
		bool                                                       bShouldCollide;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.JumpLeapInput
	 */
	struct ABrainSlug_Character_BP_C_JumpLeapInput_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateJumpCheck
	 */
	struct ABrainSlug_Character_BP_C_UpdateJumpCheck_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedLaunchVelocity
	 */
	struct ABrainSlug_Character_BP_C_DelayedLaunchVelocity_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ABrainSlug_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainJump
	 */
	struct ABrainSlug_Character_BP_C_StartBrainJump_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainJump
	 */
	struct ABrainSlug_Character_BP_C_ClearBrainJump_Params
	{	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ActorHitDelegateEvent
	 */
	struct ABrainSlug_Character_BP_C_ActorHitDelegateEvent_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YE9W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainControlInput
	 */
	struct ABrainSlug_Character_BP_C_BrainControlInput_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ExecuteUbergraph_BrainSlug_Character_BP
	 */
	struct ABrainSlug_Character_BP_C_ExecuteUbergraph_BrainSlug_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
