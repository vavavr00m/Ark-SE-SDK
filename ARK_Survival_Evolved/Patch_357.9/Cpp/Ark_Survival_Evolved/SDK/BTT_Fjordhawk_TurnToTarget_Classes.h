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
	 * BlueprintGeneratedClass BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C
	 * Size -> 0x0039 (FullSize[0x00B1] - InheritedSize[0x0078])
	 */
	class UBTT_Fjordhawk_TurnToTarget_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x0078(0x0028) Edit, BlueprintVisible
		class UAnimMontage*                                        turnAnim;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SuccessAngle;                                            // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InterpSpeed;                                             // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ForceMoveAtCompletion;                                   // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
