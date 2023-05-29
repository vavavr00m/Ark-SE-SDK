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
	 * BlueprintGeneratedClass Eel_Character_BP.Eel_Character_BP_C
	 * Size -> 0x030C (FullSize[0x2594] - InheritedSize[0x2288])
	 */
	class AEel_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            ShockAOE;                                                // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CanLightningAttackEffect;                                // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ChainBeam2;                                              // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ChainBeam1;                                              // 0x22A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Eel_C*              DinoCharacterStatus_BP_Eel_C1;                           // 0x22A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      ChainTargets;                                            // 0x22B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      ChainLifetime;                                           // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseShockWeight;                                         // 0x22C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShockWeightPerGangBonus;                                 // 0x22C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanLightningAttack;                                      // 0x22CC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_ZATO[0x3];                                   // 0x22CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinEmissive;                                             // 0x22D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxEmissive;                                             // 0x22D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x22D8(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		float                                                      K2Node_CustomEvent_DelayTime;                            // 0x22E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x22EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x22ED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x22EE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F3F3[0x1];                                   // 0x22EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDinoAttackInfo                                     CallFunc_Array_Get_Item;                                 // 0x22F0(0x0130) Transient, DuplicateTransient
		struct FDinoAttackInfo                                     CallFunc_Array_Get_Item2;                                // 0x2420(0x0130) Transient, DuplicateTransient
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x2550(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SXN9[0x4];                                   // 0x2554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue;                        // 0x2558(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_CustomEvent_DiedCharacter;                        // 0x2560(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            K2Node_DynamicCast_AsMaterialInstanceDynamic;            // 0x2568(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2570(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y7GS[0x3];                                   // 0x2571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CallFunc_K2_GetVectorParameterValue_ReturnValue;         // 0x2574(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_MakeStruct_LinearColor;                           // 0x2584(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPUnstasis();
		void BPSetupTamed(bool bWasJustTamed);
		void UpdateEmissive();
		void OnRep_CanLightningAttack();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void CheckNearbyAndUpdateBeams();
		void UpdateChainBeamEnds(TArray<class AActor*>* NearbyTeamEels);
		void BPTimerNonDedicated();
		void BPDoAttack(int32_t AttackIndex);
		void UserConstructionScript();
		void ClearParticles(float DelayTime);
		void StartParticles();
		void SetCanLightningAttackAfterDelay();
		void AnimNotify_ShockAOEParticle();
		void ReceiveBeginPlay();
		void UnsetFX(class APrimalCharacter* DiedCharacter);
		void ExecuteUbergraph_Eel_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
