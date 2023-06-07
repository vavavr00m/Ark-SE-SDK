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
	 * WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C
	 * Size -> 0x0030 (FullSize[0x08D8] - InheritedSize[0x08A8])
	 */
	class UObeliskStatsPanel_C : public UStatsPanelWidget_Obelisk
	{
	public:
		class UStructureStatWidget_C*                              ArkDinoStat;                                             // 0x08A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStructureStatWidget_C*                              ArkStorageStat;                                          // 0x08B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RefreshArkButton;                                        // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStructureStatWidget_C*                              StorageStat;                                             // 0x08C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TravelToAnotherServerButton;                             // 0x08C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 UploadCharacterDataButton;                               // 0x08D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ObeliskStatsPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
