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
	 * Function Buff_BloodCurse.Buff_BloodCurse_C.BuffTickClient
	 */
	struct ABuff_BloodCurse_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4X7V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BloodCurse.Buff_BloodCurse_C.BPActivated
	 */
	struct ABuff_BloodCurse_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BloodCurse.Buff_BloodCurse_C.BPDeactivated
	 */
	struct ABuff_BloodCurse_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BloodCurse.Buff_BloodCurse_C.ReceiveTick
	 */
	struct ABuff_BloodCurse_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BCZX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BloodCurse.Buff_BloodCurse_C.UserConstructionScript
	 */
	struct ABuff_BloodCurse_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BloodCurse.Buff_BloodCurse_C.ExecuteUbergraph_Buff_BloodCurse
	 */
	struct ABuff_BloodCurse_C_ExecuteUbergraph_Buff_BloodCurse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
