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
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.safely release carried character
	 */
	struct ATekHoverSkiff_Character_BP_C_safelyreleasecarriedcharacter_Params
	{
	public:
		bool                                                       skipclearingcall;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NXU8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    overriddensetcharacter;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Closest Beam Location Not Blocked
	 */
	struct ATekHoverSkiff_Character_BP_C_GetClosestBeamLocationNotBlocked_Params
	{
	public:
		struct FVector                                             End;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DidHit;                                                  // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       linetracehit;                                            // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       boxtracehit;                                             // 0x0026(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       keepmomentumuponrelease;                                 // 0x0027(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ModifySkiffHorizontalInputs
	 */
	struct ATekHoverSkiff_Character_BP_C_ModifySkiffHorizontalInputs_Params
	{
	public:
		struct FVector                                             Input;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewInput;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentHoverFloorZ
	 */
	struct ATekHoverSkiff_Character_BP_C_GetCurrentHoverFloorZ_Params
	{
	public:
		bool                                                       bUseAverage;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bValidFloor;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z12Y[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FloorZ;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
	 */
	struct ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params
	{
	public:
		bool                                                       bAdjustWithMax;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6U3U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio
	 */
	struct ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_Params
	{
	public:
		bool                                                       bAdjustWithMax;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IZMG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoHoverSlopeCheck
	 */
	struct ATekHoverSkiff_Character_BP_C_DoHoverSlopeCheck_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanCryo
	 */
	struct ATekHoverSkiff_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairModeCooldownActive
	 */
	struct ATekHoverSkiff_Character_BP_C_IsSkiffRepairModeCooldownActive_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPost;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BA81[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RemainingTime;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairDisabledFromDamage
	 */
	struct ATekHoverSkiff_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2S7G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RemainingTime;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAcknowledgeServerCorrection
	 */
	struct ATekHoverSkiff_Character_BP_C_BPAcknowledgeServerCorrection_Params
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewVel;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YDA9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewBaseBoneName;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasBase;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBaseRelativePosition;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              ServerMovementMode;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0033(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStopJump
	 */
	struct ATekHoverSkiff_Character_BP_C_BPOnStopJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStartJump
	 */
	struct ATekHoverSkiff_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyToggleHUD
	 */
	struct ATekHoverSkiff_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateTotalAlternateFuel
	 */
	struct ATekHoverSkiff_Character_BP_C_CalculateTotalAlternateFuel_Params
	{
	public:
		float                                                      TotalAltFuel;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetRepairModeHudMessage
	 */
	struct ATekHoverSkiff_Character_BP_C_GetRepairModeHudMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageDamageFX
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManageDamageFX_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetCachedLandedRootRotationOffset
	 */
	struct ATekHoverSkiff_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params
	{
	public:
		struct FRotator                                            NewOffset;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnRemovedNotify
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params
	{
	public:
		class AActor*                                              RemovedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnAddedNotify
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnAddedNotify_Params
	{
	public:
		class AActor*                                              AddedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetFuelConversionRateForClass
	 */
	struct ATekHoverSkiff_Character_BP_C_GetFuelConversionRateForClass_Params
	{
	public:
		class UClass*                                              ForClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Rate;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffRepairModeStateChanged
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffRepairModeStateChanged_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUF5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffRepairModeActive
	 */
	struct ATekHoverSkiff_Character_BP_C_NetSetSkiffRepairModeActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffUseRepairMode
	 */
	struct ATekHoverSkiff_Character_BP_C_CanSkiffUseRepairMode_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTryMultiUse
	 */
	struct ATekHoverSkiff_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7YS0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Repair Mode Hud Message_PURE
	 */
	struct ATekHoverSkiff_Character_BP_C_GetRepairModeHudMessage_PURE_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ATekHoverSkiff_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATekHoverSkiff_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageAutoRepair
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManageAutoRepair_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ForceAllowAddBuff
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_ForceAllowAddBuff_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ICW5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintPlayDying
	 */
	struct ATekHoverSkiff_Character_BP_C_BlueprintPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QOJ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharAttachedToSkiffMesh
	 */
	struct ATekHoverSkiff_Character_BP_C_IsCharAttachedToSkiffMesh_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B3QE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideCarriedCharacterTransform
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params
	{
	public:
		class APrimalCharacter*                                    ForCarriedChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiffHudWidget
	 */
	struct ATekHoverSkiff_Character_BP_C_DestroySkiffHudWidget_Params
	{
	public:
		bool                                                       bDestroyNow;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ATekHoverSkiff_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q63T[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCameraCeilingZ
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamCameraCeilingZ_Params
	{
	public:
		float                                                      CeilingZ;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanFireBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_CanFireBeam_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ConsumeFuel
	 */
	struct ATekHoverSkiff_Character_BP_C_ConsumeFuel_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MulticastFuel;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasEnoughFuel
	 */
	struct ATekHoverSkiff_Character_BP_C_HasEnoughFuel_Params
	{
	public:
		float                                                      RequiredFuel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryRefillCurrentFuelUnit
	 */
	struct ATekHoverSkiff_Character_BP_C_TryRefillCurrentFuelUnit_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasAnyFuel
	 */
	struct ATekHoverSkiff_Character_BP_C_HasAnyFuel_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4YC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentFuel;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPInventoryItemDropped
	 */
	struct ATekHoverSkiff_Character_BP_C_BPInventoryItemDropped_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct ATekHoverSkiff_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I53I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffInventoryUpdated
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffInventoryUpdated_Params
	{
	public:
		class UPrimalItem*                                         UpdatedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPSetupTamed
	 */
	struct ATekHoverSkiff_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DisableLevelUps
	 */
	struct ATekHoverSkiff_Character_BP_C_DisableLevelUps_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BSetupDinoTameable
	 */
	struct ATekHoverSkiff_Character_BP_C_BSetupDinoTameable_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ShowDropDinoIndicator
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ShowDropDinoIndicator_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetupSkiffThrusters
	 */
	struct ATekHoverSkiff_Character_BP_C_SetupSkiffThrusters_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffAcceleration
	 */
	struct ATekHoverSkiff_Character_BP_C_GetSkiffAcceleration_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateSkiffThruster
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_UpdateSkiffThruster_Params
	{
	public:
		struct FStruct_HoverSkiffThrusterData                      WithThrusterData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    DataIntex;                                               // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeamSFX
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_UpdateBeamSFX_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsValidHoverTraceHit
	 */
	struct ATekHoverSkiff_Character_BP_C_IsValidHoverTraceHit_Params
	{
	public:
		struct FHitResult                                          ForHit;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       bResult;                                                 // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2JPU[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRunning
	 */
	struct ATekHoverSkiff_Character_BP_C_IsSkiffRunning_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L3WE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoesSkiffWantToRun
	 */
	struct ATekHoverSkiff_Character_BP_C_DoesSkiffWantToRun_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnSetRunning
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OnSetRunning_Params
	{
	public:
		bool                                                       bNewIsRunning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_
	 */
	struct ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar__Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnTriedBeamGrab
	 */
	struct ATekHoverSkiff_Character_BP_C_OnTriedBeamGrab_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AttachCharToBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_AttachCharToBeam_Params
	{
	public:
		class APrimalCharacter*                                    CharToAttach;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryBeamGrab
	 */
	struct ATekHoverSkiff_Character_BP_C_TryBeamGrab_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_ResetBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanActivateBeamCamera
	 */
	struct ATekHoverSkiff_Character_BP_C_CanActivateBeamCamera_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnReceiveSkiff2dMovementInput
	 */
	struct ATekHoverSkiff_Character_BP_C_OnReceiveSkiff2dMovementInput_Params
	{
	public:
		float                                                      InputAxisVal;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bright;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShouldIntercept;                                        // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B9HR[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseHeadlights
	 */
	struct ATekHoverSkiff_Character_BP_C_CanUseHeadlights_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct ATekHoverSkiff_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U1BQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardDirection
	 */
	struct ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardDirection_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanHover
	 */
	struct ATekHoverSkiff_Character_BP_C_CanHover_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnTamedOrderReceived
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OnTamedOrderReceived_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D2EY[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.WantsToFlyUp
	 */
	struct ATekHoverSkiff_Character_BP_C_WantsToFlyUp_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ShouldDisableBasedCharactersCameraInterpolation
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_ShouldDisableBasedCharactersCameraInterpolation_Params
	{
	public:
		class APrimalCharacter*                                    ForBasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamCharManipulation
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateBeamCharManipulation_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_CheckSkiffInputs
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_CheckSkiffInputs_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSyncedFuelAmount
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateSyncedFuelAmount_Params
	{
	public:
		bool                                                       bWasChanged;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
	 */
	struct ATekHoverSkiff_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params
	{
	public:
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageSkiffCamera
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManageSkiffCamera_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideBasedCharactersCameraInterpSpeed
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OverrideBasedCharactersCameraInterpSpeed_Params
	{
	public:
		class APrimalCharacter*                                    ForBasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVCameraSpeedInterpMultiplier;                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpMultiplier;                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsPhysicsVolumeLava
	 */
	struct ATekHoverSkiff_Character_BP_C_IsPhysicsVolumeLava_Params
	{
	public:
		class APhysicsVolume*                                      CheckVolume;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLava;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A84L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffTryToTrulyLand
	 */
	struct ATekHoverSkiff_Character_BP_C_CanSkiffTryToTrulyLand_Params
	{
	public:
		struct FVector                                             WithFlyingVelocity;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandFailed
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OnStartLandFailed_Params
	{
	public:
		int32_t                                                    ReasonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetSkiffInputs
	 */
	struct ATekHoverSkiff_Character_BP_C_ResetSkiffInputs_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InitHeadlights
	 */
	struct ATekHoverSkiff_Character_BP_C_InitHeadlights_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ActivateSkiffBeamVfxByState
	 */
	struct ATekHoverSkiff_Character_BP_C_ActivateSkiffBeamVfxByState_Params
	{
	public:
		E_HoverSkiffBeamState                                      NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageBeamFX
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManageBeamFX_Params
	{
	public:
		bool                                                       bForceClearAll;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_Pure
	 */
	struct ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar_Pure_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetEnvironmentalParticleTraceDistance
	 */
	struct ATekHoverSkiff_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params
	{
	public:
		class FName                                                ForSocketName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      traceDist;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveDestroyed
	 */
	struct ATekHoverSkiff_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageHoverGroundFX
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManageHoverGroundFX_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateHeadlights
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_UpdateHeadlights_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetHeadlightsOn
	 */
	struct ATekHoverSkiff_Character_BP_C_SetHeadlightsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ToggleHeadlights
	 */
	struct ATekHoverSkiff_Character_BP_C_ToggleHeadlights_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffFailedTakeoff
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffFailedTakeoff_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AllowSkiffBeamInputs
	 */
	struct ATekHoverSkiff_Character_BP_C_AllowSkiffBeamInputs_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTargetHoverHeight
	 */
	struct ATekHoverSkiff_Character_BP_C_SetTargetHoverHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSkiffHoverState
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateSkiffHoverState_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffHoverStateChanged
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffHoverStateChanged_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HoverSkiffHoverState                                     PreviousState;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffHoverState
	 */
	struct ATekHoverSkiff_Character_BP_C_NetSetSkiffHoverState_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamCharBlockers
	 */
	struct ATekHoverSkiff_Character_BP_C_TraceForBeamCharBlockers_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetMinHoverHeight
	 */
	struct ATekHoverSkiff_Character_BP_C_GetMinHoverHeight_Params
	{
	public:
		float                                                      MinHeight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_12VX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffChangingHoverHeight
	 */
	struct ATekHoverSkiff_Character_BP_C_IsSkiffChangingHoverHeight_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCharGrabOffsetZ
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamCharGrabOffsetZ_Params
	{
	public:
		float                                                      OffsetZ;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartedGrabbingChar
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamStartedGrabbingChar_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_CanFly
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_CanFly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamEndPoint
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateBeamEndPoint_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_UpdateBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageFuel
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManageFuel_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetHUDElements
	 */
	struct ATekHoverSkiff_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharStruggle
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamCharStruggle_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharBreakFree
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamCharBreakFree_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveAnyDamage
	 */
	struct ATekHoverSkiff_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0A14[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideTerminalVelocity
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OverrideTerminalVelocity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoThrusterEngineBurst
	 */
	struct ATekHoverSkiff_Character_BP_C_DoThrusterEngineBurst_Params
	{
	public:
		TArray<class UParticleSystemComponent*>                    ForThrusterParticles;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UParticleSystem*                                     OverrideBurstParticle;                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventAutoScaling;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VIPI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundCue*                                           OverrideBurstSound;                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           OverrideVolumeAndPitch;                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.KillSkiff
	 */
	struct ATekHoverSkiff_Character_BP_C_KillSkiff_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffCrash
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffCrash_Params
	{
	public:
		bool                                                       bFromImpact;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_PreventMovementMode
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_Crashing
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_Crashing_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffStartedCrashing
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffStartedCrashing_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAdjustDamage
	 */
	struct ATekHoverSkiff_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WXCD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0724[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifySetRider
	 */
	struct ATekHoverSkiff_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCameraActive
	 */
	struct ATekHoverSkiff_Character_BP_C_SetBeamCameraActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JBME[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartMoving
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamStartMoving_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartRetracting
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamStartRetracting_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamTurretOpened
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamTurretOpened_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartOpeningBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_OnStartOpeningBeam_Params
	{
	public:
		bool                                                       bReset;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateOwningClientReplicatedInputs
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateOwningClientReplicatedInputs_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetSkiffMovementInputAxisValue
	 */
	struct ATekHoverSkiff_Character_BP_C_SetSkiffMovementInputAxisValue_Params
	{
	public:
		int32_t                                                    Axis;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Newval;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamLocked
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamLocked_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPointRelative
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamEndPointRelative_Params
	{
	public:
		struct FVector                                             LaserEndPoint;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamStartPointRelative
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamStartPointRelative_Params
	{
	public:
		bool                                                       bAdjustForCarriedChar;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L3R3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LaserStartPoint;                                         // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamGrabbedChar
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamGrabbedChar_Params
	{
	public:
		struct FVector                                             GrabbedCharLocation;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAllowCarryCharacter
	 */
	struct ATekHoverSkiff_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct ATekHoverSkiff_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ATekHoverSkiff_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamBeingManipulated
	 */
	struct ATekHoverSkiff_Character_BP_C_IsBeamBeingManipulated_Params
	{
	public:
		bool                                                       IsBeamMoving;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsMovingAllyWithBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_IsMovingAllyWithBeam_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyRightDirectionInput
	 */
	struct ATekHoverSkiff_Character_BP_C_BPModifyRightDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitRightDirection
	 */
	struct ATekHoverSkiff_Character_BP_C_BPShouldLimitRightDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_AllowWalkableSlopeOverride
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_AllowWalkableSlopeOverride_Params
	{
	public:
		class UPrimitiveComponent*                                 ForComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ATekHoverSkiff_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_49HG[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageThrusterFX
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManageThrusterFX_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetThrustersActive
	 */
	struct ATekHoverSkiff_Character_BP_C_SetThrustersActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UNXA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffSetFlight
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffSetFlight_Params
	{
	public:
		bool                                                       bFly;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnSetFlight
	 */
	struct ATekHoverSkiff_Character_BP_C_BPOnSetFlight_Params
	{
	public:
		bool                                                       bFly;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveHit
	 */
	struct ATekHoverSkiff_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JCKV[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoSkiffHoverTraces
	 */
	struct ATekHoverSkiff_Character_BP_C_DoSkiffHoverTraces_Params
	{
	public:
		bool                                                       bForceTraces;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnLanded
	 */
	struct ATekHoverSkiff_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffLandingStageChanged
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffLandingStageChanged_Params
	{
	public:
		bool                                                       bLanding;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PJ43[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandingNotify
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_OnStartLandingNotify_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharBeamFriendly
	 */
	struct ATekHoverSkiff_Character_BP_C_IsCharBeamFriendly_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartClosingBeamTurret
	 */
	struct ATekHoverSkiff_Character_BP_C_OnStartClosingBeamTurret_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSendInputRPC
	 */
	struct ATekHoverSkiff_Character_BP_C_CanSendInputRPC_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TMEO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffBeamStateChanged
	 */
	struct ATekHoverSkiff_Character_BP_C_OnSkiffBeamStateChanged_Params
	{
	public:
		E_HoverSkiffBeamState                                      NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HoverSkiffBeamState                                      PreviousState;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P54V[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffBeamState
	 */
	struct ATekHoverSkiff_Character_BP_C_NetSetSkiffBeamState_Params
	{
	public:
		E_HoverSkiffBeamState                                      NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ATekHoverSkiff_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OHH[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B4GS[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CRNO[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsRetractBeamPressed
	 */
	struct ATekHoverSkiff_Character_BP_C_IsRetractBeamPressed_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ARCA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsShootBeamPressed
	 */
	struct ATekHoverSkiff_Character_BP_C_IsShootBeamPressed_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0A0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct ATekHoverSkiff_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideFlyingVelocity
	 */
	struct ATekHoverSkiff_Character_BP_C_BPOverrideFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetCrosshairColor
	 */
	struct ATekHoverSkiff_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamTurretOpening
	 */
	struct ATekHoverSkiff_Character_BP_C_IsBeamTurretOpening_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamActive
	 */
	struct ATekHoverSkiff_Character_BP_C_IsBeamActive_Params
	{
	public:
		bool                                                       bIncludeActivating;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Is Beam Moving
	 */
	struct ATekHoverSkiff_Character_BP_C_IsBeamMoving_Params
	{
	public:
		bool                                                       IsBeamMoving;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamRetracting
	 */
	struct ATekHoverSkiff_Character_BP_C_IsBeamRetracting_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamLock
	 */
	struct ATekHoverSkiff_Character_BP_C_CanBeamLock_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_BeamSearch
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_BeamSearch_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Can Instantly Grab Character
	 */
	struct ATekHoverSkiff_Character_BP_C_CanInstantlyGrabCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanInstantlyGrab;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanMoveBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_CanMoveBeam_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam StartPointExternal
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamStartPointExternal_Params
	{
	public:
		bool                                                       bAdjustForCarriedChar;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MNJE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             BeamStartPoint;                                          // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPoint_External
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamEndPoint_External_Params
	{
	public:
		struct FVector                                             BeamEndPoint;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Visuals
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateBeamVisuals_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanLookForTargets
	 */
	struct ATekHoverSkiff_Character_BP_C_CanLookForTargets_Params
	{
	public:
		bool                                                       canLook;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SPBH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_CanUseBeam_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanUse;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ATekHoverSkiff_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7H0S[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCharacterAttachedToBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_GetCharacterAttachedToBeam_Params
	{
	public:
		class APrimalCharacter*                                    theChar;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasCharAttached;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetForceSkiffDescend
	 */
	struct ATekHoverSkiff_Character_BP_C_SetForceSkiffDescend_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCharLocation
	 */
	struct ATekHoverSkiff_Character_BP_C_SetBeamCharLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRelativeSpace;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicate;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W3LK[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamEndPoint
	 */
	struct ATekHoverSkiff_Character_BP_C_TraceForBeamEndPoint_Params
	{
	public:
		struct FVector                                             NewBeamEnd;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHitObstacle;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z36C[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManipulateBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_Tick_ManipulateBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get BeamEndPoint
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamEndPoint_Params
	{
	public:
		struct FVector                                             LaserEndPoint;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z9HB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Particles End Point
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateBeamParticlesEndPoint_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Find BeamTarget
	 */
	struct ATekHoverSkiff_Character_BP_C_FindBeamTarget_Params
	{
	public:
		class APrimalCharacter*                                    foundPawn;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.StopHovering
	 */
	struct ATekHoverSkiff_Character_BP_C_StopHovering_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTimerIntervals
	 */
	struct ATekHoverSkiff_Character_BP_C_SetTimerIntervals_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ROMN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitForwardDirection
	 */
	struct ATekHoverSkiff_Character_BP_C_BPShouldLimitForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyForwardDirectionInput
	 */
	struct ATekHoverSkiff_Character_BP_C_BPModifyForwardDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyClearRider
	 */
	struct ATekHoverSkiff_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam BoneRotation
	 */
	struct ATekHoverSkiff_Character_BP_C_UpdateBeamBoneRotation_Params
	{
	public:
		struct FVector                                             NewEndPoint;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Reset;                                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7LJ9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ResetRotation;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RG7O[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam Start Point
	 */
	struct ATekHoverSkiff_Character_BP_C_GetBeamStartPoint_Params
	{
	public:
		bool                                                       bAdjustForCarriedChar;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_23Z4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LaserStartPoint;                                         // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartSearching
	 */
	struct ATekHoverSkiff_Character_BP_C_OnBeamStartSearching_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateBeamViewTracePoints
	 */
	struct ATekHoverSkiff_Character_BP_C_CalculateBeamViewTracePoints_Params
	{
	public:
		bool                                                       bUseCurrentBeamLength;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2PA0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ViewStart;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ViewEnd;                                                 // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ClearAllBeamChars
	 */
	struct ATekHoverSkiff_Character_BP_C_ClearAllBeamChars_Params
	{
	public:
		bool                                                       bOnlyClearBeamingChar;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamGrabCharacter
	 */
	struct ATekHoverSkiff_Character_BP_C_CanBeamGrabCharacter_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventTraces;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerServer
	 */
	struct ATekHoverSkiff_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerNonDedicated
	 */
	struct ATekHoverSkiff_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartActivatingBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_OnStartActivatingBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnCloseBeamTurret
	 */
	struct ATekHoverSkiff_Character_BP_C_OnCloseBeamTurret_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UserConstructionScript
	 */
	struct ATekHoverSkiff_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 */
	struct ATekHoverSkiff_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InterceptInputEvent
	 */
	struct ATekHoverSkiff_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_RequestBraking
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_RequestBraking_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATekHoverSkiff_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPUnstasis
	 */
	struct ATekHoverSkiff_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffBeamStateChanged
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffBeamStateChanged_Params
	{
	public:
		E_HoverSkiffBeamState                                      NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HoverSkiffBeamState                                      PreviousState;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffBeamState
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_SetSkiffBeamState_Params
	{
	public:
		E_HoverSkiffBeamState                                      NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoActivateBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_Timer_DoActivateBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoDeactivateBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_Timer_DoDeactivateBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnStartSkiffLanding
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnStartSkiffLanding_Params
	{
	public:
		bool                                                       bLanding;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffSetFlight
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffSetFlight_Params
	{
	public:
		bool                                                       bFly;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SyncMovementInputs
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_SyncMovementInputs_Params
	{
	public:
		struct FVector                                             MoveInputs;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetBeamCameraLockState
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_SetBeamCameraLockState_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamGrabCharacter
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnBeamGrabCharacter_Params
	{
	public:
		struct FVector                                             GrabRelativeLocation;                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoOpenBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_Timer_DoOpenBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleCameraLocked
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_ToggleCameraLocked_Params
	{
	public:
		bool                                                       IsCameraLocked;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnFireInputPressed
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_OnFireInputPressed_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTargetingInputPressed
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_OnTargetingInputPressed_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffStartedCrashing
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffStartedCrashing_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffCrash
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffCrash_Params
	{
	public:
		bool                                                       bFromImpact;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiff
	 */
	struct ATekHoverSkiff_Character_BP_C_DestroySkiff_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CrashTimeout
	 */
	struct ATekHoverSkiff_Character_BP_C_CrashTimeout_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamStartGrabbingChar
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnBeamStartGrabbingChar_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SetBeamCharLocation
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_SetBeamCharLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRelativeSpace;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffHoverStateChanged
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HoverSkiffHoverState                                     PreviousState;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffHoverState
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_SetSkiffHoverState_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffFailedTakeoff
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_ToggleHeadlights
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_ToggleHeadlights_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleHeadlights
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_ToggleHeadlights_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_TryBeamGrab
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_TryBeamGrab_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnTriedBeamGrab
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnTriedBeamGrab_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.FlashBeam
	 */
	struct ATekHoverSkiff_Character_BP_C_FlashBeam_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTriedBeamGrab
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_OnTriedBeamGrab_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SyncFuelPercent
	 */
	struct ATekHoverSkiff_Character_BP_C_Multi_SyncFuelPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffFlight
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_SetSkiffFlight_Params
	{
	public:
		bool                                                       NewFlight;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_StartSkiffLanding
	 */
	struct ATekHoverSkiff_Character_BP_C_Server_StartSkiffLanding_Params
	{	};

	/**
	 * Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ExecuteUbergraph_TekHoverSkiff_Character_BP
	 */
	struct ATekHoverSkiff_Character_BP_C_ExecuteUbergraph_TekHoverSkiff_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
