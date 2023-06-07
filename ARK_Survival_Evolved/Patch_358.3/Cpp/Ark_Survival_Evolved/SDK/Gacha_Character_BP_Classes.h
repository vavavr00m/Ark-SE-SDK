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
	 * BlueprintGeneratedClass Gacha_Character_BP.Gacha_Character_BP_C
	 * Size -> 0x018C (FullSize[0x2414] - InheritedSize[0x2288])
	 */
	class AGacha_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            EmoteFX;                                                 // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CrystalFXC;                                              // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CrystalFXB;                                              // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CrystalFXA;                                              // 0x22A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                CrystalMeshC;                                            // 0x22A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                CrystalMeshB;                                            // 0x22B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoInventory_GachaDigestion_C*                     Digestion_Inventory;                                     // 0x22B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                CrystalMeshA;                                            // 0x22C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoTamedInventoryComponent_Gacha_C*                BaseInventory;                                           // 0x22C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Gacha_C*            DinoCharacterStatus_BP_Gacha;                            // 0x22D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RadiusToReachForFood;                                    // 0x22D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SearchOffset;                                            // 0x22DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEating;                                                // 0x22E0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F5MI[0x3];                                   // 0x22E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TamingSearchInterval;                                    // 0x22E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TamingSearchTimer;                                       // 0x22E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    TamingConsumeAmount;                                     // 0x22EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AfterMealSearchInterval;                                 // 0x22F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WildDigestionInterval;                                   // 0x22F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DigestionTimer;                                          // 0x22F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TamedDigestionInterval;                                  // 0x22FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        CrystalSockets;                                          // 0x2300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		bool                                                       AtePremiumFood;                                          // 0x2310(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_765U[0x7];                                   // 0x2311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              DigestionPool;                                           // 0x2318(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPool;                                             // 0x2328(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FTAI[0x4];                                   // 0x232C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        Crystals;                                                // 0x2330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      DigestionPoolSize;                                       // 0x2340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WildCrystalGrowthMin;                                    // 0x2344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    DigestConsumeAmount;                                     // 0x2348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SearchForDropRadius;                                     // 0x234C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WildCrystalGrowthMax;                                    // 0x2350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PremiumDigestionSpeed;                                   // 0x2354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UParticleSystemComponent*>                    CrystalEffects;                                          // 0x2358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGacha_ResourceStruct>                       ResourceProduction;                                      // 0x2368(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		float                                                      EmotionInterval;                                         // 0x2378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EmotionLevel;                                            // 0x237C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OvercrowdingRange;                                       // 0x2380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9YQL[0x4];                                   // 0x2384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              WanderTarget;                                            // 0x2388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccruedDamage;                                           // 0x2390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DamageEmotionScalar;                                     // 0x2394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageRecoveryRate;                                      // 0x2398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ProductionMode;                                          // 0x239C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGacha_ResourceStruct>                       Resources_Common;                                        // 0x23A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGacha_ResourceStruct>                       Resources_Uncommon;                                      // 0x23B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGacha_ResourceStruct>                       Resources_Rare;                                          // 0x23C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGacha_ResourceStruct>                       Resources_VeryRare;                                      // 0x23D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      MinChanceOfItem;                                         // 0x23E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxChanceOfItem;                                         // 0x23E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDroppedItemQuality;                                   // 0x23E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DebugPrint;                                              // 0x23EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TU0N[0x3];                                   // 0x23ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinChanceOfItemWild;                                     // 0x23F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxChanceOfItemWild;                                     // 0x23F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x23F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U94W[0x3];                                   // 0x23F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Array_Get_Item;                                 // 0x23FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_FloatFloat_ReturnValue;            // 0x2400(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_TamedDigestion_AteSomething;                    // 0x2401(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VM0S[0x2];                                   // 0x2402(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2404(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x2408(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x240C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x240D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x240E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJM5[0x1];                                   // 0x240F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Array_Set_Item_RefProperty;                     // 0x2410(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor

	public:
		float CalculateItemChanceWild(float CrystalQuality);
		float CalculateItemChance(float CrystalQuality);
		bool HasEnemyTarget();
		bool HasFriendlyTarget();
		struct FVector GetCrystalDropTransform(struct FRotator* Rotation);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		struct FRotator BPModifyAimOffsetNoTarget(struct FRotator* Aim);
		void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void InitializeProduction();
		void InitializeCrystals();
		void FindWanderTarget();
		void GetDigestionFrequencyMultiplier(float* mult);
		void GetCrystalQualityMultiplier(float* mult);
		void GetDigestionAmountMultiplier(float* Multiplier);
		struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
		float BPUnstasisConsumeFood(float FoodNeeded);
		float GetEfficiencyFactor();
		void ResetDigestionTimer();
		void BabyDigestion(bool* AteSomething);
		bool IsUnhappy();
		bool IsHappy();
		float CalculateCrystalQuality();
		void OnRep_EmotionLevel();
		void EmotionCheck();
		void ReceiveTick(float DeltaSeconds);
		void PlayStartDigestAnimation();
		void BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value);
		void DistributeFood(float FoodEaten);
		void LookforFoodDrops(bool PlayerAttack, bool* FoundSomething);
		void GetItemTamingValue(class UPrimalItem* Object, float* affinity, bool* IsWanted);
		void GetItemFoodValue(class UPrimalItem* Object, bool* IsPremium, float* FoodValue);
		void StopEating();
		void StartEating();
		void BPNotifyWildHarvestAttack(int32_t harvestIndex);
		void GetItemBaseValue(class UPrimalItem* PrimalItem, float BaseValue, float* Value);
		void ChooseLootSet();
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void WildDigestion();
		void PlayDigestAnimation();
		void SetCrystalScale();
		void DropCrystal();
		void FinishDigestion();
		void TamedDigestion(bool* AteSomething);
		void PlayReleaseAnimation();
		void DigestionTick(float DeltaSeconds);
		void TamingTick(float DeltaSeconds);
		void LookForTamingDrops(bool* FoundSomething);
		void GiveAffinity(class APrimalCharacter** tamer, float affinityToGive, bool* WasTamed);
		void WantsResource(class UPrimalItem** Item, bool* IsWanted, float* affinity);
		void BPDoHarvestAttack(int32_t harvestIndex);
		float BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected);
		float BPModifyHarvestDamage(class UPrimalHarvestingComponent* harvestComponent, float inDamage);
		void UserConstructionScript();
		void AnimNotify_DoneEating();
		void AnimNotify_DropCrystal();
		void BPDinoPostBeginPlay();
		void AnimNotify_CheckForCrystal();
		void CleanUpEating();
		void ExecuteUbergraph_Gacha_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
