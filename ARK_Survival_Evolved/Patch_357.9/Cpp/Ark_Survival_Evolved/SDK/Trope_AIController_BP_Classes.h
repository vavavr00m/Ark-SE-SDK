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
	 * BlueprintGeneratedClass Trope_AIController_BP.Trope_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0919] - InheritedSize[0x0919])
	 */
	class ATrope_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		class AActor* BPUpdateBestTarget(class AActor* bestTarget, bool dontSetIn, bool* dontSetOut);
		void UserConstructionScript();
		void ExecuteUbergraph_Trope_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
