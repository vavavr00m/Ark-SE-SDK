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
	 * WidgetBlueprintGeneratedClass MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UMissionsUI_RequirementEntry_C : public UMissionRequirementEntryWidget
	{
	public:
		class UBorder*                                             Bullet;                                                  // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          DisplayTextBlock;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHorizontalBox*                                      InnerMainPanel;                                          // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             MainPanel;                                               // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void ExecuteUbergraph_MissionsUI_RequirementEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
