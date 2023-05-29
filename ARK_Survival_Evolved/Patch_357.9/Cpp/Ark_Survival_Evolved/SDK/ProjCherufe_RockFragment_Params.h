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
	 * Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.ReceiveBeginPlay
	 */
	struct AProjCherufe_RockFragment_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.UserConstructionScript
	 */
	struct AProjCherufe_RockFragment_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.OnExplode
	 */
	struct AProjCherufe_RockFragment_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.ExecuteUbergraph_ProjCherufe_RockFragment
	 */
	struct AProjCherufe_RockFragment_C_ExecuteUbergraph_ProjCherufe_RockFragment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
