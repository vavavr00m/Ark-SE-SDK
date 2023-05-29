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
	 * BlueprintGeneratedClass WeapSparkler.WeapSparkler_C
	 * Size -> 0x0010 (FullSize[0x0D98] - InheritedSize[0x0D88])
	 */
	class AWeapSparkler_C : public AShooterWeapon_Melee
	{
	public:
		class UAudioComponent*                                     Audio1;                                                  // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem2;                                         // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapSparkler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
