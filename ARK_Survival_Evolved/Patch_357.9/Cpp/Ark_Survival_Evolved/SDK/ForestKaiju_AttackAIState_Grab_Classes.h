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
	 * BlueprintGeneratedClass ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C
	 * Size -> 0x0059 (FullSize[0x00F9] - InheritedSize[0x00A0])
	 */
	class UForestKaiju_AttackAIState_Grab_C : public UPrimalAIStateBPBase
	{
	public:
		float                                                      VineGrabWedgeWidthDegrees;                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Debug;                                                   // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllTargetsPulledToHand;                                  // 0x00A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_347T[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VineRetractSpeed;                                        // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      VineGrabRadius;                                          // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalCharacter*>                            SmashTargets;                                            // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    NumSpawnedVines;                                         // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumRetractedVines;                                       // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      VineGrabMinDistFromSocket;                               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NoTargetVineDistance;                                    // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             GrabAttackLocation;                                      // 0x00D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnedVines;                                            // 0x00DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YBCF[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VineAOERadius;                                           // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpawnableVinesMax;                                       // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SmashDamageMultOnRootedBuff;                             // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X1SK[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AForestKaiju_Character_BP_C*                         K2Node_DynamicCast_AsForestKaiju_Character_BP_C;         // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x00F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UpdateGrabAttackLocation();
		void IsLocationinGrabAttackWedge(const struct FVector& Location, bool* Result);
		void DebugPrintString(const class FString& String);
		void StartAttackAnim();
		void PublicIsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* Valid);
		void IsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* ValidTarget);
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void VineRetracted(TArray<struct FVineTargetData>* Targets);
		void OnEndEvent();
		void DebugDrawSphere(const struct FVector& Center, float Radius, const struct FLinearColor& Color);
		void AnimNotifyGrabAttackSmash();
		void DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color);
		void SpawnVines();
		bool BPShouldEndAttack();
		void OnTickEvent(float DeltaSeconds);
		void FailsafeMissingVineRetracts();
		void ExecuteUbergraph_ForestKaiju_AttackAIState_Grab(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
