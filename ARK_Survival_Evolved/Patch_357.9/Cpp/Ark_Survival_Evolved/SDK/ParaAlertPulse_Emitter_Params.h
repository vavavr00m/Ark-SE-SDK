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
	 * Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.Get Alert Radius
	 */
	struct AParaAlertPulse_Emitter_C_GetAlertRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9PTF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.UserConstructionScript
	 */
	struct AParaAlertPulse_Emitter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ReceiveBeginPlay
	 */
	struct AParaAlertPulse_Emitter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ExecuteUbergraph_ParaAlertPulse_Emitter
	 */
	struct AParaAlertPulse_Emitter_C_ExecuteUbergraph_ParaAlertPulse_Emitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
