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
	 * Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPOnInstigatorMovementModeChangedNotify
	 */
	struct ABuff_NoFallDamageOnStrider_C_BPOnInstigatorMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPCustomAllowAddBuff
	 */
	struct ABuff_NoFallDamageOnStrider_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.UserConstructionScript
	 */
	struct ABuff_NoFallDamageOnStrider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.ExecuteUbergraph_Buff_NoFallDamageOnStrider
	 */
	struct ABuff_NoFallDamageOnStrider_C_ExecuteUbergraph_Buff_NoFallDamageOnStrider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
