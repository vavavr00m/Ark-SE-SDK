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
	 * BlueprintGeneratedClass BaseSwarmChar_BP.BaseSwarmChar_BP_C
	 * Size -> 0x0204 (FullSize[0x248C] - InheritedSize[0x2288])
	 */
	class ABaseSwarmChar_BP_C : public ADino_Character_BP_RepelType_C
	{
	public:
		class USceneComponent*                                     FlockRootComp;                                           // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    WeaponCollision;                                         // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class APrimalDinoAIController*                             MyPrimalDinoAIController;                                // 0x2298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugBoids;                                             // 0x22A0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7B9E[0x3];                                   // 0x22A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FlockSize;                                               // 0x22A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FlockShape;                                              // 0x22A8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		int32_t                                                    NumLeaderBoids;                                          // 0x22AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HideLeaderBoids;                                         // 0x22B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P0HD[0x7];                                   // 0x22B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         BoidStaticMesh;                                          // 0x22B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             BoidMeshScale;                                           // 0x22C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BoidMinSpeed;                                            // 0x22CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BoidMaxSpeed;                                            // 0x22D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BoidDecayAfterDeathTime;                                 // 0x22D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         FlockVolumeCurve;                                        // 0x22D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFlockPersistentData                                FlockPersistentSettings;                                 // 0x22E0(0x0038) Edit, BlueprintVisible
		struct FVector2D                                           FlockTurnRateRange;                                      // 0x2318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           FlockMaxForceRange;                                      // 0x2320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FlockMaxNumTracesPerSecond;                              // 0x2328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FlockDestroyNonCharacterTargetsAfterX;                   // 0x232C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FlockDirectDamagePerSecond;                              // 0x2330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFlockUseRadialDamage;                                   // 0x2334(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5775[0x3];                                   // 0x2335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RadialDamageTargetsBitmask;                              // 0x2338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RadialDamageInterval;                                    // 0x233C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FFlockBehaviorData>                          FlockBehaviors;                                          // 0x2340(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FFlockBehaviorData                                  CurrentFlockBehavior;                                    // 0x2350(0x0068) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		TArray<struct FBoid>                                       CurrentFlockData;                                        // 0x23B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        CurrentFlockStaticMeshComponents;                        // 0x23C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              DeadBoidTimesUntilDecayed;                               // 0x23D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            FlockLeaderDynamicMaterial;                              // 0x23E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CachedFlockLifetime;                                     // 0x23F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LXZZ[0x4];                                   // 0x23F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastVictimCheckTime;                                     // 0x23F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     AttackTargetStartTime;                                   // 0x2400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAttackingTarget;                                       // 0x2408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5KOJ[0x7];                                   // 0x2409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAttackTargetTime;                                    // 0x2410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              TargetedMessage;                                         // 0x2418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      TargetedMessageDisplayTime;                              // 0x2428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C5GP[0x4];                                   // 0x242C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x2430(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x2438(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2440(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x2441(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x2442(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EVG6[0x1];                                   // 0x2443(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x2444(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x2448(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x244C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1UPP[0x3];                                   // 0x244D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x2450(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O91H[0x4];                                   // 0x2454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                CallFunc_Array_Get_Item;                                 // 0x2458(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2460(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_99PQ[0x3];                                   // 0x2461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Damage;                               // 0x2464(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            CallFunc_FlockTickFollowersAndFreeAgents_BoidIndexWhitelist_RefProperty; // 0x2468(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<int32_t>                                            CallFunc_FlockTickLeaders_BoidIndexWhitelist_RefProperty; // 0x2478(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		float                                                      CallFunc_Array_Set_Item_RefProperty;                     // 0x2488(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		void ThrottledTick();
		void SetMaterialVectorParameter(class UStaticMeshComponent* SM, const class FName& Parameter, const struct FVector& Value);
		void SendTargetedMessage();
		void SwarmLifetimeEnded();
		void SetSwarmLifetime(float LifeTime);
		void FinishedAttackingTarget();
		void StartAttackingTarget();
		void SpottedTarget();
		class UStaticMeshComponent* CreateBoidSM(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
		void UpdateDeadBoids(float DeltaSeconds);
		void BPSetCharacterMeshesMaterialScalarParamValue(const class FName& ParamName, float Value);
		void SetMaterialScalarParameter(class UStaticMeshComponent* SM, const class FName& Parameter, float Value);
		void KillBoid(class UStaticMeshComponent* StaticMeshComp);
		void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
		void AttackTarget(bool* StopAttacking);
		void GetDestroyNonCharacterTargetDuration(float* Duration);
		void DestroyTarget();
		void SetFlockBehavior();
		void OnRep_FlockShape();
		void GetDamageTypeAdjuster(class UClass* Type, float* Multiplier);
		void KillBoidsBasedOnHealth(float DamageIn);
		void OnTargetChanged();
		void CanDamageVictiminRadius(class AActor* Victim, bool* CanDamage);
		void CreateFlock();
		void TickFlock(float DeltaTime);
		void ArrayContainsParentDamageType(TArray<class UClass*>* DamageTypes, class UClass** DamageType, bool* Result);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void DamageVictiminRadius(class AActor* Victim, bool* bDidDoDamage);
		void DamageVictimsInRadius();
		bool BPCanCryo(class AShooterPlayerController* ForPC);
		void BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath);
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void MultiOnLethalDamage();
		void Server_SpottedTargetEvent();
		void Multicast_SpottedTargetEvent();
		void Server_StartAttackingTarget();
		void Multicast_StartAttackingTarget();
		void Server_FinishedAttackingTarget();
		void Multicast_FinishedAttackingTarget();
		void Multi_KillBoidsBasedOnHealth(float Damage);
		void ExecuteUbergraph_BaseSwarmChar_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
