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
	 * WidgetBlueprintGeneratedClass ListArkCharacterData.ListArkCharacterData_C
	 * Size -> 0x0028 (FullSize[0x0828] - InheritedSize[0x0800])
	 */
	class UListArkCharacterData_C : public UUI_ListCharacterData
	{
	public:
		class UCustomButtonWidget*                                 CancelButton;                                            // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 DownloadCharacterButton;                                 // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_141;                                               // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineBottom;                                     // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineTop;                                        // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ListArkCharacterData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
