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
	 * Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.IsActorInEffectiveRange
	 */
	struct ABuff_Mjolnir_Lightning_AoE_C_IsActorInEffectiveRange_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInRange;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.InitializeAoE
	 */
	struct ABuff_Mjolnir_Lightning_AoE_C_InitializeAoE_Params
	{	};

	/**
	 * Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.CanAffectCharacter
	 */
	struct ABuff_Mjolnir_Lightning_AoE_C_CanAffectCharacter_Params
	{
	public:
		class APrimalCharacter*                                    characterToAffect;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canStun;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_17A6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.BPExcludeAoEActor
	 */
	struct ABuff_Mjolnir_Lightning_AoE_C_BPExcludeAoEActor_Params
	{
	public:
		class AActor*                                              ActorToConsider;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.UserConstructionScript
	 */
	struct ABuff_Mjolnir_Lightning_AoE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE
	 */
	struct ABuff_Mjolnir_Lightning_AoE_C_ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.OnNewActorAdded__DelegateSignature
	 */
	struct ABuff_Mjolnir_Lightning_AoE_C_OnNewActorAdded__DelegateSignature_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
