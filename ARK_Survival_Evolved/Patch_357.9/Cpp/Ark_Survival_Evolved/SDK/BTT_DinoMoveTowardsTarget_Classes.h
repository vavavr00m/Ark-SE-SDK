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
	 * BlueprintGeneratedClass BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C
	 * Size -> 0x0005 (FullSize[0x007D] - InheritedSize[0x0078])
	 */
	class UBTT_DinoMoveTowardsTarget_C : public UBTTask_BlueprintBase
	{
	public:
		float                                                      DesiredDistance;                                         // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DrawDebugLines;                                          // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveAbort(class AActor* OwnerActor);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BTT_DinoMoveTowardsTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
