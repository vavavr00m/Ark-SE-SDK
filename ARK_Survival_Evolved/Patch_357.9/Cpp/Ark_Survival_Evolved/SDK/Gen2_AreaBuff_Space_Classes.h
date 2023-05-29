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
	 * BlueprintGeneratedClass Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C
	 * Size -> 0x00BA (FullSize[0x0E38] - InheritedSize[0x0D7E])
	 */
	class AGen2_AreaBuff_Space_C : public AGen2_AreaBuff_Base_C
	{
	public:
		unsigned char                                              UnknownData_00XC[0x2];                                   // 0x0D7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            SPACEMOTES;                                              // 0x0D80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCharacterMovementComponent*                         InstigatorMoveComponent;                                 // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTouchTime;                                           // 0x0D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastFlyTime;                                             // 0x0D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   Player;                                                  // 0x0DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0DA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFlyer;                                                 // 0x0DB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZQTW[0x7];                                   // 0x0DB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     NextLaunchTime;                                          // 0x0DB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxSwimSpeed;                                            // 0x0DC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxFlySpeed;                                             // 0x0DC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPrimalCharacterStatusComponent*                     StatusComponent;                                         // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTryingToLand;                                          // 0x0DD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRegisteredSpaceMotes;                                   // 0x0DD1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P334[0x6];                                   // 0x0DD2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Add_DoubleFloat_ReturnValue;                    // 0x0DD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_CustomEvent_Player2;                              // 0x0DE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Dino5;                                // 0x0DE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_CustomEvent_player;                               // 0x0DF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Dino4;                                // 0x0DF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsInstigatorClimbing_IsClimbing;                // 0x0E00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKE4[0x7];                                   // 0x0E01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Dino3;                                // 0x0E08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Dino2;                                // 0x0E10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Dino;                                 // 0x0E18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x0E20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0E28(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void DinoInstigatorReceivedRider(class AShooterCharacter* Rider);
		void DinoInstigatorClearedRider();
		void UpdateDayCycleManager();
		bool AllowFalling();
		void HasBuffToIgnoreZeroG(bool* Ignore);
		bool BPPreventNotifySound(class USoundBase* SoundIn);
		void ClearRotation();
		void IsInstigatorClimbing(bool* IsClimbing);
		void RestorePlayerMovement();
		void InitializePlayerZeroGMovement();
		void RestoreDinoMovement();
		void InitialzeDinoZeroGMovement();
		struct FVector BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime);
		void StopFlying();
		void BuffTickServer(float DeltaTime);
		void CheckGround();
		void BPDeactivated(class AActor* ForInstigator);
		float BPGetGravityZScale(float currentScale);
		void StartFlying();
		void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode);
		bool BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void DinoMounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino);
		void DinoUnmounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino);
		void FlyingDinoLanded(class APrimalDinoCharacter* Dino);
		void FlyingDinoStartLanding(class APrimalDinoCharacter* Dino);
		void FlyingDinoLandingInterrupted(class APrimalDinoCharacter* Dino);
		void ExecuteUbergraph_Gen2_AreaBuff_Space(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
