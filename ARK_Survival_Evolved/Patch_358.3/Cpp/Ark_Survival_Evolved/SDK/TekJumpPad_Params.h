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
	 * Function TekJumpPad.TekJumpPad_C.ExtraAllowLaunchCheck
	 */
	struct ATekJumpPad_C_ExtraAllowLaunchCheck_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allow;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVEB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_ShowIndicator
	 */
	struct ATekJumpPad_C_OnRep_ShowIndicator_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.SetLaunchPreviewVisibility
	 */
	struct ATekJumpPad_C_SetLaunchPreviewVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1K8O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.TickLaunchPreview
	 */
	struct ATekJumpPad_C_TickLaunchPreview_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPContainerDeactivated
	 */
	struct ATekJumpPad_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPContainerActivated
	 */
	struct ATekJumpPad_C_BPContainerActivated_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPRefreshedStructureColors
	 */
	struct ATekJumpPad_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BlueprintDrawHUD
	 */
	struct ATekJumpPad_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.RandomSetRotation
	 */
	struct ATekJumpPad_C_RandomSetRotation_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_LaunchBounceTriggerSwitchBool
	 */
	struct ATekJumpPad_C_OnRep_LaunchBounceTriggerSwitchBool_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPPlacedStructure
	 */
	struct ATekJumpPad_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_IsSizeBig
	 */
	struct ATekJumpPad_C_OnRep_IsSizeBig_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.SetMaterialParameters
	 */
	struct ATekJumpPad_C_SetMaterialParameters_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.TurnOnJumpPad
	 */
	struct ATekJumpPad_C_TurnOnJumpPad_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_IsActivated
	 */
	struct ATekJumpPad_C_OnRep_IsActivated_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_UseRandomDirection
	 */
	struct ATekJumpPad_C_OnRep_UseRandomDirection_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.LaunchForceToAlpha
	 */
	struct ATekJumpPad_C_LaunchForceToAlpha_Params
	{
	public:
		float                                                      LaunchForce;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_CurrentLaunchForce
	 */
	struct ATekJumpPad_C_OnRep_CurrentLaunchForce_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_LaunchAreaCapsuleHalfHeight
	 */
	struct ATekJumpPad_C_OnRep_LaunchAreaCapsuleHalfHeight_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.UpdateLaunchTriggerTransform
	 */
	struct ATekJumpPad_C_UpdateLaunchTriggerTransform_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewCapsuleHalfHeight;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewLaunchForce;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.OnRep_LaunchRotation
	 */
	struct ATekJumpPad_C_OnRep_LaunchRotation_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPServerHandleNetExecCommand
	 */
	struct ATekJumpPad_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPClientDoMultiUse
	 */
	struct ATekJumpPad_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPGetMultiUseEntries
	 */
	struct ATekJumpPad_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.LaunchCharacter
	 */
	struct ATekJumpPad_C_LaunchCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VelocityMultiplier;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_12Q9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.GetVelocityMultiplierForCharacter
	 */
	struct ATekJumpPad_C_GetVelocityMultiplierForCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowedToLaunch;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ISCL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      VelocityMultiplier;                                      // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BPIsAllowedToBuildEx
	 */
	struct ATekJumpPad_C_BPIsAllowedToBuildEx_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PE42[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   PC;                                                      // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFinalPlacement;                                         // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bChoosingRotation;                                       // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9EJJ[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.GetBuffDefaultDuration
	 */
	struct ATekJumpPad_C_GetBuffDefaultDuration_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeactivateAfterTime;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_80FS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.UserConstructionScript
	 */
	struct ATekJumpPad_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Launchactivate__FinishedFunc
	 */
	struct ATekJumpPad_C_Launchactivate__FinishedFunc_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Launchactivate__UpdateFunc
	 */
	struct ATekJumpPad_C_Launchactivate__UpdateFunc_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Timeline_0__FinishedFunc
	 */
	struct ATekJumpPad_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Timeline_0__UpdateFunc
	 */
	struct ATekJumpPad_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Timeline_1__FinishedFunc
	 */
	struct ATekJumpPad_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Timeline_1__UpdateFunc
	 */
	struct ATekJumpPad_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ATekJumpPad_C_BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SGN7[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ReceiveBeginPlay
	 */
	struct ATekJumpPad_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_RotateToOtherSide
	 */
	struct ATekJumpPad_C_ServerRequest_RotateToOtherSide_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleSize
	 */
	struct ATekJumpPad_C_ServerRequest_ToggleSize_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_Rotate
	 */
	struct ATekJumpPad_C_ServerRequest_Rotate_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceUp
	 */
	struct ATekJumpPad_C_ServerRequest_ForceUp_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceDown
	 */
	struct ATekJumpPad_C_ServerRequest_ForceDown_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleRandom
	 */
	struct ATekJumpPad_C_ServerRequest_ToggleRandom_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_SetPinCode
	 */
	struct ATekJumpPad_C_ServerRequest_SetPinCode_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleActivation
	 */
	struct ATekJumpPad_C_ServerRequest_ToggleActivation_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Client_FloatingPad
	 */
	struct ATekJumpPad_C_Client_FloatingPad_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchMore
	 */
	struct ATekJumpPad_C_ServerRequest_PitchMore_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchLess
	 */
	struct ATekJumpPad_C_ServerRequest_PitchLess_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.Client_LaunchBounce
	 */
	struct ATekJumpPad_C_Client_LaunchBounce_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleIndicator
	 */
	struct ATekJumpPad_C_ServerRequest_ToggleIndicator_Params
	{	};

	/**
	 * Function TekJumpPad.TekJumpPad_C.ExecuteUbergraph_TekJumpPad
	 */
	struct ATekJumpPad_C_ExecuteUbergraph_TekJumpPad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
