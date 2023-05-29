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
	 * BlueprintGeneratedClass Buff_GrabbedByBeam.Buff_GrabbedByBeam_C
	 * Size -> 0x0065 (FullSize[0x09E5] - InheritedSize[0x0980])
	 */
	class ABuff_GrabbedByBeam_C : public ABuff_Base_C
	{
	public:
		float                                                      maxDistanceToApplyImpulse;                               // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxImpulseToInstigator;                                  // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minImpulseToInstigator;                                  // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minDistanceToApplyImpulse;                               // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxAdditionalMultiplier;                                 // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minAdditionalMultiplier;                                 // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxWeightForCalculationns;                               // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minWeightForCalculations;                                // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      logDeviation;                                            // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minProgressDeltaBasedOnDistance;                         // 0x09A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxProgressDeltaBasedOnDistance;                         // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxProgress;                                             // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequiredLookDirDotToCapture;                             // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxProgressMultiplierForMinWeight;                       // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInitialized;                                          // 0x09B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UZXI[0x3];                                   // 0x09B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentBeamProgress;                                     // 0x09BC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      additionalMultiplier;                                    // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxProgressMultiplierForMaxWeight;                       // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxAngleForCalculations;                                 // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ParentSkiff_CurrentBeamStartLoc;                         // 0x09CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ParentSkiff_CurrentBeamEndLoc;                           // 0x09D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_HoverSkiffBeamState                                      ParentSkiff_CurrentBeamState;                            // 0x09E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveSkiffVars(const struct FVector& BeamStartLoc, const struct FVector& BeamEndLoc, E_HoverSkiffBeamState BeamState);
		void GetBeamCapturePercent(float* Percent);
		float GetOwnerDragWeight();
		void GetMaxProgress(float* MaxProgress);
		void CalculateProgress(float timeDelta, float* NewProgress);
		void CalculateBeamProgressDelta(float timeDelta, float* ProgressDelta, bool* bInvalidProgress);
		void InitializeBuff(float MaxBeamLength);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_GrabbedByBeam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
