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
	 * Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation
	 */
	struct UZipline_UpdateTargetZiplineAndLocation_SRV_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick
	 */
	struct UZipline_UpdateTargetZiplineAndLocation_SRV_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4COP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV
	 */
	struct UZipline_UpdateTargetZiplineAndLocation_SRV_C_ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
