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
	 * Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ResetDamageable
	 */
	struct AProjectile_SummonerTumor_C_ResetDamageable_Params
	{	};

	/**
	 * Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ReceivePointDamage
	 */
	struct AProjectile_SummonerTumor_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KK23[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WS1P[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.OnExplode
	 */
	struct AProjectile_SummonerTumor_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.UserConstructionScript
	 */
	struct AProjectile_SummonerTumor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.Multi_SetLifeSpan
	 */
	struct AProjectile_SummonerTumor_C_Multi_SetLifeSpan_Params
	{	};

	/**
	 * Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ExecuteUbergraph_Projectile_SummonerTumor
	 */
	struct AProjectile_SummonerTumor_C_ExecuteUbergraph_Projectile_SummonerTumor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
