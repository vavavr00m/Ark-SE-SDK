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
	 * Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.OnExplode
	 */
	struct AProjSpaceWhaleBomb_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.BPIgnoreRadialDamageVictim
	 */
	struct AProjSpaceWhaleBomb_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.UserConstructionScript
	 */
	struct AProjSpaceWhaleBomb_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveTick
	 */
	struct AProjSpaceWhaleBomb_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveBeginPlay
	 */
	struct AProjSpaceWhaleBomb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ExecuteUbergraph_ProjSpaceWhaleBomb
	 */
	struct AProjSpaceWhaleBomb_C_ExecuteUbergraph_ProjSpaceWhaleBomb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
