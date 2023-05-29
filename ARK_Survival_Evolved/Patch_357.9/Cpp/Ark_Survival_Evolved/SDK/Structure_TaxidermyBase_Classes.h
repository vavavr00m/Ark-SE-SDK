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
	 * BlueprintGeneratedClass Structure_TaxidermyBase.Structure_TaxidermyBase_C
	 * Size -> 0x0101 (FullSize[0x0F11] - InheritedSize[0x0E10])
	 */
	class AStructure_TaxidermyBase_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UStaticMeshComponent*                                Pedestal;                                                // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_TaxidermyBase_C*                  PrimalInventoryBP_TaxidermyBase_C1;                      // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalItem_TaxidermyDermis_C*                       CurrentSnapshot;                                         // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    SnapshotPoseIndex;                                       // 0x0E28(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SnapshotExtent;                                          // 0x0E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SnapshotOffset;                                          // 0x0E30(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PedestalScale;                                           // 0x0E3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowDefaultAndCaptureSnapshotRemoval;                  // 0x0E40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowCharacterCapture;                                  // 0x0E41(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSpawnDefaultSnapshot;                                   // 0x0E42(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseDefaultSnapshotMaterial;                             // 0x0E43(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRemoveHairOnDefaultSnapshots;                           // 0x0E44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSnapshotACapture;                                     // 0x0E45(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSnapshotGender;                                         // 0x0E46(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFR1[0x1];                                   // 0x0E47(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TextRendererFillTime;                                    // 0x0E48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    TempCounter;                                             // 0x0E4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CheatInventorySize;                                      // 0x0E50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSnapshotCollisionOn;                                    // 0x0E54(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LDKR[0x3];                                   // 0x0E55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DefaultSnapshotMaterial;                                 // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DefaultSnapShotFemaleClass;                              // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DefaultSnapShotMaleClass;                                // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct UObject_FTransform                                  NameRenderTransform;                                     // 0x0E70(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTextRenderComponent*                                NameRenderComponent;                                     // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              OverwriteSnapshotMaleString;                             // 0x0EA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              OverwriteSnapshotFemaleString;                           // 0x0EB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      NameWorldSize;                                           // 0x0EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SecondsToWaitBeforeTakingnextSnapshot;                   // 0x0ECC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastSnapshotTakenTime;                                   // 0x0ED0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x0ED8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F8V5[0x3];                                   // 0x0ED9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x0EDC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   K2Node_CustomEvent_PC;                                   // 0x0EE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_UseDefaultSnapshotMaterial;           // 0x0EE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_CaptureCharacter;                     // 0x0EE9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_NonCaptureGenderIsMale;               // 0x0EEA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_KeepPreviousSnapshot;                 // 0x0EEB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0EEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LC0H[0x3];                                   // 0x0EED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Len_ReturnValue;                                // 0x0EF0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RTI8[0x4];                                   // 0x0EF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Left_ReturnValue;                               // 0x0EF8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_Conv_IntToFloat_ReturnValue;                    // 0x0F08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0F0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_StrStr_ReturnValue;                    // 0x0F10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UpdateDinoMatOverrides();
		void OnContainerRenamed();
		void ConstructNameRendererComponent();
		void RemoveHairMeshes();
		void OnRep_SnapshotPoseIndex();
		void CreateDefaultSnapshot(class APlayerController* PC);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void SetTextRendererColor();
		void CreateSnapshot(class APlayerController* PC, bool UseDefaultSnapshotMat, bool CaptureCharacter, bool NonCaptureGenderIsMale, bool KeepPreviousSnapshot);
		void BPPlacedStructure(class APlayerController* ForPC);
		void ApplyEquippedSnapshot();
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void RemoveSnapshot();
		void ApplySnapshot(class UPrimalItem* Snapshot);
		void BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetRendererText();
		void Multi_CreateSnapshot(class APlayerController* PC, bool UseDefaultSnapshotMaterial, bool CaptureCharacter, bool NonCaptureGenderIsMale, bool KeepPreviousSnapshot);
		void ExecuteUbergraph_Structure_TaxidermyBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
