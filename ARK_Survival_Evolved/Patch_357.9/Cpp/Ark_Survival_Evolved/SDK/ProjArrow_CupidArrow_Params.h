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
	 * Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.OnExplode
	 */
	struct AProjArrow_CupidArrow_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.UserConstructionScript
	 */
	struct AProjArrow_CupidArrow_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.ExecuteUbergraph_ProjArrow_CupidArrow
	 */
	struct AProjArrow_CupidArrow_C_ExecuteUbergraph_ProjArrow_CupidArrow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
