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
	 * Function Buff_NearChrufe.Buff_NearChrufe_C.BPDeactivated
	 */
	struct ABuff_NearChrufe_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NearChrufe.Buff_NearChrufe_C.BuffTickClient
	 */
	struct ABuff_NearChrufe_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5CD3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_NearChrufe.Buff_NearChrufe_C.Update Heat Level
	 */
	struct ABuff_NearChrufe_C_UpdateHeatLevel_Params
	{
	public:
		int32_t                                                    IncreasedHeatlevel;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NearChrufe.Buff_NearChrufe_C.UserConstructionScript
	 */
	struct ABuff_NearChrufe_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_NearChrufe.Buff_NearChrufe_C.ExecuteUbergraph_Buff_NearChrufe
	 */
	struct ABuff_NearChrufe_C_ExecuteUbergraph_Buff_NearChrufe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
