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
	 * Function DinoCharacterStatusComponent_BP_Diplocaulus.DinoCharacterStatusComponent_BP_Diplocaulus_C.BPAdjustStatusValueModification
	 */
	struct UDinoCharacterStatusComponent_BP_Diplocaulus_C_BPAdjustStatusValueModification_Params
	{
	public:
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XRCF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bManualModification;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QAEF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacterStatusComponent_BP_Diplocaulus.DinoCharacterStatusComponent_BP_Diplocaulus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Diplocaulus
	 */
	struct UDinoCharacterStatusComponent_BP_Diplocaulus_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Diplocaulus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif