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
	 * BlueprintGeneratedClass StorageBox_Large.StorageBox_Large_C
	 * Size -> 0x0008 (FullSize[0x0E18] - InheritedSize[0x0E10])
	 */
	class AStorageBox_Large_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_StorageBox_Large_C*               PrimalInventoryBP_StorageBox_Large_C1;                   // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StorageBox_Large(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
