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
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetNumBatteries
	 */
	struct ALanternPet_Character_BP_C_GetNumBatteries_Params
	{
	public:
		int32_t                                                    numBatteries;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Variable Interface
	 */
	struct ALanternPet_Character_BP_C_GetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_43HC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CMEI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateMaxCharge
	 */
	struct ALanternPet_Character_BP_C_UpdateMaxCharge_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundHighLevelDinos
	 */
	struct ALanternPet_Character_BP_C_UpdateFoundHighLevelDinos_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundEnemyPlayers
	 */
	struct ALanternPet_Character_BP_C_UpdateFoundEnemyPlayers_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetPassiveChargeGain
	 */
	struct ALanternPet_Character_BP_C_GetPassiveChargeGain_Params
	{
	public:
		float                                                      chargeGain;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.UnstasisLogic
	 */
	struct ALanternPet_Character_BP_C_UnstasisLogic_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTriggerStasisEvent
	 */
	struct ALanternPet_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff
	 */
	struct ALanternPet_Character_BP_C_DestroyChargeBuff_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPSetupTamed
	 */
	struct ALanternPet_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VTAW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeManager
	 */
	struct ALanternPet_Character_BP_C_CreateChargeManager_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateChargeRadius
	 */
	struct ALanternPet_Character_BP_C_UpdateChargeRadius_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetActualRadius
	 */
	struct ALanternPet_Character_BP_C_GetActualRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct ALanternPet_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63IN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NORX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnClearMountedDino
	 */
	struct ALanternPet_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyLevelUp
	 */
	struct ALanternPet_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.InitializeChargeBuff
	 */
	struct ALanternPet_Character_BP_C_InitializeChargeBuff_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnSetMountedDino
	 */
	struct ALanternPet_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotifyMountedDino
	 */
	struct ALanternPet_Character_BP_C_AnimNotifyMountedDino_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.SetLightColor
	 */
	struct ALanternPet_Character_BP_C_SetLightColor_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnLaunched
	 */
	struct ALanternPet_Character_BP_C_OnLaunched_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bXYOverride;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bZOverride;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Can Generate Charge OverTime
	 */
	struct ALanternPet_Character_BP_C_CanGenerateChargeOverTime_Params
	{
	public:
		bool                                                       CanCharge;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.CanPlaySpecialAnim
	 */
	struct ALanternPet_Character_BP_C_CanPlaySpecialAnim_Params
	{
	public:
		bool                                                       CanPlay;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Init
	 */
	struct ALanternPet_Character_BP_C_Init_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.AutoChargeNotify
	 */
	struct ALanternPet_Character_BP_C_AutoChargeNotify_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPClientDoMultiUse
	 */
	struct ALanternPet_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VEBY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ALanternPet_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTryMultiUse
	 */
	struct ALanternPet_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnRep_bAutoChargeActive
	 */
	struct ALanternPet_Character_BP_C_OnRep_bAutoChargeActive_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerNonDedicated
	 */
	struct ALanternPet_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnUpdateMountedDinoMeshHiding
	 */
	struct ALanternPet_Character_BP_C_OnUpdateMountedDinoMeshHiding_Params
	{
	public:
		bool                                                       bshouldBeVisible;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HYTC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ALanternPet_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Receive Montage
	 */
	struct ALanternPet_Character_BP_C_GetChargeReceiveMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetChargeFinishedMontage
	 */
	struct ALanternPet_Character_BP_C_GetChargeFinishedMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Update ChargeAnimation
	 */
	struct ALanternPet_Character_BP_C_UpdateChargeAnimation_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerServer
	 */
	struct ALanternPet_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateLightIntensity
	 */
	struct ALanternPet_Character_BP_C_UpdateLightIntensity_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Emmissive;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.UserConstructionScript
	 */
	struct ALanternPet_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean MulticastInterface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventBooleanMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Float Multicast Interface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventFloatMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_65L8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Double MulticastInterface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventDoubleMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_56D3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean Interface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventBooleanInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventFloatInterface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventFloatInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LCZU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventDoubleInterface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventDoubleInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_74JV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntInterface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventIntInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VSSV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntMulticastInterface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TS3O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetUpdateCharge
	 */
	struct ALanternPet_Character_BP_C_NetUpdateCharge_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPUnstasis
	 */
	struct ALanternPet_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetRestartParticles
	 */
	struct ALanternPet_Character_BP_C_NetRestartParticles_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.PlayPetAnimAfterDelay
	 */
	struct ALanternPet_Character_BP_C_PlayPetAnimAfterDelay_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotify_FinishParticle
	 */
	struct ALanternPet_Character_BP_C_AnimNotify_FinishParticle_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Set Charge Variable Interface
	 */
	struct ALanternPet_Character_BP_C_SetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6X8O[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3QIB[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Interface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AR3B[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Trigger Multicast Interface
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEventTriggerMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PSGS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    iVariable;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OCBX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent_Multicast
	 */
	struct ALanternPet_Character_BP_C_ChargeVariableEvent_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BE1L[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
	 */
	struct ALanternPet_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.Interface Check for Batteries and Update Multicast
	 */
	struct ALanternPet_Character_BP_C_InterfaceCheckforBatteriesandUpdateMulticast_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ReceiveBeginPlay
	 */
	struct ALanternPet_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnDied_Event
	 */
	struct ALanternPet_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.RandomizeUntamedStart
	 */
	struct ALanternPet_Character_BP_C_RandomizeUntamedStart_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff_Multicast
	 */
	struct ALanternPet_Character_BP_C_CreateChargeBuff_Multicast_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff
	 */
	struct ALanternPet_Character_BP_C_CreateChargeBuff_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff_Multicast
	 */
	struct ALanternPet_Character_BP_C_DestroyChargeBuff_Multicast_Params
	{	};

	/**
	 * Function LanternPet_Character_BP.LanternPet_Character_BP_C.ExecuteUbergraph_LanternPet_Character_BP
	 */
	struct ALanternPet_Character_BP_C_ExecuteUbergraph_LanternPet_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
