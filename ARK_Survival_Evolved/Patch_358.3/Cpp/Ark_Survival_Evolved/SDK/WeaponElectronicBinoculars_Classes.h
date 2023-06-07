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
	 * BlueprintGeneratedClass WeaponElectronicBinoculars.WeaponElectronicBinoculars_C
	 * Size -> 0x0000 (FullSize[0x0E38] - InheritedSize[0x0E38])
	 */
	class AWeaponElectronicBinoculars_C : public APrimalWeaponElectronicBinoculars
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeaponElectronicBinoculars(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
