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
	 * BlueprintGeneratedClass LanternBird_AIController_BP.LanternBird_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0919] - InheritedSize[0x0919])
	 */
	class ALanternBird_AIController_BP_C : public ALanternPet_AIController_Base_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_LanternBird_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
