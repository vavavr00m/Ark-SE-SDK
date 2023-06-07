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
	 * Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.Wipe Out All Poison Trees And Wyverns
	 */
	struct UTask_FKaijuChestNodeDestroyed_C_WipeOutAllPoisonTreesAndWyverns_Params
	{	};

	/**
	 * Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.ReceiveExecute
	 */
	struct UTask_FKaijuChestNodeDestroyed_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.ExecuteUbergraph_Task_FKaijuChestNodeDestroyed
	 */
	struct UTask_FKaijuChestNodeDestroyed_C_ExecuteUbergraph_Task_FKaijuChestNodeDestroyed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
