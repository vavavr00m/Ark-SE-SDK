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
	 * Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.AllowPostProcessEffect
	 */
	struct ABuff_Desert_GogglesHelmet_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LHJZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.UserConstructionScript
	 */
	struct ABuff_Desert_GogglesHelmet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.ExecuteUbergraph_Buff_Desert_GogglesHelmet
	 */
	struct ABuff_Desert_GogglesHelmet_C_ExecuteUbergraph_Buff_Desert_GogglesHelmet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
