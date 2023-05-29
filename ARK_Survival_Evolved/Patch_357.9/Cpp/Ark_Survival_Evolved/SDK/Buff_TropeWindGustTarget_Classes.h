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
	 * BlueprintGeneratedClass Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C
	 * Size -> 0x0024 (FullSize[0x09A4] - InheritedSize[0x0980])
	 */
	class ABuff_TropeWindGustTarget_C : public APrimalBuff
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InstigatorInitialVelocityFactor;                         // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxMassForLaunch;                                        // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NewVar;                                                  // 0x0994(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_799C[0x3];                                   // 0x0995(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrevActorLocation;                                       // 0x0998(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float GetBuffPostprocessIntensity();
		void ReceiveBeginPlay();
		bool AllowPostProcessEffect();
		void BPDeactivated(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BuffTickServer(float DeltaTime);
		void BPActivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_TropeWindGustTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
