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
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.CalculateDoTDamage
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_CalculateDoTDamage_Params
	{
	public:
		float                                                      TimeSinceLastDoT;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BuffTickServer
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.Do Damage Over TimeFn
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_DoDamageOverTimeFn_Params
	{
	public:
		double                                                     LastDotTime;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BPAdjustStatusValueModification
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_BPAdjustStatusValueModification_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     ForComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B33C[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InAmount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageTypeClass;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bManualModification;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUBZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveBeginPlay
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveEndPlay
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.UserConstructionScript
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent
	 */
	struct ABuff_Female_LFL_Maxcombo_Parent_C_ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
