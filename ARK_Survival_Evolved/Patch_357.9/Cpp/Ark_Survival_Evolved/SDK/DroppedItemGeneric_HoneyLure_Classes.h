﻿#pragma once

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
	 * BlueprintGeneratedClass DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C
	 * Size -> 0x013D (FullSize[0x0845] - InheritedSize[0x0708])
	 */
	class ADroppedItemGeneric_HoneyLure_C : public ADroppedItemGeneric_C
	{
	public:
		class UParticleSystemComponent*                            HoneyLure;                                               // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Dissolve_Alpha_E46D97A645320365BF8F4A98CDBB8ED5;         // 0x0710(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Dissolve__Direction_E46D97A645320365BF8F4A98CDBB8ED5;    // 0x0714(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUX1[0x3];                                   // 0x0715(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Dissolve;                                                // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BaitTimerMin;                                            // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaitTimerMax;                                            // 0x0724(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaitRadius;                                              // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxBaitedCharacters;                                     // 0x072C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldAttractCarnivoresInPVE;                            // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1L0F[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         NewMesh;                                                 // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             NewMeshScale;                                            // 0x0740(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0FJ[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PauseBrainBuffClass;                                     // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              BuffClassPreventsConsume;                                // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              PreventTargetingBuff;                                    // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x0768(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x0769(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x076A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x076B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable2;                      // 0x076C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable2;                            // 0x076D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2CNA[0x2];                                   // 0x076E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameState*                                          CallFunc_GetGameState_ReturnValue;                       // 0x0770(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterGameState*                                   K2Node_DynamicCast_AsShooterGameState;                   // 0x0778(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0780(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HTHJ[0x3];                                   // 0x0781(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Variable;                                       // 0x0784(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_IntInt_ReturnValue;                // 0x0788(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T8J1[0x3];                                   // 0x0789(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x078C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x0790(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable3;                      // 0x0791(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable3;                            // 0x0792(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UX9L[0x1];                                   // 0x0793(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x0794(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x0798(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x079C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JIQQ[0x3];                                   // 0x079D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x07A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x07A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WGZK[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_ServerOctreeOverlapActors_ReturnValue;          // 0x07B8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x07C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CL8I[0x4];                                   // 0x07CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_Array_Get_Item;                                 // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x07D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V6AM[0x7];                                   // 0x07D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x07E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x07E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x07E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_OverrideDinoDoAttackOnConsume_Override;         // 0x07EA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue;                           // 0x07EB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue2;                          // 0x07EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Can_Dino_Consume_Bait_OutputPin;                // 0x07ED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2BIG[0x2];                                   // 0x07EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x07F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_OverrideDinoPreventAttract_Prevent;             // 0x07F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8RKR[0x7];                                   // 0x07F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0800(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ADino_AIController_BP_C*                             K2Node_DynamicCast_AsDino_AIController_BP_C;             // 0x0808(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0810(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0811(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0812(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDinoInConsumeRange_ReturnValue;               // 0x0813(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0814(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasBuff_ReturnValue;                            // 0x0815(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x0816(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x0817(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x0818(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x0819(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZI61[0x2];                                   // 0x081A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x081C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0820(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x0821(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_55JM[0x6];                                   // 0x0822(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_Array_Get_Item2;                                // 0x0828(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            K2Node_DynamicCast_AsMaterialInstanceDynamic;            // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0838(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3TUG[0x3];                                   // 0x0839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetLifeSpan_ReturnValue;                        // 0x083C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x0840(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x0844(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void OverrideDinoPreventAttract(class APrimalDinoCharacter* Dino, bool* Prevent);
		void OverrideDinoDoAttackOnConsume(class APrimalDinoCharacter* Dino, bool* Override);
		bool IsDinoInConsumeRange(class AActor* Dino, class APrimalDinoAIController* DinoAI);
		void SetMovePointNearLure(class APrimalDinoCharacter* DinoToMove, class APrimalDinoAIController* DinoAI);
		void CanDinoConsumeBait(class APrimalDinoCharacter* InputPin, bool* OutputPin);
		void BPPostInitializeComponents();
		void UserConstructionScript();
		void Dissolve__FinishedFunc();
		void Dissolve__UpdateFunc();
		void ReceiveBeginPlay();
		void UpdateBait();
		void DestroyBait();
		void AttractCreatures();
		void ExecuteUbergraph_DroppedItemGeneric_HoneyLure(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
