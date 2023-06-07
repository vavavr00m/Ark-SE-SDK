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
	 * Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.AttemptSpawnTentacles
	 */
	struct AProjectile_SummonerEyeball_C_AttemptSpawnTentacles_Params
	{
	public:
		struct FVector                                             HitLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.UserConstructionScript
	 */
	struct AProjectile_SummonerEyeball_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.OnExplode
	 */
	struct AProjectile_SummonerEyeball_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.ExecuteUbergraph_Projectile_SummonerEyeball
	 */
	struct AProjectile_SummonerEyeball_C_ExecuteUbergraph_Projectile_SummonerEyeball_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
