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
	 * BlueprintGeneratedClass WeapMiningDrill.WeapMiningDrill_C
	 * Size -> 0x00F1 (FullSize[0x0FC1] - InheritedSize[0x0ED0])
	 */
	class AWeapMiningDrill_C : public AShooterWeapon_Activated
	{
	public:
		class UParticleSystemComponent*                            Exhaust3;                                                // 0x0ED0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Exhaust2;                                                // 0x0ED8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Exhaust1;                                                // 0x0EE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPointLightComponent*                                PointLight3;                                             // 0x0EE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPointLightComponent*                                PointLight1;                                             // 0x0EF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CurrentHeat;                                             // 0x0EF8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      HeatLoss_Active;                                         // 0x0EFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HeatLoss_Inactive;                                       // 0x0F00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Overheated;                                              // 0x0F04(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKYZ[0x3];                                   // 0x0F05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeatPerShot;                                             // 0x0F08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZOBJ[0x4];                                   // 0x0F0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FlashBuff_Dino;                                          // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              FlashBuff_Human;                                         // 0x0F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FPV_OverheatEmitter;                                     // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            TPV_OverheatEmitter;                                     // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         OverheatStartAnim;                                       // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     OverheatFX;                                              // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    DynamicMats;                                             // 0x0F48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      OverheatDurabilityCost;                                  // 0x0F58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IdleAmmoConsumptionTime;                                 // 0x0F5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IdleAmmoTimer;                                           // 0x0F60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LastImpact;                                              // 0x0F64(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastImpactTime;                                          // 0x0F70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         MyWeaponBuff;                                            // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              WeaponBuffClass;                                         // 0x0F80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     OverheatLoopSound;                                       // 0x0F88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x0F90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x0F91(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NX70[0x2];                                   // 0x0F92(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x0F94(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x0FA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0FA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YDSQ[0x6];                                   // 0x0FA2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x0FA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0FB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0FB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0FC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void StartUnequipEvent();
		void HandleActivation(bool bActive);
		void ReceiveDestroyed();
		void CreateDynamicMats();
		void BPSpawnHarvestEffects(TArray<struct FVector>* Impacts);
		struct FVector CalculateTargetPosition();
		void BPStartEquippedNotify();
		int32_t BPWeaponDealDamage(struct FHitResult* Impact, struct FVector* ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse);
		void BPPreFireEvent(const struct FVector& Origin, const struct FVector& ShootDir);
		bool BPWeaponCanFire();
		void OnRep_Overheated();
		void UpdateWeaponHeat(float DeltaSeconds);
		void BPFiredWeapon();
		void ReceiveTick(float DeltaSeconds);
		void UserConstructionScript();
		void SpawnImpact(const struct FVector& Location);
		void TurnOffIfRiding();
		void ExecuteUbergraph_WeapMiningDrill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
