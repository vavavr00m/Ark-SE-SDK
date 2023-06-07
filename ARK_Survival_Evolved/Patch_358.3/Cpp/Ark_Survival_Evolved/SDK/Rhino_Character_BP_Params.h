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
	 * Function Rhino_Character_BP.Rhino_Character_BP_C.GetBestExtraRunSpeedModifier
	 */
	struct ARhino_Character_BP_C_GetBestExtraRunSpeedModifier_Params
	{
	public:
		float                                                      Out;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUI6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetExtraMeleeDamageModifier
	 */
	struct ARhino_Character_BP_C_BPGetExtraMeleeDamageModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 */
	struct ARhino_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhino_Character_BP.Rhino_Character_BP_C.GetExtraRunSpeedModifierPercent
	 */
	struct ARhino_Character_BP_C_GetExtraRunSpeedModifierPercent_Params
	{
	public:
		float                                                      PercentVal;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhino_Character_BP.Rhino_Character_BP_C.UserConstructionScript
	 */
	struct ARhino_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Rhino_Character_BP.Rhino_Character_BP_C.ExecuteUbergraph_Rhino_Character_BP
	 */
	struct ARhino_Character_BP_C_ExecuteUbergraph_Rhino_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
