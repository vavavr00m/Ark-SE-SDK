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
	 * Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.MaybeCutGrapplingHooks
	 */
	struct UTask_ShakeOffBasedPlayers_C_MaybeCutGrapplingHooks_Params
	{	};

	/**
	 * Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveExecute
	 */
	struct UTask_ShakeOffBasedPlayers_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveAbort
	 */
	struct UTask_ShakeOffBasedPlayers_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ExecuteUbergraph_Task_ShakeOffBasedPlayers
	 */
	struct UTask_ShakeOffBasedPlayers_C_ExecuteUbergraph_Task_ShakeOffBasedPlayers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
