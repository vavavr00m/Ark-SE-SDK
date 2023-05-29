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
	 * Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BuffTickClient
	 */
	struct ABuff_MinigunOverheat_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z5CF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveEndPlay
	 */
	struct ABuff_MinigunOverheat_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveBeginPlay
	 */
	struct ABuff_MinigunOverheat_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_MinigunOverheat_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3RTZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.UserConstructionScript
	 */
	struct ABuff_MinigunOverheat_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.StopStaminaDrain
	 */
	struct ABuff_MinigunOverheat_C_StopStaminaDrain_Params
	{	};

	/**
	 * Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ExecuteUbergraph_Buff_MinigunOverheat
	 */
	struct ABuff_MinigunOverheat_C_ExecuteUbergraph_Buff_MinigunOverheat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
