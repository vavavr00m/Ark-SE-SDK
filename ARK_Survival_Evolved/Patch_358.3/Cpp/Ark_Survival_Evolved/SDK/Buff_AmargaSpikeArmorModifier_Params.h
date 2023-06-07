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
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffAdjustDamage
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JJNK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UpdateBuffDescription
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_UpdateBuffDescription_Params
	{	};

	/**
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickClient
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickServer
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPCustomAllowAddBuff
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPModifyArmorValue
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_BPModifyArmorValue_Params
	{
	public:
		class UPrimalItem*                                         ForItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BaseArmorValue;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UserConstructionScript
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.ExecuteUbergraph_Buff_AmargaSpikeArmorModifier
	 */
	struct ABuff_AmargaSpikeArmorModifier_C_ExecuteUbergraph_Buff_AmargaSpikeArmorModifier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
