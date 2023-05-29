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
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_TropeWindGustTarget_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ReceiveBeginPlay
	 */
	struct ABuff_TropeWindGustTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.AllowPostProcessEffect
	 */
	struct ABuff_TropeWindGustTarget_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1LNT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPDeactivated
	 */
	struct ABuff_TropeWindGustTarget_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPSetupForInstigator
	 */
	struct ABuff_TropeWindGustTarget_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BuffTickServer
	 */
	struct ABuff_TropeWindGustTarget_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPActivated
	 */
	struct ABuff_TropeWindGustTarget_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.UserConstructionScript
	 */
	struct ABuff_TropeWindGustTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ExecuteUbergraph_Buff_TropeWindGustTarget
	 */
	struct ABuff_TropeWindGustTarget_C_ExecuteUbergraph_Buff_TropeWindGustTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
