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
	 * BlueprintGeneratedClass Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UThylaco_CanPounceOnTargetFromTree_DK_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x0090(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
