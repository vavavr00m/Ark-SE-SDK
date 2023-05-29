﻿#pragma once

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
	 * Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModData
	 */
	struct AWyvern_Character_BP_ZombieBase_C_RequestModData_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         JsonData;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModDataProcessing
	 */
	struct AWyvern_Character_BP_ZombieBase_C_RequestModDataProcessing_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         InJsonData;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         OutJsonData;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.UserConstructionScript
	 */
	struct AWyvern_Character_BP_ZombieBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ReceiveBeginPlay
	 */
	struct AWyvern_Character_BP_ZombieBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.SendModData
	 */
	struct AWyvern_Character_BP_ZombieBase_C_SendModData_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         JsonData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieBase
	 */
	struct AWyvern_Character_BP_ZombieBase_C_ExecuteUbergraph_Wyvern_Character_BP_ZombieBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
