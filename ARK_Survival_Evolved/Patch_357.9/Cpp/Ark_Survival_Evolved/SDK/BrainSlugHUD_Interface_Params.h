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
	 * Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.GetHudData
	 */
	struct UBrainSlugHUD_Interface_C_GetHudData_Params
	{
	public:
		class APrimalCharacter*                                    TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAllowedToControlTarget;                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XMCU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TargetValidationString;                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              InvalidTargetString_PreventHUD;                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FHUDElement                                         HUDElementTemplate;                                      // 0x0030(0x0150)  (Parm, OutParm)
		float                                                      BrainJumpTargetCheckDistance;                            // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.Sync Crosshair Color
	 */
	struct UBrainSlugHUD_Interface_C_SyncCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        outColor;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
