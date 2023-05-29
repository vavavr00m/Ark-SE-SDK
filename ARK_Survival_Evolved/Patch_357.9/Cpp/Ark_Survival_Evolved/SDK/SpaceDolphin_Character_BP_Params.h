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
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetHudData
	 */
	struct ASpaceDolphin_Character_BP_C_GetHudData_Params
	{
	public:
		bool                                                       HasSaddle;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFPV;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HideHUDinFPV;                                            // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K5Y1[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    LaserLevel;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MaxLaserLevel;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LaserDowngradeTime;                                      // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LaserDowngradeTimerRemaining;                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLaserDowngradeTimerActive;                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VIX6[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     LastLaserLevelChangedTime;                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalInventoryComponent*                           InventoryComponent;                                      // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              SaddleFuelItem;                                          // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              FlakCannonAmmoItem;                                      // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUsingSuperFlight;                                      // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUsingSuperFlightBoost;                                 // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TDO[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FuelPercent;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CannonCooldownPercent;                                   // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EchoOrChaffCooldownPercent;                              // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSubmerged;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RXDH[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct ASpaceDolphin_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CheckVelocityError
	 */
	struct ASpaceDolphin_Character_BP_C_CheckVelocityError_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPForceCameraStyle
	 */
	struct ASpaceDolphin_Character_BP_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLocalSounds
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateLocalSounds_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Star Fox Mode Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsStarFoxModePublic_Params
	{
	public:
		class AMissionSpline*                                      CurrentSpline;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HOHE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     RetRiderSetTime;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetIsRiderWarmup;                                        // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RIMV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateMouseCursor
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateMouseCursor_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TurnOffMouseCursor
	 */
	struct ASpaceDolphin_Character_BP_C_TurnOffMouseCursor_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandlePoop
	 */
	struct ASpaceDolphin_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSilenced
	 */
	struct ASpaceDolphin_Character_BP_C_IsSilenced_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A2IX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Server Request Fire Lasers Fn
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestFireLasersFn_Params
	{
	public:
		struct FVector                                             CameraHitLocation;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ShouldPreventLockOnMe
	 */
	struct ASpaceDolphin_Character_BP_C_ShouldPreventLockOnMe_Params
	{
	public:
		bool                                                       IsPrevented;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R9OF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsCurrentlyInStarFoxModeWithGamepad
	 */
	struct ASpaceDolphin_Character_BP_C_IsCurrentlyInStarFoxModeWithGamepad_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BCMC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetSimulatedInterpRollOverride
	 */
	struct ASpaceDolphin_Character_BP_C_BPSetSimulatedInterpRollOverride_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsGamePadActive
	 */
	struct ASpaceDolphin_Character_BP_C_IsGamePadActive_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HN8B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnstasis
	 */
	struct ASpaceDolphin_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartImmelmann
	 */
	struct ASpaceDolphin_Character_BP_C_TryStartImmelmann_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartLoop
	 */
	struct ASpaceDolphin_Character_BP_C_TryStartLoop_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFPVMeshes
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateFPVMeshes_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Desired Rotation
	 */
	struct ASpaceDolphin_Character_BP_C_GetDesiredRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCameraHitLocationForProjectiles
	 */
	struct ASpaceDolphin_Character_BP_C_GetCameraHitLocationForProjectiles_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Screen Mouse Position as MatParam
	 */
	struct ASpaceDolphin_Character_BP_C_GetScreenMousePositionasMatParam_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnClearMountedDino
	 */
	struct ASpaceDolphin_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Saddle Shield Material
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSaddleShieldMaterial_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetPercentTamed
	 */
	struct ASpaceDolphin_Character_BP_C_GetPercentTamed_Params
	{
	public:
		float                                                      Percemt;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RequiredAmount;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 */
	struct ASpaceDolphin_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
	{
	public:
		bool                                                       overrideTamingProgressBarIfActive;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5RAU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H2QU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct ASpaceDolphin_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5P3X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FY0V[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AddSaddleActivationText
	 */
	struct ASpaceDolphin_Character_BP_C_AddSaddleActivationText_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearSaddleActivationText
	 */
	struct ASpaceDolphin_Character_BP_C_ClearSaddleActivationText_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeAdult
	 */
	struct ASpaceDolphin_Character_BP_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeBaby
	 */
	struct ASpaceDolphin_Character_BP_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCameraForGamepad
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateStarFoxCameraForGamepad_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptTurnInput
	 */
	struct ASpaceDolphin_Character_BP_C_BP_InterceptTurnInput_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MQ7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnConsumeFood
	 */
	struct ASpaceDolphin_Character_BP_C_OnConsumeFood_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUntamedConsumeFoodItem
	 */
	struct ASpaceDolphin_Character_BP_C_BPUntamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTamedConsumeFoodItem
	 */
	struct ASpaceDolphin_Character_BP_C_BPTamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyControlRotation
	 */
	struct ASpaceDolphin_Character_BP_C_BPModifyControlRotation_Params
	{
	public:
		struct FRotator                                            ControlRotation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            outControlRotation;                                      // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UKZJ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetLastTimeChargedLaserHit
	 */
	struct ASpaceDolphin_Character_BP_C_SetLastTimeChargedLaserHit_Params
	{
	public:
		double                                                     val;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Materials
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateMaterials_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is FPV Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsFPVPublic_Params
	{
	public:
		bool                                                       Retval;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUCE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFPV
	 */
	struct ASpaceDolphin_Character_BP_C_IsFPV_Params
	{
	public:
		bool                                                       Retval;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5NT1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLoc;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveEndPlay
	 */
	struct ASpaceDolphin_Character_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyLevelUp
	 */
	struct ASpaceDolphin_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0505[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinningPublic
	 */
	struct ASpaceDolphin_Character_BP_C_IsSpinningPublic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       Right;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBarrelRoll
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateBarrelRoll_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserDamage
	 */
	struct ASpaceDolphin_Character_BP_C_GetLaserDamage_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDamageReductionPercentFromLaserLevel
	 */
	struct ASpaceDolphin_Character_BP_C_GetDamageReductionPercentFromLaserLevel_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamedWalkingSpeedModifierForLaserLevel
	 */
	struct ASpaceDolphin_Character_BP_C_GetTamedWalkingSpeedModifierForLaserLevel_Params
	{
	public:
		float                                                      TamedWalkingSpeedModifier;                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserLevelDowngradeTime
	 */
	struct ASpaceDolphin_Character_BP_C_GetLaserLevelDowngradeTime_Params
	{
	public:
		float                                                      LaserLevelDowngradeTime;                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserProj
	 */
	struct ASpaceDolphin_Character_BP_C_GetChargedLaserProj_Params
	{
	public:
		class UClass*                                              ChargedLaserProjectile;                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserPFX
	 */
	struct ASpaceDolphin_Character_BP_C_GetLaserPFX_Params
	{
	public:
		int32_t                                                    LaserLevel;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ONU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetTargetingDesirability
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetTargetingDesirability_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChanceToSpawnSpaceWhale
	 */
	struct ASpaceDolphin_Character_BP_C_GetChanceToSpawnSpaceWhale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpawnSpaceWhale
	 */
	struct ASpaceDolphin_Character_BP_C_SpawnSpaceWhale_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Spawn Space Whale
	 */
	struct ASpaceDolphin_Character_BP_C_TrySpawnSpaceWhale_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWildDemands
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateWildDemands_Params
	{
	public:
		bool                                                       ResetWildDemand;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1IJK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasWildDemands
	 */
	struct ASpaceDolphin_Character_BP_C_HasWildDemands_Params
	{
	public:
		bool                                                       HasDemands;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JEK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumPets;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumFood;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAngerFn
	 */
	struct ASpaceDolphin_Character_BP_C_TriggerWildAngerFn_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsAngryWildDino
	 */
	struct ASpaceDolphin_Character_BP_C_IsAngryWildDino_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYWZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DistanceSq;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NearbyAngryDolphin
	 */
	struct ASpaceDolphin_Character_BP_C_NearbyAngryDolphin_Params
	{
	public:
		class ASpaceDolphin_Character_BP_C*                        AngryDolphin;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShouldForceFlee
	 */
	struct ASpaceDolphin_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWild
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateWild_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTryMultiUse
	 */
	struct ASpaceDolphin_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ASpaceDolphin_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChaff
	 */
	struct ASpaceDolphin_Character_BP_C_FireChaff_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EchoLocation
	 */
	struct ASpaceDolphin_Character_BP_C_EchoLocation_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateGroundFX
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateGroundFX_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoLaserTraceAndDamage
	 */
	struct ASpaceDolphin_Character_BP_C_DoLaserTraceAndDamage_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             RetStart;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             RetEnd;                                                  // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ret;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ImpactCharacterOrStructure;                              // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HB60[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCollision
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateStarFoxCollision_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpateBarrelRollFX
	 */
	struct ASpaceDolphin_Character_BP_C_UpateBarrelRollFX_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotatingComponent
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateRotatingComponent_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastLaserLevelUpTime
	 */
	struct ASpaceDolphin_Character_BP_C_OnRep_LastLaserLevelUpTime_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Downgrade Laser Level
	 */
	struct ASpaceDolphin_Character_BP_C_DowngradeLaserLevel_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Drifting Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsDriftingPublic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       DriftingInput;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right;                                                   // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CX01[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     DriftEndTime;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactiveDriftJets
	 */
	struct ASpaceDolphin_Character_BP_C_DeactiveDriftJets_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDrifting
	 */
	struct ASpaceDolphin_Character_BP_C_IsDrifting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       DriftingInput;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right;                                                   // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VMTG[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     DriftEndTime;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFinishingDrift;                                        // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S87J[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDriftInputStrength
	 */
	struct ASpaceDolphin_Character_BP_C_GetDriftInputStrength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		float                                                      ReturnValueBase;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrifting
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateDrifting_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSaddle
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSaddle_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryDoStarFoxModeCollisionDamage
	 */
	struct ASpaceDolphin_Character_BP_C_TryDoStarFoxModeCollisionDamage_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorBeginOverlap
	 */
	struct ASpaceDolphin_Character_BP_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorEndOverlap
	 */
	struct ASpaceDolphin_Character_BP_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Camera YScalar
	 */
	struct ASpaceDolphin_Character_BP_C_GetCameraYScalar_Params
	{
	public:
		float                                                      StarFoxModeCameraXOffsetScalar;                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AHBC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_CurrentSpline
	 */
	struct ASpaceDolphin_Character_BP_C_OnRep_CurrentSpline_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_PreventMovementMode
	 */
	struct ASpaceDolphin_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanBarrelRoll
	 */
	struct ASpaceDolphin_Character_BP_C_CanBarrelRoll_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HSHS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDoingBarrelRoll
	 */
	struct ASpaceDolphin_Character_BP_C_IsDoingBarrelRoll_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_23FE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Anim;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     LastBarrelRollStartTime;                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BarrelRoll
	 */
	struct ASpaceDolphin_Character_BP_C_BarrelRoll_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             CameraDirection;                                         // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsBrakingPublic_Params
	{
	public:
		bool                                                       IsBraking;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XHWN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TimeStartedBraking;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking
	 */
	struct ASpaceDolphin_Character_BP_C_IsBraking_Params
	{
	public:
		bool                                                       IsBraking;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GFT4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TimeStartedBraking;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBraking
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateBraking_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDrawToRiderHUD
	 */
	struct ASpaceDolphin_Character_BP_C_BPDrawToRiderHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpinning
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSpinning_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinning
	 */
	struct ASpaceDolphin_Character_BP_C_IsSpinning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       Right;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DestroyProjectile
	 */
	struct ASpaceDolphin_Character_BP_C_DestroyProjectile_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Flak Cannon Parameters
	 */
	struct ASpaceDolphin_Character_BP_C_GetFlakCannonParameters_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsStarFoxMode
	 */
	struct ASpaceDolphin_Character_BP_C_IsStarFoxMode_Params
	{
	public:
		class AMissionSpline*                                      CurrentSpline;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CM9M[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     RetRiderSetTime;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetIsRiderWarmup;                                        // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EXQE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ValidateSpline
	 */
	struct ASpaceDolphin_Character_BP_C_ValidateSpline_Params
	{
	public:
		class AMissionSpline*                                      Spline;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpline
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSpline_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ASpaceDolphin_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPKilledSomethingEvent
	 */
	struct ASpaceDolphin_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDualLasers
	 */
	struct ASpaceDolphin_Character_BP_C_IsDualLasers_Params
	{
	public:
		bool                                                       DualLasers;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanLoop
	 */
	struct ASpaceDolphin_Character_BP_C_CanLoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsChargingLaser
	 */
	struct ASpaceDolphin_Character_BP_C_IsChargingLaser_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y74J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairSpread
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetCrosshairSpread_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoop
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateLoop_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAcknowledgeServerCorrection
	 */
	struct ASpaceDolphin_Character_BP_C_BPAcknowledgeServerCorrection_Params
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewVel;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YF2A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewBaseBoneName;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasBase;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBaseRelativePosition;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              ServerMovementMode;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0033(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndLoop
	 */
	struct ASpaceDolphin_Character_BP_C_EndLoop_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartLoop
	 */
	struct ASpaceDolphin_Character_BP_C_StartLoop_Params
	{
	public:
		bool                                                       Immelmann;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairColor
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Get ChargedLaserTarget
	 */
	struct ASpaceDolphin_Character_BP_C_TryGetChargedLaserTarget_Params
	{
	public:
		class AActor*                                              Ret;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFireChargedLaser
	 */
	struct ASpaceDolphin_Character_BP_C_OwningClientTryFireChargedLaser_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserParameters
	 */
	struct ASpaceDolphin_Character_BP_C_GetChargedLaserParameters_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ChargeTime;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N80X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChargedLaser
	 */
	struct ASpaceDolphin_Character_BP_C_FireChargedLaser_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Target;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ChargeTime;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Owning Client Try FireLasers
	 */
	struct ASpaceDolphin_Character_BP_C_OwningClientTryFireLasers_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireLasers
	 */
	struct ASpaceDolphin_Character_BP_C_FireLasers_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Socket;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Start;                                                   // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetSaddleColor
	 */
	struct ASpaceDolphin_Character_BP_C_GetSaddleColor_Params
	{
	public:
		int32_t                                                    Region;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Ret;                                                     // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4TQM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWindGust
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingWindGust_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OJ7A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartTime;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingForwardInput
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingForwardInput_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HDRW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnsetupDinoTameable
	 */
	struct ASpaceDolphin_Character_BP_C_BPUnsetupDinoTameable_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BSetupDinoTameable
	 */
	struct ASpaceDolphin_Character_BP_C_BSetupDinoTameable_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRiderSocket
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateRiderSocket_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetOverrideSocket
	 */
	struct ASpaceDolphin_Character_BP_C_GetOverrideSocket_Params
	{
	public:
		class FName                                                From;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowWakingTame
	 */
	struct ASpaceDolphin_Character_BP_C_AllowWakingTame_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFlakCannonFire
	 */
	struct ASpaceDolphin_Character_BP_C_OwningClientTryFlakCannonFire_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterceptInputEvent
	 */
	struct ASpaceDolphin_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowPlayMontage
	 */
	struct ASpaceDolphin_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDinoLevelUpAnimation
	 */
	struct ASpaceDolphin_Character_BP_C_GetDinoLevelUpAnimation_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTaming
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateTaming_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShowTamingPanel
	 */
	struct ASpaceDolphin_Character_BP_C_BPShowTamingPanel_Params
	{
	public:
		bool                                                       currentVisibility;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamingBuff
	 */
	struct ASpaceDolphin_Character_BP_C_GetTamingBuff_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K88V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalBuff*                                         Buff;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintCanAttack
	 */
	struct ASpaceDolphin_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JH4G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAdjustDamage
	 */
	struct ASpaceDolphin_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_854P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OKRP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Replicated Control Rotation Public
	 */
	struct ASpaceDolphin_Character_BP_C_GetReplicatedControlRotationPublic_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsPlayingBlockingAnim
	 */
	struct ASpaceDolphin_Character_BP_C_IsPlayingBlockingAnim_Params
	{
	public:
		bool                                                       ReturnVal;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Drafting Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingDraftingPublic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       DraftAcked;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingDrafting
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingDrafting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       DraftAcked;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetRiderSocket
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetRiderSocket_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsJumpHeld
	 */
	struct ASpaceDolphin_Character_BP_C_IsJumpHeld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnDinoCheat
	 */
	struct ASpaceDolphin_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9OI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetReplicatedControlRotation
	 */
	struct ASpaceDolphin_Character_BP_C_GetReplicatedControlRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveTick
	 */
	struct ASpaceDolphin_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MXDG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDoAttack
	 */
	struct ASpaceDolphin_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFlakCannonOnCooldown
	 */
	struct ASpaceDolphin_Character_BP_C_IsFlakCannonOnCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PPRR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairLocation
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetCrosshairLocation_Params
	{
	public:
		float                                                      CanvasClipX;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CanvasClipY;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutX;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutY;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ConsumeItem
	 */
	struct ASpaceDolphin_Character_BP_C_ConsumeItem_Params
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasAmmo
	 */
	struct ASpaceDolphin_Character_BP_C_HasAmmo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HXKU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Quantity;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStopJump
	 */
	struct ASpaceDolphin_Character_BP_C_BPOnStopJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ANTP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Fire Flak Cannon
	 */
	struct ASpaceDolphin_Character_BP_C_FireFlakCannon_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Has Saddle Public
	 */
	struct ASpaceDolphin_Character_BP_C_HasSaddlePublic_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetIsSuperSaddle;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnInventoryItemGrind
	 */
	struct ASpaceDolphin_Character_BP_C_OnInventoryItemGrind_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWindGustCooldownVFX
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateWindGustCooldownVFX_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ASpaceDolphin_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0SGP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryInterruptLanding
	 */
	struct ASpaceDolphin_Character_BP_C_TryInterruptLanding_Params
	{
	public:
		EMovementMode                                              Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_SuperFlight
	 */
	struct ASpaceDolphin_Character_BP_C_OnRep_SuperFlight_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetSuperFlight
	 */
	struct ASpaceDolphin_Character_BP_C_SetSuperFlight_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TriggerVFX;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Current Percent Of Max Fly Speed Public
	 */
	struct ASpaceDolphin_Character_BP_C_GetCurrentPercentOfMaxFlySpeedPublic_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingSuperFlightPublic_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N9DZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartedEndingTime;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlight
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingSuperFlight_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MXRP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartedEndingTime;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightBoost
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSuperFlightBoost_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Boost Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingSuperFlightBoostPublic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlightBoost
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingSuperFlightBoost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E5ZB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartTime;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketName
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetDragSocketName_Params
	{
	public:
		class APrimalCharacter*                                    DraggingChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnCarriedStruggle
	 */
	struct ASpaceDolphin_Character_BP_C_OnCarriedStruggle_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWingGust
	 */
	struct ASpaceDolphin_Character_BP_C_IsUsingWingGust_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UJ6X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Jet FX
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateJetFX_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasFuel
	 */
	struct ASpaceDolphin_Character_BP_C_HasFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YGE4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Quantity;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFuel
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateFuel_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ASpaceDolphin_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasSaddle
	 */
	struct ASpaceDolphin_Character_BP_C_HasSaddle_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetIsSuperSaddle;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4KBJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrafting
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateDrafting_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketDinoName
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetDragSocketDinoName_Params
	{
	public:
		class APrimalDinoCharacter*                                aGrabbedDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightStateData
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSuperFlightStateData_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAcceleration
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateAcceleration_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotationRate
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateRotationRate_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAllyAOE
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateAllyAOE_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetWindGustEpicenter
	 */
	struct ASpaceDolphin_Character_BP_C_GetWindGustEpicenter_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoWing GustAOE
	 */
	struct ASpaceDolphin_Character_BP_C_DoWingGustAOE_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Diving Public
	 */
	struct ASpaceDolphin_Character_BP_C_IsDivingPublic_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQS2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TimeDiveStart;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifySetRider
	 */
	struct ASpaceDolphin_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTPVOffset
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateTPVOffset_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateCheckQuickTurn
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateCheckQuickTurn_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpeed
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSpeed_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDiving
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateDiving_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDiving
	 */
	struct ASpaceDolphin_Character_BP_C_IsDiving_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7553[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TimeDiveStart;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     TimeStoppedDiving;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetAnimBP
	 */
	struct ASpaceDolphin_Character_BP_C_GetAnimBP_Params
	{
	public:
		class USpaceDolphin_AnimationBP_C*                         Ret;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
	 */
	struct ASpaceDolphin_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCDO
	 */
	struct ASpaceDolphin_Character_BP_C_GetCDO_Params
	{
	public:
		class ASpaceDolphin_Character_BP_C*                        Ret;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Quick Turning
	 */
	struct ASpaceDolphin_Character_BP_C_IsQuickTurning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PAI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndQuickTurn
	 */
	struct ASpaceDolphin_Character_BP_C_EndQuickTurn_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartSuperFlightQuickTurn
	 */
	struct ASpaceDolphin_Character_BP_C_StartSuperFlightQuickTurn_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastSuperFlightQuickTurn
	 */
	struct ASpaceDolphin_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightRoll
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateSuperFlightRoll_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ASpaceDolphin_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTrails
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateTrails_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ActivateTrails
	 */
	struct ASpaceDolphin_Character_BP_C_ActivateTrails_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactivateTrails
	 */
	struct ASpaceDolphin_Character_BP_C_DeactivateTrails_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.RidingTick
	 */
	struct ASpaceDolphin_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnStartLandingNotify
	 */
	struct ASpaceDolphin_Character_BP_C_BP_OnStartLandingNotify_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideFlyingVelocity
	 */
	struct ASpaceDolphin_Character_BP_C_BPOverrideFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ASpaceDolphin_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ASpaceDolphin_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetHUDElements
	 */
	struct ASpaceDolphin_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ASpaceDolphin_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VZXE[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VZMH[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9LXS[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnSetRunning
	 */
	struct ASpaceDolphin_Character_BP_C_BP_OnSetRunning_Params
	{
	public:
		bool                                                       bNewIsRunning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyClearRider
	 */
	struct ASpaceDolphin_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ASpaceDolphin_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ASpaceDolphin_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IS8T[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ASpaceDolphin_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetupTamed
	 */
	struct ASpaceDolphin_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJA6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStartJump
	 */
	struct ASpaceDolphin_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q4TF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ASpaceDolphin_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableCameraInterpolation
	 */
	struct ASpaceDolphin_Character_BP_C_DisableCameraInterpolation_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LatchingSurfaceNormal
	 */
	struct ASpaceDolphin_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLatchedDinoCamera
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateLatchedDinoCamera_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Controller Follow ActorRotation
	 */
	struct ASpaceDolphin_Character_BP_C_ControllerFollowActorRotation_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RDKC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReferenceLatchingObjects
	 */
	struct ASpaceDolphin_Character_BP_C_ReferenceLatchingObjects_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LineTrace
	 */
	struct ASpaceDolphin_Character_BP_C_LineTrace_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardLatching;                                        // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomthing;                                             // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NJUP[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterruptLatching
	 */
	struct ASpaceDolphin_Character_BP_C_InterruptLatching_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ProcessLatching
	 */
	struct ASpaceDolphin_Character_BP_C_ProcessLatching_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryLatch
	 */
	struct ASpaceDolphin_Character_BP_C_TryLatch_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardsLatching;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9K2V[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UserConstructionScript
	 */
	struct ASpaceDolphin_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_232
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_232_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_231
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_231_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_230
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_230_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_229
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_229_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_228
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_228_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCam_K2Node_InputActionEvent_225
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCam_K2Node_InputActionEvent_225_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224
	 */
	struct ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Latch
	 */
	struct ASpaceDolphin_Character_BP_C_Latch_Params
	{
	public:
		bool                                                       BackwardsLatching;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchStartAnimation
	 */
	struct ASpaceDolphin_Character_BP_C_LatchStartAnimation_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatch
	 */
	struct ASpaceDolphin_Character_BP_C_UnLatch_Params
	{
	public:
		bool                                                       LatchingInterrupted;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchStartAnimation
	 */
	struct ASpaceDolphin_Character_BP_C_UnLatchStartAnimation_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ASpaceDolphin_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MoveToUsingDirection
	 */
	struct ASpaceDolphin_Character_BP_C_MoveToUsingDirection_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchMoveAndRotate
	 */
	struct ASpaceDolphin_Character_BP_C_UnLatchMoveAndRotate_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingStartEvent
	 */
	struct ASpaceDolphin_Character_BP_C_LatchingStartEvent_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingEndEvent
	 */
	struct ASpaceDolphin_Character_BP_C_LatchingEndEvent_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovement
	 */
	struct ASpaceDolphin_Character_BP_C_StopMovement_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableFaceLatchingObjectRotation
	 */
	struct ASpaceDolphin_Character_BP_C_DisableFaceLatchingObjectRotation_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetPassengersSurfaceCamera
	 */
	struct ASpaceDolphin_Character_BP_C_SetPassengersSurfaceCamera_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Pitch;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Roll;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LocalFaceLatchingObject
	 */
	struct ASpaceDolphin_Character_BP_C_LocalFaceLatchingObject_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartedJump
	 */
	struct ASpaceDolphin_Character_BP_C_StartedJump_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerToggleSuperFlight
	 */
	struct ASpaceDolphin_Character_BP_C_ServerToggleSuperFlight_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightRightInput
	 */
	struct ASpaceDolphin_Character_BP_C_ServerSuperFightRightInput_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestSuperFlightQuickTurn
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateQuickTurn
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateQuickTurn_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestWindGust
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestWindGust_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGust
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGust_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientWindGust
	 */
	struct ASpaceDolphin_Character_BP_C_ClientWindGust_Params
	{
	public:
		struct FVector                                             Epicenter;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustVFX
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGustVFX_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireFlakCannon
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestFireFlakCannon_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 */
	struct ASpaceDolphin_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastForwardInputTime
	 */
	struct ASpaceDolphin_Character_BP_C_ServerUpdateLastForwardInputTime_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DelayedSuperFlightEnd
	 */
	struct ASpaceDolphin_Character_BP_C_DelayedSuperFlightEnd_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSuperFlightEnd
	 */
	struct ASpaceDolphin_Character_BP_C_MultiSuperFlightEnd_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientTagDraftee
	 */
	struct ASpaceDolphin_Character_BP_C_ClientTagDraftee_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180End
	 */
	struct ASpaceDolphin_Character_BP_C_WindGust180End_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180Tick
	 */
	struct ASpaceDolphin_Character_BP_C_WindGust180Tick_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustCheckFor180
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGustCheckFor180_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustBoost
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGustBoost_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequest180
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequest180_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GamepadRightStickPressed
	 */
	struct ASpaceDolphin_Character_BP_C_GamepadRightStickPressed_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimePressedJump
	 */
	struct ASpaceDolphin_Character_BP_C_ServerSetLastTimePressedJump_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimeReleasedJump
	 */
	struct ASpaceDolphin_Character_BP_C_ServerSetLastTimeReleasedJump_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueLanding
	 */
	struct ASpaceDolphin_Character_BP_C_QueueLanding_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestLanding
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestLanding_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnBola
	 */
	struct ASpaceDolphin_Character_BP_C_OnBola_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStartTime
	 */
	struct ASpaceDolphin_Character_BP_C_ServerUpdateRunningStartTime_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStopTime
	 */
	struct ASpaceDolphin_Character_BP_C_ServerUpdateRunningStopTime_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStarted
	 */
	struct ASpaceDolphin_Character_BP_C_MultiOnRunStarted_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStopped
	 */
	struct ASpaceDolphin_Character_BP_C_MultiOnRunStopped_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnSuperFlightStart
	 */
	struct ASpaceDolphin_Character_BP_C_MultiOnSuperFlightStart_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueGrabAttack
	 */
	struct ASpaceDolphin_Character_BP_C_QueueGrabAttack_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiThrusterVFXBoost
	 */
	struct ASpaceDolphin_Character_BP_C_MultiThrusterVFXBoost_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireLasers
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestFireLasers_Params
	{
	public:
		struct FVector                                             CameraHitLoc;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CustomTimeDilation;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientSpawnLaserFireFX
	 */
	struct ASpaceDolphin_Character_BP_C_ClientSpawnLaserFireFX_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayImpactFX;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitCharacterOrStructure;                                 // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IS8U[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Socket;                                                  // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerPressedFire
	 */
	struct ASpaceDolphin_Character_BP_C_ServerPressedFire_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerFireChargedLaser
	 */
	struct ASpaceDolphin_Character_BP_C_ServerFireChargedLaser_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Target;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CustomTimeDilation;                                      // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TickChargedLaserFX
	 */
	struct ASpaceDolphin_Character_BP_C_TickChargedLaserFX_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearNumPressedFwdCount
	 */
	struct ASpaceDolphin_Character_BP_C_ClearNumPressedFwdCount_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestStartLoop
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestStartLoop_Params
	{
	public:
		bool                                                       Immelmann;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiStartLoop
	 */
	struct ASpaceDolphin_Character_BP_C_MultiStartLoop_Params
	{
	public:
		bool                                                       Immelmann;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveHit
	 */
	struct ASpaceDolphin_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6DUI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiImpactedTerrain
	 */
	struct ASpaceDolphin_Character_BP_C_MultiImpactedTerrain_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientPickupUpgrade
	 */
	struct ASpaceDolphin_Character_BP_C_ClientPickupUpgrade_Params
	{
	public:
		struct FVector                                             PickupLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestDestroyProjectile
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestDestroyProjectile_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDestroyPorjectile
	 */
	struct ASpaceDolphin_Character_BP_C_MultiDestroyPorjectile_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightIsBraking
	 */
	struct ASpaceDolphin_Character_BP_C_ServerSuperFightIsBraking_Params
	{
	public:
		bool                                                       AxisValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestBarrelRoll
	 */
	struct ASpaceDolphin_Character_BP_C_ServerRequestBarrelRoll_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             CamDir;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiBarrelRoll
	 */
	struct ASpaceDolphin_Character_BP_C_MultiBarrelRoll_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             CameraDir;                                               // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiReflectProjectile
	 */
	struct ASpaceDolphin_Character_BP_C_MultiReflectProjectile_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientDamagedByTerrain
	 */
	struct ASpaceDolphin_Character_BP_C_ClientDamagedByTerrain_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDriftingBoost
	 */
	struct ASpaceDolphin_Character_BP_C_MultiDriftingBoost_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollLeft
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollLeft_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollRight
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollRight_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerStartJump
	 */
	struct ASpaceDolphin_Character_BP_C_ServerStartJump_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StarFoxServerRequestFireLasers
	 */
	struct ASpaceDolphin_Character_BP_C_StarFoxServerRequestFireLasers_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Echo
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_Echo_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientEchoLocations
	 */
	struct ASpaceDolphin_Character_BP_C_ClientEchoLocations_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_FireChaff
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_FireChaff_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSpawnChaffs
	 */
	struct ASpaceDolphin_Character_BP_C_MultiSpawnChaffs_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Nudge
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_Nudge_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopWildFlee
	 */
	struct ASpaceDolphin_Character_BP_C_StopWildFlee_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAnger
	 */
	struct ASpaceDolphin_Character_BP_C_TriggerWildAnger_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_BlowHole
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_BlowHole_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAngryDinoTarget
	 */
	struct ASpaceDolphin_Character_BP_C_ExpireAngryDinoTarget_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiAngryBlowHole
	 */
	struct ASpaceDolphin_Character_BP_C_MultiAngryBlowHole_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpaceWhaleIntroEnd
	 */
	struct ASpaceDolphin_Character_BP_C_SpaceWhaleIntroEnd_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAnger
	 */
	struct ASpaceDolphin_Character_BP_C_ExpireAnger_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastElevateTime
	 */
	struct ASpaceDolphin_Character_BP_C_ServerUpdateLastElevateTime_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastLowerTime
	 */
	struct ASpaceDolphin_Character_BP_C_ServerUpdateLastLowerTime_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_ToggleSuperFlight
	 */
	struct ASpaceDolphin_Character_BP_C_AnimNotify_ToggleSuperFlight_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerForceClearRider
	 */
	struct ASpaceDolphin_Character_BP_C_ServerForceClearRider_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CenterMouse
	 */
	struct ASpaceDolphin_Character_BP_C_CenterMouse_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveBeginPlay
	 */
	struct ASpaceDolphin_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSaddleActivationText
	 */
	struct ASpaceDolphin_Character_BP_C_MultiSaddleActivationText_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoopingEvent
	 */
	struct ASpaceDolphin_Character_BP_C_UpdateLoopingEvent_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovementImmediately
	 */
	struct ASpaceDolphin_Character_BP_C_StopMovementImmediately_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExecuteUbergraph_SpaceDolphin_Character_BP
	 */
	struct ASpaceDolphin_Character_BP_C_ExecuteUbergraph_SpaceDolphin_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher0__DelegateSignature
	 */
	struct ASpaceDolphin_Character_BP_C_NewEventDispatcher0__DelegateSignature_Params
	{	};

	/**
	 * Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher__DelegateSignature
	 */
	struct ASpaceDolphin_Character_BP_C_NewEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
