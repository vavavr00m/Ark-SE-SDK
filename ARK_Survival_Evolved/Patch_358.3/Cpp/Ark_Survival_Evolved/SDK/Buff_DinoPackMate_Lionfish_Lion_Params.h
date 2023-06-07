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
	 * Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.BuffAdjustDamage
	 */
	struct ABuff_DinoPackMate_Lionfish_Lion_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R34A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.UserConstructionScript
	 */
	struct ABuff_DinoPackMate_Lionfish_Lion_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ReceiveBeginPlay
	 */
	struct ABuff_DinoPackMate_Lionfish_Lion_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion
	 */
	struct ABuff_DinoPackMate_Lionfish_Lion_C_ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
