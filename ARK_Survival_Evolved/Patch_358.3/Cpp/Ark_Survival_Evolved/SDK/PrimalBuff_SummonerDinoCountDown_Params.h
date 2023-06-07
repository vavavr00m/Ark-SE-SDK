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
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BuffAdjustDamage
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFMZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZK9X[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ClearImmobilization
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_ClearImmobilization_Params
	{	};

	/**
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.SetSuicideTimer
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_SetSuicideTimer_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.Suicide
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_Suicide_Params
	{	};

	/**
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BPSetupForInstigator
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.UserConstructionScript
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.OnInstigatorDied
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_OnInstigatorDied_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown
	 */
	struct APrimalBuff_SummonerDinoCountDown_C_ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
