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
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.CalculateFragmentVectors
	 */
	struct AProjDrakeFireball_C_CalculateFragmentVectors_Params
	{	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveBeginPlay
	 */
	struct AProjDrakeFireball_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.UserConstructionScript
	 */
	struct AProjDrakeFireball_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.OnExplode
	 */
	struct AProjDrakeFireball_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.ServerRequest_CreateFragment
	 */
	struct AProjDrakeFireball_C_ServerRequest_CreateFragment_Params
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Origin;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x0014(0x000C)  (Parm)
		float                                                      OverrideInitialSpeed;                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.ClientHideProjectile
	 */
	struct AProjDrakeFireball_C_ClientHideProjectile_Params
	{	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveAnyDamage
	 */
	struct AProjDrakeFireball_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IV7Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.Multi_DeactivateFragments
	 */
	struct AProjDrakeFireball_C_Multi_DeactivateFragments_Params
	{	};

	/**
	 * Function ProjDrakeFireball.ProjDrakeFireball_C.ExecuteUbergraph_ProjDrakeFireball
	 */
	struct AProjDrakeFireball_C_ExecuteUbergraph_ProjDrakeFireball_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
