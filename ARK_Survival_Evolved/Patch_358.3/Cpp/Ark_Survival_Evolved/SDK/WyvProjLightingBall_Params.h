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
	 * Function WyvProjLightingBall.WyvProjLightingBall_C.UserConstructionScript
	 */
	struct AWyvProjLightingBall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WyvProjLightingBall.WyvProjLightingBall_C.ReceiveBeginPlay
	 */
	struct AWyvProjLightingBall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WyvProjLightingBall.WyvProjLightingBall_C.ReceiveTick
	 */
	struct AWyvProjLightingBall_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WyvProjLightingBall.WyvProjLightingBall_C.DisableBeam
	 */
	struct AWyvProjLightingBall_C_DisableBeam_Params
	{	};

	/**
	 * Function WyvProjLightingBall.WyvProjLightingBall_C.ClearTargets
	 */
	struct AWyvProjLightingBall_C_ClearTargets_Params
	{	};

	/**
	 * Function WyvProjLightingBall.WyvProjLightingBall_C.ExecuteUbergraph_WyvProjLightingBall
	 */
	struct AWyvProjLightingBall_C_ExecuteUbergraph_WyvProjLightingBall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
