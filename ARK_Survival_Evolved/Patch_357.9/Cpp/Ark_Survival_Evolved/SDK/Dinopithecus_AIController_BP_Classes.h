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
	 * BlueprintGeneratedClass Dinopithecus_AIController_BP.Dinopithecus_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0919] - InheritedSize[0x0919])
	 */
	class ADinopithecus_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void BPNotifyTargetSet();
		void UserConstructionScript();
		void ExecuteUbergraph_Dinopithecus_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
