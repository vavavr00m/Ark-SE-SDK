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
	 * BlueprintGeneratedClass DinoAttackStateRamming.DinoAttackStateRamming_C
	 * Size -> 0x000D (FullSize[0x0065] - InheritedSize[0x0058])
	 */
	class UDinoAttackStateRamming_C : public UPrimalAIState
	{
	public:
		float                                                      BuildUpTime;                                             // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TickedOnce;                                              // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZELZ[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoSRateLimiterSeconds;                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CalledRamStartedOnce;                                    // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnTickEvent(float DeltaSeconds);
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void OnEndEvent();
		void ExecuteUbergraph_DinoAttackStateRamming(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
