#pragma once

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
	 * BlueprintGeneratedClass HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C
	 * Size -> 0x0010 (FullSize[0x0498] - InheritedSize[0x0488])
	 */
	class AHoverSkiff_Deathsplosion_C : public ADestructibleActor
	{
	public:
		class URadialForceComponent*                               ExplosionForce;                                          // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ExplosionParticles;                                      // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void InitDeathsplosion(class ATekHoverSkiff_Character_BP_C* FromSkiff);
		void ReceiveDestroyed();
		void UserConstructionScript();
		void ExecuteUbergraph_HoverSkiff_Deathsplosion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
