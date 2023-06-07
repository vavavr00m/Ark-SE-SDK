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
	 * BlueprintGeneratedClass WeapTekPistol.WeapTekPistol_C
	 * Size -> 0x01DB (FullSize[0x0F9B] - InheritedSize[0x0DC0])
	 */
	class AWeapTekPistol_C : public AShooterWeapon_Instant
	{
	public:
		class UParticleSystemComponent*                            BeamFPV;                                                 // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            BeamTPV;                                                 // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ChargeFPV;                                               // 0x0DD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ChargeTPV;                                               // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FireMode;                                                // 0x0DE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BeamTarget;                                              // 0x0DE4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       BeamOn;                                                  // 0x0DF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2XIV[0x7];                                   // 0x0DF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTekPistolFireMode_Beam>                     FireModeConfig;                                          // 0x0DF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       SetBeamLocally;                                          // 0x0E08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QL3O[0x3];                                   // 0x0E09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealPercentage;                                          // 0x0E0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinHealAmount;                                           // 0x0E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxHealAmount;                                           // 0x0E14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    TargetCharacter;                                         // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DisableCrosshairColor;                                   // 0x0E20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        StunCrosshairColor;                                      // 0x0E30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseWorldSpaceBeamTarget;                                 // 0x0E40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZP10[0x3];                                   // 0x0E41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        HealingCrosshairColor;                                   // 0x0E44(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VL36[0x4];                                   // 0x0E54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastHealTime;                                            // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPrimalItem_WeaponTekPistol_C*                       PrimalItem;                                              // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCustomItemData                                     CustomItemData;                                          // 0x0E68(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		struct FWeaponAnim                                         ModeSwitchAnim;                                          // 0x0EE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayModeSwitchMontage;                                   // 0x0EF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BS9B[0x7];                                   // 0x0EF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponAnim                                         FireStartAnim;                                           // 0x0EF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         FireStopAnim;                                            // 0x0F08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FireDelayAfterModeSwitch;                                // 0x0F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SwitchingMode;                                           // 0x0F1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9P6V[0x3];                                   // 0x0F1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              HelperBuff;                                              // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         HelperBuffRef;                                           // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DamageCrosshairColor;                                    // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     FireLoopSound;                                           // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     ImpactLoop;                                              // 0x0F48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    DynamicMats;                                             // 0x0F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    K2Node_CustomEvent_NewMode;                              // 0x0F60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_BeamOn2;                              // 0x0F64(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x0F65(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8S57[0x2];                                   // 0x0F66(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_NewTarget2;                           // 0x0F68(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0F74(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_03C9[0x3];                                   // 0x0F75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_NewTarget;                            // 0x0F78(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CRIV[0x4];                                   // 0x0F84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x0F88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_NewMode2;                             // 0x0F90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_FireMode;                             // 0x0F94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_BeamOn;                               // 0x0F98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x0F99(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_BoolBool_ReturnValue;                  // 0x0F9A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveDestroyed();
		void UpdateBeamSounds();
		void UpdateMaterials();
		void CreateDynamicMats();
		void ApplyHelperBuff();
		void BPKillImpactEffects();
		void UpdateBeamEffect();
		void BPFiredWeapon();
		void StartUnequipEvent();
		void BPStartEquippedNotify();
		bool BPWeaponCanFire();
		void SetMaterialVectorParameter(class USkeletalMeshComponent* SK, const class FName& Parameter, const struct FLinearColor& Value);
		void SetFireModeOnItem(int32_t Mode);
		int32_t GetFireModeFromItem();
		void BPAppliedPrimalItemToWeapon();
		class UClass* SelectBuff(class AActor* Target);
		struct FColor BPGetCrosshairColor();
		bool BPShouldDealDamage(class AActor* TestActor);
		int32_t BPWeaponDealDamage(struct FHitResult* Impact, struct FVector* ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse);
		void ApplyBeamTarget();
		void BPPostSpawnMuzzleEffect(class UParticleSystemComponent* NewMuzzlePSC);
		void GetFireModeData(struct FTekPistolFireMode_Beam* Item);
		void UpdateBeamTarget(const struct FVector& BeamTarget);
		void ReceiveTick(float DeltaSeconds);
		void BPOnBurstFinished();
		void BPOnBurstStarted();
		void UpdateFireMode();
		void StartSecondaryActionEvent();
		void BPSpawnImpactEffects(struct FHitResult* Impact, struct FVector* ShootDir, bool bIsEntryHit, float WeaponMaxRange);
		void UserConstructionScript();
		void ServerSetFireMode(int32_t NewMode);
		void ClientSetFireMode(int32_t NewMode);
		void ClientBeamEffect(bool BeamOn);
		void ServerSetBeamTarget(const struct FVector& NewTarget);
		void ClientSetBeamTarget(const struct FVector& NewTarget);
		void ClientNotifyHealingHit();
		void PreventFireDuringModeSwitch();
		void ClientUpdateFiringState(int32_t FireMode, bool BeamOn);
		void ExecuteUbergraph_WeapTekPistol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
