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
	 * Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.BuffTickClient
	 */
	struct ABuff_SpaceDolphinMissions_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_66HN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.HitCollisionStarFoxMode
	 */
	struct ABuff_SpaceDolphinMissions_C_HitCollisionStarFoxMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SV1O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.AllowPostProcessEffect
	 */
	struct ABuff_SpaceDolphinMissions_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_SpaceDolphinMissions_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.UserConstructionScript
	 */
	struct ABuff_SpaceDolphinMissions_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.ExecuteUbergraph_Buff_SpaceDolphinMissions
	 */
	struct ABuff_SpaceDolphinMissions_C_ExecuteUbergraph_Buff_SpaceDolphinMissions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
