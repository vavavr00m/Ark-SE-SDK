#pragma once

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
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPTryMultiUse
	 */
	struct ABeeHive_PlayerOwned_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPGetInfoFromConsumedItemForPlacedStructure
	 */
	struct ABeeHive_PlayerOwned_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
	{
	public:
		class UPrimalItem*                                         ItemToConsumed;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUpdateItemVisuals
	 */
	struct ABeeHive_PlayerOwned_C_BPUpdateItemVisuals_Params
	{	};

	/**
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUnstasis
	 */
	struct ABeeHive_PlayerOwned_C_BPUnstasis_Params
	{	};

	/**
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.UserConstructionScript
	 */
	struct ABeeHive_PlayerOwned_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveBeginPlay
	 */
	struct ABeeHive_PlayerOwned_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveDestroyed
	 */
	struct ABeeHive_PlayerOwned_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ExecuteUbergraph_BeeHive_PlayerOwned
	 */
	struct ABeeHive_PlayerOwned_C_ExecuteUbergraph_BeeHive_PlayerOwned_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
