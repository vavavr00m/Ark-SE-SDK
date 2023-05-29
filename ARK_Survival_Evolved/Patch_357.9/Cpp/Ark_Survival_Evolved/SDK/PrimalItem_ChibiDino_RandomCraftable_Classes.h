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
	 * BlueprintGeneratedClass PrimalItem_ChibiDino_RandomCraftable.PrimalItem_ChibiDino_RandomCraftable_C
	 * Size -> 0x0011 (FullSize[0x0AF9] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_ChibiDino_RandomCraftable_C : public UPrimalItemResourceGeneric_C
	{
	public:
		TArray<struct FSupplyCrateItemSet>                         ChibiTable;                                              // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsHexStoreOption;                                        // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BlueprintUsed();
		void BPCrafted();
		void ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
