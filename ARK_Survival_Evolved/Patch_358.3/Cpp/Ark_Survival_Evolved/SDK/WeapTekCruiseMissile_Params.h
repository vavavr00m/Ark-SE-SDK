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
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check intermittantly if player is controlling missile or not
	 */
	struct AWeapTekCruiseMissile_C_checkintermittantlyifplayeriscontrollingmissileornot_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPPreventSwitchingWeapon
	 */
	struct AWeapTekCruiseMissile_C_BPPreventSwitchingWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Release Missile Possession And Break on unequip
	 */
	struct AWeapTekCruiseMissile_C_ReleaseMissilePossessionAndBreakonunequip_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPRemainEquipped
	 */
	struct AWeapTekCruiseMissile_C_BPRemainEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PVL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPCanEquip
	 */
	struct AWeapTekCruiseMissile_C_BPCanEquip_Params
	{
	public:
		class AShooterCharacter*                                   ByCharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.break item
	 */
	struct AWeapTekCruiseMissile_C_breakitem_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveBeginPlay
	 */
	struct AWeapTekCruiseMissile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPWeaponCanFire
	 */
	struct AWeapTekCruiseMissile_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapTekCruiseMissile_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartUnequipEvent
	 */
	struct AWeapTekCruiseMissile_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartSecondaryActionEvent
	 */
	struct AWeapTekCruiseMissile_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveTick
	 */
	struct AWeapTekCruiseMissile_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Despawned
	 */
	struct AWeapTekCruiseMissile_C_MissileDespawned_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Launched
	 */
	struct AWeapTekCruiseMissile_C_MissileLaunched_Params
	{
	public:
		class AActor*                                              missile;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPFiredWeapon
	 */
	struct AWeapTekCruiseMissile_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.UserConstructionScript
	 */
	struct AWeapTekCruiseMissile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__FinishedFunc
	 */
	struct AWeapTekCruiseMissile_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__UpdateFunc
	 */
	struct AWeapTekCruiseMissile_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Clear Description
	 */
	struct AWeapTekCruiseMissile_C_ClearDescription_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Set rocket message
	 */
	struct AWeapTekCruiseMissile_C_Setrocketmessage_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Hide Projectile on Fire
	 */
	struct AWeapTekCruiseMissile_C_HideProjectileonFire_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron in
	 */
	struct AWeapTekCruiseMissile_C_ironin_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron out
	 */
	struct AWeapTekCruiseMissile_C_ironout_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.delay break and iron out
	 */
	struct AWeapTekCruiseMissile_C_delaybreakandironout_Params
	{
	public:
		bool                                                       delayforzoomout;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check if launch succeeded
	 */
	struct AWeapTekCruiseMissile_C_checkiflaunchsucceeded_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.multicast remove from base
	 */
	struct AWeapTekCruiseMissile_C_multicastremovefrombase_Params
	{	};

	/**
	 * Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ExecuteUbergraph_WeapTekCruiseMissile
	 */
	struct AWeapTekCruiseMissile_C_ExecuteUbergraph_WeapTekCruiseMissile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
