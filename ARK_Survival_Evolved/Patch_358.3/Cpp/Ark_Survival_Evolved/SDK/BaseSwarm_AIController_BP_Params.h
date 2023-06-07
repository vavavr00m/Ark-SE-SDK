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
	 * Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.GetRandomWanderPoint
	 */
	struct ABaseSwarm_AIController_BP_C_GetRandomWanderPoint_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ChangedAITarget
	 */
	struct ABaseSwarm_AIController_BP_C_ChangedAITarget_Params
	{	};

	/**
	 * Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.UserConstructionScript
	 */
	struct ABaseSwarm_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveBeginPlay
	 */
	struct ABaseSwarm_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveTick
	 */
	struct ABaseSwarm_AIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ExecuteUbergraph_BaseSwarm_AIController_BP
	 */
	struct ABaseSwarm_AIController_BP_C_ExecuteUbergraph_BaseSwarm_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
