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
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventRidingInstigator
	 */
	struct ABuff_BrainSlugControl_C_BPPreventRidingInstigator_Params
	{
	public:
		class APrimalCharacter*                                    ForPawn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DinoInstigatorReceivedRider
	 */
	struct ABuff_BrainSlugControl_C_DinoInstigatorReceivedRider_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorDied
	 */
	struct ABuff_BrainSlugControl_C_BPInstigatorDied_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.SetupInstigatorDinoAndAttachSlug
	 */
	struct ABuff_BrainSlugControl_C_SetupInstigatorDinoAndAttachSlug_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PossessDino;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCB1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPStasis
	 */
	struct ABuff_BrainSlugControl_C_BPStasis_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPUnstasis
	 */
	struct ABuff_BrainSlugControl_C_BPUnstasis_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickClient
	 */
	struct ABuff_BrainSlugControl_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0SKX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSerializeForInstigator
	 */
	struct ABuff_BrainSlugControl_C_BPPreSerializeForInstigator_Params
	{
	public:
		bool                                                       bBeginningSerialize;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_89AN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorReceivedKillingDamage
	 */
	struct ABuff_BrainSlugControl_C_BPInstigatorReceivedKillingDamage_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorSleeped
	 */
	struct ABuff_BrainSlugControl_C_BPInstigatorSleeped_Params
	{
	public:
		bool                                                       bIsSleeped;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPBuffPreventUploading
	 */
	struct ABuff_BrainSlugControl_C_BPBuffPreventUploading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffOverrideInventoryAccessInput
	 */
	struct ABuff_BrainSlugControl_C_BuffOverrideInventoryAccessInput_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInputPressed;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UpdateTimeAndDamageForInstigator
	 */
	struct ABuff_BrainSlugControl_C_UpdateTimeAndDamageForInstigator_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPForceDinoNameTargetingTeamOverride
	 */
	struct ABuff_BrainSlugControl_C_BPForceDinoNameTargetingTeamOverride_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TargetingTeamToCheck;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.EndBrainControlEffects
	 */
	struct ABuff_BrainSlugControl_C_EndBrainControlEffects_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetDinoNameColorOverride
	 */
	struct ABuff_BrainSlugControl_C_BPGetDinoNameColorOverride_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FColor                                              ColorToOverride;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FColor                                              ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DrawBuffFloatingHUD
	 */
	struct ABuff_BrainSlugControl_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MNO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPOverrideTargetingDesire
	 */
	struct ABuff_BrainSlugControl_C_BPOverrideTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventFirstPerson
	 */
	struct ABuff_BrainSlugControl_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetHUDElements
	 */
	struct ABuff_BrainSlugControl_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPTryMultiUse
	 */
	struct ABuff_BrainSlugControl_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetMultiUseEntries
	 */
	struct ABuff_BrainSlugControl_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSetupForInstigator
	 */
	struct ABuff_BrainSlugControl_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveDestroyed
	 */
	struct ABuff_BrainSlugControl_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPDeactivated
	 */
	struct ABuff_BrainSlugControl_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPSetupForInstigator
	 */
	struct ABuff_BrainSlugControl_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UserConstructionScript
	 */
	struct ABuff_BrainSlugControl_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.LaunchClearOfAttachment
	 */
	struct ABuff_BrainSlugControl_C_LaunchClearOfAttachment_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveBeginPlay
	 */
	struct ABuff_BrainSlugControl_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerClearPossessor
	 */
	struct ABuff_BrainSlugControl_C_ServerClearPossessor_Params
	{
	public:
		bool                                                       RetainSlugControl;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_DisableInput
	 */
	struct ABuff_BrainSlugControl_C_Multi_DisableInput_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BeginPossessionResponse
	 */
	struct ABuff_BrainSlugControl_C_BeginPossessionResponse_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerDeath
	 */
	struct ABuff_BrainSlugControl_C_RespondToPlayerDeath_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerSleep
	 */
	struct ABuff_BrainSlugControl_C_RespondToPlayerSleep_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsSleeping;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerTryRepossesion
	 */
	struct ABuff_BrainSlugControl_C_ServerTryRepossesion_Params
	{
	public:
		class AShooterPlayerController*                            NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_EnablePossession
	 */
	struct ABuff_BrainSlugControl_C_Multi_EnablePossession_Params
	{
	public:
		class AShooterPlayerController*                            NewPossessingPC;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickServer
	 */
	struct ABuff_BrainSlugControl_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TryingToClearRider
	 */
	struct ABuff_BrainSlugControl_C_TryingToClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                ForDino;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BindClearRiderEvent
	 */
	struct ABuff_BrainSlugControl_C_BindClearRiderEvent_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.KillAttachedChar
	 */
	struct ABuff_BrainSlugControl_C_KillAttachedChar_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DoMultiUseAccessInventory
	 */
	struct ABuff_BrainSlugControl_C_DoMultiUseAccessInventory_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DelayedDeactivate
	 */
	struct ABuff_BrainSlugControl_C_DelayedDeactivate_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerDeactivate
	 */
	struct ABuff_BrainSlugControl_C_ServerDeactivate_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TestingMessage
	 */
	struct ABuff_BrainSlugControl_C_TestingMessage_Params
	{
	public:
		class FString                                              OutMessage;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_SetupDinos
	 */
	struct ABuff_BrainSlugControl_C_Multi_SetupDinos_Params
	{	};

	/**
	 * Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ExecuteUbergraph_Buff_BrainSlugControl
	 */
	struct ABuff_BrainSlugControl_C_ExecuteUbergraph_Buff_BrainSlugControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
