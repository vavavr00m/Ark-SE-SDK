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
	 * Function Summoner_AIController_BP.Summoner_AIController_BP_C.BPNotifyTargetSet
	 */
	struct ASummoner_AIController_BP_C_BPNotifyTargetSet_Params
	{	};

	/**
	 * Function Summoner_AIController_BP.Summoner_AIController_BP_C.BPGetTargetingDesire
	 */
	struct ASummoner_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Summoner_AIController_BP.Summoner_AIController_BP_C.UserConstructionScript
	 */
	struct ASummoner_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Summoner_AIController_BP.Summoner_AIController_BP_C.ExecuteUbergraph_Summoner_AIController_BP
	 */
	struct ASummoner_AIController_BP_C_ExecuteUbergraph_Summoner_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
