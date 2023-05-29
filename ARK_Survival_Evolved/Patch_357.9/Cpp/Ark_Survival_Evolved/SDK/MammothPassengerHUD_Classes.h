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
	 * WidgetBlueprintGeneratedClass MammothPassengerHUD.MammothPassengerHUD_C
	 * Size -> 0x002D (FullSize[0x0545] - InheritedSize[0x0518])
	 */
	class UMammothPassengerHUD_C : public UPrimalUI
	{
	public:
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDrumsMinigameUI_C*                                  DrumsMinigameWidget;                                     // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ABuff_MammothDrummer_C*                              SpawnedByBuff;                                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0530(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		float                                                      K2Node_CustomEvent_NewLifespan;                          // 0x0540(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0544(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveInput();
		void SyncMinigameWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, float BeatExitWidth, class UTexture2D* BeatWidgetIcon, bool UseDebugMode);
		void InitializeHUDWidget(class ABuff_MammothDrummer_C* MammothDrummerBuff);
		void ResetHUDWidget();
		void StartClosingWidget(float NewLifeSpan);
		void DestroySkiffHudWidget();
		void ExecuteUbergraph_MammothPassengerHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
