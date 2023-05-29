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
	 * WidgetBlueprintGeneratedClass GiantTurtleHUD.GiantTurtleHUD_C
	 * Size -> 0x02E8 (FullSize[0x0800] - InheritedSize[0x0518])
	 */
	class UGiantTurtleHUD_C : public UPrimalUI
	{
	public:
		class UTextBlock*                                          AbilityLabelTextBlock;                                   // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        AbilityProgressBar;                                      // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          AbilityStatusTextBlock;                                  // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHorizontalBox*                                      AbilityTextPanel;                                        // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AGiantTurtle_Character_BP_C*                         SpawnedByTurtle;                                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProgressBarColorLerpAlpha;                               // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_NewLifespan;                          // 0x0544(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0548(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HC97[0x3];                                   // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometry                                           K2Node_Event_MyGeometry;                                 // 0x054C(0x0034) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_InDeltaTime;                                // 0x0580(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0584(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0588(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0589(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3AO2[0x2];                                   // 0x058A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CallFunc_SelectColor_ReturnValue;                        // 0x058C(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BAF2[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   K2Node_DynamicCast_AsPlayerController;                   // 0x05A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x05B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BK5D[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x05B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x05B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x05B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JK3N[0x2];                                   // 0x05BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CallFunc_LinearColorLerp_ReturnValue;                    // 0x05BC(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CallFunc_SelectColor_ReturnValue2;                       // 0x05CC(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N2JJ[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         K2Node_MakeStruct_SlateColor;                            // 0x05E0(0x0028) Transient, DuplicateTransient
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0608(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		struct FSlateBrush                                         K2Node_MakeStruct_SlateBrush;                            // 0x0618(0x0078) Transient, DuplicateTransient
		struct FProgressBarStyle                                   K2Node_MakeStruct_ProgressBarStyle;                      // 0x0690(0x0170) Transient, DuplicateTransient

	public:
		class FText Get_AbilityTextBlock_Text_1();
		float Get_BubbleBreathProgressBar_Percent_1();
		void InitFromGiantTurtle(class AGiantTurtle_Character_BP_C* GiantTurtle_Char_BP);
		void StartClosingWidget(float NewLifeSpan);
		void DestroyHudWidget();
		void ResetHudWidget();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_GiantTurtleHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
