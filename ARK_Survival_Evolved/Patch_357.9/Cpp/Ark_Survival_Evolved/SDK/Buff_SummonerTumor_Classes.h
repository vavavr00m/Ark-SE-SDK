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
	 * BlueprintGeneratedClass Buff_SummonerTumor.Buff_SummonerTumor_C
	 * Size -> 0x000D (FullSize[0x098D] - InheritedSize[0x0980])
	 */
	class ABuff_SummonerTumor_C : public ABuff_Base_C
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WaitTimeBeforeSpawnDino;                                 // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasSpawnedDino;                                          // 0x098C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPDeactivated(class AActor* ForInstigator);
		void BuffTickServer(float DeltaTime);
		bool BPExcludeAoEActor(class AActor* ActorToConsider);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_SummonerTumor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
