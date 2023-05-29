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
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.HasAmmoOrElement
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_HasAmmoOrElement_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OB79[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ConsumeAmmo
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_ConsumeAmmo_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UpdatedAmount;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.GetBuff
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_GetBuff_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.InitBuff
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_InitBuff_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.BPAddedAttachments
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_BPAddedAttachments_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ExecuteUbergraph_PrimalItemArmor_ShoulderCannon
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_ExecuteUbergraph_PrimalItemArmor_ShoulderCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
