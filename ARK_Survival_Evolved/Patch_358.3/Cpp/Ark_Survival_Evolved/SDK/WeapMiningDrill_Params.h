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
	 * Function WeapMiningDrill.WeapMiningDrill_C.StartUnequipEvent
	 */
	struct AWeapMiningDrill_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.HandleActivation
	 */
	struct AWeapMiningDrill_C_HandleActivation_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.ReceiveDestroyed
	 */
	struct AWeapMiningDrill_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.CreateDynamicMats
	 */
	struct AWeapMiningDrill_C_CreateDynamicMats_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.BPSpawnHarvestEffects
	 */
	struct AWeapMiningDrill_C_BPSpawnHarvestEffects_Params
	{
	public:
		TArray<struct FVector>                                     Impacts;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.CalculateTargetPosition
	 */
	struct AWeapMiningDrill_C_CalculateTargetPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.BPStartEquippedNotify
	 */
	struct AWeapMiningDrill_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponDealDamage
	 */
	struct AWeapMiningDrill_C_BPWeaponDealDamage_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDir;                                                // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    DamageAmount;                                            // 0x0094(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageType;                                              // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Impulse;                                                 // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x00A4(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.BPPreFireEvent
	 */
	struct AWeapMiningDrill_C_BPPreFireEvent_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShootDir;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponCanFire
	 */
	struct AWeapMiningDrill_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.OnRep_Overheated
	 */
	struct AWeapMiningDrill_C_OnRep_Overheated_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.UpdateWeaponHeat
	 */
	struct AWeapMiningDrill_C_UpdateWeaponHeat_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.BPFiredWeapon
	 */
	struct AWeapMiningDrill_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.ReceiveTick
	 */
	struct AWeapMiningDrill_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.UserConstructionScript
	 */
	struct AWeapMiningDrill_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.SpawnImpact
	 */
	struct AWeapMiningDrill_C_SpawnImpact_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.TurnOffIfRiding
	 */
	struct AWeapMiningDrill_C_TurnOffIfRiding_Params
	{	};

	/**
	 * Function WeapMiningDrill.WeapMiningDrill_C.ExecuteUbergraph_WeapMiningDrill
	 */
	struct AWeapMiningDrill_C_ExecuteUbergraph_WeapMiningDrill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
