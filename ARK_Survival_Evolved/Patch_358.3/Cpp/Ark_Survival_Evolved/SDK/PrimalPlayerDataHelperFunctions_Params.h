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
	 * Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character
	 */
	struct UPrimalPlayerDataHelperFunctions_C_ApplyToPlayerPawnCharacter_Params
	{
	public:
		class AShooterPlayerState*                                 ForPlayerState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   NewPlayerCharacter;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<float>                                              AscensionData;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    HexagonCount;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ChibiLevelUpsCount;                                      // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUnlockedAllExplorerNotes;                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9M31[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        GeneralizedUnlockedAchievementTags;                      // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.ExecuteUbergraph_PrimalPlayerDataHelperFunctions
	 */
	struct UPrimalPlayerDataHelperFunctions_C_ExecuteUbergraph_PrimalPlayerDataHelperFunctions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
