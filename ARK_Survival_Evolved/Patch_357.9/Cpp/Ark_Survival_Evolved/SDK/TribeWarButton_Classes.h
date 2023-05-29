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
	 * WidgetBlueprintGeneratedClass TribeWarButton.TribeWarButton_C
	 * Size -> 0x0008 (FullSize[0x0550] - InheritedSize[0x0548])
	 */
	class UTribeWarButton_C : public UTribeWarButtonWidget
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_TribeWarButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
