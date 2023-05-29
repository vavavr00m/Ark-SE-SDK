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
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStopFire
	 */
	struct ABuff_FishingNetStopMovement_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ABL2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ReceiveBeginPlay
	 */
	struct ABuff_FishingNetStopMovement_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickClient
	 */
	struct ABuff_FishingNetStopMovement_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPPreventInstigatorMovementMode
	 */
	struct ABuff_FishingNetStopMovement_C_BPPreventInstigatorMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickServer
	 */
	struct ABuff_FishingNetStopMovement_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D94W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStartFire
	 */
	struct ABuff_FishingNetStopMovement_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E6D2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.UserConstructionScript
	 */
	struct ABuff_FishingNetStopMovement_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ExecuteUbergraph_Buff_FishingNetStopMovement
	 */
	struct ABuff_FishingNetStopMovement_C_ExecuteUbergraph_Buff_FishingNetStopMovement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
