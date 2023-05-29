﻿#pragma once

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
	 * BlueprintGeneratedClass Leedsichthys_AIController_BP.Leedsichthys_AIController_BP_C
	 * Size -> 0x0007 (FullSize[0x0920] - InheritedSize[0x0919])
	 */
	class ALeedsichthys_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		unsigned char                                              UnknownData_0LJG[0x3];                                   // 0x0919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RaftAggroMultiplier;                                     // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void UserConstructionScript();
		void ExecuteUbergraph_Leedsichthys_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif