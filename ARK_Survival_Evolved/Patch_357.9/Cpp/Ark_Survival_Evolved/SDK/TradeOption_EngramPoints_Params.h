#pragma once

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
	 * Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPAllowedToBePurchased
	 */
	struct UTradeOption_EngramPoints_C_BPAllowedToBePurchased_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPOverrideTradeAction
	 */
	struct UTradeOption_EngramPoints_C_BPOverrideTradeAction_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPGetItemCost
	 */
	struct UTradeOption_EngramPoints_C_BPGetItemCost_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5YL0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.ExecuteUbergraph_TradeOption_EngramPoints
	 */
	struct UTradeOption_EngramPoints_C_ExecuteUbergraph_TradeOption_EngramPoints_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
