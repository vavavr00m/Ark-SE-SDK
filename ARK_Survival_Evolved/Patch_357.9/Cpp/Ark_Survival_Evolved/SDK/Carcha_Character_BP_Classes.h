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
	 * BlueprintGeneratedClass Carcha_Character_BP.Carcha_Character_BP_C
	 * Size -> 0x0550 (FullSize[0x27D8] - InheritedSize[0x2288])
	 */
	class ACarcha_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Carcha_C*           DinoCharacterStatus_BP_Carcha_C2;                        // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              RoarBuff;                                                // 0x2290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              MultistackBuffClass;                                     // 0x2298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RoarDelay;                                               // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RoarBuffBaseTime;                                        // 0x22A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RoarBuffAdditionalTimePerStack;                          // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ZOQ[0x4];                                   // 0x22AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    LastCorpseTarget;                                        // 0x22B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AcceptOfferAnim;                                         // 0x22B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastCorpseValue;                                         // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_488H[0x4];                                   // 0x22C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            LastDragController;                                      // 0x22C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxFriendMeter;                                          // 0x22D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N5KD[0x4];                                   // 0x22D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdate;                                              // 0x22D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FriendMeterDecay;                                        // 0x22E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayFriendDecayAfterEating;                             // 0x22E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FriendModeTeam;                                          // 0x22E8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1V6[0x4];                                   // 0x22EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FriendModeBuff;                                          // 0x22F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        EndFriendModeAnim;                                       // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   LastFriend;                                              // 0x2300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LaunchRiderVelocity;                                     // 0x2308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AffinityPerStack;                                        // 0x230C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SecondsBeforeAffinityDecays;                             // 0x2310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4XT2[0x4];                                   // 0x2314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AffinityDecayStart;                                      // 0x2318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TameIneffectivenessWhenLosingFriendMode;                 // 0x2320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AffinityLostPerSecond;                                   // 0x2324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TameIneffectivenessPerMissingStack;                      // 0x2328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    RiddenWildTeam;                                          // 0x232C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FHUDElement                                         TamingProgress;                                          // 0x2330(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         TamingEffectiveness;                                     // 0x2480(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      WanderSearchRadius;                                      // 0x25D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DO5G[0xC];                                   // 0x25D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointOfInterestData                                FriendMeterDisplay;                                      // 0x25E0(0x0140) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       POIInitialized;                                          // 0x2720(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVHO[0x7];                                   // 0x2721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCarchaFriendStruct>                         Friendship;                                              // 0x2728(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		double                                                     BiteCorpseTime;                                          // 0x2738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                TrapImmunityCustomTag;                                   // 0x2740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RoarRadius;                                              // 0x2748(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FriendModeCurrentStamina;                                // 0x274C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FriendModeCurrentHealth;                                 // 0x2750(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LastFriendTeam;                                          // 0x2754(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U40C[0x8];                                   // 0x2758(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  FriendStartTransform;                                    // 0x2760(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PVETrappedRadius;                                        // 0x2790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    PVEActorLimit;                                           // 0x2794(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastStaminaUpdate;                                       // 0x2798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		double                                                     FriendModeEndTime;                                       // 0x27A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PostFriendGracePeriod;                                   // 0x27A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    HUDIconStateForMaxRage;                                  // 0x27AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    HUDIconState_Normal;                                     // 0x27B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LastStackCount;                                          // 0x27B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		double                                                     FriendModeDeactivationTime;                              // 0x27B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       HasSaddleRep;                                            // 0x27C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Loading;                                                 // 0x27C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bNewUniqueState;                            // 0x27C2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KPXK[0x5];                                   // 0x27C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_UnviewedByActor;                            // 0x27C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_Event_ViewedByActor;                              // 0x27D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool CanBeViewed(class AActor* ByActor);
		class UClass* GetPointCustomData();
		struct FPointOfInterestData GetPointOfInterestData();
		void ReceiveTick(float DeltaSeconds);
		void BloodRageDecayed();
		void PlayEndFriendModeAnim();
		void StackDecayProgress(float* DecayProgress);
		void IsInGracePeriod(class APrimalCharacter* TestTarget, bool* safe);
		void UpdateWinded();
		void ClientEndFriendMode();
		void PostFriendMode();
		void CheckForTrapped(bool* IsTrapped);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void PreventPVEDamage(int32_t OtherTeam, bool* Prevent);
		void NetSyncStatusValues();
		void UpdateStatusValues();
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void ReceiveBeginPlay();
		bool BPCanIgnoreImmobilizationTrap(class UClass* TrapClass, bool bForceTrigger);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void DecayFriendship(int32_t index);
		void FindTeamRecord(int32_t Team, int32_t* RecordIndex, bool* New);
		void AddOffering(float Value, int32_t Team, bool* MaxedOut);
		void InitializePointOfInterest();
		class UAnimMontage* BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal);
		bool IsInFriendMode();
		void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
		float BPGetTargetingDesirability(class AActor* Attacker);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void BloodRageAdded();
		void StartFriendMode(class APlayerController* PC);
		void ClearBloodrageStacks();
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		bool BlueprintOverrideWantsToRun(bool bInputWantsToRun);
		void TossRider();
		class FName BPGetRiderSocket();
		void EndFriendMode();
		void BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value);
		bool BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance);
		void PerformanceThrottledTick();
		void CheckCorpse();
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		void OnTargetSet(class AActor* NewTarget);
		int32_t BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
		void IsSameTeamorAllied(int32_t OtherTeam, bool* isSameTeam);
		void TryAddRoarBuff(class APrimalCharacter* Target, int32_t StackCount);
		void DoRoar();
		void GetMaxBloodrageStacks(int32_t* MaxStackCountAllowed);
		void GetBloodrageStacks(int32_t* StackCount);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void BPDoAttack(int32_t AttackIndex);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		class FName GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex);
		void UserConstructionScript();
		void SetPointTagUniqueState(bool bNewUniqueState);
		void UnviewPoint(class AActor* UnviewedByActor);
		void ViewPoint(class AActor* ViewedByActor);
		void ExecuteUbergraph_Carcha_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
