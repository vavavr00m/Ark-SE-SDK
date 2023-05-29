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
	 * BlueprintGeneratedClass MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C
	 * Size -> 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
	 */
	class AMekEmitter_SwarmExplosion_C : public AExplosionEmitter_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MekEmitter_SwarmExplosion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
