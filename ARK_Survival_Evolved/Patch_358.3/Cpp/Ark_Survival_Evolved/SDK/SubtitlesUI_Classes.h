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
	 * WidgetBlueprintGeneratedClass SubtitlesUI.SubtitlesUI_C
	 * Size -> 0x0211 (FullSize[0x07C9] - InheritedSize[0x05B8])
	 */
	class USubtitlesUI_C : public UUI_Subtitles
	{
	public:
		class UWidgetAnimation*                                    IconGlideOutSkip;                                        // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    IconGlideInSkip;                                         // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    HLNAIconGlideOut;                                        // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    HLNAIconGlideIn;                                         // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DialogueIconImage;                                       // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          DialogueTextBlock;                                       // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          SubtitleTextBlock;                                       // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FString>                                      ExtAscensionSubtitles;                                   // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FSlateColor>                                 ExSubtitleColors;                                        // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      Gen2IntroSubtitles;                                      // 0x0620(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FSlateColor>                                 Gen2IntroSubtitleColors;                                 // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      Gen2EndingSubtitles;                                     // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FSlateColor>                                 Gen2EndingSubtitleColors;                                // 0x0650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      Gen2StingerSubtitles;                                    // 0x0660(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FSlateColor>                                 Gen2StingerSubtitleColors;                               // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    currentIndex;                                            // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                CurrentSubtitleSet;                                      // 0x0684(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasChatBoxShown;                                         // 0x068C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFadingOut;                                             // 0x068D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YOS2[0x2];                                   // 0x068E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         DefaultSubtitleColor;                                    // 0x0690(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    K2Node_CustomEvent_Index;                                // 0x06B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                K2Node_CustomEvent_SubtitleSet;                          // 0x06BC(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E30O[0x4];                                   // 0x06C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CallFunc_GetSubtitles_Subtitles;                         // 0x06C8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x06D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GZPO[0x4];                                   // 0x06DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Array_Get_Item;                                 // 0x06E0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_SimpleReplaceUnicodeWithSupportedAlternatives_ReturnValue; // 0x06F0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0700(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LRJA[0x4];                                   // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_StringToText_ReturnValue;                  // 0x0708(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_ZUM7[0x10];                                  // 0x0720(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x0730(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x0731(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0732(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7LU3[0x5];                                   // 0x0733(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHud_ReturnValue;                      // 0x0738(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ESlateVisibility                                           CallFunc_GetVisibility_ReturnValue;                      // 0x0740(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0741(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZUTJ[0x6];                                   // 0x0742(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSlateColor>                                 CallFunc_GetSubtitleColors_Colors;                       // 0x0748(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x0758(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WELB[0x4];                                   // 0x075C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         CallFunc_Array_Get_Item2;                                // 0x0760(0x0028) Transient, DuplicateTransient
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x0788(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue2;                    // 0x0789(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_01PH[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameUserSettings*                            CallFunc_GetShooterGameUserSettings_ReturnValue;         // 0x0790(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0798(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HLSW[0x7];                                   // 0x0799(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         K2Node_Select_ReturnValue;                               // 0x07A0(0x0028) Transient, DuplicateTransient
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x07C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetSubtitleColors(TArray<struct FSlateColor>* Colors);
		void ProcessDynamicMaterialForDialogueIcon();
		void OnShowSubtitles();
		void GetSubtitles(TArray<class FString>* Subtitles);
		void ShowSubtitleAtIndex(int32_t index);
		void FadeOutSubtitles();
		void AddedToViewport();
		void ShowNextSubtitle();
		void ResetToStart(const class FName& SubtitleSet);
		void OnHideSubtitles();
		void ExecuteUbergraph_SubtitlesUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
