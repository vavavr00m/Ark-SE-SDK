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
	 * BlueprintGeneratedClass PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C
	 * Size -> 0x0038 (FullSize[0x0B20] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemSkin_TekShirt_V2_C : public UPrimalItemSkinGeneric_C
	{
	public:
		unsigned char                                              UnknownData_I471[0x8];                                   // 0x0AE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  TekSuitVFXOffset;                                        // 0x0AF0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TrySetTeksuitVFXOffset(bool Unequip);
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void BlueprintEquipped(bool bIsFromSaveGame);
		void BlueprintUnequipped();
		void ExecuteUbergraph_PrimalItemSkin_TekShirt_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
