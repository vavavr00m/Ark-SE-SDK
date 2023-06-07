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
	 * Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPActivated
	 */
	struct ABuff_LionfishLionHelper_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPDeactivated
	 */
	struct ABuff_LionfishLionHelper_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ReceiveBeginPlay
	 */
	struct ABuff_LionfishLionHelper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPGetHUDElements
	 */
	struct ABuff_LionfishLionHelper_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.UserConstructionScript
	 */
	struct ABuff_LionfishLionHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ExecuteUbergraph_Buff_LionfishLionHelper
	 */
	struct ABuff_LionfishLionHelper_C_ExecuteUbergraph_Buff_LionfishLionHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
