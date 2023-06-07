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
	 * BlueprintGeneratedClass Structure_TrainingDummy.Structure_TrainingDummy_C
	 * Size -> 0x0045 (FullSize[0x0F56] - InheritedSize[0x0F11])
	 */
	class AStructure_TrainingDummy_C : public AStructure_TaxidermyBase_C
	{
	public:
		unsigned char                                              UnknownData_GFPI[0x3];                                   // 0x0F11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CachedDamage;                                            // 0x0F14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                TwoLineFormatText;                                       // 0x0F18(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_A0H2[0x10];                                  // 0x0F30(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<float>                                              DPSEvaluationTimeOptions;                                // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    DPSEvaluationTimeIndex;                                  // 0x0F50(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowPublicDamEval;                                     // 0x0F54(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDamEvalReqsShooterController;                           // 0x0F55(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TimedReportDPS();
		void BPPlacedStructure(class APlayerController* ForPC);
		void RemoveSnapshot();
		void ApplySnapshot(class UPrimalItem* Snapshot);
		bool BPGetMultiUseCenterText(class APlayerController* ForPC, int32_t UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void ReportDPS(float ReportTime);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void UserConstructionScript();
		void ExecuteUbergraph_Structure_TrainingDummy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
