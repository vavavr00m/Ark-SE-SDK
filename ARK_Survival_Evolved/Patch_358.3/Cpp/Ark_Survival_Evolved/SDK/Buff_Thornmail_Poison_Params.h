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
	 * Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.CalculateDoTDamage
	 */
	struct ABuff_Thornmail_Poison_C_CalculateDoTDamage_Params
	{
	public:
		float                                                      TimeSinceLastDoT;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.UserConstructionScript
	 */
	struct ABuff_Thornmail_Poison_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.ExecuteUbergraph_Buff_Thornmail_Poison
	 */
	struct ABuff_Thornmail_Poison_C_ExecuteUbergraph_Buff_Thornmail_Poison_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
