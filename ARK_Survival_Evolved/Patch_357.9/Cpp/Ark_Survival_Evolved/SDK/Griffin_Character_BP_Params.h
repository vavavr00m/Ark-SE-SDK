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
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingFX
	 */
	struct AGriffin_Character_BP_C_UpdateDivingFX_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.OnDiveSwipe
	 */
	struct AGriffin_Character_BP_C_OnDiveSwipe_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.Update WindMaterial
	 */
	struct AGriffin_Character_BP_C_UpdateWindMaterial_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.Update Trail Particle System
	 */
	struct AGriffin_Character_BP_C_UpdateTrailParticleSystem_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Active;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_07DZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AGriffin_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingParticleSystem
	 */
	struct AGriffin_Character_BP_C_UpdateDivingParticleSystem_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Active;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Audio
	 */
	struct AGriffin_Character_BP_C_UpdateDivingAudio_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocallyCarried;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Effects
	 */
	struct AGriffin_Character_BP_C_UpdateDivingEffects_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.CheckGroundForWingFlap
	 */
	struct AGriffin_Character_BP_C_CheckGroundForWingFlap_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.UserConstructionScript
	 */
	struct AGriffin_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_WingFlap
	 */
	struct AGriffin_Character_BP_C_AnimNotify_WingFlap_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.ReceiveBeginPlay
	 */
	struct AGriffin_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_DiveSwipe
	 */
	struct AGriffin_Character_BP_C_AnimNotify_DiveSwipe_Params
	{	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.DropCarriedCharacter_AfterDelay
	 */
	struct AGriffin_Character_BP_C_DropCarriedCharacter_AfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Griffin_Character_BP.Griffin_Character_BP_C.ExecuteUbergraph_Griffin_Character_BP
	 */
	struct AGriffin_Character_BP_C_ExecuteUbergraph_Griffin_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
