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
	 * Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState
	 */
	struct UPrimalPlayerDataBP_C_BPAppliedToPlayerState_Params
	{
	public:
		class AShooterPlayerState*                                 ForPlayerState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter
	 */
	struct UPrimalPlayerDataBP_C_BPApplyToPlayerCharacter_Params
	{
	public:
		class AShooterPlayerState*                                 ForPlayerState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   NewPlayerCharacter;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.ExecuteUbergraph_PrimalPlayerDataBP
	 */
	struct UPrimalPlayerDataBP_C_ExecuteUbergraph_PrimalPlayerDataBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
