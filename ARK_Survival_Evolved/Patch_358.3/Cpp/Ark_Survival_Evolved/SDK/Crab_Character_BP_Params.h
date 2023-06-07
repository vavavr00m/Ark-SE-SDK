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
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPCanCryo
	 */
	struct ACrab_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R81H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPGetDragSocketDinoName
	 */
	struct ACrab_Character_BP_C_BPGetDragSocketDinoName_Params
	{
	public:
		class APrimalDinoCharacter*                                aGrabbedDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ACrab_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Should Stop Jump Rotation
	 */
	struct ACrab_Character_BP_C_ShouldStopJumpRotation_Params
	{
	public:
		bool                                                       returnvalue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C286[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPShouldCancelDoAttack
	 */
	struct ACrab_Character_BP_C_BPShouldCancelDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GP8M[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ACrab_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Crab_Character_BP.Crab_Character_BP_C.ImpulseTowardTarget
	 */
	struct ACrab_Character_BP_C_ImpulseTowardTarget_Params
	{
	public:
		bool                                                       IsApex;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_335E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Shortest Angle Distance
	 */
	struct ACrab_Character_BP_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.StopThrowOrReleaseGrab
	 */
	struct ACrab_Character_BP_C_StopThrowOrReleaseGrab_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReleasedCharacter;                                       // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopFire
	 */
	struct ACrab_Character_BP_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RS6S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ACrab_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ACrab_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ACrab_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ProcessThrow
	 */
	struct ACrab_Character_BP_C_ProcessThrow_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ProcessJump
	 */
	struct ACrab_Character_BP_C_ProcessJump_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ACrab_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J0JY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ACrab_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D6DX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPNotifySetRider
	 */
	struct ACrab_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Crab Adjust Attack Index
	 */
	struct ACrab_Character_BP_C_CrabAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RetAttackIndex;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.HasSecondaryCarriedChar
	 */
	struct ACrab_Character_BP_C_HasSecondaryCarriedChar_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.IsCarryingCharacterSecondary
	 */
	struct ACrab_Character_BP_C_IsCarryingCharacterSecondary_Params
	{
	public:
		bool                                                       OutputPin;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0N8R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.GetCarriedCharacterSecondary
	 */
	struct ACrab_Character_BP_C_GetCarriedCharacterSecondary_Params
	{
	public:
		class APrimalCharacter*                                    OutputPin;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.LaunchAtTracePoint
	 */
	struct ACrab_Character_BP_C_LaunchAtTracePoint_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.GetClampedLookDir
	 */
	struct ACrab_Character_BP_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZBAL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ThrowTrace
	 */
	struct ACrab_Character_BP_C_ThrowTrace_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustDamage
	 */
	struct ACrab_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D1BA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ERRX[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.IsCrabSubmerged
	 */
	struct ACrab_Character_BP_C_IsCrabSubmerged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OJA2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.SlamIfDoubleClicking
	 */
	struct ACrab_Character_BP_C_SlamIfDoubleClicking_Params
	{
	public:
		int32_t                                                    CurrentAttackIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.PlayGrabbedIdle
	 */
	struct ACrab_Character_BP_C_PlayGrabbedIdle_Params
	{
	public:
		bool                                                       IsMoving;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPTimerServer
	 */
	struct ACrab_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.GrabFoundCharacter
	 */
	struct ACrab_Character_BP_C_GrabFoundCharacter_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Is Better Grab Target
	 */
	struct ACrab_Character_BP_C_IsBetterGrabTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewTargHitLoc;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JTI7[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Find Proper Grab Target
	 */
	struct ACrab_Character_BP_C_FindProperGrabTarget_Params
	{
	public:
		class APrimalCharacter*                                    TestChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    TargetChar;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Check Proper Can Carry
	 */
	struct ACrab_Character_BP_C_CheckProperCanCarry_Params
	{
	public:
		class APrimalCharacter*                                    TestActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanCarry;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Throw Grabbed Characters
	 */
	struct ACrab_Character_BP_C_ThrowGrabbedCharacters_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Retrieve Any Grabbable Character
	 */
	struct ACrab_Character_BP_C_RetrieveAnyGrabbableCharacter_Params
	{
	public:
		bool                                                       FoundCharacter;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UL4I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.GetGrabClawLocation
	 */
	struct ACrab_Character_BP_C_GetGrabClawLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPNotifyClearRider
	 */
	struct ACrab_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPCharacterSleeped
	 */
	struct ACrab_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPTimerNonDedicated
	 */
	struct ACrab_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPDoAttack
	 */
	struct ACrab_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GR6V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Server_StopThrow
	 */
	struct ACrab_Character_BP_C_Server_StopThrow_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ACrab_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.SharedCanAttack
	 */
	struct ACrab_Character_BP_C_SharedCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanAttack;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanAttack
	 */
	struct ACrab_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H8NC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PSSM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.GetLaunchDirection
	 */
	struct ACrab_Character_BP_C_GetLaunchDirection_Params
	{
	public:
		class AActor*                                              CalcActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct ACrab_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ACrab_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.UserConstructionScript
	 */
	struct ACrab_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_166
	 */
	struct ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_166_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_165
	 */
	struct ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_165_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_164
	 */
	struct ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_164_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_163
	 */
	struct ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_163_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Request Tertiary Pressed
	 */
	struct ACrab_Character_BP_C_RequestTertiaryPressed_Params
	{
	public:
		bool                                                       IsHolding;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ToggleAction;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Request Jump Response
	 */
	struct ACrab_Character_BP_C_RequestJumpResponse_Params
	{
	public:
		bool                                                       isHoldingJump;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabLeftTracing
	 */
	struct ACrab_Character_BP_C_AnimNotify_StartGrabLeftTracing_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_EndGrabTracing
	 */
	struct ACrab_Character_BP_C_AnimNotify_EndGrabTracing_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.TraceGrab
	 */
	struct ACrab_Character_BP_C_TraceGrab_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabRightTracing
	 */
	struct ACrab_Character_BP_C_AnimNotify_StartGrabRightTracing_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_ReleaseGrabbedCharacters
	 */
	struct ACrab_Character_BP_C_AnimNotify_ReleaseGrabbedCharacters_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Multi_SwimUp
	 */
	struct ACrab_Character_BP_C_Multi_SwimUp_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.SwimUp
	 */
	struct ACrab_Character_BP_C_SwimUp_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.SwimJump
	 */
	struct ACrab_Character_BP_C_SwimJump_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_MidGrabTrace
	 */
	struct ACrab_Character_BP_C_AnimNotify_MidGrabTrace_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundLeft
	 */
	struct ACrab_Character_BP_C_AnimNotify_GroundPoundLeft_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.PlayTracedVFX
	 */
	struct ACrab_Character_BP_C_PlayTracedVFX_Params
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartLoc;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundRight
	 */
	struct ACrab_Character_BP_C_AnimNotify_GroundPoundRight_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Server_DropCharacters
	 */
	struct ACrab_Character_BP_C_Server_DropCharacters_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Multi_SetPreventMovement
	 */
	struct ACrab_Character_BP_C_Multi_SetPreventMovement_Params
	{
	public:
		bool                                                       NewPreventMovement;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.DelayedClearThrowing
	 */
	struct ACrab_Character_BP_C_DelayedClearThrowing_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Server_TraceTargetDir
	 */
	struct ACrab_Character_BP_C_Server_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       JumpInstant;                                             // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ThrowInstant;                                            // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.StartThrowIdle
	 */
	struct ACrab_Character_BP_C_StartThrowIdle_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ClearThrow
	 */
	struct ACrab_Character_BP_C_ClearThrow_Params
	{
	public:
		bool                                                       ForceImmediateClear;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Multi_TraceTargetDir
	 */
	struct ACrab_Character_BP_C_Multi_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpPressed
	 */
	struct ACrab_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpReleased
	 */
	struct ACrab_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.DelayedPress
	 */
	struct ACrab_Character_BP_C_DelayedPress_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.UpdateAllJumpRotation
	 */
	struct ACrab_Character_BP_C_UpdateAllJumpRotation_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.UpdateJumpRotation
	 */
	struct ACrab_Character_BP_C_UpdateJumpRotation_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_CrabLand
	 */
	struct ACrab_Character_BP_C_AnimNotify_CrabLand_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestRightAttack
	 */
	struct ACrab_Character_BP_C_ServerRequestRightAttack_Params
	{
	public:
		bool                                                       buttonHeld;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestLeftAttack
	 */
	struct ACrab_Character_BP_C_ServerRequestLeftAttack_Params
	{
	public:
		bool                                                       buttonHeld;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.DelayedRightAttack
	 */
	struct ACrab_Character_BP_C_DelayedRightAttack_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.DelayedLeftAttack
	 */
	struct ACrab_Character_BP_C_DelayedLeftAttack_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Server_DropRight
	 */
	struct ACrab_Character_BP_C_Server_DropRight_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Server_DropLeft
	 */
	struct ACrab_Character_BP_C_Server_DropLeft_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestDoubleSmash
	 */
	struct ACrab_Character_BP_C_ServerRequestDoubleSmash_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.DelayedThrowPress
	 */
	struct ACrab_Character_BP_C_DelayedThrowPress_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.AIWaterJump
	 */
	struct ACrab_Character_BP_C_AIWaterJump_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.Multi_HurtResponse
	 */
	struct ACrab_Character_BP_C_Multi_HurtResponse_Params
	{
	public:
		bool                                                       WasBullet;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WRSA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ClearTorporHit
	 */
	struct ACrab_Character_BP_C_ClearTorporHit_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.TorporHit
	 */
	struct ACrab_Character_BP_C_TorporHit_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ServerArrestMovement
	 */
	struct ACrab_Character_BP_C_ServerArrestMovement_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ResetArrestMovement
	 */
	struct ACrab_Character_BP_C_ResetArrestMovement_Params
	{	};

	/**
	 * Function Crab_Character_BP.Crab_Character_BP_C.ExecuteUbergraph_Crab_Character_BP
	 */
	struct ACrab_Character_BP_C_ExecuteUbergraph_Crab_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
