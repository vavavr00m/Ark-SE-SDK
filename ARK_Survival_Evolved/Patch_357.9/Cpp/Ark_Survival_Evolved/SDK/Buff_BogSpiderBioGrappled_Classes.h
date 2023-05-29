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
	 * BlueprintGeneratedClass Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C
	 * Size -> 0x0391 (FullSize[0x0D11] - InheritedSize[0x0980])
	 */
	class ABuff_BogSpiderBioGrappled_C : public ABuff_Base_C
	{
	public:
		class UParticleSystemComponent*                            EnsnaredVFX;                                             // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StruggleShake_ShakeX_EBD964F9424416EE67E46AB6B8A0177C;   // 0x0988(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         StruggleShake__Direction_EBD964F9424416EE67E46AB6B8A0177C; // 0x098C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UEGU[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  StruggleShake;                                           // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ABogSpider_Character_BP_C*                           GrappledBySpider;                                        // 0x0998(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastStruggleTime;                                        // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowedStruggleInterval;                                 // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxStruggleBreakChance;                                  // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StruggleBreakChance_Current;                             // 0x09B0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StruggleBreakChance_Initial_Ensnare;                     // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StruggleBreakChance_Initial_BioGrapple;                  // 0x09B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EnsnareBreakChanceIncreasePerFail_Wild;                  // 0x09BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EnsnareBreakChanceIncreasePerFail_Tamed;                 // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BioGrappleBreakChanceIncreasePerFail_Wild;               // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BioGrappleBreakChanceIncreasePerFail_Tamed;              // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEnsnared;                                               // 0x09CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EC4N[0x3];                                   // 0x09CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CompountEyeIntensity;                                    // 0x09D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CDGE[0x4];                                   // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         HudElement_StrugglePercent;                              // 0x09D8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         HudElement_Warning;                                      // 0x0B28(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      CurrStruggleHudShakeX;                                   // 0x0C78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StruggleHudShakeMaxDelta;                                // 0x0C7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              EscapedClientBuffClass;                                  // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          BloodSuckedBuffIcon;                                     // 0x0C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDRichTextOverlayData                             StruggleHUDRichTextOverlay;                              // 0x0C90(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0CF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_TryStruggle_success;                            // 0x0CF1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0CF2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bEnsnare;                             // 0x0CF3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PZGV[0x4];                                   // 0x0CF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x0CF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABogSpider_Character_BP_C*                           K2Node_DynamicCast_AsBogSpider_Character_BP_C;           // 0x0D00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0D08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x0D09(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QP8I[0x2];                                   // 0x0D0A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0D0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPrimalDino_ReturnValue;                       // 0x0D10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPDeactivated(class AActor* ForInstigator);
		void ReleaseBioGrapple();
		void BuffTickServer(float DeltaTime);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void ToggleEnsnareVFX();
		void BuffTickClient(float DeltaTime);
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void BPHandleOnStartAltFire(bool bFromGamepad);
		void BPHandleOnStartFire(bool bFromGamepad);
		void OnEnsnared();
		void OnBioGrappled();
		void SyncGrapplingBogSpider(class ABogSpider_Character_BP_C* SpiderRef);
		void TryStruggle(bool* Success);
		void UserConstructionScript();
		void StruggleShake__FinishedFunc();
		void StruggleShake__UpdateFunc();
		void Server_TryStruggle();
		void Multi_OnBioGrappleEvent(bool bEnsnare);
		void ReceiveBeginPlay();
		void DoHudShake();
		void Client_DidStruggle();
		void ExecuteUbergraph_Buff_BogSpiderBioGrappled(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
