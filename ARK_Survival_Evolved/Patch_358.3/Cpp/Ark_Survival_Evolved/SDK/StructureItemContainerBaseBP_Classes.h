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
	 * BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
	 * Size -> 0x0008 (FullSize[0x0E10] - InheritedSize[0x0E08])
	 */
	class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0E08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPOnTransferAll(class UPrimalInventoryComponent* toInventory);
		void UserConstructionScript();
		void ExecuteUbergraph_StructureItemContainerBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
