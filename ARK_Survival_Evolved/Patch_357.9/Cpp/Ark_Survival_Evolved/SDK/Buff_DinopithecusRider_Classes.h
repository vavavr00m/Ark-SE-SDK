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
	 * BlueprintGeneratedClass Buff_DinopithecusRider.Buff_DinopithecusRider_C
	 * Size -> 0x0038 (FullSize[0x09B8] - InheritedSize[0x0980])
	 */
	class ABuff_DinopithecusRider_C : public APrimalBuff
	{
	public:
		float                                                      PounceRange;                                             // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceTraceRadius;                                       // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugMode;                                               // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSXX[0x7];                                   // 0x0989(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentTarget;                                           // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           PounceIconSize;                                          // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceIconSizeMult;                                      // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetMassThresholdForPounuce;                           // 0x09A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SequentialJumpPostProcessSpeedThreshold;                 // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PrevActorLocation;                                       // 0x09AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		float GetBuffPostprocessIntensity();
		bool AllowPostProcessEffect();
		void IsValidPounceTarget(class APrimalCharacter* Target, bool* Result);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void IsAnotherDinoAlreadyAttached(class AActor* Target, bool* Ret);
		void CanIgnoreTracedActor(class AActor* Actor, bool* CanBeIgnored);
		void BuffTickClient(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_DinopithecusRider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
