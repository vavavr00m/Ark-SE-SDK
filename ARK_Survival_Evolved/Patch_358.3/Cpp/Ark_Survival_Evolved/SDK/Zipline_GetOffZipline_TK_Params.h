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
	 * Function Zipline_GetOffZipline_TK.Zipline_GetOffZipline_TK_C.ReceiveAbort
	 */
	struct UZipline_GetOffZipline_TK_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_GetOffZipline_TK.Zipline_GetOffZipline_TK_C.ReceiveTick
	 */
	struct UZipline_GetOffZipline_TK_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_GetOffZipline_TK.Zipline_GetOffZipline_TK_C.ReceiveExecute
	 */
	struct UZipline_GetOffZipline_TK_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_GetOffZipline_TK.Zipline_GetOffZipline_TK_C.ExecuteUbergraph_Zipline_GetOffZipline_TK
	 */
	struct UZipline_GetOffZipline_TK_C_ExecuteUbergraph_Zipline_GetOffZipline_TK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
