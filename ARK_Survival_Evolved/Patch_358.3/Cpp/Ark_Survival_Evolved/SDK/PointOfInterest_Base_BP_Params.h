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
	 * Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.GetPointOfInterestData
	 */
	struct APointOfInterest_Base_BP_C_GetPointOfInterestData_Params
	{
	public:
		struct FPointOfInterestData                                ReturnValue;                                             // 0x0000(0x0140)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.UserConstructionScript
	 */
	struct APointOfInterest_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.ExecuteUbergraph_PointOfInterest_Base_BP
	 */
	struct APointOfInterest_Base_BP_C_ExecuteUbergraph_PointOfInterest_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
