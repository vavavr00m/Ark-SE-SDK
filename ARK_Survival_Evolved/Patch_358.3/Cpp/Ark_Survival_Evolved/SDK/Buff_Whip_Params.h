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
	 * Function Buff_Whip.Buff_Whip_C.BPPreSetupForInstigator
	 */
	struct ABuff_Whip_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Whip.Buff_Whip_C.BPPreventflight
	 */
	struct ABuff_Whip_C_BPPreventflight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Whip.Buff_Whip_C.PlayStartledAnim
	 */
	struct ABuff_Whip_C_PlayStartledAnim_Params
	{	};

	/**
	 * Function Buff_Whip.Buff_Whip_C.BPActivated
	 */
	struct ABuff_Whip_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Whip.Buff_Whip_C.BPCustomAllowAddBuff
	 */
	struct ABuff_Whip_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CW75[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Whip.Buff_Whip_C.UserConstructionScript
	 */
	struct ABuff_Whip_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Whip.Buff_Whip_C.BPSetupForInstigator
	 */
	struct ABuff_Whip_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Whip.Buff_Whip_C.ExecuteUbergraph_Buff_Whip
	 */
	struct ABuff_Whip_C_ExecuteUbergraph_Buff_Whip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
