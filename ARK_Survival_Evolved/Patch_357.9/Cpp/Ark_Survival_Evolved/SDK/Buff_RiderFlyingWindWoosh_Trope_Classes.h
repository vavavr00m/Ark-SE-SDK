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
	 * BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C
	 * Size -> 0x068C (FullSize[0x100C] - InheritedSize[0x0980])
	 */
	class ABuff_RiderFlyingWindWoosh_Trope_C : public ABuff_Base_C
	{
	public:
		class UAudioComponent*                                     Sound;                                                   // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FHUDElement                                         FuelHUDElement;                                          // 0x0988(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         SuperFlightSpeedHUDElement;                              // 0x0AD8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        HUDTextColor_Default;                                    // 0x0C28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDTextColor_Low;                                        // 0x0C38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDTextColor_Critical;                                   // 0x0C48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SuperFlightProgressBarColor;                             // 0x0C58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FastestColor;                                            // 0x0C68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FastColor;                                               // 0x0C78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         AmmoHUDElement;                                          // 0x0C88(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        HUDColor_State0;                                         // 0x0DD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_State1;                                         // 0x0DE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_State2;                                         // 0x0DF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HUDInterpSpeed;                                          // 0x0E08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HZPC[0x4];                                   // 0x0E0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatusValueModifierDescription                     BuffDescriptionDrafting;                                 // 0x0E10(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FStatusValueModifierDescription                     BuffDescriptionLanding;                                  // 0x0E60(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    BuffTypeDrafting;                                        // 0x0EB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SII[0x4];                                   // 0x0EB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         SpeedLabelHUDElement;                                    // 0x0EB8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      SpeedHUDVariance;                                        // 0x1008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateSFX();
		int32_t GetBuffType();
		struct FStatusValueModifierDescription GetBuffDescription();
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		bool AllowPostProcessEffect();
		float GetBuffPostprocessIntensity();
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void BuffTickClient(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
