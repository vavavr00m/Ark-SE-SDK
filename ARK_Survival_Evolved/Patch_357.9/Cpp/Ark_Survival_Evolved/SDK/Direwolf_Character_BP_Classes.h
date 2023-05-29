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
	 * BlueprintGeneratedClass Direwolf_Character_BP.Direwolf_Character_BP_C
	 * Size -> 0x0134 (FullSize[0x2450] - InheritedSize[0x231C])
	 */
	class ADirewolf_Character_BP_C : public ADino_Character_BP_Pack_C
	{
	public:
		unsigned char                                              UnknownData_YE93[0x4];                                   // 0x231C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDinoCharacterStatusComponent_BP_Direwolf_C*         DinoCharacterStatus_BP_Direwolf_C1;                      // 0x2320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<float>                                              ResourceTypeScales;                                      // 0x2328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      ResourceTypesToScale;                                    // 0x2338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      SniffPassiveRadius;                                      // 0x2348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SniffPassiveHealthTreshold;                              // 0x234C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SniffPassiveUpdateInterval;                              // 0x2350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DQI3[0x4];                                   // 0x2354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            SniffPassiveIcon;                                        // 0x2358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SniffAbilityRadiusChests;                                // 0x2360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SniffAbilityRadiusHiddenDinos;                           // 0x2364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SniffAbilityDisplayTime;                                 // 0x2368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IE0W[0x4];                                   // 0x236C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            SniffAbilityHiddenDinoIcon;                              // 0x2370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture*                                            SniffAbilityChestIcon;                                   // 0x2378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      SniffedPassiveTargets;                                   // 0x2380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      SniffedExplorerChests;                                   // 0x2390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      SniffedHiddenDinos;                                      // 0x23A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     LastSniffedTime;                                         // 0x23B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DinoPackMateBuffClass;                                   // 0x23B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPackLeaderReplicated;                                 // 0x23C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9CDZ[0x7];                                   // 0x23C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PackLeaderHUDText;                                       // 0x23C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      PackLeaderHUDTextYOffset;                                // 0x23D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PackLeaderHUDTextDrawScale;                              // 0x23DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        PackLeaderHUDTextColor;                                  // 0x23E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowCopycatRoarWithRider;                              // 0x23F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_91JV[0x3];                                   // 0x23F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CorpseIconColor;                                         // 0x23F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ChestIconColor;                                          // 0x2404(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HiddenDinoIconColor;                                     // 0x2414(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X0G8[0x4];                                   // 0x2424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastHowlTime;                                            // 0x2428(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x2430(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_ActorsToIgnore2_RefProperty; // 0x2440(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		bool BPPreventNotifySound(class USoundBase* SoundIn);
		void RidingTick(float DeltaSeconds);
		void AddHowlCooldownBuff();
		void PackRoar();
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void GatherPack();
		void BPDoAttack(int32_t AttackIndex);
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void DoSniffAbility();
		void GetHiddenDinos(float Radius, TArray<class AActor*>* FoundDinos);
		void GetExplorerChestsInRange(float Radius, TArray<class AActor*>* FoundExplorerChests);
		void UpdateSniffedTargets();
		void BPDrawToRiderHUD(class AShooterHUD* HUD);
		void DrawSniffedTargets(class AHUD* HUD, TArray<class AActor*>* LowHealthTargets, TArray<class AActor*>* HiddenTargets, TArray<class AActor*>* ExplorerChests);
		void GetEnemysBelowHealthTreshold(float Radius, float HealthTreshold, TArray<class AActor*>* FoundActors);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		float BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected);
		void UserConstructionScript();
		void ExecuteUbergraph_Direwolf_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
