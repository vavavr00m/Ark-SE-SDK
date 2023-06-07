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
	 * BlueprintGeneratedClass Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C
	 * Size -> 0x0B78 (FullSize[0x14F8] - InheritedSize[0x0980])
	 */
	class ABuff_TekGrenadeLauncherHelper_C : public APrimalBuff
	{
	public:
		struct FHUDElement                                         ProjectileHUDTemplate;                                   // 0x0980(0x0150) Edit, BlueprintVisible, CPF_SkipSerialization
		struct FHUDElement                                         ProjectileBackgroundHUDTemplate;                         // 0x0AD0(0x0150) Edit, BlueprintVisible, CPF_SkipSerialization
		struct FLinearColor                                        SlotBackgroundColor_Active;                              // 0x0C20(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SlotBackgroundColor_Normal;                              // 0x0C30(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ProjectileHUDScreenLocation;                             // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ProjectileHUDElementSpacing;                             // 0x0C48(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Z4M[0x4];                                   // 0x0C4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapTekGrenadeLauncher_C*                           weapon;                                                  // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FHUDElement>                                 ProjectileHUDSlots;                                      // 0x0C58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FHUDElement>                                 ProjectileHUDSlots_Backgrounds;                          // 0x0C68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    BaseMultiUseIndex;                                       // 0x0C78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BaseMultiUseCategory;                                    // 0x0C7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         ProjectileCursorHUDIndicator;                            // 0x0C80(0x0150) Edit, BlueprintVisible
		struct FCustomWheelSettings                                SlotSelectionWheelSettings;                              // 0x0DD0(0x0040) Edit, BlueprintVisible
		struct FCustomWheelEntry                                   SlotSelectionWheelEntryTemplate;                         // 0x0E10(0x0068) Edit, BlueprintVisible
		struct FCustomWheelSettings                                AmmoSelectionWheelSettings;                              // 0x0E78(0x0040) Edit, BlueprintVisible
		struct FCustomWheelEntry                                   AmmoSelectionWheelEntryTemplate;                         // 0x0EB8(0x0068) Edit, BlueprintVisible
		int32_t                                                    CurrentSlot;                                             // 0x0F20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OpenedWheelWithGamepad;                                  // 0x0F24(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GP00[0x3];                                   // 0x0F25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         OverheatHUDElement;                                      // 0x0F28(0x0150) Edit, BlueprintVisible, CPF_SkipSerialization
		struct FHUDElement                                         OverheatHUDElementBackground;                            // 0x1078(0x0150) Edit, BlueprintVisible, CPF_SkipSerialization
		float                                                      CurrentHeatLevelSmoothedValue;                           // 0x11C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LastInventoryUpdatedFrame;                               // 0x11CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectileCursorOffsetY;                                 // 0x11D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectileCursorOffsetX;                                 // 0x11D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SlotEmptyIconColor;                                      // 0x11D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      ValidAmmoTypes;                                          // 0x11E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastUpdatedValidAmmoTypes;                               // 0x11F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FCustomWheelEntry>                           CallFunc_Generate_Slot_Wheel_Entries_Entries;            // 0x1200(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FCustomWheelEntry>                           CallFunc_GenerateAmmoWheelEntries_AmmoEntries;           // 0x1210(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x1220(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x1228(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x1230(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MQP6[0x7];                                   // 0x1231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHud_ReturnValue;                      // 0x1238(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x1240(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FCustomWheelEntry                                   CallFunc_GetSelectedCustomWheelEntry_SelectedEntry;      // 0x1248(0x0068) Transient, DuplicateTransient
		bool                                                       CallFunc_GetSelectedCustomWheelEntry_ReturnValue;        // 0x12B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6HF[0x7];                                   // 0x12B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController2;           // 0x12B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x12C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_412E[0x7];                                   // 0x12C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHUD_ReturnValue2;                     // 0x12C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_NameName_ReturnValue;                // 0x12D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TVIT[0x7];                                   // 0x12D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CallFunc_AmmoNameToType_AmmoType;                        // 0x12D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ClassClass_ReturnValue;                // 0x12E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HQPE[0x7];                                   // 0x12E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue3;                     // 0x12E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController3;           // 0x12F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x12F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RCPC[0x7];                                   // 0x12F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHUD_ReturnValue3;                     // 0x1300(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_StartCustomWheelRadialSelector_ReturnValue;     // 0x1308(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2KR1[0x7];                                   // 0x1309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue4;                     // 0x1310(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController4;           // 0x1318(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x1320(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V7VN[0x7];                                   // 0x1321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHUD_ReturnValue4;                     // 0x1328(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue5;                     // 0x1330(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_StartCustomWheelRadialSelector_ReturnValue2;    // 0x1338(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8S4M[0x7];                                   // 0x1339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController5;           // 0x1340(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x1348(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NI1G[0x7];                                   // 0x1349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomWheelEntry                                   CallFunc_GetSelectedCustomWheelEntry_SelectedEntry2;     // 0x1350(0x0068) Transient, DuplicateTransient
		bool                                                       CallFunc_GetSelectedCustomWheelEntry_ReturnValue2;       // 0x13B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I7RL[0x7];                                   // 0x13B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHUD_ReturnValue5;                     // 0x13C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FCustomWheelEntry                                   CallFunc_GetSelectedCustomWheelEntry_SelectedEntry3;     // 0x13C8(0x0068) Transient, DuplicateTransient
		bool                                                       CallFunc_GetSelectedCustomWheelEntry_ReturnValue3;       // 0x1430(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ZIO[0x3];                                   // 0x1431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x1434(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FText                                                CallFunc_Conv_IntToText_ReturnValue;                     // 0x1438(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_Y3UG[0x10];                                  // 0x1450(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument;                    // 0x1460(0x0050) Transient, DuplicateTransient
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array;                                  // 0x14B0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                CallFunc_Format_ReturnValue;                             // 0x14C0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_RVQP[0x10];                                  // 0x14D8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              CallFunc_Conv_TextToString_ReturnValue;                  // 0x14E8(0x0010) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void GenerateSlotWheelEntries(TArray<struct FCustomWheelEntry>* Entries);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void ReceiveDestroyed();
		void BPInstigatorDied();
		void BPHandleOnStartFire(bool bFromGamepad);
		void ShouldUpdateAmmoCount(class APrimalCharacter* ForShooterChar, bool* bShouldUpdate);
		void InitWeapon();
		void AmmoNameToType(const class FName& AmmoTypeName, class UClass** AmmoType);
		void GenerateAmmoWheelEntries(TArray<struct FCustomWheelEntry>* AmmoEntries);
		void GenerateSlotWheelEntriesMU(TArray<struct FMultiUseEntry>* MuEntries);
		struct FVector2D CalcAmmoWidgetLocation(int32_t InInt);
		class FString GetItemShortName(class UClass* FromClass);
		void GetValidAmmoTypes(TArray<class UClass*>* TypesInInventory);
		void SyncHUDElementSlots();
		void ReceiveBeginPlay();
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void UserConstructionScript();
		void OnSlotSelected();
		void OnAmmoTypeSelected();
		void ShowSlotSelectWheel();
		void HideSlotSelectWheel();
		void OnAmmoTypeUnloaded();
		void ExecuteUbergraph_Buff_TekGrenadeLauncherHelper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
