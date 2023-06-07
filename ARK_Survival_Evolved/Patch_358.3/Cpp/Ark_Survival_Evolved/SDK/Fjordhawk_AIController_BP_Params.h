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
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ResetAttackTimers
	 */
	struct AFjordhawk_AIController_BP_C_ResetAttackTimers_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.StartWaitingForRespawn
	 */
	struct AFjordhawk_AIController_BP_C_StartWaitingForRespawn_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindTeleportLocation
	 */
	struct AFjordhawk_AIController_BP_C_FindTeleportLocation_Params
	{
	public:
		class AShooterCharacter*                                   InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue2;                                            // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.OnPossess
	 */
	struct AFjordhawk_AIController_BP_C_OnPossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.CheckForRespawnedPlayer
	 */
	struct AFjordhawk_AIController_BP_C_CheckForRespawnedPlayer_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveDestroyed
	 */
	struct AFjordhawk_AIController_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveBeginPlay
	 */
	struct AFjordhawk_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.PerformanceThrottledTick
	 */
	struct AFjordhawk_AIController_BP_C_PerformanceThrottledTick_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindLandingLocation
	 */
	struct AFjordhawk_AIController_BP_C_FindLandingLocation_Params
	{
	public:
		struct FVector                                             DesiredLOocation;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPOnFleeEvent
	 */
	struct AFjordhawk_AIController_BP_C_BPOnFleeEvent_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AFjordhawk_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.UserConstructionScript
	 */
	struct AFjordhawk_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ExecuteUbergraph_Fjordhawk_AIController_BP
	 */
	struct AFjordhawk_AIController_BP_C_ExecuteUbergraph_Fjordhawk_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
