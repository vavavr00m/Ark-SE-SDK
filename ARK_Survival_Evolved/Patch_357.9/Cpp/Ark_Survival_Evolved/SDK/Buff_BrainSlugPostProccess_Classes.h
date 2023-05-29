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
	 * BlueprintGeneratedClass Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C
	 * Size -> 0x01D3 (FullSize[0x0B53] - InheritedSize[0x0980])
	 */
	class ABuff_BrainSlugPostProccess_C : public ABuff_Base_C
	{
	public:
		TArray<class AActor*>                                      CurrentTargets;                                          // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    StencilValue;                                            // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseTargetOutlineOnly;                                    // 0x0994(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LWK1[0x3];                                   // 0x0995(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x0998(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x099C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTime2;                                 // 0x09A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x09A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x09A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AL36[0x7];                                   // 0x09A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_Array_Get_Item;                                 // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x09B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JG8U[0x3];                                   // 0x09C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x09C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABrainSlug_Character_BP_C*                           K2Node_DynamicCast_AsBrainSlug_Character_BP_C;           // 0x09D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x09D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K2VP[0x7];                                   // 0x09D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EObjectTypeQuery>                                   K2Node_MakeArray_Array;                                  // 0x09E0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x09F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XXAG[0x4];                                   // 0x09FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue;                 // 0x0A00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorUpVector_ReturnValue;                   // 0x0A08(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JNFZ[0x4];                                   // 0x0A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      K2Node_MakeArray_Array2;                                 // 0x0A18(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x0A28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QI6C[0x4];                                   // 0x0A34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_OutActors;              // 0x0A38(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_SphereOverlapActors_NEW_ReturnValue;            // 0x0A48(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGVP[0x3];                                   // 0x0A49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetComponentLocation_ReturnValue;            // 0x0A4C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x0A58(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x0A64(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_II96[0x3];                                   // 0x0A65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable2;                         // 0x0A68(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x0A6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable3;                         // 0x0A70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue3;                        // 0x0A74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_Select_ReturnValue;                               // 0x0A78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x0A80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2LSU[0x7];                                   // 0x0A81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             CallFunc_GetAllSceneComponents_OutComponents;            // 0x0A88(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsDead_ReturnValue;                             // 0x0A98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZLVG[0x3];                                   // 0x0A99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x0A9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0AA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x0AA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AIX0[0x6];                                   // 0x0AA2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     CallFunc_Array_Get_Item2;                                // 0x0AA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_DynamicCast_AsPrimitiveComponent;                 // 0x0AB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0AB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B1IT[0x7];                                   // 0x0AB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             CallFunc_GetAllSceneComponents_OutComponents2;           // 0x0AC0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue3;                      // 0x0AD0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IF9B[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     CallFunc_Array_Get_Item3;                                // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue3;                       // 0x0AE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3SHH[0x7];                                   // 0x0AE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 K2Node_DynamicCast_AsPrimitiveComponent2;                // 0x0AE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0AF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue;                   // 0x0AF1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x0AF2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsAllowedToFullyTame_Allowed;                   // 0x0AF3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsAllowedToControl_Allowed;                     // 0x0AF4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BE3N[0x3];                                   // 0x0AF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_IsAllowedToControl_TargetValidationString;      // 0x0AF8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_SelectInt_ReturnValue;                          // 0x0B08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4AKM[0x4];                                   // 0x0B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0B10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_SelectInt_ReturnValue2;                         // 0x0B18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPFastTrace_ReturnValue;                        // 0x0B1C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0B1D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsOwningClient_ReturnValue;                     // 0x0B1E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0B1F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTime;                                  // 0x0B20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5VP2[0x4];                                   // 0x0B24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0B28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x0B30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x0B38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRemoteControlling_ReturnValue;                // 0x0B39(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IULB[0x6];                                   // 0x0B3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue2;                // 0x0B40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APawn*                                               CallFunc_K2_GetPawn_ReturnValue;                         // 0x0B48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x0B50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue2;           // 0x0B51(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x0B52(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPInstigatorReceivedKillingDamage();
		bool InterceptInstigatorPlayerEmoteAnim(class UAnimMontage* EmoteAnim);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		bool BuffOverrideInventoryAccessInput(class AController* InController, bool bInputPressed);
		bool AllowPostProcessEffect();
		void UserConstructionScript();
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Buff_BrainSlugPostProccess(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
