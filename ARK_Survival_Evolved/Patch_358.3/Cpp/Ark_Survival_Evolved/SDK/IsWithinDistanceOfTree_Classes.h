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
	 * BlueprintGeneratedClass IsWithinDistanceOfTree.IsWithinDistanceOfTree_C
	 * Size -> 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
	 */
	class UIsWithinDistanceOfTree_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x0090(0x0028) Edit, BlueprintVisible
		float                                                      AcceptanceRadius;                                        // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QCR9[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              AcceptanceRadiusKey;                                     // 0x00C0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ObserverKey;                                             // 0x00E8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_IsWithinDistanceOfTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
