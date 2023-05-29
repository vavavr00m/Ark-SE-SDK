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
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.BPExcludeAoEActor
	 */
	struct ABuff_MagmaAoE_C_BPExcludeAoEActor_Params
	{
	public:
		class AActor*                                              ActorToConsider;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DFPU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.UserConstructionScript
	 */
	struct ABuff_MagmaAoE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_MagmaAoE_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_MagmaAoE_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveTick
	 */
	struct ABuff_MagmaAoE_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.SetStructure
	 */
	struct ABuff_MagmaAoE_C_SetStructure_Params
	{
	public:
		class APrimalStructure*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.DoFadeOutMesh
	 */
	struct ABuff_MagmaAoE_C_DoFadeOutMesh_Params
	{	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.CheckForRain
	 */
	struct ABuff_MagmaAoE_C_CheckForRain_Params
	{	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveBeginPlay
	 */
	struct ABuff_MagmaAoE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MagmaAoE.Buff_MagmaAoE_C.ExecuteUbergraph_Buff_MagmaAoE
	 */
	struct ABuff_MagmaAoE_C_ExecuteUbergraph_Buff_MagmaAoE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
