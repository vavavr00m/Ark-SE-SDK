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
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPCharacterDetach
	 */
	struct AThylacoleo_Character_BP_C_BPCharacterDetach_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanThylacoCarryCharacter
	 */
	struct AThylacoleo_Character_BP_C_CanThylacoCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YEM7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanClimbOutOfWater
	 */
	struct AThylacoleo_Character_BP_C_CanClimbOutOfWater_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R6OZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set IK_Active
	 */
	struct AThylacoleo_Character_BP_C_SetIK_Active_Params
	{
	public:
		bool                                                       newActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsNormalClimbable
	 */
	struct AThylacoleo_Character_BP_C_IsNormalClimbable_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZSK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPAdjustDamage
	 */
	struct AThylacoleo_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3A3M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3D46[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceThylacoStamina
	 */
	struct AThylacoleo_Character_BP_C_ReduceThylacoStamina_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.DisplayMessage
	 */
	struct AThylacoleo_Character_BP_C_DisplayMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HasEnoughStaminaToClimb
	 */
	struct AThylacoleo_Character_BP_C_HasEnoughStaminaToClimb_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0EG6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is Thylaco Climbing Down
	 */
	struct AThylacoleo_Character_BP_C_IsThylacoClimbingDown_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing_Up
	 */
	struct AThylacoleo_Character_BP_C_IsThylacoClimbing_Up_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing
	 */
	struct AThylacoleo_Character_BP_C_IsThylacoClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceStaminaOverTime
	 */
	struct AThylacoleo_Character_BP_C_ReduceStaminaOverTime_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ManualPlayLandAnim
	 */
	struct AThylacoleo_Character_BP_C_ManualPlayLandAnim_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AThylacoleo_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CalcThylacoPounceDir
	 */
	struct AThylacoleo_Character_BP_C_CalcThylacoPounceDir_Params
	{
	public:
		struct FVector                                             pounceDir;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HardSetThylacoRotationButInterpMeshLocation
	 */
	struct AThylacoleo_Character_BP_C_HardSetThylacoRotationButInterpMeshLocation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateIsAttachingToWall
	 */
	struct AThylacoleo_Character_BP_C_UpdateIsAttachingToWall_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CleanUpClimbingAnims
	 */
	struct AThylacoleo_Character_BP_C_CleanUpClimbingAnims_Params
	{
	public:
		bool                                                       animsClean;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VU9V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetShouldRestoreToLatched
	 */
	struct AThylacoleo_Character_BP_C_SetShouldRestoreToLatched_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set ThylacoRotationAnd Interp Mesh
	 */
	struct AThylacoleo_Character_BP_C_SetThylacoRotationAndInterpMesh_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.WallJump
	 */
	struct AThylacoleo_Character_BP_C_WallJump_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InterpolateMesh
	 */
	struct AThylacoleo_Character_BP_C_InterpolateMesh_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPShouldForceFlee
	 */
	struct AThylacoleo_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForPounceOnTarget
	 */
	struct AThylacoleo_Character_BP_C_CheckForPounceOnTarget_Params
	{
	public:
		bool                                                       shouldPounce;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZDOL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoAnims
	 */
	struct AThylacoleo_Character_BP_C_UpdateThylacoAnims_Params
	{
	public:
		bool                                                       ensureAnimsPlaying;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S03K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetUse Aim Offsets
	 */
	struct AThylacoleo_Character_BP_C_SetUseAimOffsets_Params
	{
	public:
		bool                                                       newUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MK3B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPModifyAimOffsetTargetLocation
	 */
	struct AThylacoleo_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetWallAttachImpulse
	 */
	struct AThylacoleo_Character_BP_C_GetWallAttachImpulse_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveAnyDamage
	 */
	struct AThylacoleo_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U956[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco
	 */
	struct AThylacoleo_Character_BP_C_InitThylaco_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPUnstasis
	 */
	struct AThylacoleo_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Check for Ai Attach to Tree
	 */
	struct AThylacoleo_Character_BP_C_CheckforAiAttachtoTree_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Client_SetClimbingState
	 */
	struct AThylacoleo_Character_BP_C_Client_SetClimbingState_Params
	{
	public:
		E_PredatorClimbingState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is DinoAbove Ground
	 */
	struct AThylacoleo_Character_BP_C_IsDinoAboveGround_Params
	{
	public:
		float                                                      CheckDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateJumpingAnim
	 */
	struct AThylacoleo_Character_BP_C_UpdateJumpingAnim_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetAI_LatchedToTree
	 */
	struct AThylacoleo_Character_BP_C_SetAI_LatchedToTree_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Get Thylaco Ai Controller
	 */
	struct AThylacoleo_Character_BP_C_GetThylacoAiController_Params
	{
	public:
		class AThylacoleo_AIController_BP_C*                       Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTryMultiUse
	 */
	struct AThylacoleo_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AThylacoleo_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AiDropFromTree
	 */
	struct AThylacoleo_Character_BP_C_AiDropFromTree_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatched
	 */
	struct AThylacoleo_Character_BP_C_IsLatched_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatching
	 */
	struct AThylacoleo_Character_BP_C_IsLatching_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetCorrectLatchingAnim
	 */
	struct AThylacoleo_Character_BP_C_GetCorrectLatchingAnim_Params
	{
	public:
		class UAnimMontage*                                        animRef;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifyClearRider
	 */
	struct AThylacoleo_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifySetRider
	 */
	struct AThylacoleo_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerNonDedicated
	 */
	struct AThylacoleo_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.RemoveCarryBuffFromPrey
	 */
	struct AThylacoleo_Character_BP_C_RemoveCarryBuffFromPrey_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReleasePrey
	 */
	struct AThylacoleo_Character_BP_C_ReleasePrey_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanAttack
	 */
	struct AThylacoleo_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2AM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsMaulingValidCharacter
	 */
	struct AThylacoleo_Character_BP_C_IsMaulingValidCharacter_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanPounce
	 */
	struct AThylacoleo_Character_BP_C_CanPounce_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C343[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_currentClimbableSurfaceNormal
	 */
	struct AThylacoleo_Character_BP_C_OnRep_currentClimbableSurfaceNormal_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoTransforms
	 */
	struct AThylacoleo_Character_BP_C_UpdateThylacoTransforms_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDesiredDirection
	 */
	struct AThylacoleo_Character_BP_C_GetDesiredDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Stop
	 */
	struct AThylacoleo_Character_BP_C_Pounce_Stop_Params
	{
	public:
		class APrimalCharacter*                                    HitTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanKeepPouncing
	 */
	struct AThylacoleo_Character_BP_C_CanKeepPouncing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Tick
	 */
	struct AThylacoleo_Character_BP_C_Pounce_Tick_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Start
	 */
	struct AThylacoleo_Character_BP_C_Pounce_Start_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AThylacoleo_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDefaultDino
	 */
	struct AThylacoleo_Character_BP_C_GetDefaultDino_Params
	{
	public:
		class AThylacoleo_Character_BP_C*                          Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsDinoGrounded
	 */
	struct AThylacoleo_Character_BP_C_IsDinoGrounded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForClimbableSurface
	 */
	struct AThylacoleo_Character_BP_C_CheckForClimbableSurface_Params
	{
	public:
		struct FVector                                             checkDir;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      checkDist;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTVJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_CurrentClimbingState
	 */
	struct AThylacoleo_Character_BP_C_OnRep_CurrentClimbingState_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.NetSetClimbingState
	 */
	struct AThylacoleo_Character_BP_C_NetSetClimbingState_Params
	{
	public:
		E_PredatorClimbingState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G59L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerServer
	 */
	struct AThylacoleo_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UserConstructionScript
	 */
	struct AThylacoleo_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpPressed
	 */
	struct AThylacoleo_Character_BP_C_Server_JumpPressed_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpReleased
	 */
	struct AThylacoleo_Character_BP_C_Server_JumpReleased_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveBeginPlay
	 */
	struct AThylacoleo_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AnimNotify_MaulPrey
	 */
	struct AThylacoleo_Character_BP_C_AnimNotify_MaulPrey_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_NetSetClimbingState
	 */
	struct AThylacoleo_Character_BP_C_Server_NetSetClimbingState_Params
	{
	public:
		E_PredatorClimbingState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetReadyToClimbAfterDelay
	 */
	struct AThylacoleo_Character_BP_C_SetReadyToClimbAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_SetAiLatchedToTree
	 */
	struct AThylacoleo_Character_BP_C_CheckUntil_SetAiLatchedToTree_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureCorrectAnimsPlayingAfterDelay
	 */
	struct AThylacoleo_Character_BP_C_EnsureCorrectAnimsPlayingAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PlayAttachParticleWhenCloseToWall
	 */
	struct AThylacoleo_Character_BP_C_PlayAttachParticleWhenCloseToWall_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnableClimbingAnimsAfterAttachDelay
	 */
	struct AThylacoleo_Character_BP_C_EnableClimbingAnimsAfterAttachDelay_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SyncGravityForPounceFall
	 */
	struct AThylacoleo_Character_BP_C_SyncGravityForPounceFall_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureLatchedAnimPlays
	 */
	struct AThylacoleo_Character_BP_C_EnsureLatchedAnimPlays_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_MaulingValidCharacter
	 */
	struct AThylacoleo_Character_BP_C_CheckUntil_MaulingValidCharacter_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PreventLandingAnimBriefly
	 */
	struct AThylacoleo_Character_BP_C_PreventLandingAnimBriefly_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckOnJumpStateAfterJumpDelay
	 */
	struct AThylacoleo_Character_BP_C_CheckOnJumpStateAfterJumpDelay_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpPressed
	 */
	struct AThylacoleo_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpReleased
	 */
	struct AThylacoleo_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_NextTick
	 */
	struct AThylacoleo_Character_BP_C_InitThylaco_NextTick_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_Now
	 */
	struct AThylacoleo_Character_BP_C_InitThylaco_Now_Params
	{	};

	/**
	 * Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ExecuteUbergraph_Thylacoleo_Character_BP
	 */
	struct AThylacoleo_Character_BP_C_ExecuteUbergraph_Thylacoleo_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
