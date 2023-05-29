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
	 * BlueprintGeneratedClass WeapTekClaws.WeapTekClaws_C
	 * Size -> 0x0168 (FullSize[0x0F80] - InheritedSize[0x0E18])
	 */
	class AWeapTekClaws_C : public AShooterWeapon_MeleeLock
	{
	public:
		class UParticleSystemComponent*                            PS_Level_3_Fists_Only_L;                                 // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            PS_Level_3_Fists_Only_R;                                 // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem2;                                         // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UParticleSystemComponent*>                    BladeFX;                                                 // 0x0E38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       FXOn;                                                    // 0x0E48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6Q0I[0x7];                                   // 0x0E49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    BladeMIC;                                                // 0x0E50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      MaterialAlpha;                                           // 0x0E60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaterialActivateSpeed;                                   // 0x0E64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaterialDeactivateSpeed;                                 // 0x0E68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AttackIndex;                                             // 0x0E6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<double>                                             LastImpactTime;                                          // 0x0E70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        DefaultParticleColor;                                    // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        AlternateBlackColor;                                     // 0x0E90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UParticleSystem*>                             LocalMeleeVFX;                                           // 0x0EA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UParticleSystem*>                             RemoteMeleeVFX;                                          // 0x0EB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              LocalImpactThrottle;                                     // 0x0EC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              RemoteImpactThrottle;                                    // 0x0ED0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              ImpactThreshold;                                         // 0x0EE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       FistParticlesActivated;                                  // 0x0EF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBlocking;                                              // 0x0EF1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5AK3[0x6];                                   // 0x0EF2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponAnim                                         BlockMontage;                                            // 0x0EF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastBlockTime;                                           // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              BlockingBuff;                                            // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BlockHeld;                                               // 0x0F18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_69W6[0x7];                                   // 0x0F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            TPV_Level_3_Fists_L;                                     // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            TPV_Level_3_Fists_R;                                     // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class USoundCue*>                                   ImpactSounds;                                            // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        SMComps;                                                 // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      BlockingDurabilityCostPerInterval;                       // 0x0F50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlockingDurabilityCostInterval;                          // 0x0F54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayWeaponAnimation_ReturnValue;                // 0x0F58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_StartBlocking;                        // 0x0F5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x0F5D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G2A8[0x2];                                   // 0x0F5E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0F60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue2;                      // 0x0F68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x0F70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x0F78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveDestroyed();
		void ActivateMaxPowerEffects(bool AtMaxPower);
		void BPMeleeAttackStarted();
		void ClientStartBlocking();
		void ClientStopBlocking();
		void StartSecondaryActionEvent();
		void StopSecondaryActionEvent();
		void OnAttachmentsAdded();
		void ChooseParticleColor(int32_t ColorID, struct FLinearColor* ParticleColor);
		TArray<struct FLinearColor> GetItemColors();
		void ApplyParticleColors(TArray<struct FLinearColor>* InputPin, class UParticleSystemComponent* InputPin2);
		void BPSpawnMeleeEffects(const struct FVector& Impact, const struct FVector& ShootDir);
		void ReceiveTick(float DeltaSeconds);
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void ShowBladeFX(bool bNewVisibility);
		void OnPrimalItemEquipped();
		struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
		int32_t BPWeaponDealDamage(struct FHitResult* Impact, struct FVector* ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse);
		void StartUnequipEvent();
		void BPStartEquippedNotify();
		bool BPShouldDealDamage(class AActor* TestActor);
		void UserConstructionScript();
		void ServerSetBlocking(bool StartBlocking);
		void ExecuteUbergraph_WeapTekClaws(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
