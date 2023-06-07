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
	 * Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPOnPreventedFiringDisabledWeapon
	 */
	struct ABuff_Poop_Dinopithecus_C_BPOnPreventedFiringDisabledWeapon_Params
	{
	public:
		class AShooterWeapon*                                      weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                PreventingTag;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPPreventTekArmorBuffs
	 */
	struct ABuff_Poop_Dinopithecus_C_BPPreventTekArmorBuffs_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.UserConstructionScript
	 */
	struct ABuff_Poop_Dinopithecus_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.ExecuteUbergraph_Buff_Poop_Dinopithecus
	 */
	struct ABuff_Poop_Dinopithecus_C_ExecuteUbergraph_Buff_Poop_Dinopithecus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
