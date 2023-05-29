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
	 * Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveBeginPlay
	 */
	struct AProjTropeFlakCannon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveTick
	 */
	struct AProjTropeFlakCannon_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.UserConstructionScript
	 */
	struct AProjTropeFlakCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.OnExplode
	 */
	struct AProjTropeFlakCannon_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ExecuteUbergraph_ProjTropeFlakCannon
	 */
	struct AProjTropeFlakCannon_C_ExecuteUbergraph_ProjTropeFlakCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
