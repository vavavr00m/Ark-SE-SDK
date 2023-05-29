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
	 * BlueprintGeneratedClass Hesperornis_AIController_BP.Hesperornis_AIController_BP_C
	 * Size -> 0x0017 (FullSize[0x0930] - InheritedSize[0x0919])
	 */
	class AHesperornis_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		unsigned char                                              UnknownData_NE1H[0x3];                                   // 0x0919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Retval;                                                  // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ViableDragweight;                                        // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceToAggroToPlayers;                                // 0x0924(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeOfAggroToPlayers;                                    // 0x0928(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetTooDeepDistance;                                   // 0x092C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void UserConstructionScript();
		void ExecuteUbergraph_Hesperornis_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
