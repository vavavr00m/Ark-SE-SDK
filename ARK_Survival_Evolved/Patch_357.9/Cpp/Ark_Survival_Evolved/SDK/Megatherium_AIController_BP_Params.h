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
	 * Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPOverrideIgnoredByWildDino
	 */
	struct AMegatherium_AIController_BP_C_BPOverrideIgnoredByWildDino_Params
	{
	public:
		class AActor*                                              wildDinoToIgnore;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VWEJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ChangedAITarget
	 */
	struct AMegatherium_AIController_BP_C_ChangedAITarget_Params
	{	};

	/**
	 * Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AMegatherium_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.UserConstructionScript
	 */
	struct AMegatherium_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ExecuteUbergraph_Megatherium_AIController_BP
	 */
	struct AMegatherium_AIController_BP_C_ExecuteUbergraph_Megatherium_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
