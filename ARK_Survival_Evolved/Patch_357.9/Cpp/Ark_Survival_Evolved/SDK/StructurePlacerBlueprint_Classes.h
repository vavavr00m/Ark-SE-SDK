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
	 * BlueprintGeneratedClass StructurePlacerBlueprint.StructurePlacerBlueprint_C
	 * Size -> 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
	 */
	class AStructurePlacerBlueprint_C : public APrimalStructurePlacer
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StructurePlacerBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
