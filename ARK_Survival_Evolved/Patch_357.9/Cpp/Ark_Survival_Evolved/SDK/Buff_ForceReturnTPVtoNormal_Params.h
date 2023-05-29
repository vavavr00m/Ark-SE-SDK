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
	 * Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BuffTickClient
	 */
	struct ABuff_ForceReturnTPVtoNormal_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BPCustomAllowAddBuff
	 */
	struct ABuff_ForceReturnTPVtoNormal_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.UserConstructionScript
	 */
	struct ABuff_ForceReturnTPVtoNormal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.ExecuteUbergraph_Buff_ForceReturnTPVtoNormal
	 */
	struct ABuff_ForceReturnTPVtoNormal_C_ExecuteUbergraph_Buff_ForceReturnTPVtoNormal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
