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
	 * Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveExecute
	 */
	struct UTask_FKaijuProtect_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveAbort
	 */
	struct UTask_FKaijuProtect_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuProtect.Task_FKaijuProtect_C.ExecuteUbergraph_Task_FKaijuProtect
	 */
	struct UTask_FKaijuProtect_C_ExecuteUbergraph_Task_FKaijuProtect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
