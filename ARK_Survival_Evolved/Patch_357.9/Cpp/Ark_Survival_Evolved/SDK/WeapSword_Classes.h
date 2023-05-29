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
	 * BlueprintGeneratedClass WeapSword.WeapSword_C
	 * Size -> 0x0000 (FullSize[0x0D88] - InheritedSize[0x0D88])
	 */
	class AWeapSword_C : public AWeapBaseClub_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapSword(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif