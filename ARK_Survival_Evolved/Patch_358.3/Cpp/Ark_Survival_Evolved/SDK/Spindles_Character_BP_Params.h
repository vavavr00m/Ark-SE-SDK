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
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.AllowPlayMontage
	 */
	struct ASpindles_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N8OJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerNonDedicated
	 */
	struct ASpindles_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateMiniGunState
	 */
	struct ASpindles_Character_BP_C_UpdateMiniGunState_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerServer
	 */
	struct ASpindles_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.GetClampedCameraLocation
	 */
	struct ASpindles_Character_BP_C_GetClampedCameraLocation_Params
	{
	public:
		struct FVector                                             OutLoc;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KM8S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetDebugInfoString
	 */
	struct ASpindles_Character_BP_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.SpawnMinigunFX
	 */
	struct ASpindles_Character_BP_C_SpawnMinigunFX_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandlePoop
	 */
	struct ASpindles_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideHurtAnim
	 */
	struct ASpindles_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9YY4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2B1M[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AUS7[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateCachedActivateMinigunModeWeightCheck
	 */
	struct ASpindles_Character_BP_C_UpdateCachedActivateMinigunModeWeightCheck_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BlueprintGetAttackWeight
	 */
	struct ASpindles_Character_BP_C_BlueprintGetAttackWeight_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inputWeight;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.GetMinigunModeTPVOffset
	 */
	struct ASpindles_Character_BP_C_GetMinigunModeTPVOffset_Params
	{
	public:
		struct FVector                                             TPVOffset;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun FireInput Pressed
	 */
	struct ASpindles_Character_BP_C_SetMinigunFireInputPressed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.RidingTick
	 */
	struct ASpindles_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JDKC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleLeftShoulderButton
	 */
	struct ASpindles_Character_BP_C_BPHandleLeftShoulderButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun AOEInput Pressed
	 */
	struct ASpindles_Character_BP_C_SetMinigunAOEInputPressed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ASpindles_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.SwitchMinigunTPVCameraView
	 */
	struct ASpindles_Character_BP_C_SwitchMinigunTPVCameraView_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ASpindles_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ASpindles_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPPreventFirstPerson
	 */
	struct ASpindles_Character_BP_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifySetRider
	 */
	struct ASpindles_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ASpindles_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JLFW[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3J46[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XOMT[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ASpindles_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.HasOverheatBuff
	 */
	struct ASpindles_Character_BP_C_HasOverheatBuff_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ASpindles_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.Is Server or SinglePlayer
	 */
	struct ASpindles_Character_BP_C_IsServerorSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.IsAIControlled
	 */
	struct ASpindles_Character_BP_C_IsAIControlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O1Q3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairLocation
	 */
	struct ASpindles_Character_BP_C_BPGetCrosshairLocation_Params
	{
	public:
		float                                                      CanvasClipX;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CanvasClipY;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutX;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutY;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct ASpindles_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.IsFirstPersonView
	 */
	struct ASpindles_Character_BP_C_IsFirstPersonView_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GFMD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ReceiveBeginPlay
	 */
	struct ASpindles_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifyClearRider
	 */
	struct ASpindles_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.IsClientOrSinglePlayer
	 */
	struct ASpindles_Character_BP_C_IsClientOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopFire
	 */
	struct ASpindles_Character_BP_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ASpindles_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.UserConstructionScript
	 */
	struct ASpindles_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_170
	 */
	struct ASpindles_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_170_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_169
	 */
	struct ASpindles_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_169_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.SetMinigunAOE
	 */
	struct ASpindles_Character_BP_C_SetMinigunAOE_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunAOEInputPressed
	 */
	struct ASpindles_Character_BP_C_SERVER_SetMinigunAOEInputPressed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.RequestStopAOEAttack
	 */
	struct ASpindles_Character_BP_C_RequestStopAOEAttack_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunFireInputPressed
	 */
	struct ASpindles_Character_BP_C_SERVER_SetMinigunFireInputPressed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.StartMinigunFire
	 */
	struct ASpindles_Character_BP_C_StartMinigunFire_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.StopMinigunFire
	 */
	struct ASpindles_Character_BP_C_StopMinigunFire_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ClientSpawnMinigunFireFX
	 */
	struct ASpindles_Character_BP_C_ClientSpawnMinigunFireFX_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOff
	 */
	struct ASpindles_Character_BP_C_MinigunModeOff_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOn
	 */
	struct ASpindles_Character_BP_C_MinigunModeOn_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunStaminaCost
	 */
	struct ASpindles_Character_BP_C_TickMinigunStaminaCost_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ClientOutOfStamina
	 */
	struct ASpindles_Character_BP_C_ClientOutOfStamina_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.CheckConsumeResource
	 */
	struct ASpindles_Character_BP_C_CheckConsumeResource_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.LoopMinigunFiringAnim
	 */
	struct ASpindles_Character_BP_C_LoopMinigunFiringAnim_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ServerEnableMinigunMode
	 */
	struct ASpindles_Character_BP_C_ServerEnableMinigunMode_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ServerDisableMinigunMode
	 */
	struct ASpindles_Character_BP_C_ServerDisableMinigunMode_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.EnableMinigunMode
	 */
	struct ASpindles_Character_BP_C_EnableMinigunMode_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.DisableMinigunMode
	 */
	struct ASpindles_Character_BP_C_DisableMinigunMode_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.RotateAttack
	 */
	struct ASpindles_Character_BP_C_RotateAttack_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TurnForAttack
	 */
	struct ASpindles_Character_BP_C_AnimNotify_TurnForAttack_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_AttackTurnFinished
	 */
	struct ASpindles_Character_BP_C_AnimNotify_AttackTurnFinished_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.StopCheckConsumeResource
	 */
	struct ASpindles_Character_BP_C_StopCheckConsumeResource_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ToggleMinigunModeAimOffset
	 */
	struct ASpindles_Character_BP_C_ToggleMinigunModeAimOffset_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.SetupMinigunFiring
	 */
	struct ASpindles_Character_BP_C_SetupMinigunFiring_Params
	{
	public:
		class UAnimMontage*                                        LoopAnim;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UParticleSystem*                                     TrailFX;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.TickAOEStaminaCost
	 */
	struct ASpindles_Character_BP_C_TickAOEStaminaCost_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunTPVCamera
	 */
	struct ASpindles_Character_BP_C_TickMinigunTPVCamera_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ReplicateCameraDataMinigunModeToServer
	 */
	struct ASpindles_Character_BP_C_ReplicateCameraDataMinigunModeToServer_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LQFJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_StartAOEAttack
	 */
	struct ASpindles_Character_BP_C_MULTI_StartAOEAttack_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_EndAOEAttack
	 */
	struct ASpindles_Character_BP_C_MULTI_EndAOEAttack_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.LeftShoulderPressed
	 */
	struct ASpindles_Character_BP_C_LeftShoulderPressed_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickAOEStaminaCost
	 */
	struct ASpindles_Character_BP_C_AnimNotify_TickAOEStaminaCost_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickMinigunStaminaCost
	 */
	struct ASpindles_Character_BP_C_AnimNotify_TickMinigunStaminaCost_Params
	{	};

	/**
	 * Function Spindles_Character_BP.Spindles_Character_BP_C.ExecuteUbergraph_Spindles_Character_BP
	 */
	struct ASpindles_Character_BP_C_ExecuteUbergraph_Spindles_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
