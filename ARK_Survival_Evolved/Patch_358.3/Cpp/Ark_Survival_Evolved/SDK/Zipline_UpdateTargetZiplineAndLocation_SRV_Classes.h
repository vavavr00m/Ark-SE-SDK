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
	 * BlueprintGeneratedClass Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C
	 * Size -> 0x00D8 (FullSize[0x0158] - InheritedSize[0x0080])
	 */
	class UZipline_UpdateTargetZiplineAndLocation_SRV_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetLastZiplineLocationKey;                            // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetLastZiplineUsedKey;                                // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              CurrentZipline;                                          // 0x00D0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetCurrentZipline;                                    // 0x00F8(0x0028) Edit, BlueprintVisible
		class APrimalBuff*                                         TargetBuff;                                              // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              OrderedMoveToLocationKey;                                // 0x0128(0x0028) Edit, BlueprintVisible
		class UActorComponent*                                     ZiplineComponent;                                        // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveActivation(class AActor* OwnerActor);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
