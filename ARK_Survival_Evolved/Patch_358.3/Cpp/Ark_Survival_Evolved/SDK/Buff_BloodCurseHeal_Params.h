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
	 * Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.CheckDeactivation
	 */
	struct ABuff_BloodCurseHeal_C_CheckDeactivation_Params
	{	};

	/**
	 * Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.RecoverHealth
	 */
	struct ABuff_BloodCurseHeal_C_RecoverHealth_Params
	{
	public:
		float                                                      DamageCaused;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B1EF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UpdateVictims
	 */
	struct ABuff_BloodCurseHeal_C_UpdateVictims_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Add;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KS4J[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UserConstructionScript
	 */
	struct ABuff_BloodCurseHeal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.ExecuteUbergraph_Buff_BloodCurseHeal
	 */
	struct ABuff_BloodCurseHeal_C_ExecuteUbergraph_Buff_BloodCurseHeal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
