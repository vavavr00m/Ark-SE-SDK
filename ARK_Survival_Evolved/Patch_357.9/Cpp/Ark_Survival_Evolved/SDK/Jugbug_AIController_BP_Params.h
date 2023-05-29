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
	 * Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItFly
	 */
	struct AJugbug_AIController_BP_C_MakeItFly_Params
	{	};

	/**
	 * Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.MakeItWalk
	 */
	struct AJugbug_AIController_BP_C_MakeItWalk_Params
	{	};

	/**
	 * Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.UserConstructionScript
	 */
	struct AJugbug_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveTick
	 */
	struct AJugbug_AIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ReceiveBeginPlay
	 */
	struct AJugbug_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Jugbug_AIController_BP.Jugbug_AIController_BP_C.ExecuteUbergraph_Jugbug_AIController_BP
	 */
	struct AJugbug_AIController_BP_C_ExecuteUbergraph_Jugbug_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
