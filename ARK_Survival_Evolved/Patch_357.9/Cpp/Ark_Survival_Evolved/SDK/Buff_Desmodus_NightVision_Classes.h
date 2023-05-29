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
	 * BlueprintGeneratedClass Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C
	 * Size -> 0x0020 (FullSize[0x09D8] - InheritedSize[0x09B8])
	 */
	class ABuff_Desmodus_NightVision_C : public ABuff_XRay_Base_C
	{
	public:
		class UMaterialInstanceDynamic*                            OverlayMaterial;                                         // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TestFloat;                                               // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PLNX[0x4];                                   // 0x09C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x09C8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void BuffTickServer(float DeltaTime);
		bool BuffOverrideInventoryAccessInput(class AController* InController, bool bInputPressed);
		void BPDeactivated(class AActor* ForInstigator);
		void ReceiveBeginPlay();
		void BuffTickClient(float DeltaTime);
		void ToggleNightVision();
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void SetPPColor(const struct FLinearColor& NewParam);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Desmodus_NightVision(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
