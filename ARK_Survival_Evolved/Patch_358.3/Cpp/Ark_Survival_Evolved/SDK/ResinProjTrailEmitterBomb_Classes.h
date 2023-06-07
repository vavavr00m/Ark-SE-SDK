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
	 * BlueprintGeneratedClass ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C
	 * Size -> 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
	 */
	class AResinProjTrailEmitterBomb_C : public APrimalEmitterSpawnable
	{
	public:
		class UParticleSystemComponent*                            InfectedParticles;                                       // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ActivateInfectedParticles();
		void UserConstructionScript();
		void ExecuteUbergraph_ResinProjTrailEmitterBomb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
