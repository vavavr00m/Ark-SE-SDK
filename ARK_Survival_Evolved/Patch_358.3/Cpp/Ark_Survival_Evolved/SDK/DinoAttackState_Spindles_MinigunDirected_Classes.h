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
	 * BlueprintGeneratedClass DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C
	 * Size -> 0x003B (FullSize[0x0260] - InheritedSize[0x0225])
	 */
	class UDinoAttackState_Spindles_MinigunDirected_C : public UDinoAttackState_Spindles_MinigunBase_C
	{
	public:
		unsigned char                                              UnknownData_YESV[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastStart;                                               // 0x0228(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastEnd;                                                 // 0x0234(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDurationOfDirectedMinigun;                            // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SCSG[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpindles_Character_BP_C*                            K2Node_DynamicCast_AsSpindles_Character_BP_C;            // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0250(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8FJS[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		class FString BPGetDebugInfoString();
		void GetRandomVectorOnCircle(float MinRadius, float MaxRadius, struct FVector* RandomVector);
		bool BPShouldEndAttack();
		void OnEndEvent();
		void OnBeginEvent(class UPrimalAIState* InParentState);
		bool OnCanUseStateEvent();
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void GetAttackIndex(int32_t* AttackIndex);
		void GetSpineStartandEndPosition(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd);
		void UpdateAimedActors();
		void ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
