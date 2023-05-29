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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInterceptUseAction
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPInterceptUseAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventTekArmorBuffs
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPPreventTekArmorBuffs_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.InterceptInstigatorPlayerEmoteAnim
	 */
	struct ABuff_BrainSlug_HumanControl_C_InterceptInstigatorPlayerEmoteAnim_Params
	{
	public:
		class UAnimMontage*                                        EmoteAnim;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInstigatorSleeped
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPInstigatorSleeped_Params
	{
	public:
		bool                                                       bIsSleeped;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DrawBuffFloatingHUD
	 */
	struct ABuff_BrainSlug_HumanControl_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8XU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetForcedBuffAimOverride
	 */
	struct ABuff_BrainSlug_HumanControl_C_GetForcedBuffAimOverride_Params
	{
	public:
		bool                                                       bIsWeaponAim;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_149W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPTryMultiUse
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPGetMultiUseEntries
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UpdatePuppetteerStatus
	 */
	struct ABuff_BrainSlug_HumanControl_C_UpdatePuppetteerStatus_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideCharacterWalkingVelocity
	 */
	struct ABuff_BrainSlug_HumanControl_C_BP_OverrideCharacterWalkingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Friction;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventFirstPerson
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveForwardInput
	 */
	struct ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveForwardInput_Params
	{
	public:
		float                                                      CurrentInput;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveRightInput
	 */
	struct ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveRightInput_Params
	{
	public:
		float                                                      CurrentInput;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPOverrideCameraViewTarget
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0FUS[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AHNX[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YMZA[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetBestAggressionTarget
	 */
	struct ABuff_BrainSlug_HumanControl_C_GetBestAggressionTarget_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPCheckPreventInput
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreSetupForInstigator
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveDestroyed
	 */
	struct ABuff_BrainSlug_HumanControl_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPDeactivated
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPSetupForInstigator
	 */
	struct ABuff_BrainSlug_HumanControl_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UserConstructionScript
	 */
	struct ABuff_BrainSlug_HumanControl_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.LaunchClearOfAttachment
	 */
	struct ABuff_BrainSlug_HumanControl_C_LaunchClearOfAttachment_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveBeginPlay
	 */
	struct ABuff_BrainSlug_HumanControl_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GenerateRandomWalk
	 */
	struct ABuff_BrainSlug_HumanControl_C_GenerateRandomWalk_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DisableLookAndMove
	 */
	struct ABuff_BrainSlug_HumanControl_C_DisableLookAndMove_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickClient
	 */
	struct ABuff_BrainSlug_HumanControl_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickServer
	 */
	struct ABuff_BrainSlug_HumanControl_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_UpdateRotation
	 */
	struct ABuff_BrainSlug_HumanControl_C_Multi_UpdateRotation_Params
	{
	public:
		bool                                                       SetsRotation;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ED4R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            newRot;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_SetBrainCameraOverrides
	 */
	struct ABuff_BrainSlug_HumanControl_C_Multi_SetBrainCameraOverrides_Params
	{
	public:
		struct FRotator                                            newRot;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewAimDir;                                               // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerFireWeapon
	 */
	struct ABuff_BrainSlug_HumanControl_C_ServerFireWeapon_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ForceFireWeapon
	 */
	struct ABuff_BrainSlug_HumanControl_C_ForceFireWeapon_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.TryFire
	 */
	struct ABuff_BrainSlug_HumanControl_C_TryFire_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DealDamageTick
	 */
	struct ABuff_BrainSlug_HumanControl_C_DealDamageTick_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_AddMoveInput
	 */
	struct ABuff_BrainSlug_HumanControl_C_Multi_AddMoveInput_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerJump
	 */
	struct ABuff_BrainSlug_HumanControl_C_ServerJump_Params
	{
	public:
		bool                                                       bStartJump;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.MultiJump
	 */
	struct ABuff_BrainSlug_HumanControl_C_MultiJump_Params
	{
	public:
		bool                                                       bStartJump;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerTryRepossesion
	 */
	struct ABuff_BrainSlug_HumanControl_C_ServerTryRepossesion_Params
	{
	public:
		class AShooterPlayerController*                            NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_EnablePossession
	 */
	struct ABuff_BrainSlug_HumanControl_C_Multi_EnablePossession_Params
	{
	public:
		class AShooterPlayerController*                            NewPossessingPC;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BeginPossessionResponse
	 */
	struct ABuff_BrainSlug_HumanControl_C_BeginPossessionResponse_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerDeath
	 */
	struct ABuff_BrainSlug_HumanControl_C_RespondToPlayerDeath_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerSleep
	 */
	struct ABuff_BrainSlug_HumanControl_C_RespondToPlayerSleep_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsSleeping;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DoMultiUseAccessInventory
	 */
	struct ABuff_BrainSlug_HumanControl_C_DoMultiUseAccessInventory_Params
	{	};

	/**
	 * Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ExecuteUbergraph_Buff_BrainSlug_HumanControl
	 */
	struct ABuff_BrainSlug_HumanControl_C_ExecuteUbergraph_Buff_BrainSlug_HumanControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
