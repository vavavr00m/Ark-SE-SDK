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
	 * BlueprintGeneratedClass PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C
	 * Size -> 0x0010 (FullSize[0x0AF8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_GachaPod_C : public UPrimalItemConsumableGeneric_C
	{
	public:
		class USoundCue*                                           ResourceOpen_Cue;                                        // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           ItemOpen_Cue;                                            // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPOnItemConsumed(class UPrimalInventoryComponent* inventory, int32_t remainingQuantity);
		void RollLoot(class UPrimalInventoryComponent* Inv);
		void ShowHUDNotification(class UPrimalItem* Item, class UClass* Resource, int32_t Quanity, class UPrimalInventoryComponent* Inv);
		void BPPostInitializeItem(class UWorld* OptionalInitWorld);
		void BlueprintUsed();
		void ExecuteUbergraph_PrimalItemConsumable_GachaPod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
