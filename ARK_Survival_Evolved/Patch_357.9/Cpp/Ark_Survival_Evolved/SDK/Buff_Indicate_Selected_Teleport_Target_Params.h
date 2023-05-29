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
	 * Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_Indicate_Selected_Teleport_Target_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.UserConstructionScript
	 */
	struct ABuff_Indicate_Selected_Teleport_Target_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.toggle active on targeting client
	 */
	struct ABuff_Indicate_Selected_Teleport_Target_C_toggleactiveontargetingclient_Params
	{
	public:
		class APlayerController*                                   NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target
	 */
	struct ABuff_Indicate_Selected_Teleport_Target_C_ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
