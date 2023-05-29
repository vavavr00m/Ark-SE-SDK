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
	 * BlueprintGeneratedClass ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C
	 * Size -> 0x0000 (FullSize[0x0688] - InheritedSize[0x0688])
	 */
	class AProjPoop_Shapeshifter_C : public APrimalProjectileArrow
	{
	public:
		bool BP_IgnoreProjectileImpact(const struct FHitResult& ImpactHit);
		void BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_ProjPoop_Shapeshifter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
