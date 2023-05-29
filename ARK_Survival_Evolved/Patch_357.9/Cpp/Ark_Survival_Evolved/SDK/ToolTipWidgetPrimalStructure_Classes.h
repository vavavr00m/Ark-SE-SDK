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
	 * WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C
	 * Size -> 0x0020 (FullSize[0x0328] - InheritedSize[0x0308])
	 */
	class UToolTipWidgetPrimalStructure_C : public UPrimalStructureToolTipWidget
	{
	public:
		class UProgressBar*                                        HealthBar;                                               // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        ModulePanel;                                             // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        RepairPanel;                                             // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalRichTextBlock*                                RequirementsLabel;                                       // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ToolTipWidgetPrimalStructure(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
