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
	 * WidgetBlueprintGeneratedClass TribeMemberButton.TribeMemberButton_C
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UTribeMemberButton_C : public UTribeMemberButtonWidget
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_TribeMemberButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
