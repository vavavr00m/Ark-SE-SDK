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
	 * Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveTick
	 */
	struct UBTService_StopRunningIfWithinDistance_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M976[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveDeactivation
	 */
	struct UBTService_StopRunningIfWithinDistance_C_ReceiveDeactivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveActivation
	 */
	struct UBTService_StopRunningIfWithinDistance_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ExecuteUbergraph_BTService_StopRunningIfWithinDistance
	 */
	struct UBTService_StopRunningIfWithinDistance_C_ExecuteUbergraph_BTService_StopRunningIfWithinDistance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
