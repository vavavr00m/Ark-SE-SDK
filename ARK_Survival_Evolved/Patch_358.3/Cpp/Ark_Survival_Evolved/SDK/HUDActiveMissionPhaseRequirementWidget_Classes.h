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
	 * WidgetBlueprintGeneratedClass HUDActiveMissionPhaseRequirementWidget.HUDActiveMissionPhaseRequirementWidget_C
	 * Size -> 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
	 */
	class UHUDActiveMissionPhaseRequirementWidget_C : public UPrimalUI
	{
	public:
		class UBorder*                                             PhaseBorder;                                             // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          PhaseMaxValueTextBlock;                                  // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        PhaseProgressBar;                                        // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USizeBox*                                            PhaseProgressContainer;                                  // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalRichTextBlock*                                PhaseRichTextBlock;                                      // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHorizontalBox*                                      PhaseValueContainer;                                     // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          PhaseValueSlashTextBlock;                                // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          PhaseValueTextBlock;                                     // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_HUDActiveMissionPhaseRequirementWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
