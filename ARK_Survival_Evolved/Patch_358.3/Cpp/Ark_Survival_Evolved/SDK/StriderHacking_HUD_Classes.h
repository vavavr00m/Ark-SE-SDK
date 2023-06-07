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
	 * WidgetBlueprintGeneratedClass StriderHacking_HUD.StriderHacking_HUD_C
	 * Size -> 0x002C (FullSize[0x0544] - InheritedSize[0x0518])
	 */
	class UStriderHacking_HUD_C : public UPrimalUI
	{
	public:
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStriderHackingMinigameUI_C*                         StriderHackingMinigameUIParent_C_7;                      // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0530(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		float                                                      K2Node_CustomEvent_NewLifespan;                          // 0x0540(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void TryTriggerWin();
		void ReceiveInput(bool Success);
		void SyncMinigameWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, int32_t BeatsPerLoop, bool IsShuttingDown, struct FLinearColor* PostProcessInputColorParam);
		void InitializeHUDWidget();
		void ResetHUDWidget();
		void StartClosingWidget(float NewLifeSpan);
		void DestroyWidget();
		void ExecuteUbergraph_StriderHacking_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
