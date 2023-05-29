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
	 * BlueprintGeneratedClass AmargaSpike.AmargaSpike_C
	 * Size -> 0x0278 (FullSize[0x1088] - InheritedSize[0x0E10])
	 */
	class AAmargaSpike_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UAudioComponent*                                     SpikeSoundComp;                                          // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    DebuffCollision;                                         // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                TeamColorMeshComp;                                       // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            AOEParticleComp;                                         // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                SpikeMesh;                                               // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpikeDamage;                                             // 0x0E38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpikeDamageImpulse;                                      // 0x0E3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              SpikeDamageType;                                         // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TickInterval;                                            // 0x0E48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ORH2[0x4];                                   // 0x0E4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BuffToApply;                                             // 0x0E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLinearColor>                                AoEColors;                                               // 0x0E58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      SpikeLifespan;                                           // 0x0E68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EHIZ[0x4];                                   // 0x0E6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  SpikeMeshMaterial;                                       // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BuffTemperatureValue;                                    // 0x0E78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5PTJ[0x4];                                   // 0x0E7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      DebuffedActors;                                          // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UParticleSystem*                                     AOEParticleTemplate;                                     // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    SpawnedOnStructure;                                      // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowDebuffChars;                                       // 0x0EA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3YPE[0x7];                                   // 0x0EA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SpikeActiveSound;                                        // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_ComponentBoundEvent_OtherActor3;                  // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_ComponentBoundEvent_OtherComp3;                   // 0x0EB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_ComponentBoundEvent_OtherBodyIndex3;              // 0x0EC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ComponentBoundEvent_bFromSweep2;                  // 0x0EC4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0X12[0x3];                                   // 0x0EC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          K2Node_ComponentBoundEvent_SweepResult2;                 // 0x0EC8(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0F50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode;               // 0x0F51(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0F52(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KYHI[0x5];                                   // 0x0F53(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_ComponentBoundEvent_OtherActor2;                  // 0x0F58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_ComponentBoundEvent_OtherComp2;                   // 0x0F60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_ComponentBoundEvent_OtherBodyIndex2;              // 0x0F68(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ComponentBoundEvent_bFromSweep;                   // 0x0F6C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SE8X[0x3];                                   // 0x0F6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          K2Node_ComponentBoundEvent_SweepResult;                  // 0x0F70(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		class AActor*                                              K2Node_ComponentBoundEvent_OtherActor;                   // 0x0FF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_ComponentBoundEvent_OtherComp;                    // 0x1000(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_ComponentBoundEvent_OtherBodyIndex;               // 0x1008(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PPGH[0x4];                                   // 0x100C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x1010(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x1018(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode2;              // 0x1019(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode3;              // 0x101A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum2_CmpSuccess;                           // 0x101B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum3_CmpSuccess;                           // 0x101C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue;                   // 0x101D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Contains_ReturnValue;                     // 0x101E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NGZ1[0x1];                                   // 0x101F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x1020(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x1030(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_78I0[0x3];                                   // 0x1031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x1034(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x1038(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Multiply_IntInt_ReturnValue;                    // 0x103C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x1040(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_AmargaSpiked_C*                                K2Node_DynamicCast_AsBuff_AmargaSpiked_C;                // 0x1048(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x1050(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x1051(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IJHT[0x6];                                   // 0x1052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x1058(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_ComponentOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x1068(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_ComponentOverlapActors_NEW_ActorsToIgnore2_RefProperty; // 0x1078(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser);
		void CheckApplySpikeDebuff(class AActor* forActor);
		void CheckApplySpikeDamage(class AActor* forActor);
		void UpdateSpikeRelLoc();
		void BPUpdatedHealth(bool bDoReplication);
		void InitSpike();
		void RefreshTeamColorVisuals();
		void UserConstructionScript();
		void SpikeTick();
		void ReceiveBeginPlay();
		void BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
		void BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
		void BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void BindOnSpawnedOnStructureDestroyed();
		void OnSpawnedOnStructureDestroyed();
		void ExecuteUbergraph_AmargaSpike(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
