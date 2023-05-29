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
	 * Function ProjFlare.ProjFlare_C.ReceiveBeginPlay
	 */
	struct AProjFlare_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjFlare.ProjFlare_C.ReceiveEndPlay
	 */
	struct AProjFlare_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjFlare.ProjFlare_C.DestroySelf
	 */
	struct AProjFlare_C_DestroySelf_Params
	{	};

	/**
	 * Function ProjFlare.ProjFlare_C.UserConstructionScript
	 */
	struct AProjFlare_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjFlare.ProjFlare_C.ExecuteUbergraph_ProjFlare
	 */
	struct AProjFlare_C_ExecuteUbergraph_ProjFlare_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
