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
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPDeactivated
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampFireTransform
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ClampFireTransform_Params
	{
	public:
		struct UObject_FTransform                                  InTransform;                                             // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct UObject_FTransform                                  ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Overheated
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_OnRep_Overheated_Params
	{	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Activated
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_OnRep_Activated_Params
	{	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateSound
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateSound_Params
	{
	public:
		int32_t                                                    ModeIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsAllowedToFire
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_IsAllowedToFire_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4DL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateTarget
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateTarget_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UW0Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponHeat
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponHeat_Params
	{
	public:
		float                                                      A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampPitchByYaw
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ClampPitchByYaw_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Pitch;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateAmmo
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateAmmo_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UseAlternateSocket
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UseAlternateSocket_Params
	{
	public:
		bool                                                       UseAlt;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_444M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.CanAimAtTarget
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_CanAimAtTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GTZK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Fire Mode
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateFireMode_Params
	{	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPAnimNotifyCustomEvent
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.DrawBuffFloatingHUD
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C6BR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Calculate Ready to Fire
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_CalculateReadytoFire_Params
	{	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsValidTarget
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_IsValidTarget_Params
	{
	public:
		class APrimalCharacter*                                    TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4WOH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.TryFire Weapon
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_TryFireWeapon_Params
	{
	public:
		struct UObject_FTransform                                  AimTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPClientDoMultiUse
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N71Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPTryMultiUse
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AH4Q[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetMultiUseEntries
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetHUDElements
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ApplyAccuracy
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ApplyAccuracy_Params
	{
	public:
		struct UObject_FTransform                                  InTransform;                                             // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct UObject_FTransform                                  ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.SpawnProjectile
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_SpawnProjectile_Params
	{
	public:
		struct UObject_FTransform                                  InTransform;                                             // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsElectricalStormActive
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_IsElectricalStormActive_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Firing
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponFiring_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPSetupForInstigator
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.GetTargetPos
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_GetTargetPos_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZQ2X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Position
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponPosition_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponAim
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponAim_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickServer
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickClient
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JWXF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.PreventBlockingWithShield
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_PreventBlockingWithShield_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSpawnProjectile
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ClientSpawnProjectile_Params
	{
	public:
		struct UObject_FTransform                                  SpawnTransform;                                          // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      NewChargeValue;                                          // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerTryFire
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ServerTryFire_Params
	{
	public:
		struct UObject_FTransform                                  SpawnTranform;                                           // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetAnimIdle
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ServerSetAnimIdle_Params
	{
	public:
		bool                                                       Idle;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSetFireMode
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ClientSetFireMode_Params
	{
	public:
		int32_t                                                    NewFireMode;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetTarget
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ServerSetTarget_Params
	{
	public:
		struct FVector                                             TargetPos;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MLVS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    TargetChar;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetLockedTarget
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ServerSetLockedTarget_Params
	{
	public:
		class APrimalCharacter*                                    TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ExecuteUbergraph_Buff_TekArmor_ShoulderCannon
	 */
	struct ABuff_TekArmor_ShoulderCannon_C_ExecuteUbergraph_Buff_TekArmor_ShoulderCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
