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
	 * Function Buff_Tent.Buff_Tent_C.SetBuffCauser
	 */
	struct ABuff_Tent_C_SetBuffCauser_Params
	{
	public:
		class AActor*                                              CausedBy;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Tent.Buff_Tent_C.BuffTickServer
	 */
	struct ABuff_Tent_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Tent.Buff_Tent_C.UserConstructionScript
	 */
	struct ABuff_Tent_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Tent.Buff_Tent_C.ExecuteUbergraph_Buff_Tent
	 */
	struct ABuff_Tent_C_ExecuteUbergraph_Buff_Tent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
