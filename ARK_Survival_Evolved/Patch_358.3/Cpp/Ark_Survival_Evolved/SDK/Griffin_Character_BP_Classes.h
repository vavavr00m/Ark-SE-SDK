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
	 * BlueprintGeneratedClass Griffin_Character_BP.Griffin_Character_BP_C
	 * Size -> 0x00B9 (FullSize[0x24A0] - InheritedSize[0x23E7])
	 */
	class AGriffin_Character_BP_C : public ADino_Character_BP_DivingFlyer_C
	{
	public:
		unsigned char                                              UnknownData_UZWO[0x1];                                   // 0x23E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            RightWingParticles;                                      // 0x23E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            LeftWingParticles;                                       // 0x23F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     DivingAudio;                                             // 0x23F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            DivingParticles;                                         // 0x2400(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Griffin_C*          DinoCharacterStatus_BP_Griffin_C1;                       // 0x2408(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DivingWingFlapGroundDistance;                            // 0x2410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YO40[0x4];                                   // 0x2414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            FeatherMaterial;                                         // 0x2418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FeatherWindSpeedMin;                                     // 0x2420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FeatherWindSpeedMax;                                     // 0x2424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FeatherWindIntensityMin;                                 // 0x2428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FeatherWindIntensityMax;                                 // 0x242C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsLocallyCarried_1;                                      // 0x2430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4KIO[0x3];                                   // 0x2431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WingFlapFX_Scale;                                        // 0x2434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMeshInterpolating_1;                                    // 0x2438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V0D2[0x3];                                   // 0x2439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SplashFXTimeDilation;                                    // 0x243C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        DropCarriedCharacterMontage;                             // 0x2440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DropCarriedCharAfterAnimPercent;                         // 0x2448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_996S[0x4];                                   // 0x244C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     Ref_WingFlapParticle_Water;                              // 0x2450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     Ref_WingFlapParticle_Ground;                             // 0x2458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  CallFunc_Array_Get_Item;                                 // 0x2460(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delay;                                // 0x2468(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_15HQ[0x4];                                   // 0x246C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            K2Node_DynamicCast_AsMaterialInstanceDynamic;            // 0x2470(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2478(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_52MB[0x7];                                   // 0x2479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty; // 0x2480(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingleForObjects_ActorsToIgnore2_RefProperty; // 0x2490(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void UpdateDivingFX();
		void OnDiveSwipe();
		void UpdateWindMaterial();
		void UpdateTrailParticleSystem(class UParticleSystemComponent* ParticleSystem, bool Active);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void UpdateDivingParticleSystem(class UParticleSystemComponent* ParticleSystem, bool Active);
		void UpdateDivingAudio(bool Active, bool LocallyCarried);
		void UpdateDivingEffects();
		void CheckGroundForWingFlap();
		void UserConstructionScript();
		void AnimNotify_WingFlap();
		void ReceiveBeginPlay();
		void AnimNotify_DiveSwipe();
		void DropCarriedCharacter_AfterDelay(float Delay);
		void ExecuteUbergraph_Griffin_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
