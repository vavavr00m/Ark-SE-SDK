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
	 * Function Buff_Carcha_Attacked.Buff_Carcha_Attacked_C.ReceiveBeginPlay
	 */
	struct ABuff_Carcha_Attacked_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Carcha_Attacked.Buff_Carcha_Attacked_C.WatchTargetDied
	 */
	struct ABuff_Carcha_Attacked_C_WatchTargetDied_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Carcha_Attacked.Buff_Carcha_Attacked_C.StartWatch
	 */
	struct ABuff_Carcha_Attacked_C_StartWatch_Params
	{
	public:
		class APrimalCharacter*                                    CharacterToWatch;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    CharacterToReportTo;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Carcha_Attacked.Buff_Carcha_Attacked_C.UserConstructionScript
	 */
	struct ABuff_Carcha_Attacked_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Carcha_Attacked.Buff_Carcha_Attacked_C.ExecuteUbergraph_Buff_Carcha_Attacked
	 */
	struct ABuff_Carcha_Attacked_C_ExecuteUbergraph_Buff_Carcha_Attacked_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
