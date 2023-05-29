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
	 * BlueprintGeneratedClass WeapMachinedSniper.WeapMachinedSniper_C
	 * Size -> 0x0000 (FullSize[0x0DC0] - InheritedSize[0x0DC0])
	 */
	class AWeapMachinedSniper_C : public AShooterWeapon_Instant
	{
	public:
		bool ForceDisableCameraOverrides();
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMachinedSniper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
