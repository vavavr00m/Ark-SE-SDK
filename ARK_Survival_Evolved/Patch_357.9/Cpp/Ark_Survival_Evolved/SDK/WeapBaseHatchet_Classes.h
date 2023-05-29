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
	 * BlueprintGeneratedClass WeapBaseHatchet.WeapBaseHatchet_C
	 * Size -> 0x0000 (FullSize[0x0D88] - InheritedSize[0x0D88])
	 */
	class AWeapBaseHatchet_C : public AShooterWeapon_Melee
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapBaseHatchet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif