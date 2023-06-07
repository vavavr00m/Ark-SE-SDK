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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C
	 * Size -> 0x0010 (FullSize[0x0AF8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_WeaponTekSword_Mjolnir_C : public UPrimalItem_WeaponTekSword_C
	{
	public:
		class FString                                              MjolnirNotWorthyString;                                  // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool BPPreventWeaponEquip();
		void BPOnLocalUse(class AShooterCharacter* forCharacter);
		void ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
