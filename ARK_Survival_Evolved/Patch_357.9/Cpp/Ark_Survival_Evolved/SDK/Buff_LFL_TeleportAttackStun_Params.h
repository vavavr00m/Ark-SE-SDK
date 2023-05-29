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
	 * Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.BPCustomAllowAddBuff
	 */
	struct ABuff_LFL_TeleportAttackStun_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.UserConstructionScript
	 */
	struct ABuff_LFL_TeleportAttackStun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun
	 */
	struct ABuff_LFL_TeleportAttackStun_C_ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif