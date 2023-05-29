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
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetHudData
	 */
	struct ATropeognathus_Character_BP_C_GetHudData_Params
	{
	public:
		bool                                                       HasSaddle;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LNYM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalInventoryComponent*                           InventoryComponent;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              SaddleFuelItem;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              FlakCannonAmmoItem;                                      // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUsingSuperFlight;                                      // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUsingSuperFlightBoost;                                 // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1LHZ[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FuelPercent;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CannonCooldownPercent;                                   // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      SpeedPercent;                                            // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetHUDElements
	 */
	struct ATropeognathus_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATropeognathus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWindGust
	 */
	struct ATropeognathus_Character_BP_C_IsUsingWindGust_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E3VS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartTime;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingForwardInput
	 */
	struct ATropeognathus_Character_BP_C_IsUsingForwardInput_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W81A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPUnsetupDinoTameable
	 */
	struct ATropeognathus_Character_BP_C_BPUnsetupDinoTameable_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BSetupDinoTameable
	 */
	struct ATropeognathus_Character_BP_C_BSetupDinoTameable_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRiderSocket
	 */
	struct ATropeognathus_Character_BP_C_UpdateRiderSocket_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetOverrideSocket
	 */
	struct ATropeognathus_Character_BP_C_GetOverrideSocket_Params
	{
	public:
		class FName                                                From;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowWakingTame
	 */
	struct ATropeognathus_Character_BP_C_AllowWakingTame_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OwningClientTryFlakCannonFire
	 */
	struct ATropeognathus_Character_BP_C_OwningClientTryFlakCannonFire_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterceptInputEvent
	 */
	struct ATropeognathus_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowPlayMontage
	 */
	struct ATropeognathus_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetDinoLevelUpAnimation
	 */
	struct ATropeognathus_Character_BP_C_GetDinoLevelUpAnimation_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTaming
	 */
	struct ATropeognathus_Character_BP_C_UpdateTaming_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPShowTamingPanel
	 */
	struct ATropeognathus_Character_BP_C_BPShowTamingPanel_Params
	{
	public:
		bool                                                       currentVisibility;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetTamingBuff
	 */
	struct ATropeognathus_Character_BP_C_GetTamingBuff_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_36FS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalBuff*                                         Buff;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideTamingDescriptionLabel
	 */
	struct ATropeognathus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
	{
	public:
		struct FSlateColor                                         TextColor;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintCanAttack
	 */
	struct ATropeognathus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KG07[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPAdjustDamage
	 */
	struct ATropeognathus_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3UMM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1BWU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4Y8L[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Replicated Control Rotation Public
	 */
	struct ATropeognathus_Character_BP_C_GetReplicatedControlRotationPublic_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsPlayingBlockingAnim
	 */
	struct ATropeognathus_Character_BP_C_IsPlayingBlockingAnim_Params
	{
	public:
		bool                                                       ReturnVal;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Drafting Public
	 */
	struct ATropeognathus_Character_BP_C_IsUsingDraftingPublic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       DraftAcked;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingDrafting
	 */
	struct ATropeognathus_Character_BP_C_IsUsingDrafting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       DraftAcked;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetRiderSocket
	 */
	struct ATropeognathus_Character_BP_C_BPGetRiderSocket_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsJumpHeld
	 */
	struct ATropeognathus_Character_BP_C_IsJumpHeld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnDinoCheat
	 */
	struct ATropeognathus_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B6M6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetReplicatedControlRotation
	 */
	struct ATropeognathus_Character_BP_C_GetReplicatedControlRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveTick
	 */
	struct ATropeognathus_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDoAttack
	 */
	struct ATropeognathus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct ATropeognathus_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsFlakCannonOnCooldown
	 */
	struct ATropeognathus_Character_BP_C_IsFlakCannonOnCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMGH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairLocation
	 */
	struct ATropeognathus_Character_BP_C_BPGetCrosshairLocation_Params
	{
	public:
		float                                                      CanvasClipX;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CanvasClipY;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutX;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutY;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ConsumeItem
	 */
	struct ATropeognathus_Character_BP_C_ConsumeItem_Params
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasAmmo
	 */
	struct ATropeognathus_Character_BP_C_HasAmmo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y7K9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Quantity;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStopJump
	 */
	struct ATropeognathus_Character_BP_C_BPOnStopJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7RA1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Fire Flak Cannon
	 */
	struct ATropeognathus_Character_BP_C_FireFlakCannon_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Has Saddle Public
	 */
	struct ATropeognathus_Character_BP_C_HasSaddlePublic_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetIsSuperSaddle;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnInventoryItemGrind
	 */
	struct ATropeognathus_Character_BP_C_OnInventoryItemGrind_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateWindGustCooldownVFX
	 */
	struct ATropeognathus_Character_BP_C_UpdateWindGustCooldownVFX_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ATropeognathus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z87S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryInterruptLanding
	 */
	struct ATropeognathus_Character_BP_C_TryInterruptLanding_Params
	{
	public:
		EMovementMode                                              Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_SuperFlight
	 */
	struct ATropeognathus_Character_BP_C_OnRep_SuperFlight_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetSuperFlight
	 */
	struct ATropeognathus_Character_BP_C_SetSuperFlight_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TriggerVFX;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Current Percent Of Max Fly Speed Public
	 */
	struct ATropeognathus_Character_BP_C_GetCurrentPercentOfMaxFlySpeedPublic_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Public
	 */
	struct ATropeognathus_Character_BP_C_IsUsingSuperFlightPublic_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9AN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartedEndingTime;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlight
	 */
	struct ATropeognathus_Character_BP_C_IsUsingSuperFlight_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9WZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartedEndingTime;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightBoost
	 */
	struct ATropeognathus_Character_BP_C_UpdateSuperFlightBoost_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Boost Public
	 */
	struct ATropeognathus_Character_BP_C_IsUsingSuperFlightBoostPublic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlightBoost
	 */
	struct ATropeognathus_Character_BP_C_IsUsingSuperFlightBoost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FCI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartTime;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketName
	 */
	struct ATropeognathus_Character_BP_C_BPGetDragSocketName_Params
	{
	public:
		class APrimalCharacter*                                    DraggingChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnCarriedStruggle
	 */
	struct ATropeognathus_Character_BP_C_OnCarriedStruggle_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWingGust
	 */
	struct ATropeognathus_Character_BP_C_IsUsingWingGust_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1EL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Update Jet FX
	 */
	struct ATropeognathus_Character_BP_C_UpdateJetFX_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasFuel
	 */
	struct ATropeognathus_Character_BP_C_HasFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E5PY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Quantity;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateFuel
	 */
	struct ATropeognathus_Character_BP_C_UpdateFuel_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ATropeognathus_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasSaddle
	 */
	struct ATropeognathus_Character_BP_C_HasSaddle_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetIsSuperSaddle;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NPSD[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDrafting
	 */
	struct ATropeognathus_Character_BP_C_UpdateDrafting_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketDinoName
	 */
	struct ATropeognathus_Character_BP_C_BPGetDragSocketDinoName_Params
	{
	public:
		class APrimalDinoCharacter*                                aGrabbedDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightStateData
	 */
	struct ATropeognathus_Character_BP_C_UpdateSuperFlightStateData_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAcceleration
	 */
	struct ATropeognathus_Character_BP_C_UpdateAcceleration_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRotationRate
	 */
	struct ATropeognathus_Character_BP_C_UpdateRotationRate_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAllyAOE
	 */
	struct ATropeognathus_Character_BP_C_UpdateAllyAOE_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetWindGustEpicenter
	 */
	struct ATropeognathus_Character_BP_C_GetWindGustEpicenter_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DoWing GustAOE
	 */
	struct ATropeognathus_Character_BP_C_DoWingGustAOE_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Diving Public
	 */
	struct ATropeognathus_Character_BP_C_IsDivingPublic_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4WBU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TimeDiveStart;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifySetRider
	 */
	struct ATropeognathus_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTPVOffset
	 */
	struct ATropeognathus_Character_BP_C_UpdateTPVOffset_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateCheckQuickTurn
	 */
	struct ATropeognathus_Character_BP_C_UpdateCheckQuickTurn_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSpeed
	 */
	struct ATropeognathus_Character_BP_C_UpdateSpeed_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDiving
	 */
	struct ATropeognathus_Character_BP_C_UpdateDiving_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsDiving
	 */
	struct ATropeognathus_Character_BP_C_IsDiving_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z8PW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TimeDiveStart;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     TimeStoppedDiving;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetAnimBP
	 */
	struct ATropeognathus_Character_BP_C_GetAnimBP_Params
	{
	public:
		class UTropeognathus_AnimBP_C*                             Ret;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
	 */
	struct ATropeognathus_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCDO
	 */
	struct ATropeognathus_Character_BP_C_GetCDO_Params
	{
	public:
		class ATropeognathus_Character_BP_C*                       AsTropeognathus_Character_BP_C;                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Quick Turning
	 */
	struct ATropeognathus_Character_BP_C_IsQuickTurning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JBWW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.EndQuickTurn
	 */
	struct ATropeognathus_Character_BP_C_EndQuickTurn_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartSuperFlightQuickTurn
	 */
	struct ATropeognathus_Character_BP_C_StartSuperFlightQuickTurn_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LastSuperFlightQuickTurn
	 */
	struct ATropeognathus_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightRoll
	 */
	struct ATropeognathus_Character_BP_C_UpdateSuperFlightRoll_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ATropeognathus_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B6HQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTrails
	 */
	struct ATropeognathus_Character_BP_C_UpdateTrails_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ActivateTrails
	 */
	struct ATropeognathus_Character_BP_C_ActivateTrails_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DeactivateTrails
	 */
	struct ATropeognathus_Character_BP_C_DeactivateTrails_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.RidingTick
	 */
	struct ATropeognathus_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnStartLandingNotify
	 */
	struct ATropeognathus_Character_BP_C_BP_OnStartLandingNotify_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideFlyingVelocity
	 */
	struct ATropeognathus_Character_BP_C_BPOverrideFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ATropeognathus_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ATropeognathus_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ATropeognathus_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MZEA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Z2G[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q33X[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnSetRunning
	 */
	struct ATropeognathus_Character_BP_C_BP_OnSetRunning_Params
	{
	public:
		bool                                                       bNewIsRunning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifyClearRider
	 */
	struct ATropeognathus_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ATropeognathus_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ATropeognathus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ATropeognathus_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPSetupTamed
	 */
	struct ATropeognathus_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QWTF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStartJump
	 */
	struct ATropeognathus_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ATropeognathus_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableCameraInterpolation
	 */
	struct ATropeognathus_Character_BP_C_DisableCameraInterpolation_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LatchingSurfaceNormal
	 */
	struct ATropeognathus_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateLatchedDinoCamera
	 */
	struct ATropeognathus_Character_BP_C_UpdateLatchedDinoCamera_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Controller Follow ActorRotation
	 */
	struct ATropeognathus_Character_BP_C_ControllerFollowActorRotation_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3G78[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReferenceLatchingObjects
	 */
	struct ATropeognathus_Character_BP_C_ReferenceLatchingObjects_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LineTrace
	 */
	struct ATropeognathus_Character_BP_C_LineTrace_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardLatching;                                        // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomthing;                                             // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B2XB[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterruptLatching
	 */
	struct ATropeognathus_Character_BP_C_InterruptLatching_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ProcessLatching
	 */
	struct ATropeognathus_Character_BP_C_ProcessLatching_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryLatch
	 */
	struct ATropeognathus_Character_BP_C_TryLatch_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardsLatching;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6GFT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UserConstructionScript
	 */
	struct ATropeognathus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_223
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_223_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_222
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_222_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_221
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_221_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_220
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_220_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_219
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_219_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_64
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_64_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_218
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_218_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_217
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_217_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_62
	 */
	struct ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_62_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Latch
	 */
	struct ATropeognathus_Character_BP_C_Latch_Params
	{
	public:
		bool                                                       BackwardsLatching;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchStartAnimation
	 */
	struct ATropeognathus_Character_BP_C_LatchStartAnimation_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatch
	 */
	struct ATropeognathus_Character_BP_C_UnLatch_Params
	{
	public:
		bool                                                       LatchingInterrupted;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchStartAnimation
	 */
	struct ATropeognathus_Character_BP_C_UnLatchStartAnimation_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATropeognathus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MoveToUsingDirection
	 */
	struct ATropeognathus_Character_BP_C_MoveToUsingDirection_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchMoveAndRotate
	 */
	struct ATropeognathus_Character_BP_C_UnLatchMoveAndRotate_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingStartEvent
	 */
	struct ATropeognathus_Character_BP_C_LatchingStartEvent_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingEndEvent
	 */
	struct ATropeognathus_Character_BP_C_LatchingEndEvent_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StopMovement
	 */
	struct ATropeognathus_Character_BP_C_StopMovement_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableFaceLatchingObjectRotation
	 */
	struct ATropeognathus_Character_BP_C_DisableFaceLatchingObjectRotation_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetPassengersSurfaceCamera
	 */
	struct ATropeognathus_Character_BP_C_SetPassengersSurfaceCamera_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Pitch;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Roll;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LocalFaceLatchingObject
	 */
	struct ATropeognathus_Character_BP_C_LocalFaceLatchingObject_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartedJump
	 */
	struct ATropeognathus_Character_BP_C_StartedJump_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerToggleSuperFlight
	 */
	struct ATropeognathus_Character_BP_C_ServerToggleSuperFlight_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSuperFightRightInput
	 */
	struct ATropeognathus_Character_BP_C_ServerSuperFightRightInput_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestSuperFlightQuickTurn
	 */
	struct ATropeognathus_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateQuickTurn
	 */
	struct ATropeognathus_Character_BP_C_UpdateQuickTurn_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestWindGust
	 */
	struct ATropeognathus_Character_BP_C_ServerRequestWindGust_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGust
	 */
	struct ATropeognathus_Character_BP_C_AnimNotify_WindGust_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientWindGust
	 */
	struct ATropeognathus_Character_BP_C_ClientWindGust_Params
	{
	public:
		struct FVector                                             Epicenter;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustVFX
	 */
	struct ATropeognathus_Character_BP_C_AnimNotify_WindGustVFX_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestFireFlakCannon
	 */
	struct ATropeognathus_Character_BP_C_ServerRequestFireFlakCannon_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 */
	struct ATropeognathus_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateLastForwardInputTime
	 */
	struct ATropeognathus_Character_BP_C_ServerUpdateLastForwardInputTime_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DelayedSuperFlightEnd
	 */
	struct ATropeognathus_Character_BP_C_DelayedSuperFlightEnd_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiSuperFlightEnd
	 */
	struct ATropeognathus_Character_BP_C_MultiSuperFlightEnd_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientTagDraftee
	 */
	struct ATropeognathus_Character_BP_C_ClientTagDraftee_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180End
	 */
	struct ATropeognathus_Character_BP_C_WindGust180End_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180Tick
	 */
	struct ATropeognathus_Character_BP_C_WindGust180Tick_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustCheckFor180
	 */
	struct ATropeognathus_Character_BP_C_AnimNotify_WindGustCheckFor180_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustBoost
	 */
	struct ATropeognathus_Character_BP_C_AnimNotify_WindGustBoost_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequest180
	 */
	struct ATropeognathus_Character_BP_C_ServerRequest180_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GamepadRightStickPressed
	 */
	struct ATropeognathus_Character_BP_C_GamepadRightStickPressed_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimePressedJump
	 */
	struct ATropeognathus_Character_BP_C_ServerSetLastTimePressedJump_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimeReleasedJump
	 */
	struct ATropeognathus_Character_BP_C_ServerSetLastTimeReleasedJump_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueLanding
	 */
	struct ATropeognathus_Character_BP_C_QueueLanding_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestLanding
	 */
	struct ATropeognathus_Character_BP_C_ServerRequestLanding_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnBola
	 */
	struct ATropeognathus_Character_BP_C_OnBola_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStartTime
	 */
	struct ATropeognathus_Character_BP_C_ServerUpdateRunningStartTime_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStopTime
	 */
	struct ATropeognathus_Character_BP_C_ServerUpdateRunningStopTime_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStarted
	 */
	struct ATropeognathus_Character_BP_C_MultiOnRunStarted_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStopped
	 */
	struct ATropeognathus_Character_BP_C_MultiOnRunStopped_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnSuperFlightStart
	 */
	struct ATropeognathus_Character_BP_C_MultiOnSuperFlightStart_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueGrabAttack
	 */
	struct ATropeognathus_Character_BP_C_QueueGrabAttack_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiThrusterVFXBoost
	 */
	struct ATropeognathus_Character_BP_C_MultiThrusterVFXBoost_Params
	{	};

	/**
	 * Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ExecuteUbergraph_Tropeognathus_Character_BP
	 */
	struct ATropeognathus_Character_BP_C_ExecuteUbergraph_Tropeognathus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
