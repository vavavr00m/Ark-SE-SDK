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
	 * WidgetBlueprintGeneratedClass HUDCustomProgressWidget.HUDCustomProgressWidget_C
	 * Size -> 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
	 */
	class UHUDCustomProgressWidget_C : public UUserWidget
	{
	public:
		class UImage*                                              CustomIcon;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        CustomProgress;                                          // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          CustomText;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          CustomText_Title;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_HUDCustomProgressWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
