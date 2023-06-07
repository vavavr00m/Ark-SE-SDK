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
	 * Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPCanBeCarried
	 */
	struct ABuff_Drums_ReadyForWar_C_BPCanBeCarried_Params
	{
	public:
		class APrimalCharacter*                                    ByCarrier;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNWG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPInterceptUseAction
	 */
	struct ABuff_Drums_ReadyForWar_C_BPInterceptUseAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9VC9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated
	 */
	struct ABuff_Drums_ReadyForWar_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript
	 */
	struct ABuff_Drums_ReadyForWar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.AllowDismount
	 */
	struct ABuff_Drums_ReadyForWar_C_AllowDismount_Params
	{	};

	/**
	 * Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.PreventDismount
	 */
	struct ABuff_Drums_ReadyForWar_C_PreventDismount_Params
	{	};

	/**
	 * Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar
	 */
	struct ABuff_Drums_ReadyForWar_C_ExecuteUbergraph_Buff_Drums_ReadyForWar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
