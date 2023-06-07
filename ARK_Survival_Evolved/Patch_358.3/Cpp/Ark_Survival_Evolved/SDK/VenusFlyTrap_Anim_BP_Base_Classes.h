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
	 * AnimBlueprintGeneratedClass VenusFlyTrap_Anim_BP_Base.VenusFlyTrap_Anim_BP_Base_C
	 * Size -> 0x08C0 (FullSize[0x0C00] - InheritedSize[0x0340])
	 */
	class UVenusFlyTrap_Anim_BP_Base_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_76B372BA4EDBF745E730BEBCE8230AA7;     // 0x0340(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_528CF7484248C1A39B3919B27F0326BA; // 0x0368(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AE2485424D9B57B70E08E9AEBBF92EF6; // 0x03C8(0x0030)
		unsigned char                                              UnknownData_U9LM[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_CD317B594F89BDCE872165A94377C0EF; // 0x0400(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2FFEBEBA4BE936843B49CEA4C9C5D671;     // 0x04B0(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6B000550417B5C783831A592665A9632;     // 0x04E8(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6A514E8F48B51BCA6620BBB5D90E7F3F;     // 0x0520(0x0038)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_82843FF84302D3D71B2930AB790248F2; // 0x0558(0x0040)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_643FAFC344D077E316D084B68F05D228; // 0x0598(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_A5FCC8B8494CC74A35EDD18CC8783B44; // 0x05F8(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B0286B7949125D35CC1112946A9EC68C; // 0x0658(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22C8BACC478615C19AAD699D702C5A2B; // 0x0688(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_1417885B4FD6A61671E1E690E451057F; // 0x06B8(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EFCD1FCE4D172D10567A83897A691DE3; // 0x0718(0x0030)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_FEBBC4884D50BBFD558A84967289BBD4; // 0x0748(0x0040)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_F385CBDD4F2989E763E0BF9A8F3900CC; // 0x0788(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6158E02C47A298EAFEFF9A872C6AEE31; // 0x07B0(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9BA4CB1749AAB13F6EDFAF9430EB0894; // 0x07D8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B86DAB13427BFF4A34E632BE3F094CA1; // 0x0800(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_598F6E524926CE602AA3BBA9ECA0DF46; // 0x0860(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_979D833F49691E56B83680B06E367B15; // 0x08C0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_35DF868F433224275443E3971A45D950; // 0x08E8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_95F8DD664C6CA188185FF38145084CE7; // 0x0910(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A8FCEA7C481A7EAB5A82E4ACED535B68; // 0x0970(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FB3E8BE7468BA841712ACD817EE987AD; // 0x09A0(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_52ED4AF74FA1FA91714735A8983C7686; // 0x09D0(0x00F8)
		bool                                                       bIsSleeping;                                             // 0x0AC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsDead;                                                 // 0x0AC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseAimOffset;                                           // 0x0ACA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTurning;                                              // 0x0ACB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMoving;                                               // 0x0ACC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTurningRight;                                           // 0x0ACD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TSX9[0x2];                                   // 0x0ACE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RootRotationOffset;                                      // 0x0AD0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimPitch;                                                // 0x0ADC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimYaw;                                                  // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasGrabbedCharacter;                                    // 0x0AE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D58J[0x3];                                   // 0x0AE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurningDirectionBlendTime;                               // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementAnimRate;                                        // 0x0AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningEnabledBlendTime;                                 // 0x0AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningDisabledBlendTime;                                // 0x0AF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendInTime;                                       // 0x0AF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendOutTime;                                      // 0x0AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   Idle;                                                    // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   GrabIdle;                                                // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   SleepAnim;                                               // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AnimIndex;                                               // 0x0B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CUJU[0x4];                                   // 0x0B1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequenceBase*>                           SleepAnims;                                              // 0x0B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimSequenceBase*>                           GrabAnims;                                               // 0x0B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimSequenceBase*>                           IdleAnims;                                               // 0x0B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      AimOffsetInterpSpeed;                                    // 0x0B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0B54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0B58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AVenusFlyTrap_BP_C*                                  K2Node_DynamicCast_AsVenusFlyTrap_BP_C;                  // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0B69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7717[0x2];                                   // 0x0B6A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAimOffsets_YawSpeed;                         // 0x0B6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsets_Rot;                              // 0x0B70(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x0B7C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x0B80(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x0B84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0B88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0B8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x0B90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x0B94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x0B98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x0B9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch2;                                // 0x0BA0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw2;                                  // 0x0BA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll2;                                 // 0x0BA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0BAC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RPVM[0x3];                                   // 0x0BAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_NormalizedDeltaRotator_ReturnValue;             // 0x0BB0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch3;                                // 0x0BBC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw3;                                  // 0x0BC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll3;                                 // 0x0BC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch4;                                // 0x0BC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw4;                                  // 0x0BCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll4;                                 // 0x0BD0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_FloatFloat_ReturnValue;             // 0x0BD4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_FloatFloat_ReturnValue;            // 0x0BD5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x0BD6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KN0V[0x1];                                   // 0x0BD7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CallFunc_Array_Get_Item;                                 // 0x0BD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   CallFunc_Array_Get_Item2;                                // 0x0BE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   CallFunc_Array_Get_Item3;                                // 0x0BE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_Constant_ReturnValue;                 // 0x0BF0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_Constant_ReturnValue2;                // 0x0BF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_Constant_ReturnValue3;                // 0x0BF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_Constant_ReturnValue4;                // 0x0BFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_BlendListByBool_2832();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_SequencePlayer_3834();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_ModifyBone_598();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_BlendListByBool_2831();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_BlendListByBool_2830();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_SequencePlayer_3833();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_SequencePlayer_3832();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_BlendListByBool_2829();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_SequencePlayer_3831();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_BlendListByBool_2828();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_BlendListByBool_2827();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_BlendListByBool_2826();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_SequencePlayer_3830();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_SequencePlayer_3829();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_AnimGraphNode_RotationOffsetBlendSpace_176();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
