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
	 * Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.InitRacePowerUp
	 */
	struct ABuff_RacePowerUp_Base_C_InitRacePowerUp_Params
	{
	public:
		class AMissionType_Race_C*                                 FromRaceMission;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.UserConstructionScript
	 */
	struct ABuff_RacePowerUp_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.ExecuteUbergraph_Buff_RacePowerUp_Base
	 */
	struct ABuff_RacePowerUp_Base_C_ExecuteUbergraph_Buff_RacePowerUp_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
