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
	 * BlueprintGeneratedClass Bookshelf.Bookshelf_C
	 * Size -> 0x0008 (FullSize[0x0E18] - InheritedSize[0x0E10])
	 */
	class ABookshelf_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_Bookshelf_C*                      PrimalInventoryBP_Bookshelf_C1;                          // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Bookshelf(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
