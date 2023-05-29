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
	 * Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.AllowPostProcessEffect
	 */
	struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2D8B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GH4Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.BPCustomAllowAddBuff
	 */
	struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.BuffTickClient
	 */
	struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F0C5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.UserConstructionScript
	 */
	struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_MilkGlider
	 */
	struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_MilkGlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
