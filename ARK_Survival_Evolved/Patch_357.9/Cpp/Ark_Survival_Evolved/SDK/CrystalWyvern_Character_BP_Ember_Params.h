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
	 * Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPGetHUDOverrideBuffProgressBarPercent
	 */
	struct ACrystalWyvern_Character_BP_Ember_C_BPGetHUDOverrideBuffProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VLWC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExtraFlameFXSetup
	 */
	struct ACrystalWyvern_Character_BP_Ember_C_ExtraFlameFXSetup_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPDoAttack
	 */
	struct ACrystalWyvern_Character_BP_Ember_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.UserConstructionScript
	 */
	struct ACrystalWyvern_Character_BP_Ember_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Ember
	 */
	struct ACrystalWyvern_Character_BP_Ember_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Ember_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
