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
	 * BlueprintGeneratedClass Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C
	 * Size -> 0x00C8 (FullSize[0x0148] - InheritedSize[0x0080])
	 */
	class UService_Fjordhawk_UpdateLootTarget_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              OnFlyKey;                                                // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              OnLandKey;                                               // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetPointKey;                                          // 0x00D0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NavActorKey;                                             // 0x00F8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              RangeKey;                                                // 0x0120(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
