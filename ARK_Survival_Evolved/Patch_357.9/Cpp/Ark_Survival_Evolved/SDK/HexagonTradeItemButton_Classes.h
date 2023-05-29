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
	 * WidgetBlueprintGeneratedClass HexagonTradeItemButton.HexagonTradeItemButton_C
	 * Size -> 0x0030 (FullSize[0x05C8] - InheritedSize[0x0598])
	 */
	class UHexagonTradeItemButton_C : public UTradeItemButtonWidget
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_212;                                               // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          ItemCostTextBlock;                                       // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              ItemImage;                                               // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          ItemQuantityTextBlock;                                   // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          ItemWeightTextBlock;                                     // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_HexagonTradeItemButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
