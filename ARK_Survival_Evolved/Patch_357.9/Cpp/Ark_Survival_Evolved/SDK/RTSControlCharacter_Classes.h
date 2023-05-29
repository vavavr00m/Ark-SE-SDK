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
	 * BlueprintGeneratedClass RTSControlCharacter.RTSControlCharacter_C
	 * Size -> 0x04D0 (FullSize[0x2748] - InheritedSize[0x2278])
	 */
	class ARTSControlCharacter_C : public APrimalDinoCharacter
	{
	public:
		unsigned char                                              UnknownData_FJPI[0x8];                                   // 0x2278(0x0008) Fix Super Size
		float                                                      MoveSpeed;                                               // 0x2280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3FN4[0x4];                                   // 0x2284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            TheOriginalController;                                   // 0x2288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MouseMoveSpeedX;                                         // 0x2290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           MouseScreenPercentage;                                   // 0x2294(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MouseMoveSpeedY;                                         // 0x229C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeReplicatedPosition;                              // 0x22A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MouseCameraPanSpeedMin;                                  // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MouseCameraPanSpeedMax;                                  // 0x22AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraMinZ;                                              // 0x22B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraMaxZ;                                              // 0x22B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraSmoothZoomSpeed;                                   // 0x22B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraZoomStepAmountMin;                                 // 0x22BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraZoomStepAmountMax;                                 // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FZA7[0x4];                                   // 0x22C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalDinoCharacter*>                        SelectedCharacters;                                      // 0x22C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UTexture2D*                                          SelectionIcon;                                           // 0x22D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              LastOrderedEffect;                                       // 0x22E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             DragBoxStartWorldPoint;                                  // 0x22E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraAbsoluteMaxZ;                                      // 0x22F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              FollowEmitter;                                           // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinSelectionBoundsRadiusMultiplier;                      // 0x2300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxSelectionBoundsRadiusMultiplier;                      // 0x2304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxSelectionBoundsRadius;                                // 0x2308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinSelectionBoundsRadius;                                // 0x230C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FDinoSelectionGroup>                         SelectionGroups;                                         // 0x2310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<double>                                             PressedGroupKeyTime;                                     // 0x2320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bIsShiftHeld;                                            // 0x2330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C11V[0x7];                                   // 0x2331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalDinoCharacter*>                        LastReplicatedSelectedCharacters;                        // 0x2338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class APrimalDinoCharacter*>                        ServerReceivedSelectedCharacters;                        // 0x2348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    LastDinoGroupIndexHeld;                                  // 0x2358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CamZCharacterOffsetMin;                                  // 0x235C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CamZCharacterOffsetMax;                                  // 0x2360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OLO9[0x4];                                   // 0x2364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                TheOriginalDino;                                         // 0x2368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxRangeFromOwnerPlayerChar;                             // 0x2370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EnemyCoreStructureCheckRadius;                           // 0x2374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxNumSelectableDinos;                                   // 0x2378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E5D5[0x4];                                   // 0x237C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeShowMouseCursor;                                 // 0x2380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAttachToOwner;                                          // 0x2388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z2XZ[0x7];                                   // 0x2389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             GroupKeyDoubleClickTime;                                 // 0x2390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      DoubleClickThreshold;                                    // 0x23A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PBPW[0x4];                                   // 0x23A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          MoveToSound;                                             // 0x23A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundWave*                                          AttackSound;                                             // 0x23B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundWave*                                          FollowSound;                                             // 0x23B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundWave*                                          CancelOrderSound;                                        // 0x23C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundWave*                                          SetGroupSound;                                           // 0x23C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundWave*                                          SelectGroupSound;                                        // 0x23D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LeftMouseDoubleClickTime;                                // 0x23D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsControlHeld;                                          // 0x23E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsGamepadLB_Held;                                       // 0x23E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsGamepadRB_Held;                                       // 0x23E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TRTQ[0x5];                                   // 0x23E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExoSuitRtsGamepadHUD_C*                             KeybindHelpUI;                                           // 0x23E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Cursor_Default;                                          // 0x23F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Cursor_Add;                                              // 0x23F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Cursor_Remove;                                           // 0x2400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Cursor_MoveTo;                                           // 0x2408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Cursor_Follow;                                           // 0x2410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Cursor_Attack;                                           // 0x2418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Cursor_MapEdge;                                          // 0x2420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CursorSize;                                              // 0x2428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsForceClosing;                                         // 0x242C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsUsingAnyRadialSelector_ReturnValue;           // 0x242D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PYBR[0x2];                                   // 0x242E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x2430(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x2434(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue7;                        // 0x2438(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue6;                        // 0x243C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_FloatFloat_ReturnValue;                // 0x2440(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_FloatFloat_ReturnValue2;               // 0x2441(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O2WK[0x2];                                   // 0x2442(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x2444(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x2450(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x2454(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x2458(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue5;                        // 0x245C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x2460(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_ViewLoc;                              // 0x2464(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue;                // 0x2470(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NZX4[0x7];                                   // 0x2471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_ForCharacter2;                        // 0x2478(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_MoveToLoc;                            // 0x2480(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDinoValidToPossess_IsValid;                   // 0x248C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q2WF[0x3];                                   // 0x248D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x2490(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x249C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x24A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x24A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x24A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_MapRange_ReturnValue;                           // 0x24AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x24B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x24B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x24B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue3;                            // 0x24BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x24C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue2;                        // 0x24CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue2;               // 0x24D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue3;               // 0x24D9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2CDL[0x6];                                   // 0x24DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_ForCharacter;                         // 0x24E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_CustomEvent_AttackTarget;                         // 0x24E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x24F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDinoValidToPossess_IsValid2;                  // 0x24F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x24F2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x24F3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_046I[0x4];                                   // 0x24F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalDinoCharacter*>                        K2Node_CustomEvent_Dinos;                                // 0x24F8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       K2Node_CustomEvent_bEnable;                              // 0x2508(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S4VX[0x3];                                   // 0x2509(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x250C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2510(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MBRZ[0x7];                                   // 0x2511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                CallFunc_Array_Get_Item;                                 // 0x2518(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x2520(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x2521(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x2522(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4TTF[0x5];                                   // 0x2523(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDinoSelectionGroup>                         K2Node_CustomEvent_Groups3;                              // 0x2528(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x2538(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2O6Q[0x7];                                   // 0x2539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x2540(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x2548(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9N2T[0x4];                                   // 0x2554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x2558(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2560(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GCZI[0x3];                                   // 0x2561(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X3;                                 // 0x2564(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y3;                                 // 0x2568(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z3;                                 // 0x256C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue;                 // 0x2570(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x2578(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X4;                                 // 0x2584(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y4;                                 // 0x2588(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z4;                                 // 0x258C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue3;                        // 0x2590(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue4;               // 0x259C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5F46[0x3];                                   // 0x259D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_MapRange_ReturnValue2;                          // 0x25A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_AllowTribeGroupPermission_ReturnValue;          // 0x25A4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TEPA[0x3];                                   // 0x25A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x25A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x25AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x25B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x25B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OS08[0x4];                                   // 0x25BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController2;           // 0x25C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x25C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JKPZ[0x3];                                   // 0x25C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x25CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x25D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue4;                        // 0x25D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue3;                    // 0x25E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue5;               // 0x25E4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0FTB[0x3];                                   // 0x25E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FClamp_ReturnValue4;                            // 0x25E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue5;               // 0x25EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue5;                        // 0x25F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue4;                    // 0x25FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue6;               // 0x2600(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RQ6Q[0x3];                                   // 0x2601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_MakeVector_ReturnValue6;                        // 0x2604(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue7;               // 0x2610(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KP2Q[0x3];                                   // 0x2611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_InputAxisEvent_AxisValue4;                        // 0x2614(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue3;                        // 0x2618(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue2;                        // 0x261C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue;                         // 0x2620(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G5BF[0x4];                                   // 0x2624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x2628(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Conv_FloatToDouble_ReturnValue;                 // 0x2630(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue;              // 0x2638(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_DoubleDouble_ReturnValue;             // 0x2640(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GVBA[0x7];                                   // 0x2641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterHUD*                                         CallFunc_GetShooterHUD_ReturnValue;                      // 0x2648(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x2650(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2651(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TJH8[0x2];                                   // 0x2652(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_SelectInt_ReturnValue;                          // 0x2654(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2658(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LTR7[0x3];                                   // 0x2659(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_SelectInt_ReturnValue2;                         // 0x265C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<struct FDinoSelectionGroup>                         K2Node_CustomEvent_Groups2;                              // 0x2660(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<class APrimalDinoCharacter*>                        K2Node_CustomEvent_Selected;                             // 0x2670(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsValid_ReturnValue4;                           // 0x2680(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INGV[0x7];                                   // 0x2681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPlayerCharacter_ReturnValue2;                // 0x2688(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                CallFunc_GetRidingDino_ReturnValue;                      // 0x2690(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue5;                           // 0x2698(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GTM0[0x7];                                   // 0x2699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPNetExecParams                                    K2Node_MakeStruct_BPNetExecParams;                       // 0x26A0(0x0040) Transient, DuplicateTransient
		bool                                                       CallFunc_BPServerHandleNetExecCommand_ReturnValue;       // 0x26E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x26E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x26E2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x26E3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x26E4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B2QJ[0x3];                                   // 0x26E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDinoSelectionGroup>                         K2Node_CustomEvent_Groups;                               // 0x26E8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsUsingAnyRadialSelector_ReturnValue2;          // 0x26F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VRAX[0x7];                                   // 0x26F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x2700(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x2710(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_SphereTraceSingleForObjects_ActorsToIgnore_RefProperty; // 0x2720(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		double                                                     CallFunc_Array_Set_Item_RefProperty;                     // 0x2730(0x0008) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_SphereTraceSingleForObjects_ActorsToIgnore2_RefProperty; // 0x2738(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ToggleKeybindUI();
		void UpdateSelection(class APrimalDinoCharacter* Dino);
		void RemoveClassFromSelection();
		void RemoveGroupFromSelection(int32_t groupIndex);
		void RemoveSelectionFromGroup(int32_t groupIndex);
		void UpdateCursorLocation(float AxisValue, bool IsX);
		void CalcCursorOffset(bool* UseOffsets, float* CursorRotation, float* X_Offset, float* Y_Offset);
		void DrawCursor(class AShooterHUD* ShooterHUD, float X, float Y);
		bool BPHandleUseButtonPress(class AShooterPlayerController* RiderController);
		void BPOverrideHeldItemSlot(int32_t ItemSlot);
		void BPOverrideReleaseItemSlot(int32_t ItemSlot);
		void BPOverrideUseItemSlot(int32_t ItemSlot);
		void TrimSelectedCharacters();
		void IsValidRTSControlLocatioon(class UWorld* TheWorld, const struct FVector& AtLoc, class AShooterGameMode* TheGameMode, class AShooterPlayerController* ShooterPC, bool* bIsValid);
		void GetActorUnderCursor(class AActor** TargetActor);
		void BPLocalUnpossessed();
		void UnpossessThis(class AController* ForController);
		void ReceivePossessed(class AController* NewController);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void IsDinoOnScreen(class APrimalDinoCharacter* dinoChar, bool* bOnScreen);
		void SelectAllDinos();
		void CenterCameraOnSelection();
		void ReceiveDestroyed();
		void ServerClearAllDinoSelections();
		void ServerSetDinoSelected(class APrimalDinoCharacter* theDino, bool bSelected);
		void NetServerReceiveSelectedCharacters(TArray<class APrimalDinoCharacter*>* SelectedChars);
		void DrawActorSelectionBox(class APlayerController* thePC, class UCanvas* thecanvas, class ACharacter* TheTargetChar, const struct FLinearColor& DrawColor);
		void UseDinoSelectionGroup(int32_t groupIndex, bool bPressed);
		void GetCurrentWorldPointUnderCursor(struct FVector* OutPoint);
		void SelectionReleased();
		void SelectionPressed();
		void OrderPressed();
		void GetPointOrTargetUnderCursor(struct FVector* TargetPoint, class AActor** TheTargetActor);
		void BPLocalPossessedBy(class APlayerController* ByController);
		void UpdateLocalPlayer();
		void IsDinoValidToPossess(class APrimalDinoCharacter* DinoToPossess, bool* IsValid);
		void GetDinoUnderCursor(class APrimalDinoCharacter** OutDino);
		void ReceiveTick(float DeltaSeconds);
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
		void UserConstructionScript();
		void InpActEvt_ZoomIn_K2Node_InputActionEvent_398();
		void InpActEvt_ZoomOut_K2Node_InputActionEvent_397();
		void InpActEvt_LeftShift_K2Node_InputKeyEvent_84();
		void InpActEvt_LeftShift_K2Node_InputKeyEvent_83();
		void InpActEvt_UseItem1_K2Node_InputActionEvent_396();
		void InpActEvt_UseItem1_K2Node_InputActionEvent_395();
		void InpActEvt_UseItem2_K2Node_InputActionEvent_394();
		void InpActEvt_UseItem2_K2Node_InputActionEvent_393();
		void InpActEvt_UseItem3_K2Node_InputActionEvent_392();
		void InpActEvt_UseItem3_K2Node_InputActionEvent_391();
		void InpActEvt_UseItem4_K2Node_InputActionEvent_390();
		void InpActEvt_UseItem4_K2Node_InputActionEvent_389();
		void InpActEvt_UseItem5_K2Node_InputActionEvent_388();
		void InpActEvt_UseItem5_K2Node_InputActionEvent_387();
		void InpActEvt_UseItem6_K2Node_InputActionEvent_386();
		void InpActEvt_UseItem6_K2Node_InputActionEvent_385();
		void InpActEvt_UseItem7_K2Node_InputActionEvent_384();
		void InpActEvt_UseItem7_K2Node_InputActionEvent_383();
		void InpActEvt_UseItem8_K2Node_InputActionEvent_382();
		void InpActEvt_UseItem8_K2Node_InputActionEvent_381();
		void InpActEvt_UseItem9_K2Node_InputActionEvent_380();
		void InpActEvt_UseItem9_K2Node_InputActionEvent_379();
		void InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378();
		void InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377();
		void InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376();
		void InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375();
		void InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374();
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_82();
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_81();
		void InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373();
		void InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372();
		void InpActEvt_UseItem10_K2Node_InputActionEvent_371();
		void InpActEvt_UseItem10_K2Node_InputActionEvent_370();
		void InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369();
		void InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368();
		void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367();
		void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366();
		void InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365();
		void InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364();
		void InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363();
		void InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362();
		void InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361();
		void InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360();
		void InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359();
		void InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358();
		void InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357();
		void InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356();
		void InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355();
		void InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354();
		void InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353();
		void InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352();
		void InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351();
		void InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350();
		void InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349();
		void InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348();
		void InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347();
		void InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346();
		void InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345();
		void InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344();
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40(float AxisValue);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52(float AxisValue);
		void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115(float AxisValue);
		void NetServerSetLoc(const struct FVector& viewLoc);
		void NetServerRequestedDinoMoveTo(class APrimalDinoCharacter* forCharacter, const struct FVector& MoveToLoc);
		void NetServerRequestedDinoTarget(class APrimalDinoCharacter* forCharacter, class AActor* attackTarget);
		void ServerDinosStopAndHold(TArray<class APrimalDinoCharacter*>* Dinos, bool bEnable);
		void SetDinoGroup();
		void RequestExit(TArray<struct FDinoSelectionGroup>* Groups);
		void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111(float AxisValue);
		void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118(float AxisValue);
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_132(float AxisValue);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_163(float AxisValue);
		void ClientSetSelectionsEvent(TArray<struct FDinoSelectionGroup>* Groups, TArray<class APrimalDinoCharacter*>* Selected);
		void SetGroupsOnServerEvent(TArray<struct FDinoSelectionGroup>* Groups);
		void ExecuteUbergraph_RTSControlCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
