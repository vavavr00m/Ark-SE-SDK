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
	 * BlueprintGeneratedClass Buff_Glider_Sino.Buff_Glider_Sino_C
	 * Size -> 0x0157 (FullSize[0x0F1C] - InheritedSize[0x0DC5])
	 */
	class ABuff_Glider_Sino_C : public ABuff_Glider_C
	{
	public:
		E_SinoMovementState                                        SinoMovementState;                                       // 0x0DC5(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_KBRD[0x2];                                   // 0x0DC6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  MovementStateIcons;                                      // 0x0DC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      MovementStateNames;                                      // 0x0DD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bJumpPressed;                                            // 0x0DE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A9AL[0x3];                                   // 0x0DE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NonGlideAirControl;                                      // 0x0DEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ParachutingVelocity;                                     // 0x0DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlappingVelocity;                                        // 0x0DF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SubmergedFlappingSpeedMultiplier;                        // 0x0DF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonGlideVelocityInterpSpeed;                             // 0x0DFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SubmergedFlappingVelocityInterpSpeed;                    // 0x0E00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsToDoubleJump;                                      // 0x0E04(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4R06[0x3];                                   // 0x0E05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ClientLastJumpTime;                                      // 0x0E08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeReleaseCrouchProneForParachute;                      // 0x0E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4790[0x4];                                   // 0x0E14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ClientLastCrouchProneToggleTime;                         // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DoubleJumpFlappingVelocity;                              // 0x0E20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsDoubleJumping;                                        // 0x0E24(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2K5H[0x3];                                   // 0x0E25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DoubleJumpInterval;                                      // 0x0E28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DoubleJumpStaminaCost;                                   // 0x0E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        DoubleJumpMontage;                                       // 0x0E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastClientStatsUpdateTime;                               // 0x0E38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SinoMountIndex;                                          // 0x0E40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeAfterDamageToPrevParaFlap;                           // 0x0E44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastNoFlySPZCheckTime;                                   // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInNoFlySPZ;                                           // 0x0E50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TQJ0[0x7];                                   // 0x0E51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BiomeBuffToPreventFlappingString;                        // 0x0E58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastMountIndexChangeTime;                                // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastSinoMovementStopType;                                // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bToggleCrouchPressed;                                    // 0x0E78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FSVO[0x3];                                   // 0x0E79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinGlideSpeedRatioForTrailVis;                           // 0x0E7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonGlideVelocityClamp;                                   // 0x0E80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Set;                                  // 0x0E84(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x0E85(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F3VV[0x2];                                   // 0x0E86(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_ForInstigator;                              // 0x0E88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x0E90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_SinoMovementState                                        K2Node_CustomEvent_NewState;                             // 0x0E98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_08P1[0x7];                                   // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0EA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_DoubleDouble_ReturnValue;              // 0x0EA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue;                        // 0x0EA9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0EAA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IsDoubleJump;                         // 0x0EAB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0EAC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GetCanDoubleJump_CanDoubleJump;                 // 0x0EAD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x0EAE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUseSinoMovement_CanUse;                      // 0x0EAF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUseSinoMovement_CanUse2;                     // 0x0EB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsGliderActive_result;                          // 0x0EB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8G6K[0x6];                                   // 0x0EB2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x0EB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUseSinoMovement_CanUse3;                     // 0x0EC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue2;                       // 0x0EC1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F2B8[0x2];                                   // 0x0EC2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetSinoStaminaVals_Current;                     // 0x0EC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetSinoStaminaVals_Max;                         // 0x0EC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0ECC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AD19[0x3];                                   // 0x0ECD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Stam;                                 // 0x0ED0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Food;                                 // 0x0ED4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x0ED8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0EE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HSRR[0x3];                                   // 0x0EE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetSinoStaminaVals_Current2;                    // 0x0EE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetSinoStaminaVals_Max2;                        // 0x0EE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x0EEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0EED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0EEE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VYR2[0x1];                                   // 0x0EEF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x0EF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x0EF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUseSinoMovement_CanUse4;                     // 0x0F00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue3;                       // 0x0F01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D721[0x6];                                   // 0x0F02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue4;                       // 0x0F08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetSinoStaminaVals_Current3;                    // 0x0F10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetSinoStaminaVals_Max3;                        // 0x0F14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue4;                       // 0x0F18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x0F19(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsGliderActive_result2;                         // 0x0F1A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUseSinoMovement_CanUse5;                     // 0x0F1B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetSinoFoodVals(float* current, float* Max);
		void UpdateGliderSFX();
		void UpdateVelocityForVFX();
		void InitGlider();
		float BP_ModifyCharacterFOV(float inFOV);
		void DoInjuredJumpIfRequired();
		void CheckIsInNoFlySPZ(bool* IsInNonFlightArea);
		void ClearIsGlideFallingFromDamage();
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void AttachWingVFX();
		void PlayInsufficientStaminaMessage();
		void GetGliderInactiveMeshTargetRotVals(struct FRotator* Rot, float* InterpSpeed);
		void GetCanDoubleJump(bool* CanDoubleJump);
		void ClearIsDoubleJumping();
		void AttemptSetIsDoubleJumping(bool isDoubleJumping);
		void GetGliderMesh(bool* foundMesh, class USkeletalMeshComponent** meshRef);
		void ClearOwnerIgnoreWater();
		void GetIsCloseToWaterSurface(bool* IsClose, bool* IsSwimming);
		void BuffTickServer(float DeltaTime);
		void CanUseGlider(bool isToStart, bool* Result);
		void ExCanUseSinoMovementState(E_SinoMovementState MovementState, bool* CanEnter);
		void UpdateGliderByState_ServerAndClient();
		void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode);
		struct FVector BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime);
		bool HideBuffFromHUD();
		void NetSetCurrentSinoState(E_SinoMovementState NewState);
		void NetSetCurrentGliderState(E_GliderStates NewState);
		void CanUseSinoMovement(E_SinoMovementState MovementType, bool* CanUse);
		void BuffTickClient(float DeltaTime);
		void GetSinoStaminaVals(float* current, float* Max);
		void UpdateBuffDescription();
		void RefreshMountedSinoMovementState();
		void OnRep_SinoMovementState();
		void UserConstructionScript();
		void InpActEvt_Jump_K2Node_InputActionEvent_422();
		void InpActEvt_Jump_K2Node_InputActionEvent_421();
		void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90();
		void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89();
		void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420();
		void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419();
		void InpActEvt_Crouch_K2Node_InputActionEvent_418();
		void InpActEvt_Prone_K2Node_InputActionEvent_417();
		void Server_RequestChangeSinoMovementState(E_SinoMovementState NewState);
		void OnPlayerJump_Pressed();
		void OnPlayerJump_Released();
		void BPDeactivated(class AActor* ForInstigator);
		void Server_AttemptSetDoubleJump(bool IsDoubleJump);
		void Client_UpdateSinoStatVals(float Stam, float food);
		void OnPlayerToggleCrouch_Released();
		void OnPlayerToggleCrouch_Pressed();
		void Client_SetIsGlideFallingFromDam(bool Set);
		void ExecuteUbergraph_Buff_Glider_Sino(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
