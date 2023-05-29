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
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayDrumLoop
	 */
	struct ABuff_MammothDrummer_C_PlayDrumLoop_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0FKU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientManageDrumBeat
	 */
	struct ABuff_MammothDrummer_C_ClientManageDrumBeat_Params
	{
	public:
		EPrimalCharacterInputType                                  InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RMD4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.BuffTickClient
	 */
	struct ABuff_MammothDrummer_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.Sync HUD Widget
	 */
	struct ABuff_MammothDrummer_C_SyncHUDWidget_Params
	{	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.Notify Toggle HUD Widget
	 */
	struct ABuff_MammothDrummer_C_NotifyToggleHUDWidget_Params
	{
	public:
		bool                                                       HUDHidden;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.Destroy HUD Widget
	 */
	struct ABuff_MammothDrummer_C_DestroyHUDWidget_Params
	{
	public:
		bool                                                       DestroyNow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.Setup HUD Widget
	 */
	struct ABuff_MammothDrummer_C_SetupHUDWidget_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.UpdateDrumEffectVisibility
	 */
	struct ABuff_MammothDrummer_C_UpdateDrumEffectVisibility_Params
	{	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooLate
	 */
	struct ABuff_MammothDrummer_C_IsBeatTooLate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KPD7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooSoon
	 */
	struct ABuff_MammothDrummer_C_IsBeatTooSoon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z1TF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPGetHUDElements
	 */
	struct ABuff_MammothDrummer_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ActivateBuff
	 */
	struct ABuff_MammothDrummer_C_ActivateBuff_Params
	{	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerManageDrumBeat
	 */
	struct ABuff_MammothDrummer_C_ServerManageDrumBeat_Params
	{
	public:
		int32_t                                                    DrumIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TooSoon;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TooLate;                                                 // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPOnInputEvent
	 */
	struct ABuff_MammothDrummer_C_BPOnInputEvent_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CR0O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.GetWeaponMontage
	 */
	struct ABuff_MammothDrummer_C_GetWeaponMontage_Params
	{
	public:
		EPrimalCharacterInputType                                  index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYEL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayWeaponMontage
	 */
	struct ABuff_MammothDrummer_C_PlayWeaponMontage_Params
	{
	public:
		EPrimalCharacterInputType                                  index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Started;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6509[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPDeactivated
	 */
	struct ABuff_MammothDrummer_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPSetupForInstigator
	 */
	struct ABuff_MammothDrummer_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPForceCameraStyle
	 */
	struct ABuff_MammothDrummer_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.UserConstructionScript
	 */
	struct ABuff_MammothDrummer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerPlayWeaponMontage
	 */
	struct ABuff_MammothDrummer_C_ServerPlayWeaponMontage_Params
	{
	public:
		EPrimalCharacterInputType                                  index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TooSoon;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TooLate;                                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlayDrumLoop
	 */
	struct ABuff_MammothDrummer_C_ClientPlayDrumLoop_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientUpdateDrumRadius
	 */
	struct ABuff_MammothDrummer_C_ClientUpdateDrumRadius_Params
	{
	public:
		bool                                                       NewVis;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlaySuccessHitVFX
	 */
	struct ABuff_MammothDrummer_C_ClientPlaySuccessHitVFX_Params
	{	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerActivateBuff
	 */
	struct ABuff_MammothDrummer_C_ServerActivateBuff_Params
	{
	public:
		bool                                                       DoActivate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MammothDrummer.Buff_MammothDrummer_C.ExecuteUbergraph_Buff_MammothDrummer
	 */
	struct ABuff_MammothDrummer_C_ExecuteUbergraph_Buff_MammothDrummer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
