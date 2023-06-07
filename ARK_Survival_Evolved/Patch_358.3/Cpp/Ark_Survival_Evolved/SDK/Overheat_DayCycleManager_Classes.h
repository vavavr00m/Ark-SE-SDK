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
	 * BlueprintGeneratedClass Overheat_DayCycleManager.Overheat_DayCycleManager_C
	 * Size -> 0x0000 (FullSize[0x05A9] - InheritedSize[0x05A9])
	 */
	class AOverheat_DayCycleManager_C : public ADayCycleManagerBase_C
	{
	public:
		void IsSuperheatActive(bool* NewParam);
		void UserConstructionScript();
		void ExecuteUbergraph_Overheat_DayCycleManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
