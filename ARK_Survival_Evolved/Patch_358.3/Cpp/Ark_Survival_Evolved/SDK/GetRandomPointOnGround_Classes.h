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
	 * BlueprintGeneratedClass GetRandomPointOnGround.GetRandomPointOnGround_C
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UGetRandomPointOnGround_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetPointKey;                                          // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LastForcedLandKey;                                       // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_GetRandomPointOnGround(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
