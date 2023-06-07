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
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPCanAttack
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XPV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ShouldSkipRangeCheckEvent
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_ShouldSkipRangeCheckEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOverrideAttackWeight
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_BPOverrideAttackWeight_Params
	{
	public:
		float                                                      inputWeight;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HDI9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R89Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnClearAttackState
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_BPOnClearAttackState_Params
	{	};

	/**
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.EndAnimationStateEvent
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_EndAnimationStateEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackEnd
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_BPOnAttackEnd_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QOUR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackStart
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63E4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ExecuteUbergraph_DinoAttackState_CherufeChargeHeat
	 */
	struct UDinoAttackState_CherufeChargeHeat_C_ExecuteUbergraph_DinoAttackState_CherufeChargeHeat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
