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
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.BPModifyFOV
	 */
	struct AMosa_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.BPNotifyClearRider
	 */
	struct AMosa_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AMosa_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AMosa_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.UserConstructionScript
	 */
	struct AMosa_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_194
	 */
	struct AMosa_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_194_Params
	{	};

	/**
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_193
	 */
	struct AMosa_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_193_Params
	{	};

	/**
	 * Function Mosa_Character_BP.Mosa_Character_BP_C.ExecuteUbergraph_Mosa_Character_BP
	 */
	struct AMosa_Character_BP_C_ExecuteUbergraph_Mosa_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
