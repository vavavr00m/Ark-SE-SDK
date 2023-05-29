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
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovementFn
	 */
	struct ATapejara_Character_BP_C_StopMovementFn_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ShouldTryLatch
	 */
	struct ATapejara_Character_BP_C_ShouldTryLatch_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LandOnFailureToLatch;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ATapejara_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G4HJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider
	 */
	struct ATapejara_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ATapejara_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV
	 */
	struct ATapejara_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ATapejara_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ATapejara_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed
	 */
	struct ATapejara_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump
	 */
	struct ATapejara_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ATapejara_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation
	 */
	struct ATapejara_Character_BP_C_DisableCameraInterpolation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal
	 */
	struct ATapejara_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera
	 */
	struct ATapejara_Character_BP_C_UpdateLatchedDinoCamera_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation
	 */
	struct ATapejara_Character_BP_C_ControllerFollowActorRotation_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CG3H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects
	 */
	struct ATapejara_Character_BP_C_ReferenceLatchingObjects_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace
	 */
	struct ATapejara_Character_BP_C_LineTrace_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardLatching;                                        // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomthing;                                             // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_60GP[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching
	 */
	struct ATapejara_Character_BP_C_InterruptLatching_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching
	 */
	struct ATapejara_Character_BP_C_ProcessLatching_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch
	 */
	struct ATapejara_Character_BP_C_TryLatch_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardsLatching;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZEQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UserConstructionScript
	 */
	struct ATapejara_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_178
	 */
	struct ATapejara_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_178_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177
	 */
	struct ATapejara_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_176
	 */
	struct ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_176_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_175
	 */
	struct ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_175_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch
	 */
	struct ATapejara_Character_BP_C_Latch_Params
	{
	public:
		bool                                                       BackwardsLatching;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TryLatch;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LandOnFailureToLatch;                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick
	 */
	struct ATapejara_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation
	 */
	struct ATapejara_Character_BP_C_LatchStartAnimation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch
	 */
	struct ATapejara_Character_BP_C_UnLatch_Params
	{
	public:
		bool                                                       LatchingInterrupted;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation
	 */
	struct ATapejara_Character_BP_C_UnLatchStartAnimation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATapejara_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection
	 */
	struct ATapejara_Character_BP_C_MoveToUsingDirection_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate
	 */
	struct ATapejara_Character_BP_C_UnLatchMoveAndRotate_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent
	 */
	struct ATapejara_Character_BP_C_LatchingStartEvent_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent
	 */
	struct ATapejara_Character_BP_C_LatchingEndEvent_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement
	 */
	struct ATapejara_Character_BP_C_StopMovement_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation
	 */
	struct ATapejara_Character_BP_C_DisableFaceLatchingObjectRotation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 */
	struct ATapejara_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera
	 */
	struct ATapejara_Character_BP_C_SetPassengersSurfaceCamera_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Pitch;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Roll;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject
	 */
	struct ATapejara_Character_BP_C_LocalFaceLatchingObject_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump
	 */
	struct ATapejara_Character_BP_C_StartedJump_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveDuringUnlatching
	 */
	struct ATapejara_Character_BP_C_MoveDuringUnlatching_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP
	 */
	struct ATapejara_Character_BP_C_ExecuteUbergraph_Tapejara_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
