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
	 * BlueprintGeneratedClass BrainSlug_AIController.BrainSlug_AIController_C
	 * Size -> 0x0000 (FullSize[0x0919] - InheritedSize[0x0919])
	 */
	class ABrainSlug_AIController_C : public ADino_AIController_BP_C
	{
	public:
		void ChangedAITarget();
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void ReceiveDestroyed();
		void UserConstructionScript();
		void ExecuteUbergraph_BrainSlug_AIController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
