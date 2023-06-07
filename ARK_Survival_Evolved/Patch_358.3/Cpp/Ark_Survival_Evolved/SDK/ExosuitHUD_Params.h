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
	 * Function ExosuitHUD.ExosuitHUD_C.SetupDynamicMaterial
	 */
	struct UExosuitHUD_C_SetupDynamicMaterial_Params
	{	};

	/**
	 * Function ExosuitHUD.ExosuitHUD_C.SyncHUDWidget
	 */
	struct UExosuitHUD_C_SyncHUDWidget_Params
	{
	public:
		class FString                                              ModeString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class FString                                              RepairRequirementsString;                                // 0x0010(0x0010)  (Parm, ZeroConstructor)
		float                                                      BeamAvailabilityPercent;                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BeamPressAndHoldPercent;                                 // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUsesChestBeam;                                          // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanUseChestBeam;                                        // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0N65[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ChestBeamState;                                          // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalStructure*                                    LastAimedStructure;                                      // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentMode;                                             // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HUDModeTextFadeOutTimeMultiplier;                        // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExosuitHUD.ExosuitHUD_C.Initialize HUD Widget
	 */
	struct UExosuitHUD_C_InitializeHUDWidget_Params
	{	};

	/**
	 * Function ExosuitHUD.ExosuitHUD_C.Reset HUD Widget
	 */
	struct UExosuitHUD_C_ResetHUDWidget_Params
	{	};

	/**
	 * Function ExosuitHUD.ExosuitHUD_C.DestroyWidget
	 */
	struct UExosuitHUD_C_DestroyWidget_Params
	{	};

	/**
	 * Function ExosuitHUD.ExosuitHUD_C.StartClosingWidget
	 */
	struct UExosuitHUD_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExosuitHUD.ExosuitHUD_C.ExecuteUbergraph_ExosuitHUD
	 */
	struct UExosuitHUD_C_ExecuteUbergraph_ExosuitHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExosuitHUD.ExosuitHUD_C.OnWidgetDestroyed__DelegateSignature
	 */
	struct UExosuitHUD_C_OnWidgetDestroyed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
