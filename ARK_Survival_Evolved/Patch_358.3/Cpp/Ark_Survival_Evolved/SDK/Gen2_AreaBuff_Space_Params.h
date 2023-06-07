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
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorReceivedRider
	 */
	struct AGen2_AreaBuff_Space_C_DinoInstigatorReceivedRider_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorClearedRider
	 */
	struct AGen2_AreaBuff_Space_C_DinoInstigatorClearedRider_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UpdateDayCycleManager
	 */
	struct AGen2_AreaBuff_Space_C_UpdateDayCycleManager_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.AllowFalling
	 */
	struct AGen2_AreaBuff_Space_C_AllowFalling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.HasBuffToIgnoreZeroG
	 */
	struct AGen2_AreaBuff_Space_C_HasBuffToIgnoreZeroG_Params
	{
	public:
		bool                                                       Ignore;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9XY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventNotifySound
	 */
	struct AGen2_AreaBuff_Space_C_BPPreventNotifySound_Params
	{
	public:
		class USoundBase*                                          SoundIn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T2R5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ClearRotation
	 */
	struct AGen2_AreaBuff_Space_C_ClearRotation_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.IsInstigatorClimbing
	 */
	struct AGen2_AreaBuff_Space_C_IsInstigatorClimbing_Params
	{
	public:
		bool                                                       IsClimbing;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_244U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestorePlayerMovement
	 */
	struct AGen2_AreaBuff_Space_C_RestorePlayerMovement_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitializePlayerZeroGMovement
	 */
	struct AGen2_AreaBuff_Space_C_InitializePlayerZeroGMovement_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestoreDinoMovement
	 */
	struct AGen2_AreaBuff_Space_C_RestoreDinoMovement_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitialzeDinoZeroGMovement
	 */
	struct AGen2_AreaBuff_Space_C_InitialzeDinoZeroGMovement_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOverrideCharacterNewFallVelocity
	 */
	struct AGen2_AreaBuff_Space_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StopFlying
	 */
	struct AGen2_AreaBuff_Space_C_StopFlying_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BuffTickServer
	 */
	struct AGen2_AreaBuff_Space_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2L49[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.CheckGround
	 */
	struct AGen2_AreaBuff_Space_C_CheckGround_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPDeactivated
	 */
	struct AGen2_AreaBuff_Space_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPGetGravityZScale
	 */
	struct AGen2_AreaBuff_Space_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      currentScale;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StartFlying
	 */
	struct AGen2_AreaBuff_Space_C_StartFlying_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOnInstigatorMovementModeChangedNotify
	 */
	struct AGen2_AreaBuff_Space_C_BPOnInstigatorMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventInstigatorMovementMode
	 */
	struct AGen2_AreaBuff_Space_C_BPPreventInstigatorMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPSetupForInstigator
	 */
	struct AGen2_AreaBuff_Space_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UserConstructionScript
	 */
	struct AGen2_AreaBuff_Space_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoMounted
	 */
	struct AGen2_AreaBuff_Space_C_DinoMounted_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoUnmounted
	 */
	struct AGen2_AreaBuff_Space_C_DinoUnmounted_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLanded
	 */
	struct AGen2_AreaBuff_Space_C_FlyingDinoLanded_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoStartLanding
	 */
	struct AGen2_AreaBuff_Space_C_FlyingDinoStartLanding_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLandingInterrupted
	 */
	struct AGen2_AreaBuff_Space_C_FlyingDinoLandingInterrupted_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ExecuteUbergraph_Gen2_AreaBuff_Space
	 */
	struct AGen2_AreaBuff_Space_C_ExecuteUbergraph_Gen2_AreaBuff_Space_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
