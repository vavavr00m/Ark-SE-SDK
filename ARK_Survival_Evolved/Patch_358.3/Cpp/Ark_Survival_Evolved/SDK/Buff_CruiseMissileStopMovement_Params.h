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
	 * Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ReceiveBeginPlay
	 */
	struct ABuff_CruiseMissileStopMovement_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPPreventInstigatorMovementMode
	 */
	struct ABuff_CruiseMissileStopMovement_C_BPPreventInstigatorMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BuffTickServer
	 */
	struct ABuff_CruiseMissileStopMovement_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WE0B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPHandleOnStartFire
	 */
	struct ABuff_CruiseMissileStopMovement_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.UserConstructionScript
	 */
	struct ABuff_CruiseMissileStopMovement_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ExecuteUbergraph_Buff_CruiseMissileStopMovement
	 */
	struct ABuff_CruiseMissileStopMovement_C_ExecuteUbergraph_Buff_CruiseMissileStopMovement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
