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
	 * Function TekTransmitter_Strider.TekTransmitter_Strider_C.ReceiveBeginPlay
	 */
	struct ATekTransmitter_Strider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerDeactivated
	 */
	struct ATekTransmitter_Strider_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerActivated
	 */
	struct ATekTransmitter_Strider_C_BPContainerActivated_Params
	{	};

	/**
	 * Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPPreInitializeComponents
	 */
	struct ATekTransmitter_Strider_C_BPPreInitializeComponents_Params
	{	};

	/**
	 * Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPCanBeActivatedByPlayer
	 */
	struct ATekTransmitter_Strider_C_BPCanBeActivatedByPlayer_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekTransmitter_Strider.TekTransmitter_Strider_C.UserConstructionScript
	 */
	struct ATekTransmitter_Strider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekTransmitter_Strider.TekTransmitter_Strider_C.ExecuteUbergraph_TekTransmitter_Strider
	 */
	struct ATekTransmitter_Strider_C_ExecuteUbergraph_TekTransmitter_Strider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
