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
	 * BlueprintGeneratedClass Para_Character_BP.Para_Character_BP_C
	 * Size -> 0x0201 (FullSize[0x2489] - InheritedSize[0x2288])
	 */
	class APara_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            WarningParticles;                                        // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Para_C*             DinoCharacterStatus_BP_Para_C1;                          // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EPara_WarningMode                                          WarningMode;                                             // 0x2298(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2E71[0x3];                                   // 0x2299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EnemyScanRadius;                                         // 0x229C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RadiusMultiplierForPlayerAlerts;                         // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AlertPulseCooldownSeconds;                               // 0x22A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AlertPulseStaminaCost;                                   // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AlertIntervalSeconds;                                    // 0x22AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TurretModeFoodConsumptionMultiplier;                     // 0x22B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WarningScanTickIntervalMin;                              // 0x22B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WarningScanTickIntervalMax;                              // 0x22B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DUN6[0x4];                                   // 0x22BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AlertPulseEmitterClass;                                  // 0x22C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              FriendlyPlayerAlertBuffClass;                            // 0x22C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        AlertAnim;                                               // 0x22D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsAlertActive;                                           // 0x22D8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_R6QE[0x3];                                   // 0x22D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrightenRadius;                                          // 0x22DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              FrightenCooldownBuffClass;                               // 0x22E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      FrightenExtraDinoTypes;                                  // 0x22E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UClass*                                              FrightenBuffToApply;                                     // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FrightenMassThresholdCarnivore;                          // 0x2300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FrightenMassThresholdHerbivore;                          // 0x2304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        FrightenAnim;                                            // 0x2308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        FrightenFailedAnim;                                      // 0x2310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FrightenAnimDuration;                                    // 0x2318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoFrightenInTurretMode;                                // 0x231C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JNG[0x3];                                   // 0x231D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTurretModeToggleTime;                                // 0x2320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalCharacter*>                            NearbyEnemies;                                           // 0x2328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     LastAlertPulseServerTime;                                // 0x2338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastAlertPulseClientTime;                                // 0x2340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        AlertPulseAnim;                                          // 0x2348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HighFoodConsumptionEnabled;                              // 0x2350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowFloatingHudWarning;                                  // 0x2351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BY92[0x6];                                   // 0x2352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastWarningScanTickTime;                                 // 0x2358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WarningScanTickInterval;                                 // 0x2360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RAPG[0x4];                                   // 0x2364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShooterCharacter*>                           NearbyPlayers;                                           // 0x2368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       TurretModePaused;                                        // 0x2378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUVF[0x3];                                   // 0x2379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        WarningTextColor;                                        // 0x237C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		unsigned char                                              UnknownData_ZVQV[0x4];                                   // 0x238C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DetectedYouString;                                       // 0x2390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       CallFunc_IsMontagePlaying_ReturnValue;                   // 0x23A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x23A1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NERR[0x2];                                   // 0x23A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x23A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x23A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_WarningModeEnabled2;                  // 0x23AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x23AD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0KXG[0x2];                                   // 0x23AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x23B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMontagePlaying_ReturnValue2;                  // 0x23B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_WarningModeEnabled;                   // 0x23B5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IRFF[0x2];                                   // 0x23B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x23B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable2;                         // 0x23C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x23C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x23C8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FFIZ[0xC];                                   // 0x23D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_Conv_VectorToTransform_ReturnValue;             // 0x23E0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x2410(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BeginSpawningActorFromClass_ReturnValue;        // 0x2418(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_FinishSpawningActor_ReturnValue;                // 0x2420(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x2428(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue2;                        // 0x242C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_ModifyCurrentStatusValue_ReturnValue;           // 0x2430(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUseAlertPulse_Result;                        // 0x2434(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUseAlertPulse_Result2;                       // 0x2435(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4AQD[0x2];                                   // 0x2436(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            CallFunc_Octree_Warning_Scan_FoundEnemies;               // 0x2438(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Octree_Warning_Scan_FoundSmallCreature;         // 0x2448(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YDPB[0x7];                                   // 0x2449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShooterCharacter*>                           CallFunc_Octree_Warning_Scan_FoundPlayers;               // 0x2450(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2460(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QN3Y[0x3];                                   // 0x2461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x2464(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2468(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K6ET[0x7];                                   // 0x2469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_Array_Get_Item;                                 // 0x2470(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x2478(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F5YZ[0x4];                                   // 0x247C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_Array_Get_Item2;                                // 0x2480(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x2488(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void CanUseAlertPulse(bool* Result);
		void ReceiveTick(float DeltaSeconds);
		void GetNearbyEnemies(TArray<struct FVector>* Locations);
		void NotifyPlayerAboutAlert(class AShooterCharacter* Character);
		void SetHighFoodConsumption(bool Enabled);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		void ClassifyScanningTarget(class AActor* ScanTarget, EPara_WarningMode WarningMode, bool FleeingCountsAsHostile, bool* IsEnemy, bool* IsSmallCreature);
		void BP_OnSetDeath();
		void OnRep_IsAlertActive();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void IsSmallCreature(class APrimalCharacter* Character, bool* IsSmall);
		void IsFrightenOnCooldown(bool* OnCooldown);
		void FindNearbySmallCreatures(TArray<class APrimalDinoCharacter*>* Creatures);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void IsDinoHostile(class APrimalDinoCharacter* Dino, bool FleeingCountsAsHostile, bool* IsHostile);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void OctreeWarningScan(EPara_WarningMode Mode, bool IncludeFleeing, TArray<class APrimalCharacter*>* FoundEnemies, bool* FoundSmallCreature, TArray<class AShooterCharacter*>* FoundPlayers);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool SetTurretMode(bool Enabled);
		void UserConstructionScript();
		void MulticastUpdateWarningMode(bool WarningModeEnabled);
		void AlertTick();
		void StartAlertTick();
		void StopAlertTick();
		void UpdateWarningMode(bool WarningModeEnabled);
		void ServerRequestAlertPulse();
		void DoAlertPulse();
		void ExecuteUbergraph_Para_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
