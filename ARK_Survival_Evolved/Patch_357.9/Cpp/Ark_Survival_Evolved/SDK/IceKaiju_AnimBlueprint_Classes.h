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
	 * AnimBlueprintGeneratedClass IceKaiju_AnimBlueprint.IceKaiju_AnimBlueprint_C
	 * Size -> 0x0520 (FullSize[0x0860] - InheritedSize[0x0340])
	 */
	class UIceKaiju_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_E28C71E9458A010CBD83A3BD694EC4E5;     // 0x0340(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CD023BF04954FCB5049A9D998AFA5935; // 0x0368(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_21B065EB4711485B9DC3E28026F32085;     // 0x0398(0x0038)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_BC0ECA904F2E07F791E41CBE1D48836F; // 0x03D0(0x0028)
		unsigned char                                              UnknownData_E9L3[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9BDB61C94E8AEBCFD8C0BE93E093BE66; // 0x0400(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9949B489497637F1433921BB26352735; // 0x04B0(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_1D1171644FF67D6046E8B4A21267687F; // 0x04D8(0x00F8)
		struct FAnimNode_MultiFabrik_Dinos                         AnimGraphNode_MultiFabrik_Dinos_361C6AF940BB5A9A7DA8809BCA60AC1D; // 0x05D0(0x0058)
		struct FAnimNode_GroundBones                               AnimGraphNode_GroundBones_277CD8F44F298D98A5E164884F015A2A; // 0x0628(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B69551524B10D913E3BCB18A7FBE4541; // 0x06E0(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_0DF289CF4E33CA9E680AA9AF2F51F022;     // 0x0710(0x0038)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_54BF7C364A1B845A41768EB8BDF9E096; // 0x0748(0x0060)
		struct FRotator                                            RootRotationOffset;                                      // 0x07A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RootLocationOffset;                                      // 0x07B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimPitch;                                                // 0x07C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimYaw;                                                  // 0x07C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IKStrength;                                              // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IKStrengthTarget;                                        // 0x07CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTorpid;                                                // 0x07D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YDBC[0x3];                                   // 0x07D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x07D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x07D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F29N[0x4];                                   // 0x07DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x07E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ADino_Character_BP_RootMotion_C*                     K2Node_DynamicCast_AsDino_Character_BP_RootMotion_C;     // 0x07E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x07F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SN5I[0x3];                                   // 0x07F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Montage_Play_ReturnValue;                       // 0x07F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsets_RootRotOffset;                    // 0x07F8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAimOffsets_TheRootYawSpeed;                  // 0x0804(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetAimOffsets_RootLocOffset;                    // 0x0808(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsets_ReturnValue;                      // 0x0814(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x0820(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x0824(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x0828(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x082C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0830(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x0834(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x0838(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x083C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x0840(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x0844(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x0848(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x084C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue2;              // 0x0850(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Strength;                             // 0x0854(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x0858(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Lerp_ReturnValue;                               // 0x085C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_IceKaiju_AnimBlueprint_AnimGraphNode_ModifyBone_524();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_IceKaiju_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_152();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_IceKaiju_AnimBlueprint_AnimGraphNode_MultiFabrik_Dinos_78();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_IceKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2360();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void SetIKStrengthTarget(float Strength);
		void ExecuteUbergraph_IceKaiju_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
