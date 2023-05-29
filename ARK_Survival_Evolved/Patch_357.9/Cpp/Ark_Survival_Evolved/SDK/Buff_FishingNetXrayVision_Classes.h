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
	 * BlueprintGeneratedClass Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C
	 * Size -> 0x0198 (FullSize[0x0B50] - InheritedSize[0x09B8])
	 */
	class ABuff_FishingNetXrayVision_C : public ABuff_XRay_Base_C
	{
	public:
		class UMaterialInstanceDynamic*                            OverlayMaterial;                                         // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CaughtAnimals;                                           // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AActor*                                              netref;                                                  // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         FishCountHUDElement;                                     // 0x09D8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       iscasted;                                                // 0x0B28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FTUH[0x7];                                   // 0x0B29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      allowedcatchablefish;                                    // 0x0B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      catchablefishthatwillbreakthenet;                        // 0x0B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void clearcaughtanimals();
		void SetAllComponentsRenderCustomDepth(class AActor* Actor, bool rendercustomdepth);
		void setallcomponentscustomdepthstencilvalue(int32_t StencilValue, class AActor* Actor);
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		void ReceiveBeginPlay();
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_FishingNetXrayVision(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
