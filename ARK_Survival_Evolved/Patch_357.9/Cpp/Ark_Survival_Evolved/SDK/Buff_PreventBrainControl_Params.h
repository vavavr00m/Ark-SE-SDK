﻿#pragma once

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
	 * Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.BPPreSetupForInstigator
	 */
	struct ABuff_PreventBrainControl_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.UserConstructionScript
	 */
	struct ABuff_PreventBrainControl_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.ExecuteUbergraph_Buff_PreventBrainControl
	 */
	struct ABuff_PreventBrainControl_C_ExecuteUbergraph_Buff_PreventBrainControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif