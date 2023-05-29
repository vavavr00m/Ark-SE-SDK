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
	 * BlueprintGeneratedClass Structure_DinoLeash.Structure_DinoLeash_C
	 * Size -> 0x0199 (FullSize[0x0FA9] - InheritedSize[0x0E10])
	 */
	class AStructure_DinoLeash_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UParticleSystemComponent*                            RadioPing;                                               // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventory_DinoLeash_C*                        PrimalInventory_DinoLeash_C1;                            // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    PlayerDetectSphere;                                      // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                EffectField;                                             // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Activated;                                               // 0x0E30(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, PersistentInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSLI[0x3];                                   // 0x0E31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EffectRadius;                                            // 0x0E34(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, PersistentInstance, NativeAccessSpecifierPublic
		TArray<class APrimalDinoCharacter*>                        TetheredDinos;                                           // 0x0E38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		float                                                      EffectScalar;                                            // 0x0E48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HZWU[0x4];                                   // 0x0E4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              RadiusOptions;                                           // 0x0E50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    RadiusSetting;                                           // 0x0E60(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisabledWheelColor;                                      // 0x0E64(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R6F3[0x4];                                   // 0x0E74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      SettingNames;                                            // 0x0E78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            RadialMaterialInstance;                                  // 0x0E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowArea;                                                // 0x0E90(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0E91(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x0E92(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EF4U[0x5];                                   // 0x0E93(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Dino2;                                // 0x0E98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APawn*                                               K2Node_CustomEvent_Pawn;                                 // 0x0EA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_CustomEvent_TetherObject;                         // 0x0EA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0EB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x0EB9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4ZD0[0x6];                                   // 0x0EBA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Dino;                                 // 0x0EC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_ComponentBoundEvent_OtherActor2;                  // 0x0EC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_ComponentBoundEvent_OtherComp2;                   // 0x0ED0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_ComponentBoundEvent_OtherBodyIndex2;              // 0x0ED8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ComponentBoundEvent_bFromSweep;                   // 0x0EDC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUJT[0x3];                                   // 0x0EDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          K2Node_ComponentBoundEvent_SweepResult;                  // 0x0EE0(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue;                   // 0x0F68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JEM8[0x7];                                   // 0x0F69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0F70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0F78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EIMF[0x7];                                   // 0x0F79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_ComponentBoundEvent_OtherActor;                   // 0x0F80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_ComponentBoundEvent_OtherComp;                    // 0x0F88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_ComponentBoundEvent_OtherBodyIndex;               // 0x0F90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0F94(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0F95(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x0F96(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C4FI[0x1];                                   // 0x0F97(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0F98(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_Get_Is_Active_ReturnValue;                      // 0x0FA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void CheckTeamAndSetVisualVisibility();
		void OnRep_ShowArea();
		void UpdateTetherAfterLoad();
		void BPPostLoadedFromSaveGame();
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void UpdateVisibility();
		void ReceiveBeginPlay();
		void BPUnstasis();
		bool GetIsActive();
		void BPContainerDeactivated();
		void BPContainerActivated();
		void BlueprintDrawPreviewHUD(class AShooterHUD* HUD, float CenterX, float CenterY);
		void GetMaximumAllowedRadius(float* MaxRadius, int32_t* MaxSetting);
		void TetherDinosInRadius();
		void SetEffectRadius(float EffectRadius, bool forceSet);
		void OnRep_EffectRadius();
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		int32_t BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason);
		void BPPlacedStructure(class APlayerController* ForPC);
		void Activate(bool Activated);
		void OnRep_Activated();
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void UserConstructionScript();
		void AddTetherToDino(class APrimalDinoCharacter* Dino);
		void MovementTetherEvent__DelegateSignature_Event(class APawn* Pawn, class AActor* TetherObject);
		void RemoveTetherFromDino(class APrimalDinoCharacter* Dino);
		void BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
		void BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ServerRequest_ToggleShowarea();
		void ExecuteUbergraph_Structure_DinoLeash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
