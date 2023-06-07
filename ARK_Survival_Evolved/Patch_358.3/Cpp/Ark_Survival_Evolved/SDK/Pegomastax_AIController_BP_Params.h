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
	 * Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UpdateAttackDestinationOffset
	 */
	struct APegomastax_AIController_BP_C_UpdateAttackDestinationOffset_Params
	{
	public:
		bool                                                       IsInWaitingState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ODFH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UserConstructionScript
	 */
	struct APegomastax_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.ExecuteUbergraph_Pegomastax_AIController_BP
	 */
	struct APegomastax_AIController_BP_C_ExecuteUbergraph_Pegomastax_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
