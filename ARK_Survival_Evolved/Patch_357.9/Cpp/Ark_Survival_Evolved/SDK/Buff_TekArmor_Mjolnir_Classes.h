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
	 * BlueprintGeneratedClass Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C
	 * Size -> 0x01C8 (FullSize[0x10F0] - InheritedSize[0x0F28])
	 */
	class ABuff_TekArmor_Mjolnir_C : public ABuff_TekArmor_Sword_C
	{
	public:
		class UAudioComponent*                                     ArcLoopingSound;                                         // 0x0F28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AWeap_Mjolnir_C*                                     WeaponRef;                                               // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumArcsAllowed;                                          // 0x0F38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFiringLightningFan;                                   // 0x0F3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X6GJ[0x3];                                   // 0x0F3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSTR_ChargeBeamInfo>                         LightningTargets;                                        // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastTimeConsumedElementForLightning;                     // 0x0F50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsToLightning;                                       // 0x0F58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P90O[0x7];                                   // 0x0F59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     LightningFanParticlesTemplate;                           // 0x0F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     LightningEndParticlesTemplate;                           // 0x0F68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      lightMinExposure;                                        // 0x0F70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      lightMaxExposure;                                        // 0x0F74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             minRayOffset;                                            // 0x0F78(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             maxRayOffset;                                            // 0x0F84(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          ArcStartSound;                                           // 0x0F90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          ArcEndSound;                                             // 0x0F98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArcLoopingSoundVolumeTarget;                             // 0x0FA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArcLoopingSoundVolumeInterpSpeed;                        // 0x0FA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArcLoopingSoundPitchTarget;                              // 0x0FA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArcLoopingSoundPitchInterpSpeed;                         // 0x0FAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArcLoopingSoundPitchMin;                                 // 0x0FB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArcLoopingSoundPitchMax;                                 // 0x0FB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ArcLoopingSoundPitchMaxNumArcs;                          // 0x0FB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FL0E[0x4];                                   // 0x0FBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ActorsWithArcs;                                          // 0x0FC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    LightningElementCostPerTick;                             // 0x0FD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StopAllArcs;                                             // 0x0FD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Z7D[0x3];                                   // 0x0FD5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LightningAOEBuff;                                        // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CurrentLightningAOEBuff;                                 // 0x0FE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         ArcFireAnim;                                             // 0x0FE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    maxTargetsForCameraShake;                                // 0x0FF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxCameraShakeWhileTargeting;                            // 0x0FFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AProj_Mjolnir_C*                                     CurrentMjolnirProjectile;                                // 0x1000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsThrown;                                                // 0x1008(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_27KE[0x7];                                   // 0x1009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ThrowProjectileClass;                                    // 0x1010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         ThrowAnim;                                               // 0x1018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         CatchAnim;                                               // 0x1028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         MjolnirReturningAnim;                                    // 0x1038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LightningFanAmmoCost;                                    // 0x1048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LightningPulseAmmoCost;                                  // 0x104C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LightningFanCostInterval;                                // 0x1050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILM3[0x4];                                   // 0x1054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeLightningFanTickAmmoCost;                        // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         ArcFireAnim_Out;                                         // 0x1060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          CallbackSound;                                           // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          StickInSomethingSound;                                   // 0x1078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanPlayCallbackSound;                                    // 0x1080(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x1081(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bPressed7;                                  // 0x1082(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bPressed6;                                  // 0x1083(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bPressed5;                                  // 0x1084(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x1085(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bPressed4;                                  // 0x1086(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bPressed3;                                  // 0x1087(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bPressed2;                                  // 0x1088(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bPressed;                                   // 0x1089(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x108A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HE27[0x1];                                   // 0x108B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x108C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x1090(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OMYF[0x3];                                   // 0x1091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Multiply_IntInt_ReturnValue;                    // 0x1094(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsFiring_ReturnValue;                           // 0x1098(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LDJ8[0x3];                                   // 0x1099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Divide_IntInt_ReturnValue;                      // 0x109C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Min_ReturnValue;                                // 0x10A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OJS[0x4];                                   // 0x10A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_IntFloat_ReturnValue;                  // 0x10B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D4OB[0x4];                                   // 0x10B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x10B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMax_ReturnValue;                               // 0x10C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W7TT[0x4];                                   // 0x10C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x10C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x10D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CTGK[0x3];                                   // 0x10D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x10D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayWeaponAnimation_ReturnValue;                // 0x10D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayWeaponAnimation_ReturnValue2;               // 0x10DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x10E0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void BPDeactivated(class AActor* ForInstigator);
		void ReceiveTick(float DeltaSeconds);
		void MC_CleanupMjolnir();
		void ThrowingMonitorTick();
		void CheckIsThrowBlocked(const struct FVector& ForThrowLocation, bool* IsBlocked);
		void ServerRequestFireProjectileMulticast(const struct FVector& ShootDir);
		void MCHitForEmitter(const struct UObject_FTransform& HitTransform);
		void AuthorityProjectileRequestsSync();
		void MC_SyncProjectile(bool bIsStuck, const struct FVector& Location);
		void SetCastedArmorPieceRef();
		void CheckShouldHideWeapon();
		void AllowTekPunch(bool* Allow);
		bool canThrow(bool IsForPostCheck);
		bool CanAttack();
		bool CanDoLightningFan();
		void HandleBuffAnimNotify(const class FName& AnimNotifyName, const class FString& AnimNotifyStringData);
		void OnPulseEnd();
		void MulticastSetPulse(bool ShouldPulse);
		void CanDoPulseAttack(bool* CanPulse);
		void TryStartPulseAttack();
		void IsDoingPulseAttack(bool* IsDoingAttack);
		void ClientMjolnirSpawned(class AProj_Mjolnir_C* NewMjolnirProjectile);
		void MulticastCallbackMjolnir();
		void ServerRequestMjolnirCallback();
		void OnMjolnirReturned();
		void GetLaunchLocation(struct FVector* LaunchLoc);
		void GetAdjustedAim(struct FVector* Direction);
		void ServerRequestThrowMjolnir();
		void FireProjectileMulticast(const struct FVector& Origin, const struct FVector& ShootDir);
		void SkillThrowMjolnir();
		void TryStopLightning();
		void UpdateMaterialAndParticles();
		void RemoveAllArcsServer();
		void DestroyTargetArcMulticast(class APrimalCharacter* Character);
		void OnNewActorAffectedMulticast(class AActor* actorAffected);
		void TryAddNewArc(class AActor* forActor);
		void RemoveArcTargetServer(class AActor* ArcTarget);
		void ShouldRemoveArcForTarget(class APrimalCharacter* forCharacter, bool* shouldRemove);
		void DestroyArcForTarget(class APrimalCharacter* forCharacter);
		void ConnectArcToTarget(const struct FSTR_ChargeBeamInfo& ArcInfo, int32_t index);
		void DestroyArcVisuals(const struct FSTR_ChargeBeamInfo& ArcInfo);
		void RemoveAllArcsClient();
		void SetArcIntensity(class UParticleSystemComponent* Arc);
		void SetEndPoints(class UParticleSystemComponent* Arc, const struct FVector& EndPoint1, const struct FVector& endPoint2, const struct FVector& endPoint3);
		void CreateNewArc(class AActor* ToActor);
		void OnStopLightning();
		void OnStopLightningMulticast();
		void LightningTickServer();
		void LightningTickClient();
		void LightningTick();
		void OnStartLightning();
		void OnStartLightningMulticast();
		void TryStartLightning();
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void Proxy_InputAction_AltFire(bool bPressed);
		void Proxy_Gamepad_Right_Trigger_Hold(bool bPressed);
		void Proxy_Gamepad_Right_Trigger(bool bPressed);
		void Proxy_InputAction_Targeting_Hold(bool bPressed);
		void Proxy_Gamepad_Left_Trigger_Hold(bool bPressed);
		void Proxy_InputAction_Targeting(bool bPressed);
		void Proxy_Gamepad_Left_Trigger(bool bPressed);
		void PlayCameraShake();
		void MC_PlayThrow();
		void PlayHoldForReturn();
		void ExecuteUbergraph_Buff_TekArmor_Mjolnir(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
