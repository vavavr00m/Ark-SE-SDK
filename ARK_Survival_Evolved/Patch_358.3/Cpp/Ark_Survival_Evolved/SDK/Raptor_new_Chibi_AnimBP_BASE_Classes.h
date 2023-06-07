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
	 * AnimBlueprintGeneratedClass Raptor_new_Chibi_AnimBP_BASE.Raptor_new_Chibi_AnimBP_BASE_C
	 * Size -> 0x0388 (FullSize[0x06C8] - InheritedSize[0x0340])
	 */
	class URaptor_new_Chibi_AnimBP_BASE_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_BE73BD8A4C225E01DA487084E8C48315;     // 0x0340(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39C6D1DE4D89F810BF05D4B71FF51695; // 0x0368(0x0030)
		struct FAnimNode_ModifyBones                               AnimGraphNode_ModifyBones_F6483DEB42E57C7188DB7FBBE027920F; // 0x0398(0x0040)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_0BA92A014E30CB8984E918855AEE3BA0; // 0x03D8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_572225A34C30C0A3FC4B12925EC9A44F; // 0x0400(0x0060)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_40F4DDD646CFB9F372D92A9EEC9A91AA; // 0x0460(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E6727D8B4BC9F9E131DD37B8295B912B; // 0x0488(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1C69FC38409F4D90706AC7902ED19E88; // 0x04E8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E9670EC24A5B3377EE8801BBBD99BF7D; // 0x0518(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CA48A09845958BCC4B6BFDA25A4AF34E; // 0x0578(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_797E539B40BB629381735EB225065953; // 0x05A8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_81366D1041931A12F686FD8BEB1E5338;     // 0x05D8(0x0038)
		bool                                                       bWalking;                                                // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRunning;                                                // 0x0611(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_79T5[0x2];                                   // 0x0612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkingAnimSpeedScale;                                   // 0x0614(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedScale;                                   // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeedPower;                                   // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeedMax;                                     // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedPower;                                   // 0x0624(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedMax;                                     // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PrevPosition;                                            // 0x062C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFalling;                                              // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FS7W[0x3];                                   // 0x0639(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkingSpeedThreshold;                                   // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningSpeedThreshold;                                   // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeed;                                        // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeed;                                        // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementSpeed;                                           // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WalkingAnimSpeedMin;                                     // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RunningAnimSpeedMin;                                     // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FinalWalkSpeedMultiplier;                                // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FinalRunSpeedMultiplier;                                 // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0660(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3RP8[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CallFunc_GetOwningComponent_ReturnValue;                 // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetComponentLocation_ReturnValue;            // 0x0670(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T4CZ[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USKComponent_SkinAttachment_ChibiDino_C*             K2Node_DynamicCast_AsSKComponent_SkinAttachment_ChibiDino_C; // 0x0680(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0688(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0689(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x068A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x068B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x068C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x0698(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x069C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x06A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9SED[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x06A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x06A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z4D0[0x3];                                   // 0x06A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue3;                 // 0x06AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;        // 0x06B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_MultiplyMultiply_FloatFloat_ReturnValue2;       // 0x06B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x06B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x06BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x06C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x06C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_new_Chibi_AnimBP_BASE_AnimGraphNode_BlendListByBool_5762();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_new_Chibi_AnimBP_BASE_AnimGraphNode_BlendListByBool_5761();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_new_Chibi_AnimBP_BASE_AnimGraphNode_BlendListByBool_5760();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_new_Chibi_AnimBP_BASE_AnimGraphNode_SequencePlayer_7164();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_new_Chibi_AnimBP_BASE_AnimGraphNode_SequencePlayer_7163();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Raptor_new_Chibi_AnimBP_BASE(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
