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
	 * Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BuffTickServer
	 */
	struct ABuff_Stunned_RaceWait_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JFOC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPSetupForInstigator
	 */
	struct ABuff_Stunned_RaceWait_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPDeactivated
	 */
	struct ABuff_Stunned_RaceWait_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.UserConstructionScript
	 */
	struct ABuff_Stunned_RaceWait_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.ExecuteUbergraph_Buff_Stunned_RaceWait
	 */
	struct ABuff_Stunned_RaceWait_C_ExecuteUbergraph_Buff_Stunned_RaceWait_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
