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
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeEndedAlterRotation
	 */
	struct AMoleRat_Character_BP_C_ChargeEndedAlterRotation_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPAdjustDamage
	 */
	struct AMoleRat_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HL81[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_61AB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetTaming
	 */
	struct AMoleRat_Character_BP_C_ResetTaming_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AMoleRat_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveForward
	 */
	struct AMoleRat_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4LM[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveRight
	 */
	struct AMoleRat_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y2HB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnEndCharging
	 */
	struct AMoleRat_Character_BP_C_BPOnEndCharging_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.GiveAffinity
	 */
	struct AMoleRat_Character_BP_C_GiveAffinity_Params
	{
	public:
		class APrimalCharacter*                                    tamer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasTamed;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.SlidingUpdate
	 */
	struct AMoleRat_Character_BP_C_SlidingUpdate_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMoleRat_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyDroppedItemPickedUp
	 */
	struct AMoleRat_Character_BP_C_BPNotifyDroppedItemPickedUp_Params
	{
	public:
		class ADroppedItem*                                        itemPickedUp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    PickedUpBy;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanDamageActor
	 */
	struct AMoleRat_Character_BP_C_CanDamageActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TargetCanBeDamage;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YOUT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.Handle Hit Pawns
	 */
	struct AMoleRat_Character_BP_C_HandleHitPawns_Params
	{
	public:
		TArray<struct FHitResult>                                  HitTargets;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      DeltaTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleHitStatic
	 */
	struct AMoleRat_Character_BP_C_HandleHitStatic_Params
	{
	public:
		TArray<struct FHitResult>                                  HitTargets;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      DeltaTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleChargingCollisions
	 */
	struct AMoleRat_Character_BP_C_HandleChargingCollisions_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearRider
	 */
	struct AMoleRat_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearPassenger
	 */
	struct AMoleRat_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.NotifyPassengersIsCharging
	 */
	struct AMoleRat_Character_BP_C_NotifyPassengersIsCharging_Params
	{
	public:
		bool                                                       IsCharging;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_76J4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanUseGemAttack
	 */
	struct AMoleRat_Character_BP_C_CanUseGemAttack_Params
	{
	public:
		bool                                                       CanUseGemAttack;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.GetChargeValueScaled
	 */
	struct AMoleRat_Character_BP_C_GetChargeValueScaled_Params
	{
	public:
		float                                                      CurrentValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MinValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      velocityAlpha;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      scaledValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AMoleRat_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnJumped
	 */
	struct AMoleRat_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanJumpInternal
	 */
	struct AMoleRat_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugFunction
	 */
	struct AMoleRat_Character_BP_C_DebugFunction_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.SpeedGainFormula
	 */
	struct AMoleRat_Character_BP_C_SpeedGainFormula_Params
	{
	public:
		float                                                      alphaInput;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      alphaOutput;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnChargingTimer
	 */
	struct AMoleRat_Character_BP_C_OnChargingTimer_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPTimerServer
	 */
	struct AMoleRat_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnRepIsCharging
	 */
	struct AMoleRat_Character_BP_C_BPOnRepIsCharging_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnStopCharging
	 */
	struct AMoleRat_Character_BP_C_OnStopCharging_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.Scale All Charge Values
	 */
	struct AMoleRat_Character_BP_C_ScaleAllChargeValues_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.On StartCharging
	 */
	struct AMoleRat_Character_BP_C_OnStartCharging_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPChargingModifyInputAcceleration
	 */
	struct AMoleRat_Character_BP_C_BPChargingModifyInputAcceleration_Params
	{
	public:
		struct FVector                                             inputAcceleration;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.IsPassengerInFirstPersonMode
	 */
	struct AMoleRat_Character_BP_C_IsPassengerInFirstPersonMode_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMoleRat_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetFPVSocket
	 */
	struct AMoleRat_Character_BP_C_ResetFPVSocket_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateFPVSocketOnCharge
	 */
	struct AMoleRat_Character_BP_C_UpdateFPVSocketOnCharge_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.UserConstructionScript
	 */
	struct AMoleRat_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__FinishedFunc
	 */
	struct AMoleRat_Character_BP_C_EndChargeRotation__FinishedFunc_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__UpdateFunc
	 */
	struct AMoleRat_Character_BP_C_EndChargeRotation__UpdateFunc_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetTPVOffsetForRoll
	 */
	struct AMoleRat_Character_BP_C_SetTPVOffsetForRoll_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetNormalTPVOffset
	 */
	struct AMoleRat_Character_BP_C_SetNormalTPVOffset_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.StartCameraOffsetMovement
	 */
	struct AMoleRat_Character_BP_C_StartCameraOffsetMovement_Params
	{
	public:
		bool                                                       rollOffset;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugSphere
	 */
	struct AMoleRat_Character_BP_C_DebugSphere_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.SwitchToRollingAnims
	 */
	struct AMoleRat_Character_BP_C_SwitchToRollingAnims_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateForwardValue_Server
	 */
	struct AMoleRat_Character_BP_C_UpdateForwardValue_Server_Params
	{
	public:
		float                                                      newForwardValue;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeActions
	 */
	struct AMoleRat_Character_BP_C_ChargeActions_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestStopCharging_Server
	 */
	struct AMoleRat_Character_BP_C_RequestStopCharging_Server_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_SpawnDebris
	 */
	struct AMoleRat_Character_BP_C_AnimNotify_SpawnDebris_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_TrySpawnGem
	 */
	struct AMoleRat_Character_BP_C_AnimNotify_TrySpawnGem_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.EnableIKAfterDelay
	 */
	struct AMoleRat_Character_BP_C_EnableIKAfterDelay_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastResetPassengerPos
	 */
	struct AMoleRat_Character_BP_C_MulticastResetPassengerPos_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastSetPassengerInsideCenter
	 */
	struct AMoleRat_Character_BP_C_MulticastSetPassengerInsideCenter_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSpawnHoneyConsumedParticle
	 */
	struct AMoleRat_Character_BP_C_MultiSpawnHoneyConsumedParticle_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_LookForTameDrops
	 */
	struct AMoleRat_Character_BP_C_AnimNotify_LookForTameDrops_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSimulateVelocitySliding
	 */
	struct AMoleRat_Character_BP_C_MultiSimulateVelocitySliding_Params
	{
	public:
		struct FVector                                             VelocityToMaintain;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestServer_EndCharging
	 */
	struct AMoleRat_Character_BP_C_RequestServer_EndCharging_Params
	{	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiRotateTo
	 */
	struct AMoleRat_Character_BP_C_MultiRotateTo_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotationTime;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            StartingRotation;                                        // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoleRat_Character_BP.MoleRat_Character_BP_C.ExecuteUbergraph_MoleRat_Character_BP
	 */
	struct AMoleRat_Character_BP_C_ExecuteUbergraph_MoleRat_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
