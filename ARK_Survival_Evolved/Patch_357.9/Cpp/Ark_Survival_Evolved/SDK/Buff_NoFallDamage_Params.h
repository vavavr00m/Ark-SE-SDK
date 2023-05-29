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
	 * Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPDeactivated
	 */
	struct ABuff_NoFallDamage_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPSetupForInstigator
	 */
	struct ABuff_NoFallDamage_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NoFallDamage.Buff_NoFallDamage_C.UserConstructionScript
	 */
	struct ABuff_NoFallDamage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_NoFallDamage.Buff_NoFallDamage_C.ExecuteUbergraph_Buff_NoFallDamage
	 */
	struct ABuff_NoFallDamage_C_ExecuteUbergraph_Buff_NoFallDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
