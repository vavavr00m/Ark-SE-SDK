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
	 * Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.BPGetTargetingDesire
	 */
	struct AWyvern_AIController_BP_Tek_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.UserConstructionScript
	 */
	struct AWyvern_AIController_BP_Tek_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.ExecuteUbergraph_Wyvern_AIController_BP_Tek
	 */
	struct AWyvern_AIController_BP_Tek_C_ExecuteUbergraph_Wyvern_AIController_BP_Tek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
