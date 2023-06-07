﻿#pragma once

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
	 * Function UberpounceTag.UberpounceTag_C.ReceiveTick
	 */
	struct AUberpounceTag_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q0H4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UberpounceTag.UberpounceTag_C.UserConstructionScript
	 */
	struct AUberpounceTag_C_UserConstructionScript_Params
	{	};

	/**
	 * Function UberpounceTag.UberpounceTag_C.ExecuteUbergraph_UberpounceTag
	 */
	struct AUberpounceTag_C_ExecuteUbergraph_UberpounceTag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
