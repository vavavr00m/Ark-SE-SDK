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
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPNotifySetRider
	 */
	struct ARex_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct ARex_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ARex_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPTryMultiUse
	 */
	struct ARex_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPDoAttack
	 */
	struct ARex_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.AllowRoarStun
	 */
	struct ARex_Character_BP_C_AllowRoarStun_Params
	{
	public:
		class APrimalCharacter*                                    primalChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.Roar
	 */
	struct ARex_Character_BP_C_Roar_Params
	{	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPNotifyClearRider
	 */
	struct ARex_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPModifyFOV
	 */
	struct ARex_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ARex_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ARex_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.UserConstructionScript
	 */
	struct ARex_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_247
	 */
	struct ARex_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_247_Params
	{	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_246
	 */
	struct ARex_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_246_Params
	{	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.RoarCameraShake
	 */
	struct ARex_Character_BP_C_RoarCameraShake_Params
	{	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.DoRoarOverlapsAfterDelay
	 */
	struct ARex_Character_BP_C_DoRoarOverlapsAfterDelay_Params
	{	};

	/**
	 * Function Rex_Character_BP.Rex_Character_BP_C.ExecuteUbergraph_Rex_Character_BP
	 */
	struct ARex_Character_BP_C_ExecuteUbergraph_Rex_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
