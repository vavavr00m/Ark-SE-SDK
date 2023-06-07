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
	 * BlueprintGeneratedClass Summoner_AIController_BP.Summoner_AIController_BP_C
	 * Size -> 0x0001 (FullSize[0x091A] - InheritedSize[0x0919])
	 */
	class ASummoner_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		bool                                                       bDespawnMinionsOnNoTarget;                               // 0x0919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPNotifyTargetSet();
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void UserConstructionScript();
		void ExecuteUbergraph_Summoner_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
