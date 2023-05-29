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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Basilosaurus.DinoTamedInventoryComponent_BP_Basilosaurus_C
	 * Size -> 0x0040 (FullSize[0x05D8] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_BP_Basilosaurus_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		TArray<double>                                             GiveItemsTimes;                                          // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		TArray<float>                                              GiveItemsIntervals;                                      // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<int32_t>                                            GiveItemsMax;                                            // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UClass*>                                      GiveItemsClass;                                          // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void BPInventoryRefresh();
		void ExecuteUbergraph_DinoTamedInventoryComponent_BP_Basilosaurus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
