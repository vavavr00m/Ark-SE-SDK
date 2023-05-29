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
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanEquip
	 */
	struct AWeap_Mjolnir_C_BPCanEquip_Params
	{
	public:
		class AShooterCharacter*                                   ByCharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleSound
	 */
	struct AWeap_Mjolnir_C_PlayRandomIdleSound_Params
	{	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.CheckPlayIdleAudio
	 */
	struct AWeap_Mjolnir_C_CheckPlayIdleAudio_Params
	{	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.OnRep_bIsCharged
	 */
	struct AWeap_Mjolnir_C_OnRep_bIsCharged_Params
	{	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.ReceiveTick
	 */
	struct AWeap_Mjolnir_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.BPSpawnMeleeEffects
	 */
	struct AWeap_Mjolnir_C_BPSpawnMeleeEffects_Params
	{
	public:
		struct FVector                                             Impact;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShootDir;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanMeleeAttack
	 */
	struct AWeap_Mjolnir_C_BPCanMeleeAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XT0Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.UserConstructionScript
	 */
	struct AWeap_Mjolnir_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleAudio
	 */
	struct AWeap_Mjolnir_C_PlayRandomIdleAudio_Params
	{	};

	/**
	 * Function Weap_Mjolnir.Weap_Mjolnir_C.ExecuteUbergraph_Weap_Mjolnir
	 */
	struct AWeap_Mjolnir_C_ExecuteUbergraph_Weap_Mjolnir_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
