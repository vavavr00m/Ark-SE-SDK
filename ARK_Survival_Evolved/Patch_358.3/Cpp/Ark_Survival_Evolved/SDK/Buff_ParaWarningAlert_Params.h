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
	 * Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.Add Enemy Indicators
	 */
	struct ABuff_ParaWarningAlert_C_AddEnemyIndicators_Params
	{
	public:
		TArray<struct FVector>                                     Enemies;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.BPActivated
	 */
	struct ABuff_ParaWarningAlert_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.UserConstructionScript
	 */
	struct ABuff_ParaWarningAlert_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ClientAddEnemyIndicators
	 */
	struct ABuff_ParaWarningAlert_C_ClientAddEnemyIndicators_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ExecuteUbergraph_Buff_ParaWarningAlert
	 */
	struct ABuff_ParaWarningAlert_C_ExecuteUbergraph_Buff_ParaWarningAlert_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
