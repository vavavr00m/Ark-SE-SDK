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
	 * BlueprintGeneratedClass ShouldSwitchBiped.ShouldSwitchBiped_C
	 * Size -> 0x0054 (FullSize[0x00D4] - InheritedSize[0x0080])
	 */
	class UShouldSwitchBiped_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              Target;                                                  // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LastKnownLocation;                                       // 0x00A8(0x0028) Edit, BlueprintVisible
		float                                                      DistanceBeforeBiped;                                     // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveActivation(class AActor* OwnerActor);
		void ExecuteUbergraph_ShouldSwitchBiped(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
