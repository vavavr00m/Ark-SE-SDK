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
	 * Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.BPAdjustImpulseFromDamage
	 */
	struct ABuff_TekClaw_Owner_MaxPower_C_BPAdjustImpulseFromDamage_Params
	{
	public:
		struct FVector                                             DesiredImpulse;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0010(0x0020)  (Parm)
		class APawn*                                               PawnInstigator;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1AM2[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0048(0x0088)  (Parm)
		struct FVector                                             ReturnValue;                                             // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.UserConstructionScript
	 */
	struct ABuff_TekClaw_Owner_MaxPower_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower
	 */
	struct ABuff_TekClaw_Owner_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
