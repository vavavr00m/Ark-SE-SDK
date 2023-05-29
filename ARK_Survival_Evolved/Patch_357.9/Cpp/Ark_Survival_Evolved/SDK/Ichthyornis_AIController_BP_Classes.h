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
	 * BlueprintGeneratedClass Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C
	 * Size -> 0x004B (FullSize[0x0964] - InheritedSize[0x0919])
	 */
	class AIchthyornis_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		unsigned char                                              UnknownData_CCXC[0x3];                                   // 0x0919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      maxDepthForFishHunting;                                  // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minAboveWaterFlyHeight;                                  // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             followingOwnerFlyingOffset;                              // 0x0924(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      randomZOffsetMax;                                        // 0x0930(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             flyerTargetCombatOffset;                                 // 0x0934(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      walkingTargetingRangePlayers;                            // 0x0940(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      flyingTargetingRangePlayers;                             // 0x0944(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             followingOwnerNoCarryingOffset;                          // 0x0948(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             waterTargetCombatOffset;                                 // 0x0954(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      naturalTargetingRangePlayerOrTame;                       // 0x0960(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTargetingDesireTamed(class APrimalCharacter* Character, float initialDesire, float initialMultiplier, float* desire, float* desireMultiplier);
		void StandardTargetChecks(class APrimalCharacter* Target, class AIchthyornis_Character_BP_C* IchthyPawn, bool* canTarget);
		void GetTargetingDesireWild(class APrimalCharacter* Character, float initialDesire, float initialMultiplier, float* desire, float* Multiplier);
		float GetAggroNotifyNeighborsRange();
		void GetTargetingRangeForPlayers(float* targetingRange);
		void DoDepthCheck(class APrimalCharacter* Character, bool* NotTooDeep);
		void UpdateFlyingOffset();
		void UpdateCombatOffset();
		void ChangedAITarget();
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void UserConstructionScript();
		void ExecuteUbergraph_Ichthyornis_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
