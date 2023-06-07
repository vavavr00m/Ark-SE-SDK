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
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CheckTeamAndToggleTroughVisibility
	 */
	struct AMilkGlider_Character_BP_C_CheckTeamAndToggleTroughVisibility_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bNurseVisualActive
	 */
	struct AMilkGlider_Character_BP_C_OnRep_bNurseVisualActive_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceivePossessed
	 */
	struct AMilkGlider_Character_BP_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InterceptInputEvent
	 */
	struct AMilkGlider_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.PickUpBabies
	 */
	struct AMilkGlider_Character_BP_C_PickUpBabies_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetPassengerDinoAdditionalOffset
	 */
	struct AMilkGlider_Character_BP_C_BPGetPassengerDinoAdditionalOffset_Params
	{
	public:
		class APrimalDinoCharacter*                                Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AMilkGlider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct AMilkGlider_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateNursingFx
	 */
	struct AMilkGlider_Character_BP_C_UpdateNursingFx_Params
	{
	public:
		bool                                                       bUseOverrideIsNursing;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsNursing;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanNurseDino
	 */
	struct AMilkGlider_Character_BP_C_CanNurseDino_Params
	{
	public:
		class APrimalDinoCharacter*                                OtherDino;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KL2F[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPApplyCharacterSnapshot
	 */
	struct AMilkGlider_Character_BP_C_BPApplyCharacterSnapshot_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              To;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxExtent;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Pose;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCollisionOn;                                            // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GLC8[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.TryToPlayBabyPassengerCuddleAnim
	 */
	struct AMilkGlider_Character_BP_C_TryToPlayBabyPassengerCuddleAnim_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateClientCameraShake
	 */
	struct AMilkGlider_Character_BP_C_UpdateClientCameraShake_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPAdjustAttackIndex
	 */
	struct AMilkGlider_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetAIGlideDirection
	 */
	struct AMilkGlider_Character_BP_C_GetAIGlideDirection_Params
	{
	public:
		struct FVector                                             MoveDirection;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldForceFlee
	 */
	struct AMilkGlider_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideFinalWanderLocation
	 */
	struct AMilkGlider_Character_BP_C_OverrideFinalWanderLocation_Params
	{
	public:
		struct FVector                                             outVec;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5Q1V[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.NotifyTribesOfBabyStolen
	 */
	struct AMilkGlider_Character_BP_C_NotifyTribesOfBabyStolen_Params
	{
	public:
		class APrimalDinoCharacter*                                StolenBaby;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            TheifSC;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetBonesToHideOnAllocation
	 */
	struct AMilkGlider_Character_BP_C_BPGetBonesToHideOnAllocation_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Til Pass Hide Seats
	 */
	struct AMilkGlider_Character_BP_C_TickTilPassHideSeats_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UnhidePassengerSeats
	 */
	struct AMilkGlider_Character_BP_C_UnhidePassengerSeats_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerGlideClearFoilage
	 */
	struct AMilkGlider_Character_BP_C_ServerGlideClearFoilage_Params
	{
	public:
		bool                                                       bIgnoreGlideCheck;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BD7G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_ForceAllowAddBuff
	 */
	struct AMilkGlider_Character_BP_C_BP_ForceAllowAddBuff_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GU0F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.HasGeyserBuff
	 */
	struct AMilkGlider_Character_BP_C_HasGeyserBuff_Params
	{
	public:
		bool                                                       bHasBuff;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AMilkGlider_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearPassenger
	 */
	struct AMilkGlider_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyAddPassenger
	 */
	struct AMilkGlider_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCarriedDinoBabyRescaled
	 */
	struct AMilkGlider_Character_BP_C_BPCarriedDinoBabyRescaled_Params
	{
	public:
		class APrimalDinoCharacter*                                AgingCarriedDino;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewAge;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ScaleBabyDino
	 */
	struct AMilkGlider_Character_BP_C_ScaleBabyDino_Params
	{
	public:
		class APrimalDinoCharacter*                                BabyToScale;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Can Parachute
	 */
	struct AMilkGlider_Character_BP_C_CanParachute_Params
	{
	public:
		bool                                                       ToStart;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowedToParachute;                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RotateToZeroPitch
	 */
	struct AMilkGlider_Character_BP_C_RotateToZeroPitch_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bWantsToParachute
	 */
	struct AMilkGlider_Character_BP_C_OnRep_bWantsToParachute_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetParachuteState
	 */
	struct AMilkGlider_Character_BP_C_SetParachuteState_Params
	{
	public:
		bool                                                       bStartParachute;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseCD;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct AMilkGlider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanStartAutoGlide
	 */
	struct AMilkGlider_Character_BP_C_CanStartAutoGlide_Params
	{
	public:
		bool                                                       bStartGlide;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateSlidingState
	 */
	struct AMilkGlider_Character_BP_C_UpdateSlidingState_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetGravityZScale
	 */
	struct AMilkGlider_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
	 */
	struct AMilkGlider_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params
	{
	public:
		class APrimalDinoCharacter*                                AgingCarriedDino;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PreviousAge;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewAge;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetNextValidEmptySeat
	 */
	struct AMilkGlider_Character_BP_C_GetNextValidEmptySeat_Params
	{
	public:
		int32_t                                                    SeatNum;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AMilkGlider_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OKZP[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPClientDoMultiUse
	 */
	struct AMilkGlider_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Valid Baby Dino for Passenger
	 */
	struct AMilkGlider_Character_BP_C_IsValidBabyDinoforPassenger_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoToCheck;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSkipAllyCheck;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSkipDistanceCheck;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ValidPassenger;                                          // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X1XK[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCanTakePassenger
	 */
	struct AMilkGlider_Character_BP_C_BPCanTakePassenger_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PassengerSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForcePassenger;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowFlyersAndWaterDinos;                               // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AMilkGlider_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetDivingRatio
	 */
	struct AMilkGlider_Character_BP_C_GetDivingRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOVInterpSpeed
	 */
	struct AMilkGlider_Character_BP_C_BPModifyFOVInterpSpeed_Params
	{
	public:
		float                                                      FOVInterpSpeedIn;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetFOVRatio
	 */
	struct AMilkGlider_Character_BP_C_GetFOVRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOV
	 */
	struct AMilkGlider_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsDiving
	 */
	struct AMilkGlider_Character_BP_C_IsDiving_Params
	{
	public:
		bool                                                       bIsDiving;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDiveBomb
	 */
	struct AMilkGlider_Character_BP_C_CanDiveBomb_Params
	{
	public:
		bool                                                       bFromGlide;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanAttack;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPDoAttack
	 */
	struct AMilkGlider_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnStartJump
	 */
	struct AMilkGlider_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDive
	 */
	struct AMilkGlider_Character_BP_C_CanDive_Params
	{
	public:
		bool                                                       bCanDive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingPitch
	 */
	struct AMilkGlider_Character_BP_C_GetGlidingPitch_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentPitch;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewPitch;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyLevelUp
	 */
	struct AMilkGlider_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearGliding
	 */
	struct AMilkGlider_Character_BP_C_ClearGliding_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DisableNursing
	 */
	struct AMilkGlider_Character_BP_C_DisableNursing_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EnableNursing
	 */
	struct AMilkGlider_Character_BP_C_EnableNursing_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AMilkGlider_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTryMultiUse
	 */
	struct AMilkGlider_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldLimitRightDirection
	 */
	struct AMilkGlider_Character_BP_C_BPShouldLimitRightDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveRight
	 */
	struct AMilkGlider_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8DKU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyRightDirectionInput
	 */
	struct AMilkGlider_Character_BP_C_BPModifyRightDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct AMilkGlider_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMilkGlider_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AMilkGlider_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LookDirectionForJumpRefactor
	 */
	struct AMilkGlider_Character_BP_C_LookDirectionForJumpRefactor_Params
	{
	public:
		struct FVector                                             OutDir;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveForward
	 */
	struct AMilkGlider_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Sliding
	 */
	struct AMilkGlider_Character_BP_C_IsSliding_Params
	{
	public:
		bool                                                       bIsSliding;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetSlideDecayMultiplierFromSlope
	 */
	struct AMilkGlider_Character_BP_C_GetSlideDecayMultiplierFromSlope_Params
	{
	public:
		float                                                      MultiRatioDirection;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CharSlideAngle;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Sliding
	 */
	struct AMilkGlider_Character_BP_C_ClientTickSliding_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server Tick Sliding
	 */
	struct AMilkGlider_Character_BP_C_ServerTickSliding_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Clear Sliding
	 */
	struct AMilkGlider_Character_BP_C_ClearSliding_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartSliding
	 */
	struct AMilkGlider_Character_BP_C_StartSliding_Params
	{
	public:
		bool                                                       bFromGlide;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bJustDiveBombed;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RUYI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanSlide
	 */
	struct AMilkGlider_Character_BP_C_CanSlide_Params
	{
	public:
		bool                                                       bCanSlide;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanChargeJump
	 */
	struct AMilkGlider_Character_BP_C_CanChargeJump_Params
	{
	public:
		bool                                                       bCanJump;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideFlyingVelocity
	 */
	struct AMilkGlider_Character_BP_C_BPOverrideFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct AMilkGlider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQPU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Get Gliding Rotation Rate
	 */
	struct AMilkGlider_Character_BP_C_GetGlidingRotationRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct AMilkGlider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingSpeedRatio
	 */
	struct AMilkGlider_Character_BP_C_GetGlidingSpeedRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Gliding
	 */
	struct AMilkGlider_Character_BP_C_ClientTickGliding_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_CurrentExtraState
	 */
	struct AMilkGlider_Character_BP_C_OnRep_CurrentExtraState_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunReleased
	 */
	struct AMilkGlider_Character_BP_C_InputRunReleased_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunPressed
	 */
	struct AMilkGlider_Character_BP_C_InputRunPressed_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerServer
	 */
	struct AMilkGlider_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsGliding
	 */
	struct AMilkGlider_Character_BP_C_IsGliding_Params
	{
	public:
		bool                                                       bIsGliding;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Force ForwardInput
	 */
	struct AMilkGlider_Character_BP_C_TickForceForwardInput_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanGlide
	 */
	struct AMilkGlider_Character_BP_C_CanGlide_Params
	{
	public:
		bool                                                       ToStart;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowedToGlide;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartGlide
	 */
	struct AMilkGlider_Character_BP_C_StartGlide_Params
	{
	public:
		bool                                                       bFromSlide;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerTickGliding
	 */
	struct AMilkGlider_Character_BP_C_ServerTickGliding_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetHUDElements
	 */
	struct AMilkGlider_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerNonDedicated
	 */
	struct AMilkGlider_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifySetRider
	 */
	struct AMilkGlider_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCharacterSleeped
	 */
	struct AMilkGlider_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearRider
	 */
	struct AMilkGlider_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerStopJump
	 */
	struct AMilkGlider_Character_BP_C_ServerStopJump_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AMilkGlider_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetLaunchDirection
	 */
	struct AMilkGlider_Character_BP_C_GetLaunchDirection_Params
	{
	public:
		class AActor*                                              CalcActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LaunchAtTracePoint
	 */
	struct AMilkGlider_Character_BP_C_LaunchAtTracePoint_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteJump
	 */
	struct AMilkGlider_Character_BP_C_ExecuteJump_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Prep Jump
	 */
	struct AMilkGlider_Character_BP_C_PrepJump_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShouldStopJumpRotation
	 */
	struct AMilkGlider_Character_BP_C_ShouldStopJumpRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_77TU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetClampedLookDir
	 */
	struct AMilkGlider_Character_BP_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bClamp;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1JQR[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.JumpingTrace
	 */
	struct AMilkGlider_Character_BP_C_JumpingTrace_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShortestAngleDistance
	 */
	struct AMilkGlider_Character_BP_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Find Leap Dir
	 */
	struct AMilkGlider_Character_BP_C_FindLeapDir_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UserConstructionScript
	 */
	struct AMilkGlider_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_RunToggle_K2Node_InputActionEvent_200
	 */
	struct AMilkGlider_Character_BP_C_InpActEvt_RunToggle_K2Node_InputActionEvent_200_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_199
	 */
	struct AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_199_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_198
	 */
	struct AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_198_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpPressed
	 */
	struct AMilkGlider_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpReleased
	 */
	struct AMilkGlider_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedPress
	 */
	struct AMilkGlider_Character_BP_C_DelayedPress_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Request Jump Response
	 */
	struct AMilkGlider_Character_BP_C_RequestJumpResponse_Params
	{
	public:
		bool                                                       isHoldingJump;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6HG6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ChargeTime;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_SetPreventMovement
	 */
	struct AMilkGlider_Character_BP_C_Multi_SetPreventMovement_Params
	{
	public:
		bool                                                       NewPreventMovement;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedClearJumping
	 */
	struct AMilkGlider_Character_BP_C_DelayedClearJumping_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TraceTargetDir
	 */
	struct AMilkGlider_Character_BP_C_Server_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       JumpInstant;                                             // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartJumpIdle
	 */
	struct AMilkGlider_Character_BP_C_StartJumpIdle_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearJump
	 */
	struct AMilkGlider_Character_BP_C_ClearJump_Params
	{
	public:
		bool                                                       ForceImmediateClear;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_TraceTargetDir
	 */
	struct AMilkGlider_Character_BP_C_Multi_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateAllJumpRotation
	 */
	struct AMilkGlider_Character_BP_C_UpdateAllJumpRotation_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateJumpRotation
	 */
	struct AMilkGlider_Character_BP_C_UpdateJumpRotation_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RequestJumpReady
	 */
	struct AMilkGlider_Character_BP_C_RequestJumpReady_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_JumpStart
	 */
	struct AMilkGlider_Character_BP_C_Event_JumpStart_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StartGlide
	 */
	struct AMilkGlider_Character_BP_C_Multi_StartGlide_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewSpeedMultiplier;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputPressed
	 */
	struct AMilkGlider_Character_BP_C_Server_RunInputPressed_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputReleased
	 */
	struct AMilkGlider_Character_BP_C_Server_RunInputReleased_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMilkGlider_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TargetInput
	 */
	struct AMilkGlider_Character_BP_C_Server_TargetInput_Params
	{
	public:
		bool                                                       IsPressed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPUnstasis
	 */
	struct AMilkGlider_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DiveBomb
	 */
	struct AMilkGlider_Character_BP_C_DiveBomb_Params
	{
	public:
		bool                                                       bFromDive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OwningClientDiveBombCameraShake
	 */
	struct AMilkGlider_Character_BP_C_OwningClientDiveBombCameraShake_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromDiveBomb;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnJumpPressedReroute
	 */
	struct AMilkGlider_Character_BP_C_OnJumpPressedReroute_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.WaterJump
	 */
	struct AMilkGlider_Character_BP_C_WaterJump_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnDied_Event
	 */
	struct AMilkGlider_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_SetParachuteInput
	 */
	struct AMilkGlider_Character_BP_C_Server_SetParachuteInput_Params
	{
	public:
		struct FVector                                             ParachuteInputVector;                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetToStoredVelocity
	 */
	struct AMilkGlider_Character_BP_C_SetToStoredVelocity_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_Init
	 */
	struct AMilkGlider_Character_BP_C_Event_Init_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StealBaby
	 */
	struct AMilkGlider_Character_BP_C_Multi_StealBaby_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.AIJump
	 */
	struct AMilkGlider_Character_BP_C_AIJump_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EventStopPara
	 */
	struct AMilkGlider_Character_BP_C_EventStopPara_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BellyFlopJump
	 */
	struct AMilkGlider_Character_BP_C_BellyFlopJump_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_UpdateNursingFX
	 */
	struct AMilkGlider_Character_BP_C_Multi_UpdateNursingFX_Params
	{
	public:
		bool                                                       bNewIsNursing;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DropAllBabes
	 */
	struct AMilkGlider_Character_BP_C_DropAllBabes_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerDropBabes
	 */
	struct AMilkGlider_Character_BP_C_ServerDropBabes_Params
	{
	public:
		class AShooterPlayerController*                            Shooter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerPickUpBabes
	 */
	struct AMilkGlider_Character_BP_C_ServerPickUpBabes_Params
	{
	public:
		class AShooterPlayerController*                            Shooter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopSlideSound
	 */
	struct AMilkGlider_Character_BP_C_Event_StopSlideSound_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopGlideSound
	 */
	struct AMilkGlider_Character_BP_C_Event_StopGlideSound_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopParaSound
	 */
	struct AMilkGlider_Character_BP_C_Event_StopParaSound_Params
	{	};

	/**
	 * Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteUbergraph_MilkGlider_Character_BP
	 */
	struct AMilkGlider_Character_BP_C_ExecuteUbergraph_MilkGlider_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
