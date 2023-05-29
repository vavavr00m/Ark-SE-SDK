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
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AMegalodon_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AMegalodon_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPNotifyClearRider
	 */
	struct AMegalodon_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPModifyFOV
	 */
	struct AMegalodon_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.UserConstructionScript
	 */
	struct AMegalodon_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_190
	 */
	struct AMegalodon_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_190_Params
	{	};

	/**
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_189
	 */
	struct AMegalodon_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_189_Params
	{	};

	/**
	 * Function Megalodon_Character_BP.Megalodon_Character_BP_C.ExecuteUbergraph_Megalodon_Character_BP
	 */
	struct AMegalodon_Character_BP_C_ExecuteUbergraph_Megalodon_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
