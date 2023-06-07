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
	 * Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.GetHorizontalDistance
	 */
	struct UBTT_Fjordhawk_ReturnLoot_C_GetHorizontalDistance_Params
	{
	public:
		class AActor*                                              Actor1;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor2;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ReceiveExecute
	 */
	struct UBTT_Fjordhawk_ReturnLoot_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot
	 */
	struct UBTT_Fjordhawk_ReturnLoot_C_ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
