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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ToggleKeybindUI
	 */
	struct ARTSControlCharacter_C_ToggleKeybindUI_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.UpdateSelection
	 */
	struct ARTSControlCharacter_C_UpdateSelection_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.RemoveClassFromSelection
	 */
	struct ARTSControlCharacter_C_RemoveClassFromSelection_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.RemoveGroupFromSelection
	 */
	struct ARTSControlCharacter_C_RemoveGroupFromSelection_Params
	{
	public:
		int32_t                                                    groupIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.RemoveSelectionFromGroup
	 */
	struct ARTSControlCharacter_C_RemoveSelectionFromGroup_Params
	{
	public:
		int32_t                                                    groupIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.UpdateCursorLocation
	 */
	struct ARTSControlCharacter_C_UpdateCursorLocation_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsX;                                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JDW9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.CalcCursorOffset
	 */
	struct ARTSControlCharacter_C_CalcCursorOffset_Params
	{
	public:
		bool                                                       UseOffsets;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S7PS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CursorRotation;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      X_Offset;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Y_Offset;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.DrawCursor
	 */
	struct ARTSControlCharacter_C_DrawCursor_Params
	{
	public:
		class AShooterHUD*                                         ShooterHUD;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      X;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Y;                                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPHandleUseButtonPress
	 */
	struct ARTSControlCharacter_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K8XW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideHeldItemSlot
	 */
	struct ARTSControlCharacter_C_BPOverrideHeldItemSlot_Params
	{
	public:
		int32_t                                                    ItemSlot;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideReleaseItemSlot
	 */
	struct ARTSControlCharacter_C_BPOverrideReleaseItemSlot_Params
	{
	public:
		int32_t                                                    ItemSlot;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideUseItemSlot
	 */
	struct ARTSControlCharacter_C_BPOverrideUseItemSlot_Params
	{
	public:
		int32_t                                                    ItemSlot;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.TrimSelectedCharacters
	 */
	struct ARTSControlCharacter_C_TrimSelectedCharacters_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.IsValidRTSControlLocatioon
	 */
	struct ARTSControlCharacter_C_IsValidRTSControlLocatioon_Params
	{
	public:
		class UWorld*                                              TheWorld;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AtLoc;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_98HF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterGameMode*                                    TheGameMode;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ShooterPC;                                               // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsValid;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.Get ActorUnderCursor
	 */
	struct ARTSControlCharacter_C_GetActorUnderCursor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPLocalUnpossessed
	 */
	struct ARTSControlCharacter_C_BPLocalUnpossessed_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.UnpossessThis
	 */
	struct ARTSControlCharacter_C_UnpossessThis_Params
	{
	public:
		class AController*                                         ForController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ReceivePossessed
	 */
	struct ARTSControlCharacter_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPTryMultiUse
	 */
	struct ARTSControlCharacter_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.IsDinoOnScreen
	 */
	struct ARTSControlCharacter_C_IsDinoOnScreen_Params
	{
	public:
		class APrimalDinoCharacter*                                dinoChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOnScreen;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_44V3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.SelectAllDinos
	 */
	struct ARTSControlCharacter_C_SelectAllDinos_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.CenterCameraOnSelection
	 */
	struct ARTSControlCharacter_C_CenterCameraOnSelection_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ReceiveDestroyed
	 */
	struct ARTSControlCharacter_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ServerClearAllDinoSelections
	 */
	struct ARTSControlCharacter_C_ServerClearAllDinoSelections_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ServerSetDinoSelected
	 */
	struct ARTSControlCharacter_C_ServerSetDinoSelected_Params
	{
	public:
		class APrimalDinoCharacter*                                theDino;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q2V8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.NetServerReceiveSelectedCharacters
	 */
	struct ARTSControlCharacter_C_NetServerReceiveSelectedCharacters_Params
	{
	public:
		TArray<class APrimalDinoCharacter*>                        SelectedChars;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.Draw Actor Selection Box
	 */
	struct ARTSControlCharacter_C_DrawActorSelectionBox_Params
	{
	public:
		class APlayerController*                                   thePC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UCanvas*                                             thecanvas;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ACharacter*                                          TheTargetChar;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        DrawColor;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.UseDinoSelectionGroup
	 */
	struct ARTSControlCharacter_C_UseDinoSelectionGroup_Params
	{
	public:
		int32_t                                                    groupIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPressed;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SAEB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.GetCurrentWorldPointUnderCursor
	 */
	struct ARTSControlCharacter_C_GetCurrentWorldPointUnderCursor_Params
	{
	public:
		struct FVector                                             OutPoint;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9H4Q[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.SelectionReleased
	 */
	struct ARTSControlCharacter_C_SelectionReleased_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.SelectionPressed
	 */
	struct ARTSControlCharacter_C_SelectionPressed_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.OrderPressed
	 */
	struct ARTSControlCharacter_C_OrderPressed_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.GetPointOrTargetUnderCursor
	 */
	struct ARTSControlCharacter_C_GetPointOrTargetUnderCursor_Params
	{
	public:
		struct FVector                                             TargetPoint;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CY0R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TheTargetActor;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPLocalPossessedBy
	 */
	struct ARTSControlCharacter_C_BPLocalPossessedBy_Params
	{
	public:
		class APlayerController*                                   ByController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.UpdateLocalPlayer
	 */
	struct ARTSControlCharacter_C_UpdateLocalPlayer_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.IsDinoValidToPossess
	 */
	struct ARTSControlCharacter_C_IsDinoValidToPossess_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoToPossess;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9TTZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.GetDinoUnderCursor
	 */
	struct ARTSControlCharacter_C_GetDinoUnderCursor_Params
	{
	public:
		class APrimalDinoCharacter*                                OutDino;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ReceiveTick
	 */
	struct ARTSControlCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BlueprintDrawFloatingHUD
	 */
	struct ARTSControlCharacter_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EZDG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideCameraViewTarget
	 */
	struct ARTSControlCharacter_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SOW4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NLY6[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1PED[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.UserConstructionScript
	 */
	struct ARTSControlCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_398
	 */
	struct ARTSControlCharacter_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_398_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_397
	 */
	struct ARTSControlCharacter_C_InpActEvt_ZoomOut_K2Node_InputActionEvent_397_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_84
	 */
	struct ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_84_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_83
	 */
	struct ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_83_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_396
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_396_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_395
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_395_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_394
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_394_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_393
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_393_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_392
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_392_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_391
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_391_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_390
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_390_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_389
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_389_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_388
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_388_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_387
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_387_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_386
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_386_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_385
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_385_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_384
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_384_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_383
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_383_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_382
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_382_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_381
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_381_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_380
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_380_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_379
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_379_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378
	 */
	struct ARTSControlCharacter_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_82
	 */
	struct ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_82_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_81
	 */
	struct ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_81_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_371
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_371_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_370
	 */
	struct ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_370_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344
	 */
	struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40
	 */
	struct ARTSControlCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52
	 */
	struct ARTSControlCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115
	 */
	struct ARTSControlCharacter_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.NetServerSetLoc
	 */
	struct ARTSControlCharacter_C_NetServerSetLoc_Params
	{
	public:
		struct FVector                                             viewLoc;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoMoveTo
	 */
	struct ARTSControlCharacter_C_NetServerRequestedDinoMoveTo_Params
	{
	public:
		class APrimalDinoCharacter*                                forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             MoveToLoc;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoTarget
	 */
	struct ARTSControlCharacter_C_NetServerRequestedDinoTarget_Params
	{
	public:
		class APrimalDinoCharacter*                                forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              attackTarget;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ServerDinosStopAndHold
	 */
	struct ARTSControlCharacter_C_ServerDinosStopAndHold_Params
	{
	public:
		TArray<class APrimalDinoCharacter*>                        Dinos;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       bEnable;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.SetDinoGroup
	 */
	struct ARTSControlCharacter_C_SetDinoGroup_Params
	{	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.RequestExit
	 */
	struct ARTSControlCharacter_C_RequestExit_Params
	{
	public:
		TArray<struct FDinoSelectionGroup>                         Groups;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111
	 */
	struct ARTSControlCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118
	 */
	struct ARTSControlCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_132
	 */
	struct ARTSControlCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_132_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_163
	 */
	struct ARTSControlCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_163_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ClientSetSelectionsEvent
	 */
	struct ARTSControlCharacter_C_ClientSetSelectionsEvent_Params
	{
	public:
		TArray<struct FDinoSelectionGroup>                         Groups;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class APrimalDinoCharacter*>                        Selected;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.SetGroupsOnServerEvent
	 */
	struct ARTSControlCharacter_C_SetGroupsOnServerEvent_Params
	{
	public:
		TArray<struct FDinoSelectionGroup>                         Groups;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function RTSControlCharacter.RTSControlCharacter_C.ExecuteUbergraph_RTSControlCharacter
	 */
	struct ARTSControlCharacter_C_ExecuteUbergraph_RTSControlCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
