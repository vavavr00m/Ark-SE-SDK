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
	 * Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.UserConstructionScript
	 */
	struct AGen2_AreaBuff_Gardens_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ReceiveBeginPlay
	 */
	struct AGen2_AreaBuff_Gardens_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.BPDeactivated
	 */
	struct AGen2_AreaBuff_Gardens_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ExecuteUbergraph_Gen2_AreaBuff_Gardens
	 */
	struct AGen2_AreaBuff_Gardens_C_ExecuteUbergraph_Gen2_AreaBuff_Gardens_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
