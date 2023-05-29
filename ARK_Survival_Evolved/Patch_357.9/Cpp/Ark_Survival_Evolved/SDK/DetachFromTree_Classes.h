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
	 * BlueprintGeneratedClass DetachFromTree.DetachFromTree_C
	 * Size -> 0x0051 (FullSize[0x00C9] - InheritedSize[0x0078])
	 */
	class UDetachFromTree_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              LastAttachedTreeIndexKey;                                // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PreviousAttachedTreeIndexKey;                            // 0x00A0(0x0028) Edit, BlueprintVisible
		bool                                                       ResetPreviousTreeIndexKey;                               // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_DetachFromTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
