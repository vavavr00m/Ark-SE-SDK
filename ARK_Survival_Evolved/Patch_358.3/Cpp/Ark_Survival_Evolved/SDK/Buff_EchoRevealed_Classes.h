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
	 * BlueprintGeneratedClass Buff_EchoRevealed.Buff_EchoRevealed_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_EchoRevealed_C : public APrimalBuff
	{
	public:
		void DeactiveParticle();
		void BPSetupForInstigator(class AActor* ForInstigator);
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		bool BPCustomIsRelevantForClient(class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_EchoRevealed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
