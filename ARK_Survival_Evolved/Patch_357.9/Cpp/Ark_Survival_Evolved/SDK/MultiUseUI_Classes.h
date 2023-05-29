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
	 * WidgetBlueprintGeneratedClass MultiUseUI.MultiUseUI_C
	 * Size -> 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
	 */
	class UMultiUseUI_C : public UUI_MultiUse
	{
	public:
		class UWidgetAnimation*                                    Close;                                                   // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Open;                                                    // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_MultiUseUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
