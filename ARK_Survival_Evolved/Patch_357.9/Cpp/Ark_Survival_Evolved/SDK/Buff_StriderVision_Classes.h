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
	 * BlueprintGeneratedClass Buff_StriderVision.Buff_StriderVision_C
	 * Size -> 0x0210 (FullSize[0x0BC8] - InheritedSize[0x09B8])
	 */
	class ABuff_StriderVision_C : public ABuff_XRay_Base_C
	{
	public:
		class UMaterialInstanceDynamic*                            OverlayMaterial;                                         // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              netref;                                                  // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       iscasted;                                                // 0x09C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X2JC[0x7];                                   // 0x09C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            Targets;                                                 // 0x09D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class APrimalCharacter*>                            SharedTargets;                                           // 0x09E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      highlightedcharactertextscale;                           // 0x09F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlashTargetRate;                                         // 0x09F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalCharacter*>                            HighlightedTargets;                                      // 0x09F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class APrimalCharacter*                                    highlightedtarget;                                       // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    currentradarfiltersetting;                               // 0x0A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7LJL[0x4];                                   // 0x0A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         PingHUDElementTemplate;                                  // 0x0A18(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class APrimalCharacter*                                    HUDHighlightTarget;                                      // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUserWidget*                                         HudWidgetInstance;                                       // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              HUDWidget;                                               // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ViewableDuration;                                        // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_17AH[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastFireTime;                                            // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DefaultPingHUDColor;                                     // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PingVisibility;                                          // 0x0BA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ReadyToDestroyHUD;                                       // 0x0BA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C7XF[0x2];                                   // 0x0BA2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HUDWorldOffsetLerpMaxRange;                              // 0x0BA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ReadyToDestroyHUD2;                                      // 0x0BA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7BV0[0x3];                                   // 0x0BA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      renderrange;                                             // 0x0BAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       testvar;                                                 // 0x0BB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FC19[0x7];                                   // 0x0BB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x0BB8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void GetHudData(struct FVector* PingWorldLocation, float* ProgressBarValue, struct FLinearColor* BaseColor, float* RingScale, float* Visibility);
		void stophighlightingtarget(class APrimalCharacter* InputPin);
		void setalltargetboundsto1();
		void updateviewedtargets(bool Deactivate);
		void KeepVisible();
		bool HideBuffFromHUD();
		void SetupHUDWidget(class APlayerController* PC);
		void DestroyHudWidget(bool Bypass);
		void FlashTarget();
		void Highlightlatestsharedtarget();
		void KeepSharedTargetsActive();
		void BPActivated(class AActor* ForInstigator);
		void SetAllComponentsRenderCustomDepth(class AActor* Actor, bool rendercustomdepth);
		void setallcomponentscustomdepthstencilvalue(int32_t StencilValue, class AActor* Actor);
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		void ReceiveBeginPlay();
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ClearHUDReference();
		void ExecuteUbergraph_Buff_StriderVision(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
