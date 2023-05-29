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
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.AllowPlayMontage
	 */
	struct AFenrir_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LQBX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTimerServer
	 */
	struct AFenrir_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BoostNearbyDirewolves
	 */
	struct AFenrir_Character_BP_C_BoostNearbyDirewolves_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct AFenrir_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPSetupTamed
	 */
	struct AFenrir_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateNaturalArmor
	 */
	struct AFenrir_Character_BP_C_UpdateNaturalArmor_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AFenrir_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateRiderBuff
	 */
	struct AFenrir_Character_BP_C_UpdateRiderBuff_Params
	{
	public:
		bool                                                       Remove;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PGVQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   Rider;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPAdjustDamage
	 */
	struct AFenrir_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YVNV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NLFT[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W3MA[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPGetHUDElements
	 */
	struct AFenrir_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.SpawnIceBiteVFX
	 */
	struct AFenrir_Character_BP_C_SpawnIceBiteVFX_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BP_OnSetDeath
	 */
	struct AFenrir_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetupSpineMats
	 */
	struct AFenrir_Character_BP_C_SetupSpineMats_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifyClearRider
	 */
	struct AFenrir_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanJumpInternal
	 */
	struct AFenrir_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifySetRider
	 */
	struct AFenrir_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTriggerStasisEvent
	 */
	struct AFenrir_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDoAttack
	 */
	struct AFenrir_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AFenrir_Character_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.UnriddenEndIceState
	 */
	struct AFenrir_Character_BP_C_UnriddenEndIceState_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPOnStaminaDrained
	 */
	struct AFenrir_Character_BP_C_BPOnStaminaDrained_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanAttack
	 */
	struct AFenrir_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2YKP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TAOB[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AFenrir_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina
	 */
	struct AFenrir_Character_BP_C_DoesFenrirHaveEnoughStamina_Params
	{
	public:
		float                                                      needsStamina;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X7OP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina Pure
	 */
	struct AFenrir_Character_BP_C_DoesFenrirHaveEnoughStaminaPure_Params
	{
	public:
		float                                                      needsStamina;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanUseIceState
	 */
	struct AFenrir_Character_BP_C_CanUseIceState_Params
	{
	public:
		bool                                                       isForStart;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CX5O[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.NetSetUseSpines
	 */
	struct AFenrir_Character_BP_C_NetSetUseSpines_Params
	{
	public:
		bool                                                       newUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.OnRep_IsIcey
	 */
	struct AFenrir_Character_BP_C_OnRep_IsIcey_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir
	 */
	struct AFenrir_Character_BP_C_InitFenrir_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetIceStateActive
	 */
	struct AFenrir_Character_BP_C_SetIceStateActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AFenrir_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.UserConstructionScript
	 */
	struct AFenrir_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__FinishedFunc
	 */
	struct AFenrir_Character_BP_C_Fade_IceSpines__FinishedFunc_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__UpdateFunc
	 */
	struct AFenrir_Character_BP_C_Fade_IceSpines__UpdateFunc_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__FinishedFunc
	 */
	struct AFenrir_Character_BP_C_Timeline_PlayDissolve__FinishedFunc_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__UpdateFunc
	 */
	struct AFenrir_Character_BP_C_Timeline_PlayDissolve__UpdateFunc_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__FinishedFunc
	 */
	struct AFenrir_Character_BP_C_Timeline_ClearEmissive__FinishedFunc_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__UpdateFunc
	 */
	struct AFenrir_Character_BP_C_Timeline_ClearEmissive__UpdateFunc_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayFadeIceSpines
	 */
	struct AFenrir_Character_BP_C_PlayFadeIceSpines_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReverseFadeIceSpines
	 */
	struct AFenrir_Character_BP_C_ReverseFadeIceSpines_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetNewTime_Fade_IceSpines
	 */
	struct AFenrir_Character_BP_C_SetNewTime_Fade_IceSpines_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_SetNewTime_Fade_IceSpines
	 */
	struct AFenrir_Character_BP_C_Multi_SetNewTime_Fade_IceSpines_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PlayFade
	 */
	struct AFenrir_Character_BP_C_Multi_PlayFade_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_HardSetSpinesActive
	 */
	struct AFenrir_Character_BP_C_Multi_HardSetSpinesActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReceiveBeginPlay
	 */
	struct AFenrir_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir_NextTick
	 */
	struct AFenrir_Character_BP_C_InitFenrir_NextTick_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenir_Event
	 */
	struct AFenrir_Character_BP_C_InitFenir_Event_Params
	{	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PrepIceState
	 */
	struct AFenrir_Character_BP_C_Multi_PrepIceState_Params
	{
	public:
		bool                                                       Prevent;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayDissolve
	 */
	struct AFenrir_Character_BP_C_PlayDissolve_Params
	{
	public:
		bool                                                       Is0To1;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.ClearEmissive
	 */
	struct AFenrir_Character_BP_C_ClearEmissive_Params
	{
	public:
		float                                                      StartingEmissive;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fenrir_Character_BP.Fenrir_Character_BP_C.ExecuteUbergraph_Fenrir_Character_BP
	 */
	struct AFenrir_Character_BP_C_ExecuteUbergraph_Fenrir_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
