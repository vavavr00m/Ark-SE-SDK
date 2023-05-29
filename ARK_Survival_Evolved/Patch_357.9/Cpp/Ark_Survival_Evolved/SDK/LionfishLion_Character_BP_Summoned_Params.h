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
	 * Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.BPDinoTooltipCustomTamingProgressBar
	 */
	struct ALionfishLion_Character_BP_Summoned_C_BPDinoTooltipCustomTamingProgressBar_Params
	{
	public:
		bool                                                       overrideTamingProgressBarIfActive;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6RC4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.UserConstructionScript
	 */
	struct ALionfishLion_Character_BP_Summoned_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.ExecuteUbergraph_LionfishLion_Character_BP_Summoned
	 */
	struct ALionfishLion_Character_BP_Summoned_C_ExecuteUbergraph_LionfishLion_Character_BP_Summoned_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
