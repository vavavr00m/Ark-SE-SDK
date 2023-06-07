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
	 * Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ReceiveBeginPlay
	 */
	struct ABuff_MinigunNearingOverheat_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.BuffTickClient
	 */
	struct ABuff_MinigunNearingOverheat_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5C5D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_MinigunNearingOverheat_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.AllowPostProcessEffect
	 */
	struct ABuff_MinigunNearingOverheat_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.UserConstructionScript
	 */
	struct ABuff_MinigunNearingOverheat_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ExecuteUbergraph_Buff_MinigunNearingOverheat
	 */
	struct ABuff_MinigunNearingOverheat_C_ExecuteUbergraph_Buff_MinigunNearingOverheat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
