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
	 * Function Buff_MammothPassenger.Buff_MammothPassenger_C.BPForceCameraStyle
	 */
	struct ABuff_MammothPassenger_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K72R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MammothPassenger.Buff_MammothPassenger_C.UserConstructionScript
	 */
	struct ABuff_MammothPassenger_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MammothPassenger.Buff_MammothPassenger_C.ExecuteUbergraph_Buff_MammothPassenger
	 */
	struct ABuff_MammothPassenger_C_ExecuteUbergraph_Buff_MammothPassenger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
