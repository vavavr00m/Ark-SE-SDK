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
	 * BlueprintGeneratedClass SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0919] - InheritedSize[0x0919])
	 */
	class ASpaceDolphin_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		class AActor* BPUpdateBestTarget(class AActor* bestTarget, bool dontSetIn, bool* dontSetOut);
		void UserConstructionScript();
		void ExecuteUbergraph_SpaceDolphin_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
