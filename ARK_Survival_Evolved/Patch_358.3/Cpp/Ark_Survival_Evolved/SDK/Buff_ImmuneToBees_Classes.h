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
	 * BlueprintGeneratedClass Buff_ImmuneToBees.Buff_ImmuneToBees_C
	 * Size -> 0x0010 (FullSize[0x0990] - InheritedSize[0x0980])
	 */
	class ABuff_ImmuneToBees_C : public ABuff_Base_C
	{
	public:
		TArray<class UClass*>                                      ClassesImmuneTo;                                         // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ImmuneToBees(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
