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
	 * Function GasBags_AIController_BP.GasBags_AIController_BP_C.ReceiveTick
	 */
	struct AGasBags_AIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VVH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasBags_AIController_BP.GasBags_AIController_BP_C.TickCheckDangerLevels
	 */
	struct AGasBags_AIController_BP_C_TickCheckDangerLevels_Params
	{	};

	/**
	 * Function GasBags_AIController_BP.GasBags_AIController_BP_C.GetDangerLevel
	 */
	struct AGasBags_AIController_BP_C_GetDangerLevel_Params
	{
	public:
		float                                                      Danger;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_AIController_BP.GasBags_AIController_BP_C.UserConstructionScript
	 */
	struct AGasBags_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GasBags_AIController_BP.GasBags_AIController_BP_C.ExecuteUbergraph_GasBags_AIController_BP
	 */
	struct AGasBags_AIController_BP_C_ExecuteUbergraph_GasBags_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
