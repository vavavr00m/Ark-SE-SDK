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
	 * BlueprintGeneratedClass WeapFists_Oar.WeapFists_Oar_C
	 * Size -> 0x019C (FullSize[0x0F24] - InheritedSize[0x0D88])
	 */
	class AWeapFists_Oar_C : public AWeapFists_C
	{
	public:
		class UStaticMeshComponent*                                PaddleMesh3P;                                            // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MoveRightAxisInput;                                      // 0x0D90(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MoveForwardAxisInput;                                    // 0x0D94(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleLeftAnim;                                          // 0x0D98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleRightAnim;                                         // 0x0DA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleForwardAnim;                                       // 0x0DB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleBackwardAnim;                                      // 0x0DC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                PaddleSocketLeft;                                        // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                PaddleSocketRight;                                       // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       StandingAnimOverride;                                    // 0x0DE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleForwardLeftAnim;                                   // 0x0DF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleForwardRightAnim;                                  // 0x0E00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleBackwardLeftAnim;                                  // 0x0E10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleBackwardRightAnim;                                 // 0x0E20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleAnimPlaying;                                       // 0x0E30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECardinal_Directions_Enum                                  LastPaddleDirection;                                     // 0x0E40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDidInitialPaddleAnimation;                              // 0x0E41(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTestInputs;                                             // 0x0E42(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPaddlingRight;                                        // 0x0E43(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BAA2[0x4];                                   // 0x0E44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponAnim                                         PaddleIdleLeft;                                          // 0x0E48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         PaddleIdleRight;                                         // 0x0E58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     PaddleSplashFX;                                          // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                PaddleSplashFXSocket;                                    // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsIdle;                                                 // 0x0E78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInFirstPerson;                                        // 0x0E79(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G006[0x2];                                   // 0x0E7A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SocketRotationInterpSpeed;                               // 0x0E7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SocketLocationInterpSpeed;                               // 0x0E80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWaitingForAnimation;                                    // 0x0E84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECardinal_Directions_Enum                                  PendingDirection;                                        // 0x0E85(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNoTransition;                                           // 0x0E86(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDidInitalAttach;                                        // 0x0E87(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPrintAnimDebug;                                         // 0x0E88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XB79[0x7];                                   // 0x0E89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastSyncInputsToServerTime;                              // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayerWantsCanoeToBeach;                                // 0x0E98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M0WV[0x7];                                   // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          PaddleSplashSound;                                       // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x0EA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue2;             // 0x0EA9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0EAA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U7IU[0x5];                                   // 0x0EAB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue2;                        // 0x0EB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue;                         // 0x0EBC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue3;             // 0x0EC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue4;             // 0x0EC1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue5;             // 0x0EC2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue6;             // 0x0EC3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0EC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FCanoePassengerClientInputAxes                      K2Node_CustomEvent_SavedInputs;                          // 0x0EC8(0x0010) Transient, DuplicateTransient
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0ED8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ACanoe_BP_C*                                         K2Node_DynamicCast_AsCanoe_BP_C;                         // 0x0EE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0EE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x0EE9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue7;             // 0x0EEA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue8;             // 0x0EEB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_FloatFloat_ReturnValue;             // 0x0EEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0EED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_FloatFloat_ReturnValue2;            // 0x0EEE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0EEF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0EF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IGZK[0x7];                                   // 0x0EF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0EF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x0F00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue;                        // 0x0F01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bNewVal;                              // 0x0F02(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x0F03(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x0F04(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x0F05(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8EGT[0x2];                                   // 0x0F06(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue2;                      // 0x0F08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Forward;                              // 0x0F10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Right;                                // 0x0F14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ACanoe_BP_C*                                         K2Node_DynamicCast_AsCanoe_BP_C2;                        // 0x0F18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0F20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue9;             // 0x0F21(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue10;            // 0x0F22(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue2;             // 0x0F23(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void SendOarInputsToServer();
		void HandleViewModeChange();
		void InterpToSocket();
		void OnChangedViewMode(bool bIsFirstPerson);
		void PlayPaddleAnim(const struct FWeaponAnim& AnimToPlay);
		class USkeletalMeshComponent* BPOverrideFPVMasterPoseComponent();
		void ReceiveDestroyed();
		void HandlePaddleAnimation();
		void GetCurrentPaddleAnimation(struct FWeaponAnim* AnimToPlay, bool* bFoundAnim, ECardinal_Directions_Enum* Direction);
		class UAnimSequence* GetStandingAnimation(float* OutBlendInTime, float* OutBlendOutTime);
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		struct FRotator BPOverrideRootRotationOffset(const struct FRotator& InRootRotation);
		void BPHandleMeleeAttack();
		void UserConstructionScript();
		void InpActEvt_AltFire_K2Node_InputActionEvent_245();
		void InpActEvt_AltFire_K2Node_InputActionEvent_244();
		void ReceiveBeginPlay();
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272(float AxisValue);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153(float AxisValue);
		void ReceiveTick(float DeltaSeconds);
		void Server_ReceiveOarInputs(const struct FCanoePassengerClientInputAxes& SavedInputs);
		void Server_SetCanoeWantsToBeach(bool bNewVal);
		void ReceiveOarInputAxes(float Forward, float Right);
		void ExecuteUbergraph_WeapFists_Oar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
