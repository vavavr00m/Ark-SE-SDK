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
	 * AnimBlueprintGeneratedClass BrainSlug_Chibi_AnimBP.BrainSlug_Chibi_AnimBP_C
	 * Size -> 0x044F (FullSize[0x078F] - InheritedSize[0x0340])
	 */
	class UBrainSlug_Chibi_AnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_A7D8E71E473C626A165F98AFA9891CD3;     // 0x0340(0x0028)
		struct FAnimNode_ModifyBones                               AnimGraphNode_ModifyBones_46214CCA4D287B280AFDBFA87CD18F9B; // 0x0368(0x0040)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_A7A1B7ED43EEB69C3F234CBF1AAE3A97; // 0x03A8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E8020D6C43F8809310FF62BFE9886B86; // 0x03D0(0x0060)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_F4297BEF4157B13D1E531785A471BAC6; // 0x0430(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_184785714A5A228BA2CA648A3D630BF5; // 0x0458(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_59CBB407482A442402FF6DBD1D57A9E3; // 0x04B8(0x0060)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F1B8D9C145907C1E29D62FB7A0376490;     // 0x0518(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CC49E8354EADC2C77D57A59E862247DA; // 0x0550(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A4E91D7C4717FB37DD68E7938B6D4068; // 0x0580(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_128D57E94B2BE75F4786A5AE1C9D24D3; // 0x05B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0866A3F942072A1D9CDD909480C052E7; // 0x05E0(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8857F04B449408EA57D35C89027F4737; // 0x0610(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_83BF7CAC43065216EE7D3CB268D12436; // 0x0670(0x0030)
		bool                                                       bWalking;                                                // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRunning;                                                // 0x06A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RAGF[0x2];                                   // 0x06A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkingAnimSpeedScale;                                   // 0x06A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedScale;                                   // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeedPower;                                   // 0x06AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeedMax;                                     // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedPower;                                   // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedMax;                                     // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PrevPosition;                                            // 0x06BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFalling;                                              // 0x06C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FX9Z[0x3];                                   // 0x06C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkingSpeedThreshold;                                   // 0x06CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningSpeedThreshold;                                   // 0x06D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeed;                                        // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeed;                                        // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementSpeed;                                           // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeedMin;                                     // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedMin;                                     // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FinalWalkSpeedMultiplier;                                // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FinalRunSpeedMultiplier;                                 // 0x06EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AlternateIdleChance;                                     // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AlternateIdleMinTime;                                    // 0x06F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUsingAlternateIdle;                                     // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RG5S[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AlternateIdleStartTime;                                  // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x0708(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0710(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H4HA[0x4];                                   // 0x0714(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CallFunc_GetOwningComponent_ReturnValue;                 // 0x0718(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetComponentLocation_ReturnValue;            // 0x0720(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_96G4[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USKComponent_SkinAttachment_ChibiDino_C*             K2Node_DynamicCast_AsSKComponent_SkinAttachment_ChibiDino_C; // 0x0730(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0738(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0739(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x073A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x073B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x073C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x0748(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x074C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0750(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H024[0x3];                                   // 0x0751(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x0754(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x0758(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0LQE[0x3];                                   // 0x0759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue3;                 // 0x075C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;        // 0x0760(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_MultiplyMultiply_FloatFloat_ReturnValue2;       // 0x0764(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x0768(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x076C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0770(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x0774(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x0778(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Add_DoubleFloat_ReturnValue;                    // 0x0780(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0788(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_DoubleDouble_ReturnValue;             // 0x078C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x078D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x078E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BrainSlug_Chibi_AnimBP_AnimGraphNode_BlendListByBool_5770();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BrainSlug_Chibi_AnimBP_AnimGraphNode_BlendListByBool_5769();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BrainSlug_Chibi_AnimBP_AnimGraphNode_BlendListByBool_5768();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BrainSlug_Chibi_AnimBP_AnimGraphNode_SequencePlayer_7184();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BrainSlug_Chibi_AnimBP_AnimGraphNode_SequencePlayer_7183();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BrainSlug_Chibi_AnimBP_AnimGraphNode_BlendListByBool_5767();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BrainSlug_Chibi_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
