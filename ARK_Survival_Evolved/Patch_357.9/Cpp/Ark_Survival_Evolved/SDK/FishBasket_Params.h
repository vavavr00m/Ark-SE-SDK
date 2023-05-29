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
	 * Function FishBasket.FishBasket_C.BPIsAllowedToBuild
	 */
	struct AFishBasket_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishBasket.FishBasket_C.ReceiveBeginPlay
	 */
	struct AFishBasket_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FishBasket.FishBasket_C.TrapFish
	 */
	struct AFishBasket_C_TrapFish_Params
	{
	public:
		class APrimalDinoCharacter*                                TrapFish;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   ForPC;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FishBasket.FishBasket_C.BPTryMultiUse
	 */
	struct AFishBasket_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MM31[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FishBasket.FishBasket_C.BPGetMultiUseEntries
	 */
	struct AFishBasket_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function FishBasket.FishBasket_C.UserConstructionScript
	 */
	struct AFishBasket_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FishBasket.FishBasket_C.NetCapturedCreature
	 */
	struct AFishBasket_C_NetCapturedCreature_Params
	{	};

	/**
	 * Function FishBasket.FishBasket_C.ExecuteUbergraph_FishBasket
	 */
	struct AFishBasket_C_ExecuteUbergraph_FishBasket_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
