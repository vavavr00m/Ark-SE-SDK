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
	 * Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveEndPlay
	 */
	struct AEmitter_MissionPrepArea_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZIB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveBeginPlay
	 */
	struct AEmitter_MissionPrepArea_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.UserConstructionScript
	 */
	struct AEmitter_MissionPrepArea_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ExecuteUbergraph_Emitter_MissionPrepArea
	 */
	struct AEmitter_MissionPrepArea_C_ExecuteUbergraph_Emitter_MissionPrepArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
