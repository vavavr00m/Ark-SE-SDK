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
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotDifference
	 */
	struct AWeapTekGrenadeLauncher_C_GetSlotDifference_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetCurrentSlotAdvancement
	 */
	struct AWeapTekGrenadeLauncher_C_GetCurrentSlotAdvancement_Params
	{
	public:
		int32_t                                                    CurrentSlot;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Remainder;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedFullReload
	 */
	struct AWeapTekGrenadeLauncher_C_FinishedFullReload_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.CanReloadLauncher
	 */
	struct AWeapTekGrenadeLauncher_C_CanReloadLauncher_Params
	{
	public:
		bool                                                       bCanReload;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideRootRotationOffset
	 */
	struct AWeapTekGrenadeLauncher_C_BPOverrideRootRotationOffset_Params
	{
	public:
		struct FRotator                                            InRootRotation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPCanEquip
	 */
	struct AWeapTekGrenadeLauncher_C_BPCanEquip_Params
	{
	public:
		class AShooterCharacter*                                   ByCharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOnSpawnedProjectile
	 */
	struct AWeapTekGrenadeLauncher_C_BPOnSpawnedProjectile_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveDestroyed
	 */
	struct AWeapTekGrenadeLauncher_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientInit
	 */
	struct AWeapTekGrenadeLauncher_C_ClientInit_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedReloadSequence
	 */
	struct AWeapTekGrenadeLauncher_C_FinishedReloadSequence_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyHeatLevel
	 */
	struct AWeapTekGrenadeLauncher_C_ModifyHeatLevel_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetReloadAnim
	 */
	struct AWeapTekGrenadeLauncher_C_GetReloadAnim_Params
	{
	public:
		int32_t                                                    FromSlot;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPLJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWeaponAnim                                         Anim;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileArcVisibility
	 */
	struct AWeapTekGrenadeLauncher_C_SetProjectileArcVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateProjectileArc
	 */
	struct AWeapTekGrenadeLauncher_C_UpdateProjectileArc_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NLOY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPGetTPVCameraOffset
	 */
	struct AWeapTekGrenadeLauncher_C_BPGetTPVCameraOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideAimDirection
	 */
	struct AWeapTekGrenadeLauncher_C_BPOverrideAimDirection_Params
	{
	public:
		struct FVector                                             DesiredAimDirection;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateSlotMeshes
	 */
	struct AWeapTekGrenadeLauncher_C_UpdateSlotMeshes_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncAmmoInClipValue
	 */
	struct AWeapTekGrenadeLauncher_C_SyncAmmoInClipValue_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveTick
	 */
	struct AWeapTekGrenadeLauncher_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotInfo
	 */
	struct AWeapTekGrenadeLauncher_C_GetSlotInfo_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       GotValidSlotData;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AJN1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AmmoType;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     LastFiredNetworkTime;                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AmmoLoaded;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_04E5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SaveAmmoToItem
	 */
	struct AWeapTekGrenadeLauncher_C_SaveAmmoToItem_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.LoadAmmoFromItem
	 */
	struct AWeapTekGrenadeLauncher_C_LoadAmmoFromItem_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_117D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileSlotType
	 */
	struct AWeapTekGrenadeLauncher_C_SetProjectileSlotType_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHOH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetProjectileTypeFromItem
	 */
	struct AWeapTekGrenadeLauncher_C_GetProjectileTypeFromItem_Params
	{
	public:
		class UClass*                                              ItemType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GP5B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ProjectileType;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartSecondaryActionEvent
	 */
	struct AWeapTekGrenadeLauncher_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BP_OnReloadNotify
	 */
	struct AWeapTekGrenadeLauncher_C_BP_OnReloadNotify_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyAmmoQuantityInInventory
	 */
	struct AWeapTekGrenadeLauncher_C_ModifyAmmoQuantityInInventory_Params
	{
	public:
		class UClass*                                              AmmoType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Delta;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AddAmmo;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O07L[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveBeginPlay
	 */
	struct AWeapTekGrenadeLauncher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetAmmoCountOfType
	 */
	struct AWeapTekGrenadeLauncher_C_GetAmmoCountOfType_Params
	{
	public:
		class UClass*                                              AmmoType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AvailableAmmo;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H1KO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetNextAvailableSlot
	 */
	struct AWeapTekGrenadeLauncher_C_GetNextAvailableSlot_Params
	{
	public:
		bool                                                       SlotIsValid;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BIWZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIdx;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TimeToAdvance;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPWeaponCanFire
	 */
	struct AWeapTekGrenadeLauncher_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReloadProjectiles
	 */
	struct AWeapTekGrenadeLauncher_C_ReloadProjectiles_Params
	{
	public:
		int32_t                                                    NumReloadedSlots;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H5YN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPFiredWeapon
	 */
	struct AWeapTekGrenadeLauncher_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPSelectProjectileToFire
	 */
	struct AWeapTekGrenadeLauncher_C_BPSelectProjectileToFire_Params
	{
	public:
		class UClass*                                              ProjectileClassOverride;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundCue*                                           FireSoundOverride;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSpawnOnClient;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PYDO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OverrideMaxSpeed;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartUnequipEvent
	 */
	struct AWeapTekGrenadeLauncher_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPStartEquippedNotify
	 */
	struct AWeapTekGrenadeLauncher_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UserConstructionScript
	 */
	struct AWeapTekGrenadeLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlots
	 */
	struct AWeapTekGrenadeLauncher_C_ClientUpdateSlots_Params
	{
	public:
		TArray<struct FTekGrenadeLauncherSlot>                     UpdatedSlots;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncSlots
	 */
	struct AWeapTekGrenadeLauncher_C_SyncSlots_Params
	{
	public:
		bool                                                       bJustFiredGrenade;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestSwitchAmmoType
	 */
	struct AWeapTekGrenadeLauncher_C_ServerRequestSwitchAmmoType_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2V8R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              NewAmmoType;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientPlayReloadAnim
	 */
	struct AWeapTekGrenadeLauncher_C_ClientPlayReloadAnim_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifySetArcDisplay
	 */
	struct AWeapTekGrenadeLauncher_C_ServerNotifySetArcDisplay_Params
	{
	public:
		bool                                                       ShowArcDisplay;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ToggleArcDisplay
	 */
	struct AWeapTekGrenadeLauncher_C_ToggleArcDisplay_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestAdvanceSlot
	 */
	struct AWeapTekGrenadeLauncher_C_ServerRequestAdvanceSlot_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlotMeshes
	 */
	struct AWeapTekGrenadeLauncher_C_ClientUpdateSlotMeshes_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifyReplicationReady
	 */
	struct AWeapTekGrenadeLauncher_C_ServerNotifyReplicationReady_Params
	{	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature
	 */
	struct AWeapTekGrenadeLauncher_C_BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature_Params
	{
	public:
		class UTickingHelperComponent*                             TickingComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestUnloadSlot
	 */
	struct AWeapTekGrenadeLauncher_C_ServerRequestUnloadSlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ExecuteUbergraph_WeapTekGrenadeLauncher
	 */
	struct AWeapTekGrenadeLauncher_C_ExecuteUbergraph_WeapTekGrenadeLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
