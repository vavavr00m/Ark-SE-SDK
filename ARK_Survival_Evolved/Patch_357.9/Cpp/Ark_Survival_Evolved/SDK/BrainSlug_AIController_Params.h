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
	 * Function BrainSlug_AIController.BrainSlug_AIController_C.ChangedAITarget
	 */
	struct ABrainSlug_AIController_C_ChangedAITarget_Params
	{	};

	/**
	 * Function BrainSlug_AIController.BrainSlug_AIController_C.BPGetTargetingDesire
	 */
	struct ABrainSlug_AIController_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlug_AIController.BrainSlug_AIController_C.ReceiveDestroyed
	 */
	struct ABrainSlug_AIController_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BrainSlug_AIController.BrainSlug_AIController_C.UserConstructionScript
	 */
	struct ABrainSlug_AIController_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BrainSlug_AIController.BrainSlug_AIController_C.ExecuteUbergraph_BrainSlug_AIController
	 */
	struct ABrainSlug_AIController_C_ExecuteUbergraph_BrainSlug_AIController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
