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
	 * BlueprintGeneratedClass WeapScoutRemote.WeapScoutRemote_C
	 * Size -> 0x02C0 (FullSize[0x1160] - InheritedSize[0x0EA0])
	 */
	class AWeapScoutRemote_C : public APrimalWeaponGrenade
	{
	public:
		class UStaticMeshComponent*                                Goggles3P;                                               // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              Goggles1P;                                               // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AScout_Character_BP_C*                               FiredScout;                                              // 0x0EB0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InspectTooltipRange;                                     // 0x0EB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IRHF[0x4];                                   // 0x0EBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ScoutResource;                                           // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastNoAmmoNotificationTimeSeconds;                       // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NoAmmoNotificationIntervalSeconds;                       // 0x0ED0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinimumRequiredResourceToFire;                           // 0x0ED4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UnequipAllowed;                                          // 0x0ED8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRepossess;                                             // 0x0ED9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanFire;                                                 // 0x0EDA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ServerCanFire;                                           // 0x0EDB(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              ScoutRemoteReturnCodeReplicated;                         // 0x0EDC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5ROU[0x3];                                   // 0x0EDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastNotificationTime;                                    // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              OverridePawnTPVFemaleAnimBlueprint;                      // 0x0EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GogglesMode;                                             // 0x0EF0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       GrenadeThrown;                                           // 0x0EF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3NVE[0x6];                                   // 0x0EF2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TooltipInfoText;                                         // 0x0EF8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		double                                                     LastUpdatedTooltipTime;                                  // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              LastTooltipInfoText;                                     // 0x0F10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0F20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0F28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0F29(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3CYR[0x2];                                   // 0x0F2A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0F2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_SelectObject_ReturnValue;                       // 0x0F30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        K2Node_DynamicCast_AsAnimMontage;                        // 0x0F38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0F40(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3MRS[0x3];                                   // 0x0F41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x0F44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_SelectObject_ReturnValue2;                      // 0x0F48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        K2Node_DynamicCast_AsAnimMontage2;                       // 0x0F50(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0F58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsFirstPerson_ReturnValue;                      // 0x0F59(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x0F5A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0F5B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x0F5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0F5D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsFirstPerson_ReturnValue2;                     // 0x0F5E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue2;       // 0x0F5F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0F60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5H2H[0x7];                                   // 0x0F61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x0F68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_SelectObject_ReturnValue3;                      // 0x0F70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_SelectObject_ReturnValue4;                      // 0x0F78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        K2Node_DynamicCast_AsAnimMontage3;                       // 0x0F80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0F88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_14FE[0x7];                                   // 0x0F89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_DynamicCast_AsAnimMontage4;                       // 0x0F90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0F98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K7AF[0x3];                                   // 0x0F99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue2;                        // 0x0F9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue3;                        // 0x0FA0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetRole                                                   CallFunc_GetRole_ReturnValue;                            // 0x0FA4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x0FA5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TV2F[0x2];                                   // 0x0FA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CallFunc_SelectObject_ReturnValue5;                      // 0x0FA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        K2Node_DynamicCast_AsAnimMontage5;                       // 0x0FB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x0FB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R2VW[0x3];                                   // 0x0FB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue4;                        // 0x0FBC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_CustomEvent_target;                               // 0x0FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayWeaponAnimationEx_ReturnValue;              // 0x0FC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0RMX[0x4];                                   // 0x0FCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerState*                                 K2Node_DynamicCast_AsShooterPlayerState;                 // 0x0FD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast6_CastSuccess;                         // 0x0FD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NVIC[0x7];                                   // 0x0FD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_StringToText_ReturnValue;                  // 0x0FE0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_C0UM[0x10];                                  // 0x0FF8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              CallFunc_LinkedPlayerIDString_ReturnValue;               // 0x1008(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument;                    // 0x1018(0x0050) Transient, DuplicateTransient
		class FText                                                CallFunc_Conv_StringToText_ReturnValue2;                 // 0x1068(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_1N6B[0x10];                                  // 0x1080(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue2;                      // 0x1090(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument2;                   // 0x1098(0x0050) Transient, DuplicateTransient
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array;                                  // 0x10E8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x10F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QJFO[0x4];                                   // 0x10FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Format_ReturnValue;                             // 0x1100(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_4GGW[0x10];                                  // 0x1118(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x1128(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U7R9[0x7];                                   // 0x1129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_TextToString_ReturnValue;                  // 0x1130(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UPrimalItem*                                         CallFunc_Array_Get_Item;                                 // 0x1140(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x1148(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6FQB[0x4];                                   // 0x114C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty; // 0x1150(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		class FString BPGetDebugInfoString();
		bool AllowTargeting();
		class FText BPGetTargetingTooltipInfoLabel();
		float BPGetProjectileSpeed();
		void OnRep_GogglesMode();
		void OnRep_FiredScout();
		class USkeletalMeshComponent* BPOverrideFPVMasterPoseComponent();
		bool BPPreventSwitchingWeapon();
		void SetupGoggleAnimInstanceClass();
		void GetRelevantGoggleAnimInstanceClass(class UClass** ClassRef);
		void GetRelevantGrenadeAnimInstanceClass(class UClass** ClassRef);
		void SetupGrenadeAnimInstanceClass();
		bool BPIsValidUnStasisCaster();
		void BPOnStopTargeting(bool bFromGamepadLeft);
		void ReceiveTick(float DeltaSeconds);
		void ScoutDespawned();
		void Show(class USceneComponent* SceneComp);
		void Hide(class USceneComponent* SceneComp);
		void ScoutGrenadeReturned();
		void BPFiredWeapon();
		bool BPTryFireWeapon();
		bool AllowUnequip();
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BPStartEquippedNotify();
		void ReceiveBeginPlay();
		void ScoutLaunched(class AScout_Character_BP_C* Scout);
		class AActor* BPGetActorForTargetingTooltip();
		bool BPWeaponCanFire();
		void UserConstructionScript();
		void MULTI_ScoutLaunched();
		void MULTI_ReleasedPossessingSurvivor();
		void OWNINGCLIENT_ScoutPossessedBySurvivor();
		void OWNINGCLIENT_OnEquipNoScout();
		void MULTI_OnEquipScoutActive();
		void MULTI_ScoutGrenadeReturnedEvent();
		void MULTI_FiredWeapon();
		void MULTI_ScoutDespawned();
		void SERVER_RecallScout();
		void Initialize();
		void SERVER_ReleasedPossessingSurvivor();
		void SERVER_DoHandleFiring();
		void UpdateTooltipInfoText(class AShooterCharacter* Target);
		void ExpireTooltipInfoText();
		void ExecuteUbergraph_WeapScoutRemote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
