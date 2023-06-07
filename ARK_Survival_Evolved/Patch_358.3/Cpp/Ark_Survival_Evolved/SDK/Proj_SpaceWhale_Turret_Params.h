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
	 * Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.BPIgnoreRadialDamageVictim
	 */
	struct AProj_SpaceWhale_Turret_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.UserConstructionScript
	 */
	struct AProj_SpaceWhale_Turret_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ReceiveBeginPlay
	 */
	struct AProj_SpaceWhale_Turret_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.OnExplode
	 */
	struct AProj_SpaceWhale_Turret_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ExecuteUbergraph_Proj_SpaceWhale_Turret
	 */
	struct AProj_SpaceWhale_Turret_C_ExecuteUbergraph_Proj_SpaceWhale_Turret_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
