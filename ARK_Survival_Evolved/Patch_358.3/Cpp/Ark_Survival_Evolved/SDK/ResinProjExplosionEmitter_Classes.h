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
	 * BlueprintGeneratedClass ResinProjExplosionEmitter.ResinProjExplosionEmitter_C
	 * Size -> 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
	 */
	class AResinProjExplosionEmitter_C : public APrimalEmitterSpawnable
	{
	public:
		class UArrowComponent*                                     Arrow1;                                                  // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ResinProjExplosionEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
