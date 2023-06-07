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
	 * BlueprintGeneratedClass PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C
	 * Size -> 0x0010 (FullSize[0x0AF8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemSkin_TekHelmet_V2_C : public UPrimalItemSkinGeneric_C
	{
	public:
		class UPrimalItem*                                         SelfObj;                                                 // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              BuffCosmeticPP;                                          // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void InitBuff();
		void BlueprintEquipped(bool bIsFromSaveGame);
		void BlueprintOwnerPosssessed(class AController* PossessedByController);
		void BlueprintUnequipped();
		void ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
