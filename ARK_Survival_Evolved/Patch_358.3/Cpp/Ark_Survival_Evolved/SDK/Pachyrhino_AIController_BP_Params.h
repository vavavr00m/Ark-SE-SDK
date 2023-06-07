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
	 * Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.BPOnFleeEvent
	 */
	struct APachyrhino_AIController_BP_C_BPOnFleeEvent_Params
	{	};

	/**
	 * Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.UserConstructionScript
	 */
	struct APachyrhino_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ClearAggroAfterTime
	 */
	struct APachyrhino_AIController_BP_C_ClearAggroAfterTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7AOM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              targetWhenCalled;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ExecuteUbergraph_Pachyrhino_AIController_BP
	 */
	struct APachyrhino_AIController_BP_C_ExecuteUbergraph_Pachyrhino_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
