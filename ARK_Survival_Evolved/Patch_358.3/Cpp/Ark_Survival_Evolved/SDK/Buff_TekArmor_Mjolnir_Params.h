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
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPDeactivated
	 */
	struct ABuff_TekArmor_Mjolnir_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ReceiveTick
	 */
	struct ABuff_TekArmor_Mjolnir_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_CleanupMjolnir
	 */
	struct ABuff_TekArmor_Mjolnir_C_MC_CleanupMjolnir_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ThrowingMonitorTick
	 */
	struct ABuff_TekArmor_Mjolnir_C_ThrowingMonitorTick_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckIsThrowBlocked
	 */
	struct ABuff_TekArmor_Mjolnir_C_CheckIsThrowBlocked_Params
	{
	public:
		struct FVector                                             ForThrowLocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBlocked;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J60H[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestFireProjectileMulticast
	 */
	struct ABuff_TekArmor_Mjolnir_C_ServerRequestFireProjectileMulticast_Params
	{
	public:
		struct FVector                                             ShootDir;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MCHitForEmitter
	 */
	struct ABuff_TekArmor_Mjolnir_C_MCHitForEmitter_Params
	{
	public:
		struct UObject_FTransform                                  HitTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AuthorityProjectileRequestsSync
	 */
	struct ABuff_TekArmor_Mjolnir_C_AuthorityProjectileRequestsSync_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_SyncProjectile
	 */
	struct ABuff_TekArmor_Mjolnir_C_MC_SyncProjectile_Params
	{
	public:
		bool                                                       bIsStuck;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N2ZF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_Mjolnir_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckShouldHideWeapon
	 */
	struct ABuff_TekArmor_Mjolnir_C_CheckShouldHideWeapon_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AllowTekPunch
	 */
	struct ABuff_TekArmor_Mjolnir_C_AllowTekPunch_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.canThrow
	 */
	struct ABuff_TekArmor_Mjolnir_C_canThrow_Params
	{
	public:
		bool                                                       IsForPostCheck;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O40U[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanAttack
	 */
	struct ABuff_TekArmor_Mjolnir_C_CanAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoLightningFan
	 */
	struct ABuff_TekArmor_Mjolnir_C_CanDoLightningFan_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9422[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.HandleBuffAnimNotify
	 */
	struct ABuff_TekArmor_Mjolnir_C_HandleBuffAnimNotify_Params
	{
	public:
		class FName                                                AnimNotifyName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              AnimNotifyStringData;                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnPulseEnd
	 */
	struct ABuff_TekArmor_Mjolnir_C_OnPulseEnd_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastSetPulse
	 */
	struct ABuff_TekArmor_Mjolnir_C_MulticastSetPulse_Params
	{
	public:
		bool                                                       ShouldPulse;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoPulseAttack
	 */
	struct ABuff_TekArmor_Mjolnir_C_CanDoPulseAttack_Params
	{
	public:
		bool                                                       CanPulse;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NNKV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartPulseAttack
	 */
	struct ABuff_TekArmor_Mjolnir_C_TryStartPulseAttack_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.IsDoingPulseAttack
	 */
	struct ABuff_TekArmor_Mjolnir_C_IsDoingPulseAttack_Params
	{
	public:
		bool                                                       IsDoingAttack;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ClientMjolnirSpawned
	 */
	struct ABuff_TekArmor_Mjolnir_C_ClientMjolnirSpawned_Params
	{
	public:
		class AProj_Mjolnir_C*                                     NewMjolnirProjectile;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastCallbackMjolnir
	 */
	struct ABuff_TekArmor_Mjolnir_C_MulticastCallbackMjolnir_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestMjolnirCallback
	 */
	struct ABuff_TekArmor_Mjolnir_C_ServerRequestMjolnirCallback_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnMjolnirReturned
	 */
	struct ABuff_TekArmor_Mjolnir_C_OnMjolnirReturned_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetLaunchLocation
	 */
	struct ABuff_TekArmor_Mjolnir_C_GetLaunchLocation_Params
	{
	public:
		struct FVector                                             LaunchLoc;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetAdjustedAim
	 */
	struct ABuff_TekArmor_Mjolnir_C_GetAdjustedAim_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestThrowMjolnir
	 */
	struct ABuff_TekArmor_Mjolnir_C_ServerRequestThrowMjolnir_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.FireProjectileMulticast
	 */
	struct ABuff_TekArmor_Mjolnir_C_FireProjectileMulticast_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShootDir;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SkillThrowMjolnir
	 */
	struct ABuff_TekArmor_Mjolnir_C_SkillThrowMjolnir_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStopLightning
	 */
	struct ABuff_TekArmor_Mjolnir_C_TryStopLightning_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UpdateMaterialAndParticles
	 */
	struct ABuff_TekArmor_Mjolnir_C_UpdateMaterialAndParticles_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsServer
	 */
	struct ABuff_TekArmor_Mjolnir_C_RemoveAllArcsServer_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyTargetArcMulticast
	 */
	struct ABuff_TekArmor_Mjolnir_C_DestroyTargetArcMulticast_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnNewActorAffectedMulticast
	 */
	struct ABuff_TekArmor_Mjolnir_C_OnNewActorAffectedMulticast_Params
	{
	public:
		class AActor*                                              actorAffected;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryAddNewArc
	 */
	struct ABuff_TekArmor_Mjolnir_C_TryAddNewArc_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveArcTargetServer
	 */
	struct ABuff_TekArmor_Mjolnir_C_RemoveArcTargetServer_Params
	{
	public:
		class AActor*                                              ArcTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ShouldRemoveArcForTarget
	 */
	struct ABuff_TekArmor_Mjolnir_C_ShouldRemoveArcForTarget_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       shouldRemove;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcForTarget
	 */
	struct ABuff_TekArmor_Mjolnir_C_DestroyArcForTarget_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ConnectArcToTarget
	 */
	struct ABuff_TekArmor_Mjolnir_C_ConnectArcToTarget_Params
	{
	public:
		struct FSTR_ChargeBeamInfo                                 ArcInfo;                                                 // 0x0000(0x0018)  (Parm)
		int32_t                                                    index;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcVisuals
	 */
	struct ABuff_TekArmor_Mjolnir_C_DestroyArcVisuals_Params
	{
	public:
		struct FSTR_ChargeBeamInfo                                 ArcInfo;                                                 // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsClient
	 */
	struct ABuff_TekArmor_Mjolnir_C_RemoveAllArcsClient_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetArcIntensity
	 */
	struct ABuff_TekArmor_Mjolnir_C_SetArcIntensity_Params
	{
	public:
		class UParticleSystemComponent*                            Arc;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetEndPoints
	 */
	struct ABuff_TekArmor_Mjolnir_C_SetEndPoints_Params
	{
	public:
		class UParticleSystemComponent*                            Arc;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndPoint1;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             endPoint2;                                               // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             endPoint3;                                               // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CreateNewArc
	 */
	struct ABuff_TekArmor_Mjolnir_C_CreateNewArc_Params
	{
	public:
		class AActor*                                              ToActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightning
	 */
	struct ABuff_TekArmor_Mjolnir_C_OnStopLightning_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightningMulticast
	 */
	struct ABuff_TekArmor_Mjolnir_C_OnStopLightningMulticast_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickServer
	 */
	struct ABuff_TekArmor_Mjolnir_C_LightningTickServer_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickClient
	 */
	struct ABuff_TekArmor_Mjolnir_C_LightningTickClient_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTick
	 */
	struct ABuff_TekArmor_Mjolnir_C_LightningTick_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightning
	 */
	struct ABuff_TekArmor_Mjolnir_C_OnStartLightning_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightningMulticast
	 */
	struct ABuff_TekArmor_Mjolnir_C_OnStartLightningMulticast_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartLightning
	 */
	struct ABuff_TekArmor_Mjolnir_C_TryStartLightning_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPSetupForInstigator
	 */
	struct ABuff_TekArmor_Mjolnir_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_Mjolnir_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_AltFire
	 */
	struct ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_AltFire_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger_Hold
	 */
	struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger
	 */
	struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting_Hold
	 */
	struct ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger_Hold
	 */
	struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting
	 */
	struct ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger
	 */
	struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayCameraShake
	 */
	struct ABuff_TekArmor_Mjolnir_C_PlayCameraShake_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_PlayThrow
	 */
	struct ABuff_TekArmor_Mjolnir_C_MC_PlayThrow_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayHoldForReturn
	 */
	struct ABuff_TekArmor_Mjolnir_C_PlayHoldForReturn_Params
	{	};

	/**
	 * Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ExecuteUbergraph_Buff_TekArmor_Mjolnir
	 */
	struct ABuff_TekArmor_Mjolnir_C_ExecuteUbergraph_Buff_TekArmor_Mjolnir_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
