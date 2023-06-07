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
	 * Function Projectile_Summoner.Projectile_Summoner_C.OnExplode
	 */
	struct AProjectile_Summoner_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Projectile_Summoner.Projectile_Summoner_C.UserConstructionScript
	 */
	struct AProjectile_Summoner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Summoner.Projectile_Summoner_C.ExecuteUbergraph_Projectile_Summoner
	 */
	struct AProjectile_Summoner_C_ExecuteUbergraph_Projectile_Summoner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
