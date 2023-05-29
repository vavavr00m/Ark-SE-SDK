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
	 * Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ShouldEnableTimers
	 */
	struct ABuff_ChargeEmitter_LanternPet_C_ShouldEnableTimers_Params
	{
	public:
		bool                                                       tickServer;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TickClient;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRUJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ChargeVariableEvent
	 */
	struct ABuff_ChargeEmitter_LanternPet_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XI0N[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ReceiveDestroyed
	 */
	struct ABuff_ChargeEmitter_LanternPet_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.BuffTickServer
	 */
	struct ABuff_ChargeEmitter_LanternPet_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitter_LanternPet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ExecuteUbergraph_Buff_ChargeEmitter_LanternPet
	 */
	struct ABuff_ChargeEmitter_LanternPet_C_ExecuteUbergraph_Buff_ChargeEmitter_LanternPet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
