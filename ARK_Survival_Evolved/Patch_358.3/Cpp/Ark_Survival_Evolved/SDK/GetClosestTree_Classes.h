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
	 * BlueprintGeneratedClass GetClosestTree.GetClosestTree_C
	 * Size -> 0x00F8 (FullSize[0x0170] - InheritedSize[0x0078])
	 */
	class UGetClosestTree_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetPointKey;                                          // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetGroundPointKey;                                    // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetedTreeIndexKey;                                    // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PrevCompIndexKey;                                        // 0x00F0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              CurrCompIndexKey;                                        // 0x0118(0x0028) Edit, BlueprintVisible
		bool                                                       IsFleeing;                                               // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IRRO[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              IsSmallTreeTargetKey;                                    // 0x0148(0x0028) Edit, BlueprintVisible

	public:
		void GetClosestTree(class AActor* OwnerActor, bool AllowPrev, int32_t* ItemIndex, class UStaticMeshComponent** treeComp);
		void GetPointOnTreeSurface(class UPrimitiveComponent* treeComp, const struct FVector& origPoint, int32_t ItemIndex, class AActor* OwnerActor, struct FVector* ret);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_GetClosestTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
