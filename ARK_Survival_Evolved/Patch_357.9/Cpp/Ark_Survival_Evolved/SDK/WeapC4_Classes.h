﻿#pragma once

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
	 * BlueprintGeneratedClass WeapC4.WeapC4_C
	 * Size -> 0x0000 (FullSize[0x0E00] - InheritedSize[0x0E00])
	 */
	class AWeapC4_C : public AShooterWeapon_Placer
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapC4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
