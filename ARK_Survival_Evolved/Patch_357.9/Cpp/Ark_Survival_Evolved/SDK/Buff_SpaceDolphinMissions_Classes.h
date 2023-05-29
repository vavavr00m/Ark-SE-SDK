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
	 * BlueprintGeneratedClass Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C
	 * Size -> 0x06B8 (FullSize[0x1038] - InheritedSize[0x0980])
	 */
	class ABuff_SpaceDolphinMissions_C : public ABuff_Base_C
	{
	public:
		class UAudioComponent*                                     Sound;                                                   // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FHUDElement                                         GasHUDElement;                                           // 0x0988(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
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
		float                                                      ScaleIncreaseOnHKeyPress;                                // 0x0E0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         StruggleHUDElement;                                      // 0x0E10(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                StruggleHUDTextString;                                   // 0x0F60(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_MES8[0x10];                                  // 0x0F78(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		double                                                     DurationToLeaveStruggleHUDOnScreen;                      // 0x0F88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStatusValueModifierDescription                     BuffDescriptionDrafting;                                 // 0x0F90(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FStatusValueModifierDescription                     BuffDescriptionLanding;                                  // 0x0FE0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    BuffTypeDrafting;                                        // 0x1030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeSinceHurtForDamageOverlay;                           // 0x1034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickClient(float DeltaTime);
		bool HitCollisionStarFoxMode();
		bool AllowPostProcessEffect();
		float GetBuffPostprocessIntensity();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_SpaceDolphinMissions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
