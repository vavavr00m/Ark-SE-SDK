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
	 * BlueprintGeneratedClass BTT_MoveAroundTarget.BTT_MoveAroundTarget_C
	 * Size -> 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
	 */
	class UBTT_MoveAroundTarget_C : public UBTTask_BlueprintBase
	{
	public:
		TArray<struct FVector>                                     NavLocs;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumPointsAround;                                         // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentMoveIndex;                                        // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              CompletedMoves;                                          // 0x0090(0x0028) Edit, BlueprintVisible

	public:
		void GetPointsAroundTarget(float Direction, const struct FVector& StartLoc, const struct FVector& EndLoc);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BTT_MoveAroundTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
