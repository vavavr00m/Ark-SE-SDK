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
	 * Function Buff_MissionData.Buff_MissionData_C.UserConstructionScript
	 */
	struct ABuff_MissionData_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MissionData.Buff_MissionData_C.ReceiveBeginPlay
	 */
	struct ABuff_MissionData_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MissionData.Buff_MissionData_C.OnPlayerRemovedFromMissionEvent
	 */
	struct ABuff_MissionData_C_OnPlayerRemovedFromMissionEvent_Params
	{
	public:
		class APrimalBuff_MissionData*                             MissionDataBuff;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionType*                                        Mission;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MissionData.Buff_MissionData_C.OnPlayerAddedToMissionEvent
	 */
	struct ABuff_MissionData_C_OnPlayerAddedToMissionEvent_Params
	{
	public:
		class APrimalBuff_MissionData*                             MissionDataBuff;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionType*                                        Mission;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MissionData.Buff_MissionData_C.ExecuteUbergraph_Buff_MissionData
	 */
	struct ABuff_MissionData_C_ExecuteUbergraph_Buff_MissionData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
