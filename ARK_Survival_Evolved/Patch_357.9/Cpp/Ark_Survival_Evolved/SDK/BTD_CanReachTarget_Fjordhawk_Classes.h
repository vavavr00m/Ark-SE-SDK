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
	 * BlueprintGeneratedClass BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UBTD_CanReachTarget_Fjordhawk_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              NavKey;                                                  // 0x0090(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              RangeKey;                                                // 0x00B8(0x0028) Edit, BlueprintVisible

	public:
		void IsFacing(class AActor* Actor, const struct FVector& Point, float Angle, bool* Facing);
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
