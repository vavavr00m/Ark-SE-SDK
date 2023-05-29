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
	 * WidgetBlueprintGeneratedClass DinoAncestryEntry.DinoAncestryEntry_C
	 * Size -> 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
	 */
	class UDinoAncestryEntry_C : public UDinoAncestryEntryWidget
	{
	public:
		class UImage*                                              ArrowIcon;                                               // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DinoAncestryEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
