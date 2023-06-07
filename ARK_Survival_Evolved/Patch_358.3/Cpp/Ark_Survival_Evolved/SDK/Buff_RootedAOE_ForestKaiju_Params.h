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
	 * Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPActivated
	 */
	struct ABuff_RootedAOE_ForestKaiju_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.RootEnemiesInside
	 */
	struct ABuff_RootedAOE_ForestKaiju_C_RootEnemiesInside_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPDeactivated
	 */
	struct ABuff_RootedAOE_ForestKaiju_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.UserConstructionScript
	 */
	struct ABuff_RootedAOE_ForestKaiju_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveTick
	 */
	struct ABuff_RootedAOE_ForestKaiju_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveBeginPlay
	 */
	struct ABuff_RootedAOE_ForestKaiju_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ExecuteUbergraph_Buff_RootedAOE_ForestKaiju
	 */
	struct ABuff_RootedAOE_ForestKaiju_C_ExecuteUbergraph_Buff_RootedAOE_ForestKaiju_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
