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
	 * AnimBlueprintGeneratedClass Raft_Anim_BP.Raft_Anim_BP_C
	 * Size -> 0x033D (FullSize[0x067D] - InheritedSize[0x0340])
	 */
	class URaft_Anim_BP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_94D59C31486544DF9AF6AC88FAEF1069;     // 0x0340(0x0028)
		unsigned char                                              UnknownData_7GUB[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4F6273104DCEF72B417862B7BDDEA4F6; // 0x0370(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_F8DCBE1742B405E0C08DDFB5F6C96F5B; // 0x0420(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_1435E03149126C9CE47533B36F33FB20; // 0x0448(0x0060)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_C35AA1924F2CB0CC0F975A8A0DE8E1F3; // 0x04A8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DC07419F4C539659D855FB8EF4541AB4; // 0x04D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_05E6197E4FAA219011C3ECA4D8C9133D; // 0x0500(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9203A5A243325868085EA193E34056DB;     // 0x0530(0x0038)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6BFAD98D4FF286A7E4CC348D109BB11A; // 0x0568(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_60044BF94A291C15627E0495D030126C; // 0x05B8(0x0030)
		struct FVector                                             RootLocationOffset;                                      // 0x05E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            RootRotationOffset;                                      // 0x05F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMoving;                                               // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VHQT[0x3];                                   // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetRealTimeSeconds_ReturnValue;                 // 0x0604(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0608(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Sin_ReturnValue;                                // 0x060C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x0610(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x0614(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0620(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KMJ8[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0638(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P3HN[0x3];                                   // 0x0639(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetAimOffsets_RootRotOffset;                    // 0x063C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAimOffsets_TheRootYawSpeed;                  // 0x0648(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetAimOffsets_RootLocOffset;                    // 0x064C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsets_ReturnValue;                      // 0x0658(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x0664(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_Conv_VectorToVector2D_ReturnValue;              // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x0678(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x067C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_ModifyBone_638();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_BlendListByBool_2930();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Raft_Anim_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
