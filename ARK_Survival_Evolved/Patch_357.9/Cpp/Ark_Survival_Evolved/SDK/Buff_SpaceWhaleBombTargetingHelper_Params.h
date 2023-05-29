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
	 * Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BPSetupForInstigator
	 */
	struct ABuff_SpaceWhaleBombTargetingHelper_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BuffTickClient
	 */
	struct ABuff_SpaceWhaleBombTargetingHelper_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7XJ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.AllowPostProcessEffect
	 */
	struct ABuff_SpaceWhaleBombTargetingHelper_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.UserConstructionScript
	 */
	struct ABuff_SpaceWhaleBombTargetingHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper
	 */
	struct ABuff_SpaceWhaleBombTargetingHelper_C_ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
