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
	 * BlueprintGeneratedClass Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C
	 * Size -> 0x0001 (FullSize[0x0981] - InheritedSize[0x0980])
	 */
	class ABuff_TekStrider_ProtectedByShield_C : public APrimalBuff
	{
	public:
		bool                                                       bDebug;                                                  // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickClient(float DeltaTime);
		float BPAdjustRadialDamage(float currentDamage, struct FVector* Origin, struct FRadialDamageEvent* DamageEvent);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_TekStrider_ProtectedByShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
