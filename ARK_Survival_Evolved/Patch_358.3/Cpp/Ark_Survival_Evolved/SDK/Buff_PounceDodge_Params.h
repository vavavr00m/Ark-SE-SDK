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
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.ReceiveTick
	 */
	struct ABuff_PounceDodge_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.BPPreventFirstPerson
	 */
	struct ABuff_PounceDodge_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.PreventJump
	 */
	struct ABuff_PounceDodge_C_PreventJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HU1R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.UserConstructionScript
	 */
	struct ABuff_PounceDodge_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.ServerDodge
	 */
	struct ABuff_PounceDodge_C_ServerDodge_Params
	{	};

	/**
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodge
	 */
	struct ABuff_PounceDodge_C_MultiOnDodge_Params
	{	};

	/**
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodgeEnd
	 */
	struct ABuff_PounceDodge_C_MultiOnDodgeEnd_Params
	{	};

	/**
	 * Function Buff_PounceDodge.Buff_PounceDodge_C.ExecuteUbergraph_Buff_PounceDodge
	 */
	struct ABuff_PounceDodge_C_ExecuteUbergraph_Buff_PounceDodge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
