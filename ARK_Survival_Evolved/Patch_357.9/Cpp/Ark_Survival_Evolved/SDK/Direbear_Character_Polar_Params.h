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
	 * Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetBestExtraRunSpeedModifier
	 */
	struct ADirebear_Character_Polar_C_GetBestExtraRunSpeedModifier_Params
	{
	public:
		float                                                      Out;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8IUO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetExtraRunSpeedModifierPercent
	 */
	struct ADirebear_Character_Polar_C_GetExtraRunSpeedModifierPercent_Params
	{
	public:
		float                                                      PercentVal;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direbear_Character_Polar.Direbear_Character_Polar_C.UserConstructionScript
	 */
	struct ADirebear_Character_Polar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Direbear_Character_Polar.Direbear_Character_Polar_C.ExecuteUbergraph_Direbear_Character_Polar
	 */
	struct ADirebear_Character_Polar_C_ExecuteUbergraph_Direbear_Character_Polar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
