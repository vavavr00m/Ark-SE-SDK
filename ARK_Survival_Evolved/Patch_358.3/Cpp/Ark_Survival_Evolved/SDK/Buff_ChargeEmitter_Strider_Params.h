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
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetHUDElements
	 */
	struct ABuff_ChargeEmitter_Strider_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetMultiUseEntries
	 */
	struct ABuff_ChargeEmitter_Strider_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Get Current Charge
	 */
	struct ABuff_ChargeEmitter_Strider_C_GetCurrentCharge_Params
	{
	public:
		float                                                      CurrentCharge;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ChargeVariableEvent
	 */
	struct ABuff_ChargeEmitter_Strider_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15YC[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Modify Charge
	 */
	struct ABuff_ChargeEmitter_Strider_C_ModifyCharge_Params
	{
	public:
		bool                                                       SetValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4LMV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IMZG[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      chargeAdded;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Pre Timer Modify Charge Actions
	 */
	struct ABuff_ChargeEmitter_Strider_C_PreTimerModifyChargeActions_Params
	{
	public:
		bool                                                       shouldSkipModify;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is Harvest Cooldown Over
	 */
	struct ABuff_ChargeEmitter_Strider_C_IsHarvestCooldownOver_Params
	{
	public:
		bool                                                       isOver;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IAO0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanPlayerHarvest
	 */
	struct ABuff_ChargeEmitter_Strider_C_CanPlayerHarvest_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       toBattery;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canHarvest;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanEmitCharge
	 */
	struct ABuff_ChargeEmitter_Strider_C_CanEmitCharge_Params
	{
	public:
		bool                                                       canEmit;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZLG8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Take Harvesting Charge From Character
	 */
	struct ABuff_ChargeEmitter_Strider_C_TakeHarvestingChargeFromCharacter_Params
	{
	public:
		float                                                      chargeHarvested;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      chargeTaken;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ShouldEnableTimers
	 */
	struct ABuff_ChargeEmitter_Strider_C_ShouldEnableTimers_Params
	{
	public:
		bool                                                       tickServer;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TickClient;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.OnChargeHarvested
	 */
	struct ABuff_ChargeEmitter_Strider_C_OnChargeHarvested_Params
	{
	public:
		float                                                      amountHarvested;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is EmitterAvailableForHarvesting
	 */
	struct ABuff_ChargeEmitter_Strider_C_IsEmitterAvailableForHarvesting_Params
	{
	public:
		bool                                                       available;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Should Update Charge On Timer
	 */
	struct ABuff_ChargeEmitter_Strider_C_ShouldUpdateChargeOnTimer_Params
	{
	public:
		bool                                                       shouldUpdateWithTimer;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LQTB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanReceive Charge
	 */
	struct ABuff_ChargeEmitter_Strider_C_CanReceiveCharge_Params
	{
	public:
		bool                                                       canReceive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitter_Strider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ExecuteUbergraph_Buff_ChargeEmitter_Strider
	 */
	struct ABuff_ChargeEmitter_Strider_C_ExecuteUbergraph_Buff_ChargeEmitter_Strider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
