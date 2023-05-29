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
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Look Out for Timeout
	 */
	struct ABuff_StriderHackingParent_C_LookOutforTimeout_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Fallback
	 */
	struct ABuff_StriderHackingParent_C_Fallback_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Update Buff Timer server logic
	 */
	struct ABuff_StriderHackingParent_C_UpdateBuffTimerserverlogic_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromplayertrigger;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Play Weapon Montage server logic
	 */
	struct ABuff_StriderHackingParent_C_PlayWeaponMontageserverlogic_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isntfromplayerinput;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Started;                                                 // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RFS6[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Recieved Input
	 */
	struct ABuff_StriderHackingParent_C_RecievedInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputtype;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromplayerinput;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.All Beats Succeeded
	 */
	struct ABuff_StriderHackingParent_C_AllBeatsSucceeded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ReceiveBeginPlay
	 */
	struct ABuff_StriderHackingParent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.AllowPostProcessEffect
	 */
	struct ABuff_StriderHackingParent_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Sync HUD Widget
	 */
	struct ABuff_StriderHackingParent_C_SyncHUDWidget_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Notify Toggle HUD Widget
	 */
	struct ABuff_StriderHackingParent_C_NotifyToggleHUDWidget_Params
	{
	public:
		bool                                                       HUDHidden;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Destroy HUD Widget
	 */
	struct ABuff_StriderHackingParent_C_DestroyHUDWidget_Params
	{
	public:
		bool                                                       DestroyNow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Setup HUD Widget
	 */
	struct ABuff_StriderHackingParent_C_SetupHUDWidget_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateDrumEffectVisibility
	 */
	struct ABuff_StriderHackingParent_C_UpdateDrumEffectVisibility_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooLate
	 */
	struct ABuff_StriderHackingParent_C_IsBeatTooLate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4XGB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooSoon
	 */
	struct ABuff_StriderHackingParent_C_IsBeatTooSoon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RM9F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPGetHUDElements
	 */
	struct ABuff_StriderHackingParent_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ActivateBuff
	 */
	struct ABuff_StriderHackingParent_C_ActivateBuff_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateBuffTimer
	 */
	struct ABuff_StriderHackingParent_C_UpdateBuffTimer_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromplayertrigger;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPOnInputEvent
	 */
	struct ABuff_StriderHackingParent_C_BPOnInputEvent_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.GetWeaponMontage
	 */
	struct ABuff_StriderHackingParent_C_GetWeaponMontage_Params
	{
	public:
		EPrimalCharacterInputType                                  index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9V8O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.PlayWeaponMontage
	 */
	struct ABuff_StriderHackingParent_C_PlayWeaponMontage_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isntfromplayerinput;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Started;                                                 // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZJJ0[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPCheckPreventInput
	 */
	struct ABuff_StriderHackingParent_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B6AV[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPDeactivated
	 */
	struct ABuff_StriderHackingParent_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPSetupForInstigator
	 */
	struct ABuff_StriderHackingParent_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPForceCameraStyle
	 */
	struct ABuff_StriderHackingParent_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UserConstructionScript
	 */
	struct ABuff_StriderHackingParent_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ServerPlayWeaponMontage
	 */
	struct ABuff_StriderHackingParent_C_ServerPlayWeaponMontage_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isntfromplayerinput;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientPlayDrumLoop
	 */
	struct ABuff_StriderHackingParent_C_ClientPlayDrumLoop_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientUpdateDrumRadius
	 */
	struct ABuff_StriderHackingParent_C_ClientUpdateDrumRadius_Params
	{
	public:
		bool                                                       NewVis;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BuffTickClient
	 */
	struct ABuff_StriderHackingParent_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.drum loop finished
	 */
	struct ABuff_StriderHackingParent_C_drumloopfinished_Params
	{	};

	/**
	 * Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ExecuteUbergraph_Buff_StriderHackingParent
	 */
	struct ABuff_StriderHackingParent_C_ExecuteUbergraph_Buff_StriderHackingParent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
