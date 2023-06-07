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
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoFoodVals
	 */
	struct ABuff_Glider_Sino_C_GetSinoFoodVals_Params
	{
	public:
		float                                                      current;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderSFX
	 */
	struct ABuff_Glider_Sino_C_UpdateGliderSFX_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateVelocityForVFX
	 */
	struct ABuff_Glider_Sino_C_UpdateVelocityForVFX_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InitGlider
	 */
	struct ABuff_Glider_Sino_C_InitGlider_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.BP_ModifyCharacterFOV
	 */
	struct ABuff_Glider_Sino_C_BP_ModifyCharacterFOV_Params
	{
	public:
		float                                                      inFOV;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.DoInjuredJumpIfRequired
	 */
	struct ABuff_Glider_Sino_C_DoInjuredJumpIfRequired_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.CheckIsInNoFlySPZ
	 */
	struct ABuff_Glider_Sino_C_CheckIsInNoFlySPZ_Params
	{
	public:
		bool                                                       IsInNonFlightArea;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PWGI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsGlideFallingFromDamage
	 */
	struct ABuff_Glider_Sino_C_ClearIsGlideFallingFromDamage_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffAdjustDamage
	 */
	struct ABuff_Glider_Sino_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZG4E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttachWingVFX
	 */
	struct ABuff_Glider_Sino_C_AttachWingVFX_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.PlayInsufficientStaminaMessage
	 */
	struct ABuff_Glider_Sino_C_PlayInsufficientStaminaMessage_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderInactiveMeshTargetRotVals
	 */
	struct ABuff_Glider_Sino_C_GetGliderInactiveMeshTargetRotVals_Params
	{
	public:
		struct FRotator                                            Rot;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InterpSpeed;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetCanDoubleJump
	 */
	struct ABuff_Glider_Sino_C_GetCanDoubleJump_Params
	{
	public:
		bool                                                       CanDoubleJump;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsDoubleJumping
	 */
	struct ABuff_Glider_Sino_C_ClearIsDoubleJumping_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttemptSetIsDoubleJumping
	 */
	struct ABuff_Glider_Sino_C_AttemptSetIsDoubleJumping_Params
	{
	public:
		bool                                                       isDoubleJumping;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderMesh
	 */
	struct ABuff_Glider_Sino_C_GetGliderMesh_Params
	{
	public:
		bool                                                       foundMesh;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QG0G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              meshRef;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearOwnerIgnoreWater
	 */
	struct ABuff_Glider_Sino_C_ClearOwnerIgnoreWater_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetIsCloseToWaterSurface
	 */
	struct ABuff_Glider_Sino_C_GetIsCloseToWaterSurface_Params
	{
	public:
		bool                                                       IsClose;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSwimming;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1LTD[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickServer
	 */
	struct ABuff_Glider_Sino_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.Can Use Glider
	 */
	struct ABuff_Glider_Sino_C_CanUseGlider_Params
	{
	public:
		bool                                                       isToStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExCanUseSinoMovementState
	 */
	struct ABuff_Glider_Sino_C_ExCanUseSinoMovementState_Params
	{
	public:
		E_SinoMovementState                                        MovementState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanEnter;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderByState_ServerAndClient
	 */
	struct ABuff_Glider_Sino_C_UpdateGliderByState_ServerAndClient_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOnInstigatorMovementModeChangedNotify
	 */
	struct ABuff_Glider_Sino_C_BPOnInstigatorMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_Glider_Sino_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.HideBuffFromHUD
	 */
	struct ABuff_Glider_Sino_C_HideBuffFromHUD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentSinoState
	 */
	struct ABuff_Glider_Sino_C_NetSetCurrentSinoState_Params
	{
	public:
		E_SinoMovementState                                        NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentGliderState
	 */
	struct ABuff_Glider_Sino_C_NetSetCurrentGliderState_Params
	{
	public:
		E_GliderStates                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2MXD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.CanUseSinoMovement
	 */
	struct ABuff_Glider_Sino_C_CanUseSinoMovement_Params
	{
	public:
		E_SinoMovementState                                        MovementType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanUse;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickClient
	 */
	struct ABuff_Glider_Sino_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoStaminaVals
	 */
	struct ABuff_Glider_Sino_C_GetSinoStaminaVals_Params
	{
	public:
		float                                                      current;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateBuffDescription
	 */
	struct ABuff_Glider_Sino_C_UpdateBuffDescription_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.RefreshMountedSinoMovementState
	 */
	struct ABuff_Glider_Sino_C_RefreshMountedSinoMovementState_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnRep_SinoMovementState
	 */
	struct ABuff_Glider_Sino_C_OnRep_SinoMovementState_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.UserConstructionScript
	 */
	struct ABuff_Glider_Sino_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_422
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_422_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_421
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_421_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Crouch_K2Node_InputActionEvent_418
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_Crouch_K2Node_InputActionEvent_418_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Prone_K2Node_InputActionEvent_417
	 */
	struct ABuff_Glider_Sino_C_InpActEvt_Prone_K2Node_InputActionEvent_417_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_RequestChangeSinoMovementState
	 */
	struct ABuff_Glider_Sino_C_Server_RequestChangeSinoMovementState_Params
	{
	public:
		E_SinoMovementState                                        NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Pressed
	 */
	struct ABuff_Glider_Sino_C_OnPlayerJump_Pressed_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Released
	 */
	struct ABuff_Glider_Sino_C_OnPlayerJump_Released_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPDeactivated
	 */
	struct ABuff_Glider_Sino_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_AttemptSetDoubleJump
	 */
	struct ABuff_Glider_Sino_C_Server_AttemptSetDoubleJump_Params
	{
	public:
		bool                                                       IsDoubleJump;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_UpdateSinoStatVals
	 */
	struct ABuff_Glider_Sino_C_Client_UpdateSinoStatVals_Params
	{
	public:
		float                                                      Stam;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      food;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Released
	 */
	struct ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Released_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Pressed
	 */
	struct ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Pressed_Params
	{	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_SetIsGlideFallingFromDam
	 */
	struct ABuff_Glider_Sino_C_Client_SetIsGlideFallingFromDam_Params
	{
	public:
		bool                                                       Set;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExecuteUbergraph_Buff_Glider_Sino
	 */
	struct ABuff_Glider_Sino_C_ExecuteUbergraph_Buff_Glider_Sino_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
