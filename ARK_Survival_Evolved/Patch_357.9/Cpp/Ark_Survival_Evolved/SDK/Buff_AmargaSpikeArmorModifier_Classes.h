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
	 * BlueprintGeneratedClass Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C
	 * Size -> 0x000C (FullSize[0x098C] - InheritedSize[0x0980])
	 */
	class ABuff_AmargaSpikeArmorModifier_C : public ABuff_Base_C
	{
	public:
		float                                                      ArmorModifierMultValue;                                  // 0x0980(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArmorModifierMultIncSpeed;                               // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExWildDinoDamageRecMult;                                 // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void UpdateBuffDescription();
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		float BPModifyArmorValue(class UPrimalItem* ForItem, float BaseArmorValue);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_AmargaSpikeArmorModifier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
