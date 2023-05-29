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
	 * Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifyClearRider
	 */
	struct AGigant_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifySetRider
	 */
	struct AGigant_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gigant_Character_BP.Gigant_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct AGigant_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gigant_Character_BP.Gigant_Character_BP_C.UserConstructionScript
	 */
	struct AGigant_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Gigant_Character_BP.Gigant_Character_BP_C.ExecuteUbergraph_Gigant_Character_BP
	 */
	struct AGigant_Character_BP_C_ExecuteUbergraph_Gigant_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
