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
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPNotifyClearRider
	 */
	struct AExosuit_RTS_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPOrderedMoveToLoc
	 */
	struct AExosuit_RTS_Character_BP_C_BPOrderedMoveToLoc_Params
	{
	public:
		struct FVector                                             DestLoc;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct AExosuit_RTS_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.OnRep_IsInRtsMode
	 */
	struct AExosuit_RTS_Character_BP_C_OnRep_IsInRtsMode_Params
	{	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AExosuit_RTS_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPHandleUseButtonPress
	 */
	struct AExosuit_RTS_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N81E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ServerStartRTS
	 */
	struct AExosuit_RTS_Character_BP_C_ServerStartRTS_Params
	{	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.UserConstructionScript
	 */
	struct AExosuit_RTS_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406
	 */
	struct AExosuit_RTS_Character_BP_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406_Params
	{	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405
	 */
	struct AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405_Params
	{	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404
	 */
	struct AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404_Params
	{	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403
	 */
	struct AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403_Params
	{	};

	/**
	 * Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ExecuteUbergraph_Exosuit_RTS_Character_BP
	 */
	struct AExosuit_RTS_Character_BP_C_ExecuteUbergraph_Exosuit_RTS_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
