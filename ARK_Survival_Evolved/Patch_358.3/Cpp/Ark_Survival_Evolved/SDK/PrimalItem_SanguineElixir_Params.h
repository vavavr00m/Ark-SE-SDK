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
	 * Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.CheckValidForUse
	 */
	struct UPrimalItem_SanguineElixir_C_CheckValidForUse_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IZ9H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BPCanUse
	 */
	struct UPrimalItem_SanguineElixir_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7T16[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BlueprintUsed
	 */
	struct UPrimalItem_SanguineElixir_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.ExecuteUbergraph_PrimalItem_SanguineElixir
	 */
	struct UPrimalItem_SanguineElixir_C_ExecuteUbergraph_PrimalItem_SanguineElixir_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
