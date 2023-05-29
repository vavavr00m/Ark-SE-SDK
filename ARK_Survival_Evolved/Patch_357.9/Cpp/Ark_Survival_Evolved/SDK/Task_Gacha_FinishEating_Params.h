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
	 * Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveTick
	 */
	struct UTask_Gacha_FinishEating_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveExecute
	 */
	struct UTask_Gacha_FinishEating_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ExecuteUbergraph_Task_Gacha_FinishEating
	 */
	struct UTask_Gacha_FinishEating_C_ExecuteUbergraph_Task_Gacha_FinishEating_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
