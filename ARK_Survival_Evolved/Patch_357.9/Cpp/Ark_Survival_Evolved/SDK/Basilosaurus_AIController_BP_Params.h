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
	 * Function Basilosaurus_AIController_BP.Basilosaurus_AIController_BP_C.BPGetTargetingDesire
	 */
	struct ABasilosaurus_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilosaurus_AIController_BP.Basilosaurus_AIController_BP_C.UserConstructionScript
	 */
	struct ABasilosaurus_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Basilosaurus_AIController_BP.Basilosaurus_AIController_BP_C.ExecuteUbergraph_Basilosaurus_AIController_BP
	 */
	struct ABasilosaurus_AIController_BP_C_ExecuteUbergraph_Basilosaurus_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
