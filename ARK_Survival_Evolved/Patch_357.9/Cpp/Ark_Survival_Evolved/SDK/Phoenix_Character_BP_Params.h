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
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveHit
	 */
	struct APhoenix_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SCYE[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPPlayDying
	 */
	struct APhoenix_Character_BP_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IBSL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanStartSuperCharge
	 */
	struct APhoenix_Character_BP_C_CanStartSuperCharge_Params
	{
	public:
		bool                                                       canStart;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_389T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPSetupTamed
	 */
	struct APhoenix_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanUseSuperCharge
	 */
	struct APhoenix_Character_BP_C_CanUseSuperCharge_Params
	{
	public:
		bool                                                       canSupercharge;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateTimerServer
	 */
	struct APhoenix_Character_BP_C_UpdateTimerServer_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N754[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRep_isCharging
	 */
	struct APhoenix_Character_BP_C_OnRep_isCharging_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.ApplyFireToNearbyCreatures
	 */
	struct APhoenix_Character_BP_C_ApplyFireToNearbyCreatures_Params
	{
	public:
		float                                                      fireRadius;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct APhoenix_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.SetAnimsWeightForAttack
	 */
	struct APhoenix_Character_BP_C_SetAnimsWeightForAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetMode
	 */
	struct APhoenix_Character_BP_C_GetMode_Params
	{
	public:
		bool                                                       Regular;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Blaze;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct APhoenix_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPGetMultiUseEntries
	 */
	struct APhoenix_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTryMultiUse
	 */
	struct APhoenix_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.On StateChanged Client
	 */
	struct APhoenix_Character_BP_C_OnStateChangedClient_Params
	{
	public:
		bool                                                       hasRisen;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fast;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HUH1[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Is In Water
	 */
	struct APhoenix_Character_BP_C_IsInWater_Params
	{
	public:
		bool                                                       currentlyOnWater;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanAshStayOnLocation
	 */
	struct APhoenix_Character_BP_C_CanAshStayOnLocation_Params
	{
	public:
		bool                                                       canAshStay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Calculate BuryMeshTransform
	 */
	struct APhoenix_Character_BP_C_CalculateBuryMeshTransform_Params
	{
	public:
		bool                                                       rise;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KL9Z[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct UObject_FTransform                                  buryMeshTransform;                                       // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetSuperheatState
	 */
	struct APhoenix_Character_BP_C_GetSuperheatState_Params
	{
	public:
		bool                                                       isSuperheat;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JXC8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanAttack
	 */
	struct APhoenix_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NH1J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateMoundVisibilityAndCollision
	 */
	struct APhoenix_Character_BP_C_UpdateMoundVisibilityAndCollision_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       skipVisibility;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Update MeshVisibility and Collision
	 */
	struct APhoenix_Character_BP_C_UpdateMeshVisibilityandCollision_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       skipVisibility;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTimerServer
	 */
	struct APhoenix_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPAdjustDamage
	 */
	struct APhoenix_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VZ9H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2PGB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SW4W[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.ConvertDamageToAffinity
	 */
	struct APhoenix_Character_BP_C_ConvertDamageToAffinity_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FOKW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         Instigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.UserConstructionScript
	 */
	struct APhoenix_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__FinishedFunc
	 */
	struct APhoenix_Character_BP_C_UndissolveMoundTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__UpdateFunc
	 */
	struct APhoenix_Character_BP_C_UndissolveMoundTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__FinishedFunc
	 */
	struct APhoenix_Character_BP_C_DissolveMoundTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__UpdateFunc
	 */
	struct APhoenix_Character_BP_C_DissolveMoundTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__FinishedFunc
	 */
	struct APhoenix_Character_BP_C_DissolvePhoenixMesh__FinishedFunc_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__UpdateFunc
	 */
	struct APhoenix_Character_BP_C_DissolvePhoenixMesh__UpdateFunc_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnDied_Event
	 */
	struct APhoenix_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveBeginPlay
	 */
	struct APhoenix_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.rise
	 */
	struct APhoenix_Character_BP_C_rise_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRise
	 */
	struct APhoenix_Character_BP_C_OnRise_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMound
	 */
	struct APhoenix_Character_BP_C_DissolveMound_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDie
	 */
	struct APhoenix_Character_BP_C_FakeDie_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnFakeDie
	 */
	struct APhoenix_Character_BP_C_OnFakeDie_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AshFireParticles
	 */
	struct APhoenix_Character_BP_C_Die_AshFireParticles_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixDie_MeshVisuals
	 */
	struct APhoenix_Character_BP_C_PhoenixDie_MeshVisuals_Params
	{
	public:
		bool                                                       Dissolve;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixRise_MeshVisuals
	 */
	struct APhoenix_Character_BP_C_PhoenixRise_MeshVisuals_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPUnstasis
	 */
	struct APhoenix_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixRise_Multicast
	 */
	struct APhoenix_Character_BP_C_OnPhoenixRise_Multicast_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixFakeDies_Multicast
	 */
	struct APhoenix_Character_BP_C_OnPhoenixFakeDies_Multicast_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.KillPhoenix
	 */
	struct APhoenix_Character_BP_C_KillPhoenix_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.RiseFailsafe
	 */
	struct APhoenix_Character_BP_C_RiseFailsafe_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDieFailsafe
	 */
	struct APhoenix_Character_BP_C_FakeDieFailsafe_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct APhoenix_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AshFireParticles
	 */
	struct APhoenix_Character_BP_C_Rise_AshFireParticles_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMound
	 */
	struct APhoenix_Character_BP_C_UndissolveMound_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AllEffects
	 */
	struct APhoenix_Character_BP_C_Rise_AllEffects_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AllEffects
	 */
	struct APhoenix_Character_BP_C_Die_AllEffects_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.ChangeChargeState_Server
	 */
	struct APhoenix_Character_BP_C_ChangeChargeState_Server_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.StopSuperCharge
	 */
	struct APhoenix_Character_BP_C_StopSuperCharge_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.StartSuperCharge
	 */
	struct APhoenix_Character_BP_C_StartSuperCharge_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_BodyFireParticles
	 */
	struct APhoenix_Character_BP_C_Rise_BodyFireParticles_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_BodyFireParticles
	 */
	struct APhoenix_Character_BP_C_Die_BodyFireParticles_Params
	{
	public:
		bool                                                       fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.DropInventory
	 */
	struct APhoenix_Character_BP_C_DropInventory_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.DoChargeImpulse
	 */
	struct APhoenix_Character_BP_C_DoChargeImpulse_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpPressed
	 */
	struct APhoenix_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpReleased
	 */
	struct APhoenix_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.AnimNotify_FlyIdle_NoDed
	 */
	struct APhoenix_Character_BP_C_AnimNotify_FlyIdle_NoDed_Params
	{	};

	/**
	 * Function Phoenix_Character_BP.Phoenix_Character_BP_C.ExecuteUbergraph_Phoenix_Character_BP
	 */
	struct APhoenix_Character_BP_C_ExecuteUbergraph_Phoenix_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
