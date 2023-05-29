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
	 * BlueprintGeneratedClass ProjGrenadeTek.ProjGrenadeTek_C
	 * Size -> 0x00A8 (FullSize[0x0708] - InheritedSize[0x0660])
	 */
	class AProjGrenadeTek_C : public AShooterProjectile
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     AudioAttached;                                           // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystemAttached;                                  // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     Audio1;                                                  // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FHitResult                                          K2Node_Event_Result;                                     // 0x0680(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm

	public:
		void BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity);
		void BPAttachedRootComponent();
		void UserConstructionScript();
		void OnExplode(struct FHitResult* Result);
		void ExecuteUbergraph_ProjGrenadeTek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
