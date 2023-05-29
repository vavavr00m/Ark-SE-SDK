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
	 * Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveAbort
	 */
	struct UBTT_DinoMoveTowardsTarget_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveTick
	 */
	struct UBTT_DinoMoveTowardsTarget_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6ES7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveExecute
	 */
	struct UBTT_DinoMoveTowardsTarget_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ExecuteUbergraph_BTT_DinoMoveTowardsTarget
	 */
	struct UBTT_DinoMoveTowardsTarget_C_ExecuteUbergraph_BTT_DinoMoveTowardsTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
