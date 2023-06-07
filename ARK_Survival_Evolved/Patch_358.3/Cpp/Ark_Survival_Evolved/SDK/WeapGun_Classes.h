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
	 * BlueprintGeneratedClass WeapGun.WeapGun_C
	 * Size -> 0x0000 (FullSize[0x0DC0] - InheritedSize[0x0DC0])
	 */
	class AWeapGun_C : public AShooterWeapon_Instant
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
