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
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.IsPlayerNearby
	 */
	struct AJerboa_Character_BP_C_IsPlayerNearby_Params
	{
	public:
		bool                                                       bNearby;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z9JG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.BPTimerServer
	 */
	struct AJerboa_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.UserConstructionScript
	 */
	struct AJerboa_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Rain
	 */
	struct AJerboa_Character_BP_C_PlayWeatherWarning_Rain_Params
	{	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Superheat
	 */
	struct AJerboa_Character_BP_C_PlayWeatherWarning_Superheat_Params
	{	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_ElectricalStorm
	 */
	struct AJerboa_Character_BP_C_PlayWeatherWarning_ElectricalStorm_Params
	{	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Sandstorm
	 */
	struct AJerboa_Character_BP_C_PlayWeatherWarning_Sandstorm_Params
	{	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Earthquake
	 */
	struct AJerboa_Character_BP_C_PlayWeatherWarning_Earthquake_Params
	{	};

	/**
	 * Function Jerboa_Character_BP.Jerboa_Character_BP_C.ExecuteUbergraph_Jerboa_Character_BP
	 */
	struct AJerboa_Character_BP_C_ExecuteUbergraph_Jerboa_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
