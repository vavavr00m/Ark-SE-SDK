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
	 * Function Buff_BeeSting.Buff_BeeSting_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_BeeSting_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U2CK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BeeSting.Buff_BeeSting_C.ResetValues
	 */
	struct ABuff_BeeSting_C_ResetValues_Params
	{	};

	/**
	 * Function Buff_BeeSting.Buff_BeeSting_C.UserConstructionScript
	 */
	struct ABuff_BeeSting_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BeeSting.Buff_BeeSting_C.ReceiveBeginPlay
	 */
	struct ABuff_BeeSting_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_BeeSting.Buff_BeeSting_C.ReceiveEndPlay
	 */
	struct ABuff_BeeSting_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BeeSting.Buff_BeeSting_C.BuffTickServer
	 */
	struct ABuff_BeeSting_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BeeSting.Buff_BeeSting_C.ExecuteUbergraph_Buff_BeeSting
	 */
	struct ABuff_BeeSting_C_ExecuteUbergraph_Buff_BeeSting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
