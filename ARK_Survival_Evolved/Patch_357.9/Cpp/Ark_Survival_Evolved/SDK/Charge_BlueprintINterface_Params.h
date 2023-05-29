﻿#pragma once

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
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventIntMulticastInterface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventIntMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D31F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventIntInterface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventIntInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SY4Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.GetNumBatteries
	 */
	struct UCharge_BlueprintInterface_C_GetNumBatteries_Params
	{
	public:
		int32_t                                                    numBatteries;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventDoubleInterface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventDoubleInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LW62[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventFloatInterface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventFloatInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JRMT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Boolean Interface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventBooleanInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Double MulticastInterface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventDoubleMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJL9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Float Multicast Interface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventFloatMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_909K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Boolean MulticastInterface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventBooleanMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Interface Check for Batteries and Update Multicast
	 */
	struct UCharge_BlueprintInterface_C_InterfaceCheckforBatteriesandUpdateMulticast_Params
	{	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Trigger Multicast Interface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventTriggerMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U6P3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    iVariable;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Interface
	 */
	struct UCharge_BlueprintInterface_C_ChargeVariableEventInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O2YL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Get Charge Variable Interface
	 */
	struct UCharge_BlueprintInterface_C_GetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8OC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FC5P[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Set Charge Variable Interface
	 */
	struct UCharge_BlueprintInterface_C_SetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J08J[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_65V3[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
