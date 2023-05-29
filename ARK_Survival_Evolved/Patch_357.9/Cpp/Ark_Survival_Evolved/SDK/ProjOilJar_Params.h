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
	 * Function ProjOilJar.ProjOilJar_C.UserConstructionScript
	 */
	struct AProjOilJar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjOilJar.ProjOilJar_C.OnExplode
	 */
	struct AProjOilJar_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjOilJar.ProjOilJar_C.ExecuteUbergraph_ProjOilJar
	 */
	struct AProjOilJar_C_ExecuteUbergraph_ProjOilJar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
