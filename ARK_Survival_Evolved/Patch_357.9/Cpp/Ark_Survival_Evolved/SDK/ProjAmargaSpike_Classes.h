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
	 * BlueprintGeneratedClass ProjAmargaSpike.ProjAmargaSpike_C
	 * Size -> 0x0150 (FullSize[0x07B0] - InheritedSize[0x0660])
	 */
	class AProjAmargaSpike_C : public AShooterProjectile
	{
	public:
		class UAudioComponent*                                     ProjectileSFX;                                           // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_LerpSpikeMesh_Alpha_962609E44E7D4E198427F182E1ACB165; // 0x0668(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_LerpSpikeMesh__Direction_962609E44E7D4E198427F182E1ACB165; // 0x066C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WO2R[0x3];                                   // 0x066D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_LerpSpikeMesh;                                  // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              SpikeStructureClass;                                     // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     RegenStructureParticle;                                  // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLinearColor>                                RegenStructureColors;                                    // 0x0688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USoundBase*                                          FailedForInstSound;                                      // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinDistBetweenSpikes;                                    // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C1PK[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ImpactParticle;                                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventSpikeSpawnUnderwater;                            // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YKPZ[0x7];                                   // 0x06B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      BounceOnImpactClasses;                                   // 0x06B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CachedNumBounces;                                        // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxBounces;                                              // 0x06CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          ImpactSound;                                             // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x06D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x06DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     K2Node_CustomEvent_Locs;                                 // 0x06E0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       K2Node_CustomEvent_FailedForInst;                        // 0x06F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IsSpawn;                              // 0x06F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QY54[0x2];                                   // 0x06F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            K2Node_CustomEvent_SpawnRot;                             // 0x06F4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x0700(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0701(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5XR6[0x2];                                   // 0x0702(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0704(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Array_Get_Item;                                 // 0x0708(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x0714(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VEL[0x3];                                   // 0x0715(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Array_Get_Item2;                                // 0x0718(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9FV1[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShooterCharacter*>                           CallFunc_GetAllLocalPlayerCharacters_ReturnValue;        // 0x0728(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x0738(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   CallFunc_Array_Get_Item3;                                // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0748(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x0749(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7DP5[0x2];                                   // 0x074A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_SelectInt_ReturnValue;                          // 0x074C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0750(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0758(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U5NX[0x7];                                   // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x0760(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0768(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_IsValidIndex_ReturnValue;                 // 0x0769(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsAlliedWithOtherTeam_ReturnValue;              // 0x076A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MEEQ[0x1];                                   // 0x076B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_SelectInt_ReturnValue2;                         // 0x076C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CallFunc_Array_Get_Item4;                                // 0x0770(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VLerp_ReturnValue;                              // 0x0780(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Conv_LinearColorToVector_ReturnValue;           // 0x078C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x0798(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V125[0x7];                                   // 0x0799(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue2;            // 0x07A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_CustomEvent_Actor;                                // 0x07A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity);
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit);
		void ReceiveBeginPlay();
		void OnExplode(struct FHitResult* Result);
		void UserConstructionScript();
		void Timeline_LerpSpikeMesh__FinishedFunc();
		void Timeline_LerpSpikeMesh__UpdateFunc();
		void Multi_PostExplode(TArray<struct FVector>* Locs, bool FailedForInst, bool IsSpawn, const struct FRotator& SpawnRot);
		void LerpSpikeMesh();
		void Multi_AddMoveIgnoreActor(class AActor* Actor);
		void ExecuteUbergraph_ProjAmargaSpike(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
