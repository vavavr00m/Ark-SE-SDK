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
	 * BlueprintGeneratedClass Buff_ExosuitRider.Buff_ExosuitRider_C
	 * Size -> 0x04C8 (FullSize[0x0E48] - InheritedSize[0x0980])
	 */
	class ABuff_ExosuitRider_C : public APrimalBuff
	{
	public:
		struct FHUDElement                                         FuelHUDElement;                                          // 0x0980(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        HUDTextColor_Default;                                    // 0x0AD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDTextColor_Critical;                                   // 0x0AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HUDTextColor_Low;                                        // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelHUDBackgroundColor_Default;                          // 0x0B00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelHUDBackgroundColor_Low;                              // 0x0B10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelHUDBackgroundColor_Critical;                         // 0x0B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         BeamEnergyHUDElement;                                    // 0x0B30(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      CriticallyLowEnergyAmount;                               // 0x0C80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PY47[0x4];                                   // 0x0C84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         BeamEnergyTextHUDElement;                                // 0x0C88(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      EnergyBarBlinkSpeed;                                     // 0x0DD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PrevBeamEnergy;                                          // 0x0DDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FireHyperbeamTextBlinkSpeed;                             // 0x0DE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JSU7[0x4];                                   // 0x0DE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDRichTextOverlayData                             FireHyperbeamHUDRichText;                                // 0x0DE8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetHudData(bool* bUsesChestBeam, bool* bCanUseChestbeam, float* ChestBeamEnergyPercent, int32_t* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int32_t* CurrentMode, bool* bIsPreparingJump);
		void BuffTickServer(float DeltaTime);
		float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification);
		void BPDeactivated(class AActor* ForInstigator);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void ThrottledTick();
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ExosuitRider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
