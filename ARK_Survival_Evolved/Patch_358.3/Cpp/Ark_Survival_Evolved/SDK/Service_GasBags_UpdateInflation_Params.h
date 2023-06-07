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
	 * Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ReceiveTick
	 */
	struct UService_GasBags_UpdateInflation_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ExecuteUbergraph_Service_GasBags_UpdateInflation
	 */
	struct UService_GasBags_UpdateInflation_C_ExecuteUbergraph_Service_GasBags_UpdateInflation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
