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
	 * Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ReceiveTick
	 */
	struct AProjPoop_Dinopithecus_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VNZM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.PreventExplosionEmitter
	 */
	struct AProjPoop_Dinopithecus_C_PreventExplosionEmitter_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9NL1[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.UserConstructionScript
	 */
	struct AProjPoop_Dinopithecus_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ExecuteUbergraph_ProjPoop_Dinopithecus
	 */
	struct AProjPoop_Dinopithecus_C_ExecuteUbergraph_ProjPoop_Dinopithecus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
