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
	 * Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPDeactivated
	 */
	struct ABuff_SummonerTumor_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SummonerTumor.Buff_SummonerTumor_C.BuffTickServer
	 */
	struct ABuff_SummonerTumor_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QYXF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPExcludeAoEActor
	 */
	struct ABuff_SummonerTumor_C_BPExcludeAoEActor_Params
	{
	public:
		class AActor*                                              ActorToConsider;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SummonerTumor.Buff_SummonerTumor_C.UserConstructionScript
	 */
	struct ABuff_SummonerTumor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SummonerTumor.Buff_SummonerTumor_C.ExecuteUbergraph_Buff_SummonerTumor
	 */
	struct ABuff_SummonerTumor_C_ExecuteUbergraph_Buff_SummonerTumor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
