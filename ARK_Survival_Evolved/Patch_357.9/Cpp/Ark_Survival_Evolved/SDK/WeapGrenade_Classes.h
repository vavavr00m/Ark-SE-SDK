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
	 * BlueprintGeneratedClass WeapGrenade.WeapGrenade_C
	 * Size -> 0x0000 (FullSize[0x0EA0] - InheritedSize[0x0EA0])
	 */
	class AWeapGrenade_C : public APrimalWeaponGrenade
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapGrenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
