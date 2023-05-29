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
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ToString
	 */
	struct ADino_Character_BP_Ramming_C_ToString_Params
	{
	public:
		class FString                                              CallerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class FString                                              DebugText;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPNotifyClearRider
	 */
	struct ADino_Character_BP_Ramming_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetStructureDamageScaled
	 */
	struct ADino_Character_BP_Ramming_C_GetStructureDamageScaled_Params
	{
	public:
		float                                                      CurrentValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MinValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      velocityAlpha;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaledDamage;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRammingSpeedMax
	 */
	struct ADino_Character_BP_Ramming_C_GetRammingSpeedMax_Params
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanTickStartedRam
	 */
	struct ADino_Character_BP_Ramming_C_CanTickStartedRam_Params
	{
	public:
		bool                                                       Tick;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DrainStatusValue
	 */
	struct ADino_Character_BP_Ramming_C_DrainStatusValue_Params
	{
	public:
		EPrimalCharacterStatusValue                                Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0LXV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasRemainingValue;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q2DP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DoRamImpact
	 */
	struct ADino_Character_BP_Ramming_C_DoRamImpact_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DLPT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanStartRamAttack
	 */
	struct ADino_Character_BP_Ramming_C_CanStartRamAttack_Params
	{
	public:
		bool                                                       AllowedToRam;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Calculate Ram Duration
	 */
	struct ADino_Character_BP_Ramming_C_CalculateRamDuration_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ReceiveTick
	 */
	struct ADino_Character_BP_Ramming_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Ended
	 */
	struct ADino_Character_BP_Ramming_C_HandleRamEnded_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Started
	 */
	struct ADino_Character_BP_Ramming_C_HandleRamStarted_Params
	{
	public:
		float                                                      RamBuildupTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RamDuration;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRamState
	 */
	struct ADino_Character_BP_Ramming_C_GetRamState_Params
	{
	public:
		bool                                                       InRamBuildup;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5FQ3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RamBuildupTime;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InRamming;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RXEH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Stop Ram Attack Buildup
	 */
	struct ADino_Character_BP_Ramming_C_StopRamAttackBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Start Ram Attack Buildup
	 */
	struct ADino_Character_BP_Ramming_C_StartRamAttackBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.UserConstructionScript
	 */
	struct ADino_Character_BP_Ramming_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStopRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_ServerStopRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStartRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_ServerStartRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamStarted
	 */
	struct ADino_Character_BP_Ramming_C_OnRamStarted_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEnded
	 */
	struct ADino_Character_BP_Ramming_C_OnRamEnded_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ClientOnRamEnded
	 */
	struct ADino_Character_BP_Ramming_C_ClientOnRamEnded_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEndedEarly
	 */
	struct ADino_Character_BP_Ramming_C_OnRamEndedEarly_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Private__RamEnded
	 */
	struct ADino_Character_BP_Ramming_C_Private__RamEnded_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature
	 */
	struct ADino_Character_BP_Ramming_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature_Params
	{
	public:
		class APhysicsVolume*                                      NewVolume;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnComponentBeginOverlap_Event
	 */
	struct ADino_Character_BP_Ramming_C_OnComponentBeginOverlap_Event_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K5P1[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerRequestRamEndEarly
	 */
	struct ADino_Character_BP_Ramming_C_ServerRequestRamEndEarly_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerCancelRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_ServerCancelRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CancelRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_CancelRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.MultiStartRam
	 */
	struct ADino_Character_BP_Ramming_C_MultiStartRam_Params
	{
	public:
		float                                                      BuildUpDuration;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ExecuteUbergraph_Dino_Character_BP_Ramming
	 */
	struct ADino_Character_BP_Ramming_C_ExecuteUbergraph_Dino_Character_BP_Ramming_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
