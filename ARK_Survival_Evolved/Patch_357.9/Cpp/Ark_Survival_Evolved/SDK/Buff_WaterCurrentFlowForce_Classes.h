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
	 * BlueprintGeneratedClass Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C
	 * Size -> 0x0048 (FullSize[0x09C8] - InheritedSize[0x0980])
	 */
	class ABuff_WaterCurrentFlowForce_C : public ABuff_Base_C
	{
	public:
		float                                                      OrigRepIntervalMult;                                     // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UpdatedRepInterval;                                      // 0x0984(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U32W[0x3];                                   // 0x0985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaterCurrentForce;                                       // 0x0988(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0O9U[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    SplineToFollow;                                          // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WaterCurrentForceMultiplier;                             // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             DebugOffset;                                             // 0x09A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OutOfWaterForce;                                         // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F34H[0x4];                                   // 0x09B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    OwningPrimalChar;                                        // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugVelocity;                                          // 0x09C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseReplicatedFlowForce;                                 // 0x09C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseInterpolatedFlowVector;                              // 0x09C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsWaitingForActivation;                                 // 0x09C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WaterCurrentForceMultiplierRaining;                      // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnClearPassenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int32_t SeatIndex);
		void OnClearRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino);
		void OnSetPassenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int32_t SeatIndex);
		void OnSetRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino);
		void SetWaterCurrentBuffActivation(bool bActive);
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode);
		struct FVector BP_OverrideCharacterSwimmingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy, float DeltaTime);
		bool AllowPostProcessEffect();
		void BuffTickServer(float DeltaTime);
		void BPDeactivated(class AActor* ForInstigator);
		void BPActivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_WaterCurrentFlowForce(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
