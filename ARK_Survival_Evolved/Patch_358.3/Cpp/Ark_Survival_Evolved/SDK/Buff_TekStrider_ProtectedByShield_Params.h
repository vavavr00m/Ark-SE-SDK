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
	 * Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BuffTickClient
	 */
	struct ABuff_TekStrider_ProtectedByShield_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPAdjustRadialDamage
	 */
	struct ABuff_TekStrider_ProtectedByShield_C_BPAdjustRadialDamage_Params
	{
	public:
		float                                                      currentDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Origin;                                                  // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRadialDamageEvent                                  DamageEvent;                                             // 0x0010(0x0050)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_ProtectedByShield_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_ProtectedByShield_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.ExecuteUbergraph_Buff_TekStrider_ProtectedByShield
	 */
	struct ABuff_TekStrider_ProtectedByShield_C_ExecuteUbergraph_Buff_TekStrider_ProtectedByShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
