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
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CheckIfTargetIsCloseToPaws
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_CheckIfTargetIsCloseToPaws_Params
	{
	public:
		bool                                                       FoundPawAttack;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LZB1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuadIndex;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseIceBreath;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C933[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.SetTargetQuadrant
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_SetTargetQuadrant_Params
	{	};

	/**
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanAngryAttack
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_CanAngryAttack_Params
	{
	public:
		class AIceKaiju_Character_BP_C*                            MyIceKaiju;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_60GX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanIceBreath
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_CanIceBreath_Params
	{
	public:
		class AIceKaiju_Character_BP_C*                            MyIceKaiju;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JJP5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanGroundSmash
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_CanGroundSmash_Params
	{
	public:
		class AIceKaiju_Character_BP_C*                            MyIceKaiju;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MFT4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanUseGroundSmash
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_CanUseGroundSmash_Params
	{
	public:
		bool                                                       IsOnCooldown;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2KWT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ReceiveExecute
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack
	 */
	struct UTask_IceKaijuFindBestMeleeAttack_C_ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
