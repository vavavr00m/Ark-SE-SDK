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
	 * Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPOverrideBuffToGiveOnDeactivation
	 */
	struct ABuff_TekWyvern_BreathStun_C_BPOverrideBuffToGiveOnDeactivation_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPCustomAllowAddBuff
	 */
	struct ABuff_TekWyvern_BreathStun_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.UserConstructionScript
	 */
	struct ABuff_TekWyvern_BreathStun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun
	 */
	struct ABuff_TekWyvern_BreathStun_C_ExecuteUbergraph_Buff_TekWyvern_BreathStun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
