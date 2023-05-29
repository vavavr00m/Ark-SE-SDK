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
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.IsDotProductValid
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_IsDotProductValid_Params
	{	};

	/**
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPPreSetupForInstigator
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPSetupForInstigator
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.PlayStartledAnim
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_PlayStartledAnim_Params
	{	};

	/**
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPCheckPreventInput
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.UserConstructionScript
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPActivated
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis
	 */
	struct ABuff_Flashbang_DinoPawn_Genesis_C_ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
