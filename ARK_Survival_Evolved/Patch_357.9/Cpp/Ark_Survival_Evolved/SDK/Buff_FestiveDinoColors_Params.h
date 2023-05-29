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
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.AreColorArraysEqual
	 */
	struct ABuff_FestiveDinoColors_C_AreColorArraysEqual_Params
	{
	public:
		TArray<struct FLinearColor>                                A;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FLinearColor>                                B;                                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Equal;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IPE8[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPSetupForInstigator
	 */
	struct ABuff_FestiveDinoColors_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPDinoRefreshColorization
	 */
	struct ABuff_FestiveDinoColors_C_BPDinoRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                DinoColors;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FLinearColor>                                OverrideColors;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UserConstructionScript
	 */
	struct ABuff_FestiveDinoColors_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateColors
	 */
	struct ABuff_FestiveDinoColors_C_MultiUpdateColors_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ItemQuality;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UpdateColorsFromItem
	 */
	struct ABuff_FestiveDinoColors_C_UpdateColorsFromItem_Params
	{
	public:
		TArray<struct FLinearColor>                                ItemColors;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ItemQuality;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateAfterLoadSave
	 */
	struct ABuff_FestiveDinoColors_C_MultiUpdateAfterLoadSave_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    CandyQuality;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.DelayedPostLoadUpdate
	 */
	struct ABuff_FestiveDinoColors_C_DelayedPostLoadUpdate_Params
	{	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ReceiveBeginPlay
	 */
	struct ABuff_FestiveDinoColors_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ExecuteUbergraph_Buff_FestiveDinoColors
	 */
	struct ABuff_FestiveDinoColors_C_ExecuteUbergraph_Buff_FestiveDinoColors_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
