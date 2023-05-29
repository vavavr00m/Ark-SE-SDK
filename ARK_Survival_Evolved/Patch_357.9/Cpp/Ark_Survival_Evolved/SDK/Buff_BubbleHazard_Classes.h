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
	 * BlueprintGeneratedClass Buff_BubbleHazard.Buff_BubbleHazard_C
	 * Size -> 0x0055 (FullSize[0x09D5] - InheritedSize[0x0980])
	 */
	class ABuff_BubbleHazard_C : public ABuff_Base_C
	{
	public:
		class UParticleSystemComponent*                            BubbleBurst;                                             // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                BubbleMesh;                                              // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Mutliplyer;                                              // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, CPF_SkipSerialization
		struct FVector                                             CurrentLocation;                                         // 0x0994(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InitializedLocation;                                     // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WQ34[0x3];                                   // 0x09A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      currentScale;                                            // 0x09A4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastStruggleTime;                                        // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    StruggleTimes;                                           // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    RequiredStruggleTimeToGetOut;                            // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StartedToPop;                                            // 0x09B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FITB[0x3];                                   // 0x09B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationAfterStopUpwardMovement;                         // 0x09BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinimumDurationUnlessReachSurface;                       // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x09C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Scale;                                // 0x09D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x09D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPDeactivated(class AActor* ForInstigator);
		struct FVector BP_OverrideCharacterFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime);
		void PopBubble();
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void BPHandleOnStartFire(bool bFromGamepad);
		void BuffTickClient(float DeltaTime);
		void AttachBubble(const struct FVector& BubbleLocation);
		struct FVector BP_OverrideCharacterSwimmingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy, float DeltaTime);
		void BuffTickServer(float DeltaTime);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void InitLocation(const struct FVector& Location, float Scale);
		void ExecuteUbergraph_Buff_BubbleHazard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
