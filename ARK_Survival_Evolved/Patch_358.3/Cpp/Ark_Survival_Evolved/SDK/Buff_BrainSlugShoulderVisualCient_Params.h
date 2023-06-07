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
	 * Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BPGetHUDElements
	 */
	struct ABuff_BrainSlugShoulderVisualCient_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.DrawBuffFloatingHUD
	 */
	struct ABuff_BrainSlugShoulderVisualCient_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VLF3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.UserConstructionScript
	 */
	struct ABuff_BrainSlugShoulderVisualCient_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BuffTickClient
	 */
	struct ABuff_BrainSlugShoulderVisualCient_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient
	 */
	struct ABuff_BrainSlugShoulderVisualCient_C_ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
