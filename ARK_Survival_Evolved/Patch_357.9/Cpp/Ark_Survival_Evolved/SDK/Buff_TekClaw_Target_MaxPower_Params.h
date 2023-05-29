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
	 * Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ReceiveDestroyed
	 */
	struct ABuff_TekClaw_Target_MaxPower_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.BPSetupForInstigator
	 */
	struct ABuff_TekClaw_Target_MaxPower_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.UserConstructionScript
	 */
	struct ABuff_TekClaw_Target_MaxPower_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.HideMesh
	 */
	struct ABuff_TekClaw_Target_MaxPower_C_HideMesh_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Target_MaxPower
	 */
	struct ABuff_TekClaw_Target_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Target_MaxPower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
