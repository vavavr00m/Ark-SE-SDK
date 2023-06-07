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
	 * Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.BPPostInitializeComponents
	 */
	struct AProj_TekWyvern_Projectile_Mine_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UpdateBeam
	 */
	struct AProj_TekWyvern_Projectile_Mine_C_UpdateBeam_Params
	{
	public:
		TArray<class AActor*>                                      actors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveTick
	 */
	struct AProj_TekWyvern_Projectile_Mine_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UserConstructionScript
	 */
	struct AProj_TekWyvern_Projectile_Mine_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveBeginPlay
	 */
	struct AProj_TekWyvern_Projectile_Mine_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine
	 */
	struct AProj_TekWyvern_Projectile_Mine_C_ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
