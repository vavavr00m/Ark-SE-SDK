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
	 * Function ProjGasGrenade.ProjGasGrenade_C.UserConstructionScript
	 */
	struct AProjGasGrenade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjGasGrenade.ProjGasGrenade_C.OnExplode
	 */
	struct AProjGasGrenade_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjGasGrenade.ProjGasGrenade_C.ExecuteUbergraph_ProjGasGrenade
	 */
	struct AProjGasGrenade_C_ExecuteUbergraph_ProjGasGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
