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
	 * Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CheckIfTargetIsCloseToFoot
	 */
	struct UTask_FKaijuChooseBasicAttack_C_CheckIfTargetIsCloseToFoot_Params
	{
	public:
		bool                                                       FoundFootAttack;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RightFoot;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.MaybeFootstomp
	 */
	struct UTask_FKaijuChooseBasicAttack_C_MaybeFootstomp_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D17J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.TargetIsFlying
	 */
	struct UTask_FKaijuChooseBasicAttack_C_TargetIsFlying_Params
	{
	public:
		bool                                                       IsFlying;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GOP9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CanUseFootstompBoth
	 */
	struct UTask_FKaijuChooseBasicAttack_C_CanUseFootstompBoth_Params
	{
	public:
		bool                                                       CanAttack;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYKU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ReceiveExecute
	 */
	struct UTask_FKaijuChooseBasicAttack_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ExecuteUbergraph_Task_FKaijuChooseBasicAttack
	 */
	struct UTask_FKaijuChooseBasicAttack_C_ExecuteUbergraph_Task_FKaijuChooseBasicAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
