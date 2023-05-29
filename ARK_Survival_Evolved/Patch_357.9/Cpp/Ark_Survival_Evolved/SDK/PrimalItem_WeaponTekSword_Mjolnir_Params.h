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
	 * Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPPreventWeaponEquip
	 */
	struct UPrimalItem_WeaponTekSword_Mjolnir_C_BPPreventWeaponEquip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPOnLocalUse
	 */
	struct UPrimalItem_WeaponTekSword_Mjolnir_C_BPOnLocalUse_Params
	{
	public:
		class AShooterCharacter*                                   forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir
	 */
	struct UPrimalItem_WeaponTekSword_Mjolnir_C_ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
