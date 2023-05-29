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
	 * BlueprintGeneratedClass Structure_TekAlarm.Structure_TekAlarm_C
	 * Size -> 0x0390 (FullSize[0x11A0] - InheritedSize[0x0E10])
	 */
	class AStructure_TekAlarm_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UStaticMeshComponent*                                TargetDetectBoxMesh;                                     // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StructureDetectBoxMesh;                                  // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StructureDetectSphereMesh;                               // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                TargetDetectSphereMesh;                                  // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       StructureDetectBox;                                      // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StructureDetectSphere;                                   // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       TargetDetectBox;                                         // 0x0E40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    TargetDetectSphere;                                      // 0x0E48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetDetectBox_X_Depth;                                 // 0x0E50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetDetectBox_Y_Width;                                 // 0x0E54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetDetectBox_Z_Height;                                // 0x0E58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DetectBox_X_MIN;                                         // 0x0E5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetectBox_Y_MIN;                                         // 0x0E60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetectBox_Z_MIN;                                         // 0x0E64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetectBox_X_MAX;                                         // 0x0E68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetectBox_Y_MAX;                                         // 0x0E6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetectBox_Z_MAX;                                         // 0x0E70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AdjustSpeed_Slow;                                        // 0x0E74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AdjustSpeed_Medium;                                      // 0x0E78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AdjustSpeed_Fast;                                        // 0x0E7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AdjustSpeedOption;                                       // 0x0E80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SelectedOptionTextColor;                                 // 0x0E84(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetDetectSphere_Radius;                               // 0x0E94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DetectSphere_Radius_MIN;                                 // 0x0E98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetectSphere_Radius_MAX;                                 // 0x0E9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetScanInterval;                                      // 0x0EA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StructureDetectBox_X_Depth;                              // 0x0EA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StructureDetectBox_Y_Width;                              // 0x0EA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StructureDetectBox_Z_Height;                             // 0x0EAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StructureDetectSphere_Radius;                            // 0x0EB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPC8[0x4];                                   // 0x0EB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeScanStructures;                                  // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StructureScanInterval;                                   // 0x0EC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    StructureTriggerStateOption;                             // 0x0EC4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldToggle;                                            // 0x0EC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasFilteredTargetInTheAreaLastFrame;                     // 0x0EC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanConfigureDetectTargets;                               // 0x0ECA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanConfigureDeltaSize;                                   // 0x0ECB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugMode;                                               // 0x0ECC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QBBW[0x3];                                   // 0x0ECD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeChangeTargetDetectShape;                         // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeChangeStructureDetectShape;                      // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeToInvisibleVisuals;                                  // 0x0EE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowTargetDetectBoxMesh;                                 // 0x0EE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HR6C[0x3];                                   // 0x0EE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OnTargetSightedResponse;                                 // 0x0EE8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    OnTargetLostResponse;                                    // 0x0EEC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ActivePINCodes;                                          // 0x0EF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    DeactivatedPINCodes;                                     // 0x0EF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              OnTargetLostDisplayString;                               // 0x0EF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              OnTargetSightedDisplayString;                            // 0x0F08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              ConfigStructureDetectDisplayString;                      // 0x0F18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              ConfigTargetDetectDisplaySring;                          // 0x0F28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        IncreaseTextColor;                                       // 0x0F38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ReduceTextColor;                                         // 0x0F48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OnTargetLostActivateDelay;                               // 0x0F58(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OnTargetLostDeactivateDelay;                             // 0x0F5C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OnTargetSightedActivateDelay;                            // 0x0F60(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OnTargetSightedDeactivateDelay;                          // 0x0F64(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ActivatedPINCodes;                                       // 0x0F68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DE45[0x4];                                   // 0x0F6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTekAlarmPINData>                            PINData;                                                 // 0x0F70(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		float                                                      CDOSphereRadius;                                         // 0x0F80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CDOSphereMeshScale;                                      // 0x0F84(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CDOBoxScale;                                             // 0x0F90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CDOBoxScaleMesh;                                         // 0x0F94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              NoLoggingString;                                         // 0x0F98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                LoggingText;                                             // 0x0FA8(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_83HK[0x10];                                  // 0x0FC0(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    EveryoneTribeLoggingSetting;                             // 0x0FD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    WildDinosTribeLoggingSetting;                            // 0x0FD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AlliedSurvivorsTribeLoggingSetting;                      // 0x0FD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    EnemySurvivorsTribeLoggingSetting;                       // 0x0FDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    EnemyDinosTribeLoggingSetting;                           // 0x0FE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AlliedDinosTribeLoggingSetting;                          // 0x0FE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<double>                                             LastTimeTribeLoggedForType;                              // 0x0FE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            ScannerLightParticleComponent;                           // 0x0FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowDetectionRange;                                      // 0x1000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SupportsTribeLogging;                                    // 0x1001(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanConfigurePINBroadcastSettings;                        // 0x1002(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanShowTargetDetectArea;                                 // 0x1003(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IL83[0x4];                                   // 0x1004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PINSet;                                                  // 0x1008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             CurrentTargetDetectBoxExtent;                            // 0x1018(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurrentStructureDetectBoxExtent;                         // 0x1024(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ReplicatedTribeLoggingSettings;                          // 0x1030(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ShowBroadcastRange;                                      // 0x1034(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AlignDetectionBoxWithWorldUp;                            // 0x1035(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AlignBroadcastBoxWithWorldUp;                            // 0x1036(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanFowardActionToKeypad;                                 // 0x1037(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForwardActionToKeypad;                                   // 0x1038(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8CW[0x3];                                   // 0x1039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastActivePINCodes;                                      // 0x103C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LastDeactivatedPINCodes;                                 // 0x1040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowRangePreviewAfterPlacement;                          // 0x1044(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QYSG[0x3];                                   // 0x1045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          AlarmActivationSound;                                    // 0x1048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          AlarmDeactivationSound;                                  // 0x1050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ActiveParticleFX;                                        // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalStructure*>                            StructuresPendingAutoDeactivation;                       // 0x1060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<double>                                             StructuresPendingAutoDeactivationTimes;                  // 0x1070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FRotator                                            CurrentTargetDetectBoxRotation;                          // 0x1080(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            CurrentStructureDetectBoxRotation;                       // 0x108C(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RotationAngleIncrease;                                   // 0x1098(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanChangeDetectionBoxRotation;                           // 0x109C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanChangeStructureBoxRotation;                           // 0x109D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OnlyTriggerIfWalking;                                    // 0x109E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C1OJ[0x1];                                   // 0x109F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Delta7;                               // 0x10A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x10A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Extent2;                              // 0x10A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x10B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delta6;                               // 0x10B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x10BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delta5;                               // 0x10C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x10C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue3;                    // 0x10C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue3;                            // 0x10CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Radius2;                              // 0x10D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x10D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasFiltered_Target_in_the_Area_TargetLost;      // 0x10E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KN7M[0x3];                                   // 0x10E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_NewParam;                             // 0x10E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_NewParam1;                            // 0x10F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_extent;                               // 0x10F4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Radius;                               // 0x1100(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue2;                        // 0x1104(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delta8;                               // 0x1110(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue4;                    // 0x1114(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delta4;                               // 0x1118(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue4;                            // 0x111C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delta3;                               // 0x1120(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delta2;                               // 0x1124(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue5;                    // 0x1128(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue6;                    // 0x112C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue5;                            // 0x1130(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue6;                            // 0x1134(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue7;                    // 0x1138(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue7;                            // 0x113C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delta;                                // 0x1140(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue8;                    // 0x1144(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue8;                            // 0x1148(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x114C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85MV[0x3];                                   // 0x114D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x1150(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x1158(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HMY7[0x3];                                   // 0x1159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x115C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_NotEqual_BoolBool_ReturnValue;                  // 0x116C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x116D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x116E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x116F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_CalcuateMeshAlpha_Fn_Alpha;                     // 0x1170(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_FloatFloat_ReturnValue;             // 0x1174(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YCOG[0x3];                                   // 0x1175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_CalcuateMeshAlpha_Fn_Alpha2;                    // 0x1178(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_FloatFloat_ReturnValue2;            // 0x117C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x117D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasPendingPINActivation_Result;                 // 0x117E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x117F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue3;                         // 0x1180(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue4;                         // 0x1181(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x1182(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue2;                 // 0x1183(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x1184(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x1185(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x1186(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue2;                   // 0x1187(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue5;                         // 0x1188(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x1189(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x118A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x118B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x118C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue6;                         // 0x118D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UX30[0x2];                                   // 0x118E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x1190(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode2;           // 0x119C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode3;           // 0x119D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum2_CmpSuccess;                           // 0x119E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum3_CmpSuccess;                           // 0x119F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void InitSavedTribeLoggingSettings();
		void GetNextRotation(const struct FRotator& currentRotation, bool bDecrease, bool Roll, bool Pitch, bool Yaw, struct FRotator* NextRotation);
		void OnRep_CurrentStructureDetectBoxRotation();
		void OnRep_CurrentTargetDetectBoxRotation();
		void UpdateAutoDeactivation();
		void GetTargetTypesToChange(TArray<ETekAlarmTargetTypes>* ActiveTypes, TArray<bool>* ShouldActivate);
		void ToggleKeypadLink(class AShooterPlayerController* OptionalShooterPC);
		void AlignBoxedToWorldUp();
		void OnRep_CurrentStructureDetectBoxExtent();
		void OnRep_CurrentTargetDetectBoxExtent();
		void IsTargetDetectBox(bool* bIsBox);
		void IsStructureDetectBox(bool* bIsBox);
		void SetTargetDetectBoxExtent(const struct FVector& Extent);
		void SetTargetDetectSphereRadius(float Radius);
		void SetStructureDetectBoxExtent(const struct FVector& Extent);
		void SetStructureDetectSphereRadius(float Radius);
		void GetTribeLoggingSetting(ETekAlarmTargetTypes Type, int32_t* Integer);
		void MakeReplicatedTribeLoggingSettings(int32_t* TribeLoggingSettings);
		void GetMappedTribeLoggingInteger(int32_t TribeLoggingState, int32_t* TribeLoggingInteger);
		void BPChangedActorTeam();
		void ReceiveDestroyed();
		void HasAnyPINsSet(bool* Result);
		void OnRep_ShowAreaVisuals();
		void UpdateAreaVisualsVisibility();
		void BPContainerDeactivated();
		void GetTribeLoggingSettingForTargetType(ETekAlarmTargetTypes Type, int32_t* Result);
		void GetTribeLogNameForType(ETekAlarmTargetTypes Type, class FString* Name);
		void TryTribeLogging(ETekAlarmTargetTypes Type);
		void GetNextTribeLoggingSetting(int32_t CurrentSetting, int32_t* NewSetting);
		void GetTribeLoggingString(const class FString& TypeName, int32_t CooldownInSeconds, class FString* Output);
		void HasPendingPINActivation(bool* Result);
		void GetPINDataByType(ETekAlarmTargetTypes Type, struct FTekAlarmPINData* Ret);
		void SetPINCodeInPINData(int32_t pinCode, ETekAlarmTargetTypes Type);
		void GetMultiUseTitleWithDelay(float DelaySeconds, const class FText& Title, class FString* Output);
		void GetPINDataByPIN(int32_t PIN, struct FTekAlarmPINData* res, int32_t* RetIndex);
		void CalcuateDelay(float CurrentDelay, float* NewDelay);
		void PinCodeFlagsToString(int32_t PinCodesFlag, class FString* Output);
		void WasPinCodeBitTriggered(int32_t Bit, bool* Ret, bool* Activated, bool* Deactivated);
		void IsRelevantPinCode(int32_t pinCode, bool* Ret, bool* IsDeactivation);
		void IsAreaVisualsLocallyVisible(bool* Result);
		void CalcuateMeshAlphaFn(class UStaticMeshComponent* Mesh1, class UStaticMeshComponent* Mesh2, double TimeSince, float* Alpha);
		void BPContainerActivated();
		void SetActivateStateToStructure(class APrimalStructure* PrimalStructure, bool toggle, bool NewActivateState, bool Force);
		void GetOctreeDataForStructureDetectArea(float* Radius, struct FVector* Location);
		void UpdateStructuresinAreatoGoalState();
		void UpdateStructureDetectSphere();
		void UpdateStructureDetectBox();
		void SwitchStructureDetectStyle();
		void IsActorInBoxArea(class AActor* Actor, class UBoxComponent* BoxComponent, bool* Value);
		void GetOctreeCheckType(EServerOctreeGroup* Value);
		void GetOctreeDataForTargetDetectArea(float* Radius, struct FVector* Location);
		void HasFilteredTargetintheArea(bool* TargetLost);
		bool BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC);
		bool BPApplyPinCode(class AShooterPlayerController* ForPC, int32_t appledPinCode, bool bIsSetting, int32_t TheCustomIndex);
		void GetDetectAreaAdjustSpeed(float* AdjustSpeed);
		void ReceiveBeginPlay();
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void UpdateTargetDetectSphere();
		void UpdateTargetDetectBox();
		void BPPlacedStructure(class APlayerController* ForPC);
		void SwitchTargetDetectStyle();
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void UserConstructionScript();
		void MulticastTargetDetectStyleChange();
		void AdjustTargetDetectBoxDepthX(float Delta);
		void AdjustTargetDetectBoxWidthY(float Delta);
		void MulticastTargetDetectBoxExtent(const struct FVector& Extent);
		void AdjustTargetDetectBoxHeightZ(float Delta);
		void SignalServerToggleActivateState();
		void AdjustTargetDetectSphereRadius(float Delta);
		void MulticastTargetDetectSphereRadius(float Radius);
		void ScanTargetDetectArea();
		void DrawDebugSphere(const struct FVector& NewParam, float NewParam1);
		void MulticastStructureDetectStyleChange();
		void MulticastStructureDetectBoxExtent(const struct FVector& Extent);
		void MulticastStructureDetectSphereRadius(float Radius);
		void AdjustStructureDetectBoxDepthX(float Delta);
		void AdjustStructureDetectBoxWidthY(float Delta);
		void AdjustStructureDetectBoxHeightZ(float Delta);
		void AdjustStructureDetectSphereRadius(float Delta);
		void CalcuateTargetDetectAlpha();
		void CalcuateStructureDetectAlpha();
		void UpdateAreaVisualsVisibilityEvent();
		void MulticastShowPreview();
		void MulticastPlayActivationSound();
		void MulticastPlayDeactivationSound();
		void ExecuteUbergraph_Structure_TekAlarm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
