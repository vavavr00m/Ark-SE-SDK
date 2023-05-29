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
	 * BlueprintGeneratedClass Buff_Trust.Buff_Trust_C
	 * Size -> 0x0000 (FullSize[0x0ED0] - InheritedSize[0x0ED0])
	 */
	class ABuff_Trust_C : public ABuff_FearCourage_C
	{
	public:
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void OnCourageRoar(bool canSwitchToCourage, float amountOverride, bool useAmountOverride, bool sendMessageToRider);
		void GetTeamColorForParticles(struct FVector* finalColor);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Trust(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
