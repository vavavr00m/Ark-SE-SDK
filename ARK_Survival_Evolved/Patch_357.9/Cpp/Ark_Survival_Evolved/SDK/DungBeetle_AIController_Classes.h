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
	 * BlueprintGeneratedClass DungBeetle_AIController.DungBeetle_AIController_C
	 * Size -> 0x0000 (FullSize[0x0919] - InheritedSize[0x0919])
	 */
	class ADungBeetle_AIController_C : public ADino_AIController_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_DungBeetle_AIController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
