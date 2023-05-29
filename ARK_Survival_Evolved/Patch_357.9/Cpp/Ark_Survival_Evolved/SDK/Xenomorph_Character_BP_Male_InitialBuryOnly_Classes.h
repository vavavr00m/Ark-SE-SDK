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
	 * BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C
	 * Size -> 0x002A (FullSize[0x2A3A] - InheritedSize[0x2A10])
	 */
	class AXenomorph_Character_BP_Male_InitialBuryOnly_C : public AXenomorph_Character_BP_Male_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Xenomorph_C*        DinoCharacterStatus_BP_Xenomorph_C1;                     // 0x2A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StaticBabyAge;                                           // 0x2A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StaticBabyDamageReceiveMultiplier;                       // 0x2A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StaticBabyAttackDestOffset;                              // 0x2A20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnUnderground;                                        // 0x2A24(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UnburyOnSpawnUnderground;                                // 0x2A25(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UnburyTargetingIgnoredByWildDinos;                       // 0x2A26(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x2A27(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2A28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VPJ9[0x7];                                   // 0x2A29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                CallFunc_GetDefaultXeno_Dino;                            // 0x2A30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x2A38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2A39(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		void KillSelf();
		void BP_OnSetDeath();
		void InitializeDive();
		void SetupStaticBaby();
		void UpdateBuryMound(bool ShouldShow);
		void GetDefaultXeno(class APrimalDinoCharacter** Dino);
		void BPUnstasis();
		void UpdateAttackDestOffset();
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void BPTimerServer();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BPDinoPostBeginPlay();
		void AttemptDiveOut();
		void ForceDiveEnd();
		void ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
