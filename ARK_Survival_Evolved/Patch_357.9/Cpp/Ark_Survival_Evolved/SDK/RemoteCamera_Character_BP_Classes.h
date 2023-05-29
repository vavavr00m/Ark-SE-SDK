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
	 * BlueprintGeneratedClass RemoteCamera_Character_BP.RemoteCamera_Character_BP_C
	 * Size -> 0x08C9 (FullSize[0x2B51] - InheritedSize[0x2288])
	 */
	class ARemoteCamera_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Scout_C*            DinoCharacterStatus_BP_Scout_C1;                         // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            PossessingPlayerController;                              // 0x2290(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ScoutDisconnectVFX;                                      // 0x2298(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FUNS[0x3];                                   // 0x2299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerifyPosessingSurvivorRateSeconds;                      // 0x229C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ElevateSpeedMultiplier;                                  // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V2ZF[0x4];                                   // 0x22A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimePossessedByPlayerSeconds;                            // 0x22A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     ClientInitImpactVFXTimeSeconds;                          // 0x22B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DestoryDelayOnUnpossess;                                 // 0x22B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HBUT[0x4];                                   // 0x22BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DelayedDestroyTimeSeconds;                               // 0x22C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerOwnedScout;                                        // 0x22C8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LowStamina;                                              // 0x22C9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_4ESJ[0x2];                                   // 0x22CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ZeroVelocityRotationRate;                                // 0x22CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastScoutRecallTime;                                     // 0x22D8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CurrentlyPossessedByPlayer;                              // 0x22E0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_69R4[0x3];                                   // 0x22E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetRoll;                                              // 0x22E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxRoll;                                                 // 0x22E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxTurnInputValue;                                       // 0x22EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimePlayedTerrainImpactFX;                           // 0x22F0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentIndex;                                            // 0x22F8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPTY[0x4];                                   // 0x22FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalStructure*>                            LinkedCameras_Server;                                    // 0x2300(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, PersistentInstance
		class APrimalStructure*                                    SecurityConsole;                                         // 0x2310(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              VisionBuff;                                              // 0x2318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABuff_RemoteCameraVision_C*                          RemoteCameraBuff;                                        // 0x2320(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         CurrentCamera;                                           // 0x2328(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         NextCamera;                                              // 0x2478(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FRemoteCameraData>                           CameraData_Client;                                       // 0x25C8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, PersistentInstance
		float                                                      MaxDistanceFromConsole;                                  // 0x25D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ActivatedCamera;                                         // 0x25DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ReleasedCamera;                                          // 0x25E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D17C[0x4];                                   // 0x25E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraHUDWidgetClass;                                    // 0x25E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UUserWidget*                                         SpawnedCameraHUDWidget;                                  // 0x25F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              ConsoleName;                                             // 0x25F8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    VisionMode;                                              // 0x2608(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8ZRY[0x4];                                   // 0x260C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      postprocessBuffs;                                        // 0x2610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            helmetOverlayPostprocess;                                // 0x2620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLinearColor>                                toggleTints;                                             // 0x2628(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        CurrentTint;                                             // 0x2638(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentFOV;                                              // 0x2648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CXG5[0x4];                                   // 0x264C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              ZoomedFOV;                                               // 0x2650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    ZoomLevel;                                               // 0x2660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBP0[0x4];                                   // 0x2664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastZoomTime;                                            // 0x2668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Index;                                // 0x2670(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_Event_NewRotation;                                // 0x2674(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              K2Node_Event_Name;                                       // 0x2680(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    K2Node_CustomEvent_buffIndex2;                           // 0x2690(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_buffIndex;                            // 0x2694(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UClass*                                              CallFunc_Array_Get_Item;                                 // 0x2698(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_index5;                               // 0x26A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x26A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UClass*                                              CallFunc_Array_Get_Item2;                                // 0x26A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue;                 // 0x26B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue2;                // 0x26B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x26C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasBuff_ReturnValue;                            // 0x26C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7KQH[0x3];                                   // 0x26C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x26CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x26D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MEFU[0x4];                                   // 0x26E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x26E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x26F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x26F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUIO[0x6];                                   // 0x26F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue3;                // 0x26F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue2;               // 0x2700(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x270C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XZBN[0x3];                                   // 0x270D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue4;                // 0x2710(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x2718(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5QEE[0x3];                                   // 0x2719(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x271C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x2720(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2721(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AHKD[0x6];                                   // 0x2722(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CallFunc_Array_Get_Item3;                                // 0x2728(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x2730(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue2;       // 0x2734(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YLJW[0x3];                                   // 0x2735(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter2;                   // 0x2738(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x2740(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClientOrSinglePlayer_Result;                  // 0x2741(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TEJT[0x6];                                   // 0x2742(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue5;                // 0x2748(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsFirstPerson_ReturnValue;                      // 0x2750(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1FAL[0x3];                                   // 0x2751(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue3;               // 0x2754(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x2760(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AAIController*                                       K2Node_DynamicCast_AsAIController;                       // 0x2768(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x2770(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KYYC[0x7];                                   // 0x2771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x2778(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_ImpactNormal;                         // 0x2780(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x278C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x2790(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x2794(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x2798(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x27A0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue4;                           // 0x27AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GEKL[0x3];                                   // 0x27AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x27B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x27B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    K2Node_Event_NewStructure;                               // 0x27C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x27C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue;                // 0x27CC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZYMR[0x3];                                   // 0x27CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_CameraIndex;                                // 0x27D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x27D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6YZF[0x3];                                   // 0x27D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x27D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x27DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Percent_IntInt_ReturnValue;                     // 0x27E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QQLS[0x4];                                   // 0x27E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    CallFunc_Array_Get_Item4;                                // 0x27E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C[0x10];   // 0x27F0(0x0010) UNKNOWN PROPERTY: InterfaceProperty RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x2800(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V16N[0x7];                                   // 0x2801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C2[0x10];  // 0x2808(0x0010) UNKNOWN PROPERTY: InterfaceProperty RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C2
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x2818(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N5HP[0x3];                                   // 0x2819(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetCameraLocation_CameraViewPoint;              // 0x281C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetCameraLocation_CameraRotation;               // 0x2828(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_TeleportTo_ReturnValue;                      // 0x2834(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClient_ReturnValue;                           // 0x2835(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2836(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x2837(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_IntInt_ReturnValue;                // 0x2838(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K5OJ[0x7];                                   // 0x2839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    K2Node_Event_CameraToRemove;                             // 0x2840(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2848(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TFPI[0x3];                                   // 0x2849(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_DamageAmount;                         // 0x284C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FDamageEvent                                        K2Node_CustomEvent_DamageEvent;                          // 0x2850(0x0020) OutParm, Transient, DuplicateTransient, ReferenceParm
		class AController*                                         K2Node_CustomEvent_EventInstigator;                      // 0x2870(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_CustomEvent_DamageCauser;                         // 0x2878(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APawn*                                               CallFunc_K2_GetPawn_ReturnValue;                         // 0x2880(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter3;                   // 0x2888(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast6_CastSuccess;                         // 0x2890(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q90D[0x3];                                   // 0x2891(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Amount;                               // 0x2894(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FDamageEvent                                        K2Node_CustomEvent_Event;                                // 0x2898(0x0020) Transient, DuplicateTransient
		class APawn*                                               K2Node_CustomEvent_Instigator;                           // 0x28B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x28C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_CustomEvent_ForCharacter;                         // 0x28C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bIsSleeping;                          // 0x28D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HH0C[0x7];                                   // 0x28D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x28D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast7_CastSuccess;                         // 0x28E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T5G5[0x7];                                   // 0x28E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHUD_ReturnValue;                      // 0x28E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Index4;                               // 0x28F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Index3;                               // 0x28F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    CallFunc_Array_Get_Item5;                                // 0x28F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C3[0x10];  // 0x2900(0x0010) UNKNOWN PROPERTY: InterfaceProperty RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C3
		bool                                                       K2Node_DynamicCast8_CastSuccess;                         // 0x2910(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue5;                           // 0x2911(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_363N[0x6];                                   // 0x2912(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    CallFunc_Array_Get_Item6;                                // 0x2918(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C4[0x10];  // 0x2920(0x0010) UNKNOWN PROPERTY: InterfaceProperty RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C4
		bool                                                       K2Node_DynamicCast9_CastSuccess;                         // 0x2930(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue6;                           // 0x2931(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPCheckClientPossession_ReturnValue;            // 0x2932(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JL4V[0x5];                                   // 0x2933(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue3;                     // 0x2938(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue7;                           // 0x2940(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N7TW[0x7];                                   // 0x2941(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController2;           // 0x2948(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast10_CastSuccess;                        // 0x2950(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZW7N[0x7];                                   // 0x2951(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue6;                // 0x2958(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDead_ReturnValue;                             // 0x2960(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue8;                           // 0x2961(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2962(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x2963(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NY5Y[0x4];                                   // 0x2964(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    CallFunc_Array_Get_Item7;                                // 0x2968(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClient_ReturnValue2;                          // 0x2970(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue9;                           // 0x2971(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x2972(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X8W7[0x1];                                   // 0x2973(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_CameraIndex2;                         // 0x2974(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_CameraIndex;                          // 0x2978(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CMEL[0x4];                                   // 0x297C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    K2Node_CustomEvent_UpdatedCamera;                        // 0x2980(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    CallFunc_Array_Get_Item8;                                // 0x2988(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue3;                      // 0x2990(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x2994(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NQO3[0x3];                                   // 0x2995(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         CallFunc_Create_ReturnValue;                             // 0x2998(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue10;                          // 0x29A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7N86[0x7];                                   // 0x29A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USecurityCameraHUD_C*                                K2Node_DynamicCast_AsSecurityCameraHUD_C;                // 0x29A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast11_CastSuccess;                        // 0x29B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue11;                          // 0x29B1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue12;                          // 0x29B2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E37E[0x5];                                   // 0x29B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USecurityCameraHUD_C*                                K2Node_DynamicCast_AsSecurityCameraHUD_C2;               // 0x29B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast12_CastSuccess;                        // 0x29C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FPZ6[0x3];                                   // 0x29C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x29C4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		unsigned char                                              UnknownData_YRI1[0x4];                                   // 0x29D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USecurityCameraHUD_C*                                K2Node_DynamicCast_AsSecurityCameraHUD_C3;               // 0x29D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast13_CastSuccess;                        // 0x29E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue13;                          // 0x29E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WVXD[0x2];                                   // 0x29E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x29E4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		unsigned char                                              UnknownData_Z6T9[0x4];                                   // 0x29F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C5[0x10];  // 0x29F8(0x0010) UNKNOWN PROPERTY: InterfaceProperty RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C5
		bool                                                       K2Node_DynamicCast14_CastSuccess;                        // 0x2A08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WM1P[0x3];                                   // 0x2A09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Subtract_IntInt_ReturnValue;                    // 0x2A0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue4;                      // 0x2A10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x2A14(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWLJ[0x3];                                   // 0x2A15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Subtract_IntInt_ReturnValue2;                   // 0x2A18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Index2;                               // 0x2A1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_SelectInt_ReturnValue;                          // 0x2A20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BEI1[0x4];                                   // 0x2A24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C6[0x10];  // 0x2A28(0x0010) UNKNOWN PROPERTY: InterfaceProperty RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C6
		bool                                                       K2Node_DynamicCast15_CastSuccess;                        // 0x2A38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OA7I[0x7];                                   // 0x2A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRemoteCameraData                                   CallFunc_Array_Get_Item9;                                // 0x2A40(0x0020) Transient, DuplicateTransient
		bool                                                       CallFunc_IsValid_ReturnValue14;                          // 0x2A60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2KZR[0x7];                                   // 0x2A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USecurityCameraHUD_C*                                K2Node_DynamicCast_AsSecurityCameraHUD_C4;               // 0x2A68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast16_CastSuccess;                        // 0x2A70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OWQM[0x7];                                   // 0x2A71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x2A78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast17_CastSuccess;                        // 0x2A80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6UHP[0x3];                                   // 0x2A81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_ConsumeMovementInputVector_ReturnValue;         // 0x2A84(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CallFunc_Array_Get_Item10;                               // 0x2A90(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerCameraManager*                         K2Node_DynamicCast_AsShooterPlayerCameraManager;         // 0x2AA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast18_CastSuccess;                        // 0x2AA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_82BD[0x3];                                   // 0x2AA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x2AAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FHitResult                                          CallFunc_GetAimedActor_outHitResult;                     // 0x2AB0(0x0088) Transient, DuplicateTransient
		class APrimalStructure*                                    CallFunc_Array_Get_Item11;                               // 0x2B38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C7[0x10];  // 0x2B40(0x0010) UNKNOWN PROPERTY: InterfaceProperty RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C7
		bool                                                       K2Node_DynamicCast19_CastSuccess;                        // 0x2B50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
		void CanAddCamera(bool* Allowed);
		void GetConsoleID(float* ID);
		void GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index);
		void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
		void ServerUnlinkCamera(int32_t index);
		void SwitchToCameraAtIndex(int32_t CameraIndex);
		void BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
		void BP_OnZoomOut();
		void BP_OnZoomIn();
		void CycleVisionMode();
		void ConcedeInputHandlingtoUI();
		void ResumeInputHandling();
		struct FVector BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter);
		bool BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter);
		void CameraTick();
		void RemoveCameraData(class APrimalStructure* CamToRemove);
		void AddCamera(class APrimalStructure* NewCam);
		class AActor* BPGetOtherActorToIgnore();
		void ReleaseCamera();
		void ReceiveDestroyed();
		void BPTriggerStasisEvent();
		void BPUnstasis();
		void SetCameraData(int32_t CurrentIndex, TArray<class APrimalStructure*>* LinkedCameras_Server);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		ECameraStyle BPForceCameraStyle(class APrimalCharacter* ForViewTarget);
		void BPDinoPostBeginPlay();
		void ReceivePossessed(class AController* NewController);
		bool BPCanCryo(class AShooterPlayerController* ForPC);
		bool BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void SetupScoutDisconnect(float DelayTimeSeconds);
		void DestroyScout();
		struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
		void ClearExpiredDinoAIData();
		EStencilAlliance BPOverrideStencilAllianceForTarget(class APrimalCharacter* TargetDino, class UPrimitiveComponent* Component);
		bool BPShouldCancelDoAttack(int32_t AttackIndex);
		void OnRep_LowStamina();
		void ReceiveTick(float DeltaSeconds);
		void ScoutIsFirstPerson(bool* Retval);
		bool BPHandleOnStopFire();
		void SetTargetImpactMaterial(float ImpactDistance);
		bool BPPreventStasis();
		void IsScoutFirstPerson(bool* IsFirstPerson);
		void SetFirstPersonMaterial(bool IsFirstPerson);
		void IsServerOrSinglePlayer(bool* Result);
		void IsClientOrSinglePlayer(bool* Result);
		float BP_GetCustomModifier_RotationRate();
		float BP_GetCustomModifier_MaxSpeed();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void BP_OnSetDeath();
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		void ReleasePossessingSurvivor();
		void GetPossessedByPlayer();
		void SpawnedfromStructure(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class APrimalStructure* LinkedStructure);
		bool BPIsValidUnStasisCaster();
		void UserConstructionScript();
		void InpActEvt_Crouch_K2Node_InputActionEvent_146();
		void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_145();
		void InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_144();
		void InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_143();
		void InpActEvt_Jump_K2Node_InputActionEvent_142();
		void InpActEvt_Run_K2Node_InputActionEvent_141();
		void InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_140();
		void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54();
		void UpdateCameraRotation(const struct FRotator& NewRotation);
		void UpdateConsoleName(const class FString& Name);
		void ActivateCamera();
		void Server_AddPostProcessBuffToPlayer(int32_t BuffIndex);
		void Server_RemovePostProcessBuffFromPlayer(int32_t BuffIndex);
		void Server_RemoveAllPostProcessBuffs();
		void RemovePostProcessBuff(int32_t index);
		void ReleasePossessingSurvivorAndDestroy();
		void ReceiveBeginPlay();
		void SpawnEnd();
		void TriggerDisconnectFX();
		void PossessedByPlayer();
		void MULTI_ReleasePossessingSurvivor();
		void DelayedDestroyActor();
		void ServerHandleOnStopFire();
		void ClientCheckClearExpiredDinoData();
		void DisableAI();
		void ClientHitTerrain(const struct FVector& ImpactNormal);
		void AddNewCamera(class APrimalStructure* NewStructure);
		void SetCurrentCamera(int32_t CameraIndex);
		void ServerNextCamera();
		void ConsoleDeactivated();
		void UpdateScoutVisionBuff();
		void RemoveCamera(class APrimalStructure* CameraToRemove);
		void OnNotifyDamage_Event(float DamageAmount, struct FDamageEvent* DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		void ListenForPlayerDamage();
		void ClientNotifyHit(float amount, const struct FDamageEvent& Event, class APawn* Instigator);
		void OnSleepStateChanged_Event(class APrimalCharacter* forCharacter, bool bIsSleeping);
		void ClientActivateCamera(int32_t index);
		void ClientReleaseCamera(int32_t index);
		void DelayedActivateCamera();
		void DelayedReleaseCamera();
		void VerifyPossession();
		void VerifyPossessingSurvivor();
		void ServerUpdateCameraInfo(int32_t CameraIndex);
		void ClientUpdateCameraInfo(int32_t CameraIndex, class APrimalStructure* UpdatedCamera);
		void SpawnCameraHUD();
		void DestroyCameraHUD();
		void ServerPreviousCamera();
		void ServerSwitchToCameraAtIndex(int32_t index);
		void ClientUpdateHUDInfo();
		void StopPossessingPlayerMovement();
		void ServerConfirmActivation();
		void UnlinkCamera(int32_t index);
		void ExecuteUbergraph_RemoteCamera_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
