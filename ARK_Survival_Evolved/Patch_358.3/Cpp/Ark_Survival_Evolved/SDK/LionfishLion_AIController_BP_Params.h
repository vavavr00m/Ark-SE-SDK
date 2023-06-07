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
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPShouldNotifyNeighbor
	 */
	struct ALionfishLion_AIController_BP_C_BPShouldNotifyNeighbor_Params
	{
	public:
		class APrimalDinoCharacter*                                neighbor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LYQS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPSetupFindTarget
	 */
	struct ALionfishLion_AIController_BP_C_BPSetupFindTarget_Params
	{	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.
	 */
	struct ALionfishLion_AIController_BP_C__Params
	{
	public:
		float                                                      _1;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      _2;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Output;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is night
	 */
	struct ALionfishLion_AIController_BP_C_isnight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZSS7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is line of sight blocked
	 */
	struct ALionfishLion_AIController_BP_C_islineofsightblocked_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.Check if Viewed by Players
	 */
	struct ALionfishLion_AIController_BP_C_CheckifViewedbyPlayers_Params
	{	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPNotifyTargetSet
	 */
	struct ALionfishLion_AIController_BP_C_BPNotifyTargetSet_Params
	{	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.UserConstructionScript
	 */
	struct ALionfishLion_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.ExecuteUbergraph_LionfishLion_AIController_BP
	 */
	struct ALionfishLion_AIController_BP_C_ExecuteUbergraph_LionfishLion_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
