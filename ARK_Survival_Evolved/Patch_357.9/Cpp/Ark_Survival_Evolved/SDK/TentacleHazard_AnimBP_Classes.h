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
	 * AnimBlueprintGeneratedClass TentacleHazard_AnimBP.TentacleHazard_AnimBP_C
	 * Size -> 0x03E0 (FullSize[0x0720] - InheritedSize[0x0340])
	 */
	class UTentacleHazard_AnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_58213CA84EEE0750AF0371AE71E5BB96;     // 0x0340(0x0028)
		unsigned char                                              UnknownData_W7OP[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4E67CABA46706147555EEC8FEED760BD; // 0x0370(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_A6B51FDE479D63C20A6112A61E2DBC49; // 0x0420(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_141D3D92411683BD66180FBAD1196221; // 0x0448(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7D22E3B5467ED04F503EE78788C8B79E;     // 0x0470(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D932B4104A329D7218C3CDB959605D99;     // 0x04A8(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B60387F64331F249B41663A15D250318;     // 0x04E0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0FA29BBF4B2610FAA4B55A9F71C73B41; // 0x0518(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EA8FDA014802F86CB43374B201F4BC13; // 0x0548(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E2CEDBF54AB611B785296697159F2E4C; // 0x0578(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_EDF85E624782CDA9228A0D88622A093F; // 0x05D8(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EE3FD8E04242EFECDFF116BC0A410AC5; // 0x0638(0x0030)
		struct FRotator                                            RootRotationOffset;                                      // 0x0668(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseAimOffset;                                           // 0x0674(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsUnderground;                                          // 0x0675(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_93FC[0x2];                                   // 0x0676(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimRotateInterpSpeed;                                    // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O8SK[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       IdleSequence;                                            // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       RetractedIdleSequence;                                   // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsHalfRetracted;                                        // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DREH[0x3];                                   // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0694(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0698(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ATentacle_HazardBP_C*                                K2Node_DynamicCast_AsTentacle_HazardBP_C;                // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x06A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JKY6[0x3];                                   // 0x06A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x06AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x06B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x06B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2B7N[0x2];                                   // 0x06BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x06BC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x06C8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_Multiply_RotatorFloat_ReturnValue;              // 0x06D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_FindLookAtRotation_ReturnValue;                 // 0x06E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_ComposeRotators_ReturnValue;                    // 0x06EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x06F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x06FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x0700(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0704(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5IF9[0x3];                                   // 0x0705(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x0708(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_RInterpTo_ReturnValue;                          // 0x0714(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleHazard_AnimBP_AnimGraphNode_ModifyBone_622();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleHazard_AnimBP_AnimGraphNode_SequencePlayer_4040();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleHazard_AnimBP_AnimGraphNode_BlendListByBool_2918();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleHazard_AnimBP_AnimGraphNode_BlendListByBool_2917();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleHazard_AnimBP_AnimGraphNode_SequencePlayer_4038();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_TentacleHazard_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
