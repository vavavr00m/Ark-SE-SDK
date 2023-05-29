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
	 * Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPOverrideTradeAction
	 */
	struct UTradeOption_LootCrate_Base_C_BPOverrideTradeAction_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPAllowedToBePurchased
	 */
	struct UTradeOption_LootCrate_Base_C_BPAllowedToBePurchased_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2W4E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.ExecuteUbergraph_TradeOption_LootCrate_Base
	 */
	struct UTradeOption_LootCrate_Base_C_ExecuteUbergraph_TradeOption_LootCrate_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
