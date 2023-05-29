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
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPClampMaxHarvestHealth
	 */
	struct ASheep_Character_BP_C_BPClampMaxHarvestHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPTryMultiUse
	 */
	struct ASheep_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ASheep_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.Get Time Interval for Full Wool
	 */
	struct ASheep_Character_BP_C_GetTimeIntervalforFullWool_Params
	{
	public:
		float                                                      OutVal;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BSZH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoARKDownloadedBegin
	 */
	struct ASheep_Character_BP_C_BPDinoARKDownloadedBegin_Params
	{	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPrepareForARKUploading
	 */
	struct ASheep_Character_BP_C_BPDinoPrepareForARKUploading_Params
	{	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.SetWoolPercentage
	 */
	struct ASheep_Character_BP_C_SetWoolPercentage_Params
	{
	public:
		float                                                      NewPercentage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.DoHaircut
	 */
	struct ASheep_Character_BP_C_DoHaircut_Params
	{
	public:
		class AShooterCharacter*                                   FromPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct ASheep_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPUnstasis
	 */
	struct ASheep_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.UpdateWoolMaterial
	 */
	struct ASheep_Character_BP_C_UpdateWoolMaterial_Params
	{	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.BPTimerNonDedicated
	 */
	struct ASheep_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.GetWoolPercentage
	 */
	struct ASheep_Character_BP_C_GetWoolPercentage_Params
	{
	public:
		float                                                      OutPercent;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.UserConstructionScript
	 */
	struct ASheep_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.DoSpawnHairParticles
	 */
	struct ASheep_Character_BP_C_DoSpawnHairParticles_Params
	{
	public:
		struct FVector                                             AtLoc;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sheep_Character_BP.Sheep_Character_BP_C.ExecuteUbergraph_Sheep_Character_BP
	 */
	struct ASheep_Character_BP_C_ExecuteUbergraph_Sheep_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
