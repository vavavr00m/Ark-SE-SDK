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
	 * BlueprintGeneratedClass Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C
	 * Size -> 0x0230 (FullSize[0x2C40] - InheritedSize[0x2A10])
	 */
	class AXenomorph_Character_BP_Male_Tamed_C : public AXenomorph_Character_BP_Male_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Xenomorph_Queen_C*  DinoCharacterStatus_BP_Xenomorph_Queen_C1;               // 0x2A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       JumpInstant;                                             // 0x2A18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3DZF[0x3];                                   // 0x2A19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpHoldTimeAllowance;                                   // 0x2A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeToAllowArrestMovement;                               // 0x2A20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      XenoJumpAimLimit;                                        // 0x2A24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsJumping;                                              // 0x2A28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RBD6[0x7];                                   // 0x2A29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        JumpPrepAnim;                                            // 0x2A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        JumpStartAnim;                                           // 0x2A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsingLaunchOffset;                                       // 0x2A40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NPP8[0x3];                                   // 0x2A41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             JumpRotationTargetDir;                                   // 0x2A44(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       JumpTraceHit;                                            // 0x2A50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B1JJ[0x3];                                   // 0x2A51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             JumpTraceLoc;                                            // 0x2A54(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     JumpLaunchTime;                                          // 0x2A60(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpForceMult;                                           // 0x2A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TraceLength;                                             // 0x2A6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LaunchedCharactersApexTravelTime;                        // 0x2A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpUpStrengthMin;                                       // 0x2A74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpUpStrengthMax;                                       // 0x2A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpHorizontalDistanceMin;                               // 0x2A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpVerticalDistanceMin;                                 // 0x2A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpLaunchStaminaCost;                                   // 0x2A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpFwdStrengthMax;                                      // 0x2A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowArrestMovement;                                    // 0x2A8C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_isHoldingJump;                        // 0x2A8D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_IsTimerActive_ReturnValue;                   // 0x2A8E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_NewPreventMovement;                   // 0x2A8F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_AimLoc2;                              // 0x2A90(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_AimHit2;                              // 0x2A9C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_JumpInstant;                          // 0x2A9D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_ForceImmediateClear;                  // 0x2A9E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x2A9F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x2AA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GMM4[0x3];                                   // 0x2AA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_AimLoc;                               // 0x2AA4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_AimHit;                               // 0x2AB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMontagePlaying_ReturnValue;                   // 0x2AB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2AB2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YE3H[0x1];                                   // 0x2AB3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2AB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x2AB8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x2AC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x2AC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x2ACC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x2AD0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Z50[0x4];                                   // 0x2ADC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_FloatToString_ReturnValue;                 // 0x2AE0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Temp_bool_Has_Been_Initd_Variable2;                      // 0x2AF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D9JG[0x7];                                   // 0x2AF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x2AF8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x2B08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_ShouldStopJumpRotation_Return_Value;            // 0x2B0C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7BHJ[0x3];                                   // 0x2B0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue2;                            // 0x2B10(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2B1C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4BUG[0x3];                                   // 0x2B1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x2B20(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x2B2C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRotFromX_ReturnValue;                       // 0x2B38(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WYVZ[0x4];                                   // 0x2B44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_VectorToString_ReturnValue;                // 0x2B48(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_BreakRot_Pitch2;                                // 0x2B58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw2;                                  // 0x2B5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll2;                                 // 0x2B60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RVNU[0x4];                                   // 0x2B64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_FloatToString_ReturnValue2;                // 0x2B68(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_ShortestAngleDistance_Difference;               // 0x2B78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_326R[0x4];                                   // 0x2B7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Concat_StrStr_ReturnValue2;                     // 0x2B80(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_FInterpTo_Constant_ReturnValue;                 // 0x2B90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1ISO[0x4];                                   // 0x2B94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Concat_StrStr_ReturnValue3;                     // 0x2B98(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x2BA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable3;                      // 0x2BAC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JYL3[0x3];                                   // 0x2BAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x2BB0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorRotation_ReturnValue;                   // 0x2BBC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable2;                            // 0x2BBD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2BBE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_11AZ[0x1];                                   // 0x2BBF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x2BC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_ModifyCurrentStatusValue_ReturnValue;           // 0x2BC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2BC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6MNT[0x7];                                   // 0x2BC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x2BD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_TimeSince_ReturnValue;                          // 0x2BD8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_FloatFloat_ReturnValue;            // 0x2BDC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x2BDD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue3;                          // 0x2BDE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4LLK[0x1];                                   // 0x2BDF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X;                                  // 0x2BE0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x2BE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x2BE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2BEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x2BED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x2BEE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X47W[0x1];                                   // 0x2BEF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue2;              // 0x2BF0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x2BFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x2C00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x2C04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x2C08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x2C0C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SG4B[0x3];                                   // 0x2C0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Abs_ReturnValue;                                // 0x2C10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x2C14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable3;                            // 0x2C18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P24F[0x3];                                   // 0x2C19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x2C1C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x2C28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x2C29(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x2C2A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PGO2[0x5];                                   // 0x2C2B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x2C30(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void BPTimerNonDedicated();
		void BPCharacterSleeped();
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void ServerStopJump();
		void BPDoAttack(int32_t AttackIndex);
		struct FVector GetLaunchDirection(class AActor* CalcActor);
		void LaunchAtTracePoint();
		void ProcessLaunch();
		void ProcessJump();
		void JumpTrace();
		void ShouldStopJumpRotation(bool* ReturnValue);
		void ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference);
		struct FVector GetClampedLookDir(bool LimitLowerPitch);
		void UserConstructionScript();
		void BP_OnJumpPressed();
		void BP_OnJumpReleased();
		void DelayedPress();
		void RequestJumpResponse(bool isHoldingJump);
		void Multi_SetPreventMovement(bool NewPreventMovement);
		void DelayedClearJumping();
		void Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant);
		void StartJumpIdle();
		void ClearJump(bool ForceImmediateClear);
		void Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit);
		void UpdateAllJumpRotation();
		void UpdateJumpRotation();
		void AnimNotify_JumpStart();
		void ServerArrestMovement();
		void ResetArrestMovement();
		void ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
