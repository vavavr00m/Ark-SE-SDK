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
	 * BlueprintGeneratedClass AttachToOverlappingTree.AttachToOverlappingTree_C
	 * Size -> 0x0120 (FullSize[0x0198] - InheritedSize[0x0078])
	 */
	class UAttachToOverlappingTree_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              LastWanderTimeKey;                                       // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LastAttachedTreeIndex;                                   // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetedTreeIndexKey;                                    // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PreviousAttachTreeIndex;                                 // 0x00F0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetPointKey;                                          // 0x0118(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AcceptanceRadiusKey;                                     // 0x0140(0x0028) Edit, BlueprintVisible
		float                                                      AcceptanceRadius;                                        // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S4OR[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              IsSmallTreeTargetKey;                                    // 0x0170(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_AttachToOverlappingTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
