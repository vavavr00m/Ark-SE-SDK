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
	 * BlueprintGeneratedClass StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C
	 * Size -> 0x0008 (FullSize[0x0E40] - InheritedSize[0x0E38])
	 */
	class AStructureItemContainerBaseBP_VisualItems_C : public APrimalStructureItemContainer_VisualItems
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
