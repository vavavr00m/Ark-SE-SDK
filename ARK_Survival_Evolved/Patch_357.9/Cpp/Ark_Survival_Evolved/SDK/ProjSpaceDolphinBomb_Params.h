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
	 * Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.BPIgnoreRadialDamageVictim
	 */
	struct AProjSpaceDolphinBomb_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.UserConstructionScript
	 */
	struct AProjSpaceDolphinBomb_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveTick
	 */
	struct AProjSpaceDolphinBomb_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveBeginPlay
	 */
	struct AProjSpaceDolphinBomb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ExecuteUbergraph_ProjSpaceDolphinBomb
	 */
	struct AProjSpaceDolphinBomb_C_ExecuteUbergraph_ProjSpaceDolphinBomb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
