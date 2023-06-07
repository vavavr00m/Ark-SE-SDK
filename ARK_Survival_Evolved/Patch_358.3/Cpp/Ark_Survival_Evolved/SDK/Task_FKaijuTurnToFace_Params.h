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
	 * Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveExecute
	 */
	struct UTask_FKaijuTurnToFace_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveTick
	 */
	struct UTask_FKaijuTurnToFace_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveAbort
	 */
	struct UTask_FKaijuTurnToFace_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ExecuteUbergraph_Task_FKaijuTurnToFace
	 */
	struct UTask_FKaijuTurnToFace_C_ExecuteUbergraph_Task_FKaijuTurnToFace_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
