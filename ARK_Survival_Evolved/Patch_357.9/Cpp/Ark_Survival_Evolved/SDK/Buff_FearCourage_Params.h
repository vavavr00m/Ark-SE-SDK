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
	 * Function Buff_FearCourage.Buff_FearCourage_C.GetBuffType
	 */
	struct ABuff_FearCourage_C_GetBuffType_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Process Courage Value
	 */
	struct ABuff_FearCourage_C_ProcessCourageValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ABXS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    forCharacter;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canSwitch;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useClientIndex;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8NWP[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      finalValue;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ProcessFearValue
	 */
	struct ABuff_FearCourage_C_ProcessFearValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_37HZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    forCharacter;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canSwitch;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useClientIndex;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PQL6[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      finalValue;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Max Courage ActionsClient
	 */
	struct ABuff_FearCourage_C_MaxCourageActionsClient_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_FearCourage_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.GetBuffDescription
	 */
	struct ABuff_FearCourage_C_GetBuffDescription_Params
	{
	public:
		struct FStatusValueModifierDescription                     ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Add Fear Or CourageClient
	 */
	struct ABuff_FearCourage_C_AddFearOrCourageClient_Params
	{
	public:
		float                                                      amountToAdd;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFear;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8WA1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    fearCauser;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       switchFromFearToCourageIfNeeded;                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFromRoar;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z7CG[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.IsAtMax_f
	 */
	struct ABuff_FearCourage_C_IsAtMax_f_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useClientIndex;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Courage;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Fear;                                                    // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYSJ[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.GetTeamColorForParticles
	 */
	struct ABuff_FearCourage_C_GetTeamColorForParticles_Params
	{
	public:
		struct FVector                                             finalColor;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.SetMultiplier
	 */
	struct ABuff_FearCourage_C_SetMultiplier_Params
	{
	public:
		EPrimalCharacterStatusValue                                statusValue;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0QM8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFear;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KJ9D[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.isSameTeamOrAlly
	 */
	struct ABuff_FearCourage_C_isSameTeamOrAlly_Params
	{
	public:
		int32_t                                                    secondTargetingTeam;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    firstTargetingTeamOverride;                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAllyOrSameTeam;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.CanAddFearOrCourage
	 */
	struct ABuff_FearCourage_C_CanAddFearOrCourage_Params
	{
	public:
		bool                                                       isFear;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanAdd;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.UpdateFleePoint
	 */
	struct ABuff_FearCourage_C_UpdateFleePoint_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Send HUDMessage to Rider From Server
	 */
	struct ABuff_FearCourage_C_SendHUDMessagetoRiderFromServer_Params
	{
	public:
		class FString                                              messageID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9E84[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_FearCourage_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ReduceTerror
	 */
	struct ABuff_FearCourage_C_ReduceTerror_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M9ON[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.BPInventoryItemUsed
	 */
	struct ABuff_FearCourage_C_BPInventoryItemUsed_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.OnFearAdded
	 */
	struct ABuff_FearCourage_C_OnFearAdded_Params
	{
	public:
		class APrimalCharacter*                                    causer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      fearAmount;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ReceiveDestroyed
	 */
	struct ABuff_FearCourage_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.RestoreVariables
	 */
	struct ABuff_FearCourage_C_RestoreVariables_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ExtendBuffTimeIfNeeded
	 */
	struct ABuff_FearCourage_C_ExtendBuffTimeIfNeeded_Params
	{
	public:
		bool                                                       forceExtend;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F0W1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      toDuration;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.BuffTickClient
	 */
	struct ABuff_FearCourage_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.CheckDeactivateCondition
	 */
	struct ABuff_FearCourage_C_CheckDeactivateCondition_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_FearCourage_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.OnDinoDismounted
	 */
	struct ABuff_FearCourage_C_OnDinoDismounted_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.OnDinoMounted
	 */
	struct ABuff_FearCourage_C_OnDinoMounted_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.BPDeactivated
	 */
	struct ABuff_FearCourage_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.SendHUDMessageToRider
	 */
	struct ABuff_FearCourage_C_SendHUDMessageToRider_Params
	{
	public:
		struct FStatusValueModifierDescription                     Description;                                             // 0x0000(0x0050)  (Parm)
		float                                                      Scale;                                                   // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.TerrorActions
	 */
	struct ABuff_FearCourage_C_TerrorActions_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ActivateUnmountedFlee
	 */
	struct ABuff_FearCourage_C_ActivateUnmountedFlee_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ActivateMountedFlee
	 */
	struct ABuff_FearCourage_C_ActivateMountedFlee_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.OnRep_isMounted
	 */
	struct ABuff_FearCourage_C_OnRep_isMounted_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.UpdateMountedVariable
	 */
	struct ABuff_FearCourage_C_UpdateMountedVariable_Params
	{
	public:
		bool                                                       ForceUpdate;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.OnCourageRoar
	 */
	struct ABuff_FearCourage_C_OnCourageRoar_Params
	{
	public:
		bool                                                       canSwitchToCourage;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BB0R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      amountOverride;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useAmountOverride;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       sendMessageToRider;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.InitializeBuff
	 */
	struct ABuff_FearCourage_C_InitializeBuff_Params
	{
	public:
		bool                                                       isFear;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.IncreaseStat
	 */
	struct ABuff_FearCourage_C_IncreaseStat_Params
	{
	public:
		EPrimalCharacterStatusValue                                statusValue;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WK6I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalCharacterStatusComponent*                     StatusComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFear;                                                  // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.DrawBuffFloatingHUD
	 */
	struct ABuff_FearCourage_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IEWL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.BuffTickServer
	 */
	struct ABuff_FearCourage_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Check Terror Condition
	 */
	struct ABuff_FearCourage_C_CheckTerrorCondition_Params
	{
	public:
		class APrimalCharacter*                                    fearCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.On FearRoar
	 */
	struct ABuff_FearCourage_C_OnFearRoar_Params
	{
	public:
		class APrimalCharacter*                                    fearCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      amountOverride;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useAmountOverride;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       switchFromFearToCourageIfNeeded;                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       sendMessageToRider;                                      // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Add FearOrCourage
	 */
	struct ABuff_FearCourage_C_AddFearOrCourage_Params
	{
	public:
		float                                                      amountToAdd;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFear;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S58K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    fearCauser;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       switchFromFearToCourageIfNeeded;                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFromRoar;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Start Terror
	 */
	struct ABuff_FearCourage_C_StartTerror_Params
	{
	public:
		class APrimalCharacter*                                    fearCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.UserConstructionScript
	 */
	struct ABuff_FearCourage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__FinishedFunc
	 */
	struct ABuff_FearCourage_C_DecelerationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__UpdateFunc
	 */
	struct ABuff_FearCourage_C_DecelerationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Fire_K2Node_InputActionEvent_158
	 */
	struct ABuff_FearCourage_C_InpActEvt_Fire_K2Node_InputActionEvent_158_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Targeting_K2Node_InputActionEvent_157
	 */
	struct ABuff_FearCourage_C_InpActEvt_Targeting_K2Node_InputActionEvent_157_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Crouch_K2Node_InputActionEvent_156
	 */
	struct ABuff_FearCourage_C_InpActEvt_Crouch_K2Node_InputActionEvent_156_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Jump_K2Node_InputActionEvent_155
	 */
	struct ABuff_FearCourage_C_InpActEvt_Jump_K2Node_InputActionEvent_155_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ReceiveBeginPlay
	 */
	struct ABuff_FearCourage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.InitializeNonDedi
	 */
	struct ABuff_FearCourage_C_InitializeNonDedi_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.Decelerate
	 */
	struct ABuff_FearCourage_C_Decelerate_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.GivePlayerControlAfterDelay
	 */
	struct ABuff_FearCourage_C_GivePlayerControlAfterDelay_Params
	{
	public:
		class APrimalDinoCharacter*                                Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delay;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.UpdatePathingDestination_Multicast
	 */
	struct ABuff_FearCourage_C_UpdatePathingDestination_Multicast_Params
	{
	public:
		struct FVector                                             newPathingDestination;                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.EmitPoopAfterDelay
	 */
	struct ABuff_FearCourage_C_EmitPoopAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed_Multicast
	 */
	struct ABuff_FearCourage_C_UnrollDoed_Multicast_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.SetParticlesColorByTeam
	 */
	struct ABuff_FearCourage_C_SetParticlesColorByTeam_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed
	 */
	struct ABuff_FearCourage_C_UnrollDoed_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoedIfNeeded
	 */
	struct ABuff_FearCourage_C_UnrollDoedIfNeeded_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.InitializeCircleParticles
	 */
	struct ABuff_FearCourage_C_InitializeCircleParticles_Params
	{	};

	/**
	 * Function Buff_FearCourage.Buff_FearCourage_C.ExecuteUbergraph_Buff_FearCourage
	 */
	struct ABuff_FearCourage_C_ExecuteUbergraph_Buff_FearCourage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
