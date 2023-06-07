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
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetBuffSpeedPercentage
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_GetBuffSpeedPercentage_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPInitIconMaterial
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_BPInitIconMaterial_Params
	{	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetDyeItemDescriptiveName
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_GetDyeItemDescriptiveName_Params
	{
	public:
		class UPrimalGameData*                                     GameData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    A;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q0X8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DescriptiveNameBase;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetInvertedWeights
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_GetInvertedWeights_Params
	{
	public:
		TArray<float>                                              Weights;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPPreUseItem
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_BPPreUseItem_Params
	{	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPInitItemColors
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_BPInitItemColors_Params
	{
	public:
		TArray<int32_t>                                            ColorIDs;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPPostAddBuffToGiveOwnerCharacter
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_BPPostAddBuffToGiveOwnerCharacter_Params
	{
	public:
		class APrimalCharacter*                                    OwnerCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalBuff*                                         Buff;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPGetItemDescription
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QYKR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.ExecuteUbergraph_PrimalItemConsumable_FestiveDinoCandy
	 */
	struct UPrimalItemConsumable_FestiveDinoCandy_C_ExecuteUbergraph_PrimalItemConsumable_FestiveDinoCandy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
