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
	 * Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.AllowPostProcessEffect
	 */
	struct ABuff_TekSuit_Gen2_Cosmetic_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4R32[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.BuffTickClient
	 */
	struct ABuff_TekSuit_Gen2_Cosmetic_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.UserConstructionScript
	 */
	struct ABuff_TekSuit_Gen2_Cosmetic_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic
	 */
	struct ABuff_TekSuit_Gen2_Cosmetic_C_ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
