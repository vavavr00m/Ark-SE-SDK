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
	 * WidgetBlueprintGeneratedClass ArkCreaturesPanel.ArkCreaturesPanel_C
	 * Size -> 0x0040 (FullSize[0x0858] - InheritedSize[0x0818])
	 */
	class UArkCreaturesPanel_C : public UInventoryArkCreaturesPanel
	{
	public:
		class UCustomButtonWidget*                                 DownloadDinoButton;                                      // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DownloadDinoIcon;                                        // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_5;                                                 // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_6;                                                 // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineBottom;                                     // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineTop;                                        // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 UploadDinoButton;                                        // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              UploadDinoIcon;                                          // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ArkCreaturesPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
