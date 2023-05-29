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
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerCustomEvent
	 */
	struct ABuff_ChargeManager_C_ManagerCustomEvent_Params
	{
	public:
		class AActor*                                              requestingActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_ChargeManagerType                                        requiresManagerOfType;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerIsBuffOfType
	 */
	struct ABuff_ChargeManager_C_ManagerIsBuffOfType_Params
	{
	public:
		E_ChargeManagerType                                        typeToCheck;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isOfType;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Should Receive Charge FromEmitter
	 */
	struct ABuff_ChargeManager_C_ShouldReceiveChargeFromEmitter_Params
	{
	public:
		class ABuff_ChargeEmitter_C*                               Emitter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       shouldReceive;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeVariableExternalManager
	 */
	struct ABuff_ChargeManager_C_GetChargeVariableExternalManager_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z937[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DHKJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Update Tick Delta Time
	 */
	struct ABuff_ChargeManager_C_UpdateTickDeltaTime_Params
	{
	public:
		float                                                      deltaTimeServer;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      deltaTimeClient;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.ForceEnableTimer
	 */
	struct ABuff_ChargeManager_C_ForceEnableTimer_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ECM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.On Batteries Charged Client
	 */
	struct ABuff_ChargeManager_C_OnBatteriesChargedClient_Params
	{
	public:
		float                                                      chargeAdded;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Client
	 */
	struct ABuff_ChargeManager_C_BatteriesLogicClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Pre Timer Modify Charge Actions
	 */
	struct ABuff_ChargeManager_C_PreTimerModifyChargeActions_Params
	{
	public:
		bool                                                       shouldSkipModify;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Actor Inventory And Items
	 */
	struct ABuff_ChargeManager_C_GetChargeActorInventoryAndItems_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UPrimalItem*>                                 ownerItems;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		class UPrimalInventoryComponent*                           actorInventory;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge To Batteries Parallel
	 */
	struct ABuff_ChargeManager_C_AddChargeToBatteriesParallel_Params
	{
	public:
		float                                                      amountToAddPerBattery;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LA1Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              inventoryOwner;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       takeChargeFromBuff;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastCharge;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Q72[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      maxChargeToAdd;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceUseAllCharge;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VHOA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      chargeAddedToBattery;                                    // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    accessedBatteries;                                       // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargePercent
	 */
	struct ABuff_ChargeManager_C_GetChargePercent_Params
	{
	public:
		float                                                      OutPercent;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldExecuteBatteriesLogic
	 */
	struct ABuff_ChargeManager_C_ShouldExecuteBatteriesLogic_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.DestroyBuff
	 */
	struct ABuff_ChargeManager_C_DestroyBuff_Params
	{	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeToBattery
	 */
	struct ABuff_ChargeManager_C_AddChargeToBattery_Params
	{
	public:
		class UPrimalItem_ChargeBattery_C*                         battery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       takeChargeFromBuff;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastCharge;                                         // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C43Y[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      chargeToAdd;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      chargeAddedToBattery;                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      chargeTakenFromBuff;                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Server
	 */
	struct ABuff_ChargeManager_C_BatteriesLogicServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Take Charge from Batteries
	 */
	struct ABuff_ChargeManager_C_TakeChargefromBatteries_Params
	{
	public:
		float                                                      AmountToTake;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FLVP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              inventoryOwner;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       addChargeToBuff;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       updateItem;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastCharge;                                         // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VDK8[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      chargeTaken;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    accessedBatteries;                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge to Batteries
	 */
	struct ABuff_ChargeManager_C_AddChargetoBatteries_Params
	{
	public:
		float                                                      amountToAdd;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6PF0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              inventoryOwner;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       takeChargeFromBuff;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastCharge;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZVDR[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      chargeAddedToBattery;                                    // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    accessedBatteries;                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.OnBatteryItemChange
	 */
	struct ABuff_ChargeManager_C_OnBatteryItemChange_Params
	{	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Has Relevant Battery in Inventory
	 */
	struct ABuff_ChargeManager_C_HasRelevantBatteryinInventory_Params
	{
	public:
		bool                                                       shouldExecuteLogic;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Check BatteriesAndUpdate
	 */
	struct ABuff_ChargeManager_C_CheckBatteriesAndUpdate_Params
	{	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.ChargeVariableEvent
	 */
	struct ABuff_ChargeManager_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WRTB[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.SetChargeVariable
	 */
	struct ABuff_ChargeManager_C_SetChargeVariable_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D1MX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OVLU[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Variable
	 */
	struct ABuff_ChargeManager_C_GetChargeVariable_Params
	{
	public:
		E_ChargeVariableNames                                      VariableName;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4Z85[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WDU8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeMultiplierForSource
	 */
	struct ABuff_ChargeManager_C_GetChargeMultiplierForSource_Params
	{
	public:
		class ABuff_ChargeEmitter_C*                               buffSource;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isHarvesting;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5VEU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Multiplier;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeSource
	 */
	struct ABuff_ChargeManager_C_AddChargeSource_Params
	{
	public:
		class ABuff_ChargeEmitter_C*                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldEnableTimers
	 */
	struct ABuff_ChargeManager_C_ShouldEnableTimers_Params
	{
	public:
		bool                                                       tickServer;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TickClient;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RG4V[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.InitializeManager
	 */
	struct ABuff_ChargeManager_C_InitializeManager_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.EnableTimersIfNeeded
	 */
	struct ABuff_ChargeManager_C_EnableTimersIfNeeded_Params
	{	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Should Update Charge On Timer
	 */
	struct ABuff_ChargeManager_C_ShouldUpdateChargeOnTimer_Params
	{
	public:
		bool                                                       shouldUpdateWithTimer;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BIGF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.IsGainingCharge
	 */
	struct ABuff_ChargeManager_C_IsGainingCharge_Params
	{
	public:
		bool                                                       IsGainingCharge;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_78WX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.isGettingCharge
	 */
	struct ABuff_ChargeManager_C_isGettingCharge_Params
	{
	public:
		bool                                                       isGettingCharge;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.CalculateChargeReceivedPerSecond
	 */
	struct ABuff_ChargeManager_C_CalculateChargeReceivedPerSecond_Params
	{
	public:
		float                                                      receivedCharge;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.OnChargeEvent
	 */
	struct ABuff_ChargeManager_C_OnChargeEvent_Params
	{	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.IsFirstCharge
	 */
	struct ABuff_ChargeManager_C_IsFirstCharge_Params
	{
	public:
		bool                                                       IsFirstCharge;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickClient
	 */
	struct ABuff_ChargeManager_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Modify Charge
	 */
	struct ABuff_ChargeManager_C_ModifyCharge_Params
	{
	public:
		bool                                                       SetValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I5SM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YODX[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      chargeAdded;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Update Charge on Timer
	 */
	struct ABuff_ChargeManager_C_UpdateChargeonTimer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.Get ChargeInEnvironment
	 */
	struct ABuff_ChargeManager_C_GetChargeInEnvironment_Params
	{
	public:
		bool                                                       getRawValue;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_52Y9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      receivedCharge;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickServer
	 */
	struct ABuff_ChargeManager_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.OnReceivedCharge
	 */
	struct ABuff_ChargeManager_C_OnReceivedCharge_Params
	{
	public:
		float                                                      chargeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.CanReceive Charge
	 */
	struct ABuff_ChargeManager_C_CanReceiveCharge_Params
	{
	public:
		bool                                                       canReceive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.UserConstructionScript
	 */
	struct ABuff_ChargeManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.OnIsReceiverChange
	 */
	struct ABuff_ChargeManager_C_OnIsReceiverChange_Params
	{	};

	/**
	 * Function Buff_ChargeManager.Buff_ChargeManager_C.ExecuteUbergraph_Buff_ChargeManager
	 */
	struct ABuff_ChargeManager_C_ExecuteUbergraph_Buff_ChargeManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
