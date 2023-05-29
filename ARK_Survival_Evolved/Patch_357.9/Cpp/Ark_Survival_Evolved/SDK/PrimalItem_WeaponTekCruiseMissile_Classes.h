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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_WeaponTekCruiseMissile_C : public UPrimalItem_CruiseMissile
	{
	public:
		bool BPProcessEditText(class AShooterPlayerController* ForPC, const class FString& TextToUse);
		void SetScoutCharacterStatusValues(TArray<float>* Stats);
		void MissileReleasedPossessingSurvivor(bool delayforzoomout);
		void MissilePossessedbySurvivor();
		void ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
