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
	 * BlueprintGeneratedClass WeapScissors.WeapScissors_C
	 * Size -> 0x01F8 (FullSize[0x0F80] - InheritedSize[0x0D88])
	 */
	class AWeapScissors_C : public AShooterWeapon_Melee
	{
	public:
		float                                                      HeadHairLocksPerPercent;                                 // 0x0D88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FacialHairLocksPerPercent;                               // 0x0D8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HeadHairCutDurabilityCostPerPercent;                     // 0x0D90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FacialHairCutDurabilityCostPerPercent;                   // 0x0D94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinCutDurabilityCost;                                    // 0x0D98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VRFD[0x4];                                   // 0x0D9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   HairCutTarget;                                           // 0x0DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowPositiveHaircut;                                   // 0x0DA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5YXX[0x3];                                   // 0x0DA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ItemDurabilityToSubtract;                                // 0x0DAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DyeHairColorSaturation;                                  // 0x0DB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OnDinoItemDurabilityToSubtract;                          // 0x0DB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0DB8(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x0DC8(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class UUI_Hairstyle*                                       K2Node_CustomEvent_TheUI;                                // 0x0DD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_NewHeadHairIndex2;                    // 0x0DE0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_NewFacialHairIndex2;                  // 0x0DE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_NewHeadHairPercent2;                  // 0x0DE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_NewFacialHairPercent2;                // 0x0DEC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_HeadHairDyeID12;                      // 0x0DF0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_HeadHairDyeID22;                      // 0x0DF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_FacialHairDyeID12;                    // 0x0DF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_FacialHairDyeID22;                    // 0x0DFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_CustomEvent_TargetChar2;                          // 0x0E00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_CustomEvent_TargetChar;                           // 0x0E08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValidHairCutTarget_bIsValid;                  // 0x0E10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValidHairCutTarget_bIsValid2;                 // 0x0E11(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FBFA[0x2];                                   // 0x0E12(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_NewHeadHairIndex;                     // 0x0E14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_NewFacialHairIndex;                   // 0x0E18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_NewHeadHairPercent;                   // 0x0E1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_NewFacialHairPercent;                 // 0x0E20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_HeadHairDyeID1;                       // 0x0E24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_HeadHairDyeID2;                       // 0x0E28(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_FacialHairDyeID1;                     // 0x0E2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_FacialHairDyeID2;                     // 0x0E30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NVCY[0x4];                                   // 0x0E34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_CustomEvent_ForTarget;                            // 0x0E38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsAlive_ReturnValue;                            // 0x0E40(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KLO3[0x3];                                   // 0x0E41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_GetFacialHairIndex_ReturnValue;                 // 0x0E44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x0E48(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8OSK[0x3];                                   // 0x0E49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_GetHeadHairIndex_ReturnValue;                   // 0x0E4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetPercentageOfFacialHairGrowth_ReturnValue;    // 0x0E50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue2;                 // 0x0E54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S2LC[0x3];                                   // 0x0E55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetPercentageOfHeadHairGrowth_ReturnValue;      // 0x0E58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValidHairCutTarget_bIsValid3;                 // 0x0E5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VHTC[0x3];                                   // 0x0E5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         CallFunc_BPFindItemWithID_ReturnValue;                   // 0x0E60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalItem*                                         CallFunc_BPFindItemWithID_ReturnValue2;                  // 0x0E68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalItem_Dye*                                     K2Node_DynamicCast_AsPrimalItem_Dye;                     // 0x0E70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0E78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YAGK[0x7];                                   // 0x0E79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem_Dye*                                     K2Node_DynamicCast_AsPrimalItem_Dye2;                    // 0x0E80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0E88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AOKP[0x7];                                   // 0x0E89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CallFunc_GetObjectClass_ReturnValue;                     // 0x0E90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UClass*                                              CallFunc_GetObjectClass_ReturnValue2;                    // 0x0E98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UClass*                                              K2Node_ClassDynamicCast_AsPrimalItem;                    // 0x0EA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ClassDynamicCast_CastSuccess;                     // 0x0EA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_59W5[0x7];                                   // 0x0EA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              K2Node_ClassDynamicCast_AsPrimalItem2;                   // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ClassDynamicCast2_CastSuccess;                    // 0x0EB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3RU[0x3];                                   // 0x0EB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_BPIncrementItemTemplateQuantity_ReturnValue;    // 0x0EBC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_BPIncrementItemTemplateQuantity_ReturnValue2;   // 0x0EC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Select_ReturnValue;                               // 0x0EC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x0EC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IOVE[0x3];                                   // 0x0EC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_ReturnValue2;                              // 0x0ECC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select2_CmpSuccess;                               // 0x0ED0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0ED1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0ED2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsShipping_ReturnValue;                         // 0x0ED3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0ED4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UWIC[0x3];                                   // 0x0ED5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CallFunc_ChangeSaturation_ReturnValue;                   // 0x0ED8(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Select_ReturnValue3;                              // 0x0EE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select3_CmpSuccess;                               // 0x0EEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1758[0x3];                                   // 0x0EED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FMin_ReturnValue;                               // 0x0EF0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CallFunc_ChangeSaturation_ReturnValue2;                  // 0x0EF4(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x0F04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0F08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x0F0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_FFloor_ReturnValue;                             // 0x0F10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x0F14(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_70KB[0x3];                                   // 0x0F15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_ReturnValue4;                              // 0x0F18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select4_CmpSuccess;                               // 0x0F1C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUB1[0x3];                                   // 0x0F1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameState*                                          CallFunc_GetGameState_ReturnValue;                       // 0x0F20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMin_ReturnValue2;                              // 0x0F28(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x0F2C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue2;               // 0x0F38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x0F3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x0F40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x0F44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_FFloor_ReturnValue2;                            // 0x0F48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMin_ReturnValue3;                              // 0x0F4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ADino_Character_BP_Haircuttable_C*                   K2Node_CustomEvent_DoRequestOnDino;                      // 0x0F50(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0F58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x0F59(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValidHairCutTarget_bIsValid4;                 // 0x0F5A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1CRS[0x1];                                   // 0x0F5B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate3;                   // 0x0F5C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		unsigned char                                              UnknownData_5OSU[0x4];                                   // 0x0F6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0F70(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ReceiveBeginPlay();
		void IsValidHairCutTarget(class AActor* PotentialTarget, bool* bIsValid);
		void OpenUI(class AShooterCharacter* TheTarget);
		void GiveHairLocks(int32_t NumLocks);
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
		void UserConstructionScript();
		void InitializeUI(class UUI_Hairstyle* TheUI);
		void OnHairStyleAccepted__DelegateSignature_Event(int32_t newHeadHairIndex, int32_t newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int32_t HeadHairDyeID1, int32_t HeadHairDyeID2, int32_t FacialHairDyeID1, int32_t FacialHairDyeID2);
		void ClearFacialHairClicked();
		void ClearHeadHairClicked();
		void ServerClearFacialHairColor(class AShooterCharacter* TargetChar);
		void ServerClearHeadHairColor(class AShooterCharacter* TargetChar);
		void TheServerHairStyleAccepted(int32_t newHeadHairIndex, int32_t newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int32_t HeadHairDyeID1, int32_t HeadHairDyeID2, int32_t FacialHairDyeID1, int32_t FacialHairDyeID2, class AShooterCharacter* forTarget);
		void DoServerRequestDinoHaircut(class ADino_Character_BP_Haircuttable_C* DoRequestOnDino);
		void ExecuteUbergraph_WeapScissors(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
