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
	 * Function Buff_Pinned.Buff_Pinned_C.BPPreventFirstPerson
	 */
	struct ABuff_Pinned_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.BPCheckPreventInput
	 */
	struct ABuff_Pinned_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.PlaySleepingAnim
	 */
	struct ABuff_Pinned_C_PlaySleepingAnim_Params
	{	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.UserConstructionScript
	 */
	struct ABuff_Pinned_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.BPDeactivated
	 */
	struct ABuff_Pinned_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.ReceiveBeginPlay
	 */
	struct ABuff_Pinned_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.BuffTickServer
	 */
	struct ABuff_Pinned_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.ServerStruggle
	 */
	struct ABuff_Pinned_C_ServerStruggle_Params
	{	};

	/**
	 * Function Buff_Pinned.Buff_Pinned_C.ExecuteUbergraph_Buff_Pinned
	 */
	struct ABuff_Pinned_C_ExecuteUbergraph_Buff_Pinned_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
