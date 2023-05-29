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
	 * WidgetBlueprintGeneratedClass DinopithecusHUDWidget.DinopithecusHUDWidget_C
	 * Size -> 0x008C (FullSize[0x05A4] - InheritedSize[0x0518])
	 */
	class UDinopithecusHUDWidget_C : public UPrimalUI
	{
	public:
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCanvasPanel*                                        MainPanel;                                               // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          ModeTextBlock;                                           // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        TextPanel;                                               // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ModeString;                                              // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastModeSwitchTime;                                      // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ModeHUDColor_FadeIn;                                     // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ModeHUDColor_FadeOut;                                    // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnWidgetDestroyed;                                       // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      TextPanelPositionY;                                      // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TextFadeOutMultiplier;                                   // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0590(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		float                                                      K2Node_CustomEvent_NewLifespan;                          // 0x05A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void SetHUDText(const class FString& Text, float TimeToFade);
		void InitializeHUDWidget();
		void ResetHUDWidget();
		void DestroyWidget();
		void StartClosingWidget(float NewLifeSpan);
		void ExecuteUbergraph_DinopithecusHUDWidget(int32_t EntryPoint);
		void OnWidgetDestroyed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
