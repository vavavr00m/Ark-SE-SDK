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
	 * WidgetBlueprintGeneratedClass StructureStatWidget.StructureStatWidget_C
	 * Size -> 0x0010 (FullSize[0x0598] - InheritedSize[0x0588])
	 */
	class UStructureStatWidget_C : public UStructureStatWidget
	{
	public:
		class UImage*                                              IconImage;                                               // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        StatBar;                                                 // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_StructureStatWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
