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
	 * Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams
	 */
	struct AShooterHudBP_C_GetAdditionalExplorerNoteDynamicMaterialParams_Params
	{
	public:
		struct FExplorerNoteEntry                                  ExplorerNote;                                            // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm)
		TArray<struct FNameScalarPair>                             ScalarMaterialParams;                                    // 0x00A8(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<struct FNameColorPair>                              ColorMaterialParams;                                     // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript
	 */
	struct AShooterHudBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
	 */
	struct AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
