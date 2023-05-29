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
	 * WidgetBlueprintGeneratedClass TribeManagerListButtonWidget.TribeManagerListButtonWidget_C
	 * Size -> 0x0008 (FullSize[0x0538] - InheritedSize[0x0530])
	 */
	class UTribeManagerListButtonWidget_C : public UTribeManagerListButton
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_TribeManagerListButtonWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
