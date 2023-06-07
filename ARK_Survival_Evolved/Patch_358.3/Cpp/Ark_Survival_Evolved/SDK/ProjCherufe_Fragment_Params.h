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
	 * Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.ReceiveBeginPlay
	 */
	struct AProjCherufe_Fragment_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.UserConstructionScript
	 */
	struct AProjCherufe_Fragment_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.OnExplode
	 */
	struct AProjCherufe_Fragment_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.ExecuteUbergraph_ProjCherufe_Fragment
	 */
	struct AProjCherufe_Fragment_C_ExecuteUbergraph_ProjCherufe_Fragment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
