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
	 * Function IBossArenaActorControlInterface.IBossArenaActorControlInterface_C.ArenaShouldPreserveAtClose
	 */
	struct UIBossArenaActorControlInterface_C_ArenaShouldPreserveAtClose_Params
	{
	public:
		class ABossArenaManager_C*                                 ArenaManager;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldPreserve;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
