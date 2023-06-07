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
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.HasSelfBuried
	 */
	struct APurlovia_Character_BP_C_HasSelfBuried_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPIsHidden
	 */
	struct APurlovia_Character_BP_C_BPIsHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateCollisions
	 */
	struct APurlovia_Character_BP_C_UpdateCollisions_Params
	{
	public:
		bool                                                       Buried;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanUnburyNormal
	 */
	struct APurlovia_Character_BP_C_CanUnburyNormal_Params
	{
	public:
		bool                                                       Can;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound Out Particles
	 */
	struct APurlovia_Character_BP_C_ShowMoundOutParticles_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerNonDedicated
	 */
	struct APurlovia_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Update Bury Mesh Transform Variable
	 */
	struct APurlovia_Character_BP_C_UpdateBuryMeshTransformVariable_Params
	{
	public:
		bool                                                       updateMeshLocation;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound In Particles
	 */
	struct APurlovia_Character_BP_C_ShowMoundInParticles_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Bury MoundIfNeeded
	 */
	struct APurlovia_Character_BP_C_ShowBuryMoundIfNeeded_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Hide Bury Mound
	 */
	struct APurlovia_Character_BP_C_HideBuryMound_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.RotateToTarget
	 */
	struct APurlovia_Character_BP_C_RotateToTarget_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidTarget
	 */
	struct APurlovia_Character_BP_C_IsValidTarget_Params
	{
	public:
		bool                                                       DoWeightCheck;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NXLV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Valid;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BCC1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct APurlovia_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.isBuryAttack
	 */
	struct APurlovia_Character_BP_C_isBuryAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isBuryAttack;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPDoAttack
	 */
	struct APurlovia_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryBury
	 */
	struct APurlovia_Character_BP_C_TryBury_Params
	{
	public:
		bool                                                       PlayAnim;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       skipBuriedCheck;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       couldBury;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Should Show Bury Mound
	 */
	struct APurlovia_Character_BP_C_ShouldShowBuryMound_Params
	{
	public:
		bool                                                       shouldShowMesh;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MOJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPAdjustDamage
	 */
	struct APurlovia_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CTOC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRTS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidSurface
	 */
	struct APurlovia_Character_BP_C_IsValidSurface_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QMP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPCharacterSleeped
	 */
	struct APurlovia_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct APurlovia_Character_BP_C_BPOnAnimPlayedNotify_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicate;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicateToOwner;                                       // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseAndServerUpdateMesh;                       // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseOnServer;                                  // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishBuriedJump
	 */
	struct APurlovia_Character_BP_C_FinishBuriedJump_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.CalculateBuryMeshTransform
	 */
	struct APurlovia_Character_BP_C_CalculateBuryMeshTransform_Params
	{
	public:
		struct UObject_FTransform                                  Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct APurlovia_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Up Impulse
	 */
	struct APurlovia_Character_BP_C_GetBuriedAttackUpImpulse_Params
	{
	public:
		struct FVector                                             UpImpulse;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X5XP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Down Impulse
	 */
	struct APurlovia_Character_BP_C_GetBuriedAttackDownImpulse_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9LM2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnRep_isBuried
	 */
	struct APurlovia_Character_BP_C_OnRep_isBuried_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsDinoInWater
	 */
	struct APurlovia_Character_BP_C_IsDinoInWater_Params
	{
	public:
		bool                                                       onWater;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishNormalJump
	 */
	struct APurlovia_Character_BP_C_FinishNormalJump_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ApplyNormalJumpImpulse
	 */
	struct APurlovia_Character_BP_C_ApplyNormalJumpImpulse_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnJumped
	 */
	struct APurlovia_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintCanAttack
	 */
	struct APurlovia_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NF0P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct APurlovia_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPNotifyBumpedPawn
	 */
	struct APurlovia_Character_BP_C_BPNotifyBumpedPawn_Params
	{
	public:
		class APrimalCharacter*                                    BumpedPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Can Unbury
	 */
	struct APurlovia_Character_BP_C_CanUnbury_Params
	{
	public:
		bool                                                       canComeOut;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShouldComeOut
	 */
	struct APurlovia_Character_BP_C_ShouldComeOut_Params
	{
	public:
		bool                                                       comeOut;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_79PY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Has Conflict with AI
	 */
	struct APurlovia_Character_BP_C_HasConflictwithAI_Params
	{
	public:
		bool                                                       hasConflict;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.canBury
	 */
	struct APurlovia_Character_BP_C_canBury_Params
	{
	public:
		bool                                                       forceBury;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canBury;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I2HW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanPlayBuryAnim
	 */
	struct APurlovia_Character_BP_C_CanPlayBuryAnim_Params
	{
	public:
		bool                                                       canPlayBury;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanJumpAtTarget
	 */
	struct APurlovia_Character_BP_C_CanJumpAtTarget_Params
	{
	public:
		bool                                                       FoundTarget;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42XY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerServer
	 */
	struct APurlovia_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPGetMultiUseEntries
	 */
	struct APurlovia_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTryMultiUse
	 */
	struct APurlovia_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.UserConstructionScript
	 */
	struct APurlovia_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.Bury
	 */
	struct APurlovia_Character_BP_C_Bury_Params
	{
	public:
		bool                                                       PlayAnim;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Attack
	 */
	struct APurlovia_Character_BP_C_ComeOut_Attack_Params
	{
	public:
		int32_t                                                    Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Normal
	 */
	struct APurlovia_Character_BP_C_ComeOut_Normal_Params
	{
	public:
		bool                                                       PlayAnim;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutAttack
	 */
	struct APurlovia_Character_BP_C_TryComeOutAttack_Params
	{
	public:
		int32_t                                                    Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnComeOut
	 */
	struct APurlovia_Character_BP_C_OnComeOut_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnNormalJump
	 */
	struct APurlovia_Character_BP_C_OnNormalJump_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPUnstasis
	 */
	struct APurlovia_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnMovementChanged
	 */
	struct APurlovia_Character_BP_C_OnMovementChanged_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct APurlovia_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateMeshesAfterDelay
	 */
	struct APurlovia_Character_BP_C_UpdateMeshesAfterDelay_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutShortRange
	 */
	struct APurlovia_Character_BP_C_ComeOutShortRange_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutLongRange
	 */
	struct APurlovia_Character_BP_C_ComeOutLongRange_Params
	{
	public:
		int32_t                                                    Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnPurloviaSleeped
	 */
	struct APurlovia_Character_BP_C_OnPurloviaSleeped_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.PreComeOutActions
	 */
	struct APurlovia_Character_BP_C_PreComeOutActions_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutNormal
	 */
	struct APurlovia_Character_BP_C_TryComeOutNormal_Params
	{
	public:
		bool                                                       PlayAnim;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceUnbury;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnBuried
	 */
	struct APurlovia_Character_BP_C_OnBuried_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShowBuryMeshAfterDelay
	 */
	struct APurlovia_Character_BP_C_ShowBuryMeshAfterDelay_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.HideBuryMeshAfterDelay
	 */
	struct APurlovia_Character_BP_C_HideBuryMeshAfterDelay_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.FastBury
	 */
	struct APurlovia_Character_BP_C_FastBury_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnClientConnect
	 */
	struct APurlovia_Character_BP_C_OnClientConnect_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnWildServerConnect
	 */
	struct APurlovia_Character_BP_C_OnWildServerConnect_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnTamedServerConnect
	 */
	struct APurlovia_Character_BP_C_OnTamedServerConnect_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ReceiveBeginPlay
	 */
	struct APurlovia_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Purlovia_Character_BP.Purlovia_Character_BP_C.ExecuteUbergraph_Purlovia_Character_BP
	 */
	struct APurlovia_Character_BP_C_ExecuteUbergraph_Purlovia_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
