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
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideFinalWanderLocation
	 */
	struct ATroodon_Character_BP_C_OverrideFinalWanderLocation_Params
	{
	public:
		struct FVector                                             outVec;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z0TV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.IsLocationInLight
	 */
	struct ATroodon_Character_BP_C_IsLocationInLight_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInLight;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WVLF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LocationOfLightSource;                                   // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct ATroodon_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPShouldForceFlee
	 */
	struct ATroodon_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P4BH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetAddForwardVelocityOnJump
	 */
	struct ATroodon_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ILK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.LevelUpSonar
	 */
	struct ATroodon_Character_BP_C_LevelUpSonar_Params
	{
	public:
		int32_t                                                    Selector;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPClientDoMultiUse
	 */
	struct ATroodon_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TO3F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.DoSonar
	 */
	struct ATroodon_Character_BP_C_DoSonar_Params
	{
	public:
		int32_t                                                    SonarType;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPTryMultiUse
	 */
	struct ATroodon_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATroodon_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.DrawSonarPoints
	 */
	struct ATroodon_Character_BP_C_DrawSonarPoints_Params
	{
	public:
		int32_t                                                    SonarType;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5YUL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     SonarPoints;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class AShooterHUD*                                         TheHUD;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ATroodon_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TD9E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ATroodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ATroodon_Character_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.OnJumped
	 */
	struct ATroodon_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.OnRep_EyesActivated
	 */
	struct ATroodon_Character_BP_C_OnRep_EyesActivated_Params
	{	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPTimerServer
	 */
	struct ATroodon_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.BPKilledSomethingEvent
	 */
	struct ATroodon_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.UserConstructionScript
	 */
	struct ATroodon_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATroodon_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.NetDisplaySonar
	 */
	struct ATroodon_Character_BP_C_NetDisplaySonar_Params
	{
	public:
		int32_t                                                    SonarType;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BUSR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     SonarPoints;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.Net Update Last Time Sonar Used
	 */
	struct ATroodon_Character_BP_C_NetUpdateLastTimeSonarUsed_Params
	{	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.AnimNotify_DoSonar
	 */
	struct ATroodon_Character_BP_C_AnimNotify_DoSonar_Params
	{	};

	/**
	 * Function Troodon_Character_BP.Troodon_Character_BP_C.ExecuteUbergraph_Troodon_Character_BP
	 */
	struct ATroodon_Character_BP_C_ExecuteUbergraph_Troodon_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
