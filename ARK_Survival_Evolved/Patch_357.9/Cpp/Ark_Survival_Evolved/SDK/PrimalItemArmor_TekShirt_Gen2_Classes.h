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
	 * BlueprintGeneratedClass PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C
	 * Size -> 0x0038 (FullSize[0x0C50] - InheritedSize[0x0C18])
	 */
	class UPrimalItemArmor_TekShirt_Gen2_C : public UPrimalItemArmor_TekShirt_C
	{
	public:
		unsigned char                                              UnknownData_5XW4[0x8];                                   // 0x0C18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  TekSuitVFXOffset;                                        // 0x0C20(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void BlueprintEquipped(bool bIsFromSaveGame);
		void BlueprintUnequipped();
		void TryTekSuitVFXOffset(bool IsUnequip);
		void ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
