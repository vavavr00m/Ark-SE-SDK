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
	 * Function Buff_XRay_Base.Buff_XRay_Base_C.ReceiveDestroyed
	 */
	struct ABuff_XRay_Base_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_XRay_Base.Buff_XRay_Base_C.ResetCharBounds
	 */
	struct ABuff_XRay_Base_C_ResetCharBounds_Params
	{	};

	/**
	 * Function Buff_XRay_Base.Buff_XRay_Base_C.BuffTickClient
	 */
	struct ABuff_XRay_Base_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_XRay_Base.Buff_XRay_Base_C.BPDeactivated
	 */
	struct ABuff_XRay_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_XRay_Base.Buff_XRay_Base_C.UserConstructionScript
	 */
	struct ABuff_XRay_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_XRay_Base.Buff_XRay_Base_C.ExecuteUbergraph_Buff_XRay_Base
	 */
	struct ABuff_XRay_Base_C_ExecuteUbergraph_Buff_XRay_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
