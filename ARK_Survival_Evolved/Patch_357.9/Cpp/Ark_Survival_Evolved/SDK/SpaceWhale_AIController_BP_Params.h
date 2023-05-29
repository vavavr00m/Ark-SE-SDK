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
	 * Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.BPOnFleeEvent
	 */
	struct ASpaceWhale_AIController_BP_C_BPOnFleeEvent_Params
	{	};

	/**
	 * Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.ReceiveTick
	 */
	struct ASpaceWhale_AIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4R3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.UserConstructionScript
	 */
	struct ASpaceWhale_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.ExecuteUbergraph_SpaceWhale_AIController_BP
	 */
	struct ASpaceWhale_AIController_BP_C_ExecuteUbergraph_SpaceWhale_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
