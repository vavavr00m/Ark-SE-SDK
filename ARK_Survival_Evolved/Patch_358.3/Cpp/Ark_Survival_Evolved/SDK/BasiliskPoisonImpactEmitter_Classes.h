﻿#pragma once

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
	 * BlueprintGeneratedClass BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C
	 * Size -> 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
	 */
	class ABasiliskPoisonImpactEmitter_C : public AExplosionEmitter_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BasiliskPoisonImpactEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
