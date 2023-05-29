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
	 * Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveTick
	 */
	struct UZipline_ZiplineMoveTowardsTarget_TK_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G6Y6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveAbort
	 */
	struct UZipline_ZiplineMoveTowardsTarget_TK_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveExecute
	 */
	struct UZipline_ZiplineMoveTowardsTarget_TK_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.TryToUnblock
	 */
	struct UZipline_ZiplineMoveTowardsTarget_TK_C_TryToUnblock_Params
	{	};

	/**
	 * Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK
	 */
	struct UZipline_ZiplineMoveTowardsTarget_TK_C_ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
