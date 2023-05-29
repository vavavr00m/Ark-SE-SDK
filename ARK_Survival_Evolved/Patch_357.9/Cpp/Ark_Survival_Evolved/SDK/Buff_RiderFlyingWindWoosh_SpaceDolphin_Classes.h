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
	 * BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C
	 * Size -> 0x09AC (FullSize[0x132C] - InheritedSize[0x0980])
	 */
	class ABuff_RiderFlyingWindWoosh_SpaceDolphin_C : public ABuff_Base_C
	{
	public:
		struct FHUDElement                                         FuelHUDElement;                                          // 0x0980(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         SuperFlightSpeedHUDElement;                              // 0x0AD0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        HUDTextColor_Default;                                    // 0x0C20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDTextColor_Low;                                        // 0x0C30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDTextColor_Critical;                                   // 0x0C40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SuperFlightProgressBarColor;                             // 0x0C50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FastestColor;                                            // 0x0C60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FastColor;                                               // 0x0C70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         AmmoHUDElement;                                          // 0x0C80(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        HUDColor_Fuel_SuperFlightOff;                            // 0x0DD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_Fuel_SuperFlightOn;                             // 0x0DE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_Fuel_SuperFlightBoost;                          // 0x0DF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_Ammo_SuperFlightOff;                            // 0x0E00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_Ammo_SuperFlightOn;                             // 0x0E10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_Ammo_Level2;                                    // 0x0E20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDColor_Ammo_Level3;                                    // 0x0E30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HUDInterpSpeed;                                          // 0x0E40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ScaleIncreaseOnHKeyPress;                                // 0x0E44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     DurationToLeaveStruggleHUDOnScreen;                      // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BuffTypeDrafting;                                        // 0x0E50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDriftTime;                                            // 0x0E54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         FlightSpeedExtendedInfoHUDElement;                       // 0x0E58(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         LaserUpgradeHUDElementTemplate;                          // 0x0FA8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LaserUpgradeHUDElementSpacingMultiplier;                 // 0x10F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LaserLevelUpBlinkOpacity;                                // 0x10FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LaserLevelUpBlinkSpeed;                                  // 0x1100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E36O[0x4];                                   // 0x1104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         PowerUpGaugeHudElement;                                  // 0x1108(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        LaserColorLevel1;                                        // 0x1258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LaserColorLevel2;                                        // 0x1268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LaserColorLevel0;                                        // 0x1278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStatusValueModifierDescription                     BuffDescriptionLaserLevel2;                              // 0x1288(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FStatusValueModifierDescription                     BuffDescriptionLaserLevel1;                              // 0x12D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    LaserUpgradeHUDElementStateOffset;                       // 0x1328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FLinearColor GetAmmoAndLaserHUDElementColor(bool IsUsingSuperFlight, int32_t LaserLevel);
		bool HitCollisionStarFoxMode();
		bool StartedBraking(class ASpaceDolphin_Character_BP_C* self2);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void UpdateSFX();
		struct FStatusValueModifierDescription GetBuffDescription();
		bool AllowPostProcessEffect();
		float GetBuffPostprocessIntensity();
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void BuffTickClient(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
