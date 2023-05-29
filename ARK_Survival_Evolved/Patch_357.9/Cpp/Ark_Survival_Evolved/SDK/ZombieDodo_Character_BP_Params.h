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
	 * Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModData
	 */
	struct AZombieDodo_Character_BP_C_RequestModData_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         JsonData;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModDataProcessing
	 */
	struct AZombieDodo_Character_BP_C_RequestModDataProcessing_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         InJsonData;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         OutJsonData;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.UserConstructionScript
	 */
	struct AZombieDodo_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.SendModData
	 */
	struct AZombieDodo_Character_BP_C_SendModData_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UJsonObject*                                         JsonData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ReceiveBeginPlay
	 */
	struct AZombieDodo_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ExecuteUbergraph_ZombieDodo_Character_BP
	 */
	struct AZombieDodo_Character_BP_C_ExecuteUbergraph_ZombieDodo_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
