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
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPGetDebugInfoString
	 */
	struct ABuff_SpindlesMinigunHit_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.OnRep_CurrentPreventHurtAnim
	 */
	struct ABuff_SpindlesMinigunHit_C_OnRep_CurrentPreventHurtAnim_Params
	{	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffAdjustDamage
	 */
	struct ABuff_SpindlesMinigunHit_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NSX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveEndPlay
	 */
	struct ABuff_SpindlesMinigunHit_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N1UN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPPreventflight
	 */
	struct ABuff_SpindlesMinigunHit_C_BPPreventflight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FE1C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveBeginPlay
	 */
	struct ABuff_SpindlesMinigunHit_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffTickServer
	 */
	struct ABuff_SpindlesMinigunHit_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_51HG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPResetBuffStart
	 */
	struct ABuff_SpindlesMinigunHit_C_BPResetBuffStart_Params
	{	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.UserConstructionScript
	 */
	struct ABuff_SpindlesMinigunHit_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ExecuteUbergraph_Buff_SpindlesMinigunHit
	 */
	struct ABuff_SpindlesMinigunHit_C_ExecuteUbergraph_Buff_SpindlesMinigunHit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
