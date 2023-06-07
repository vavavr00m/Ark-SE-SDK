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
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPResetBuffStart
	 */
	struct ABuff_WhipForTamedDino_C_BPResetBuffStart_Params
	{	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.SetBuffCauser
	 */
	struct ABuff_WhipForTamedDino_C_SetBuffCauser_Params
	{
	public:
		class AActor*                                              CausedBy;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BuffTickServer
	 */
	struct ABuff_WhipForTamedDino_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.PlayStartledAnim
	 */
	struct ABuff_WhipForTamedDino_C_PlayStartledAnim_Params
	{	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPActivated
	 */
	struct ABuff_WhipForTamedDino_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPCustomAllowAddBuff
	 */
	struct ABuff_WhipForTamedDino_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.UserConstructionScript
	 */
	struct ABuff_WhipForTamedDino_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPSetupForInstigator
	 */
	struct ABuff_WhipForTamedDino_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.ExecuteUbergraph_Buff_WhipForTamedDino
	 */
	struct ABuff_WhipForTamedDino_C_ExecuteUbergraph_Buff_WhipForTamedDino_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
