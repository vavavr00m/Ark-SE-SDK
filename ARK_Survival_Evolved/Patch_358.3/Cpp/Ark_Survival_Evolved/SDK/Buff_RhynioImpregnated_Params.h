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
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BPDeactivated
	 */
	struct ABuff_RhynioImpregnated_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.GetBabyBirthParticleScale
	 */
	struct ABuff_RhynioImpregnated_C_GetBabyBirthParticleScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BPInstigatorDied
	 */
	struct ABuff_RhynioImpregnated_C_BPInstigatorDied_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BuffTickClient
	 */
	struct ABuff_RhynioImpregnated_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LBV5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.GetTotalPregnancyDuration
	 */
	struct ABuff_RhynioImpregnated_C_GetTotalPregnancyDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M407[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.GetCravingString
	 */
	struct ABuff_RhynioImpregnated_C_GetCravingString_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       Enabled;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EBIU[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BPTryMultiUse
	 */
	struct ABuff_RhynioImpregnated_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.FeedCravingFood
	 */
	struct ABuff_RhynioImpregnated_C_FeedCravingFood_Params
	{
	public:
		class APlayerController*                                   ByPC;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BPGetMultiUseEntries
	 */
	struct ABuff_RhynioImpregnated_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.GetHostDinoBloodColor
	 */
	struct ABuff_RhynioImpregnated_C_GetHostDinoBloodColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.GenerateBabyInfo
	 */
	struct ABuff_RhynioImpregnated_C_GenerateBabyInfo_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.OverrideDeathHarvest
	 */
	struct ABuff_RhynioImpregnated_C_OverrideDeathHarvest_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.ReceiveBeginPlay
	 */
	struct ABuff_RhynioImpregnated_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.PlayInitialHitVFX
	 */
	struct ABuff_RhynioImpregnated_C_PlayInitialHitVFX_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BPAdjustDamage_Ex
	 */
	struct ABuff_RhynioImpregnated_C_BPAdjustDamage_Ex_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2H5V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpulseDir;                                              // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JIEJ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         EventInstigator;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              InDamageCauser;                                          // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.GetScaledBabyCapsuleHalfHeight
	 */
	struct ABuff_RhynioImpregnated_C_GetScaledBabyCapsuleHalfHeight_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FZD7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_RhynioImpregnated_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.DrawBuffFloatingHUD
	 */
	struct ABuff_RhynioImpregnated_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LUND[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.SpawnBaby
	 */
	struct ABuff_RhynioImpregnated_C_SpawnBaby_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.BuffTickServer
	 */
	struct ABuff_RhynioImpregnated_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.UserConstructionScript
	 */
	struct ABuff_RhynioImpregnated_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.Multi_SpawnVFX
	 */
	struct ABuff_RhynioImpregnated_C_Multi_SpawnVFX_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHatch;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.Server_SpawnBaby
	 */
	struct ABuff_RhynioImpregnated_C_Server_SpawnBaby_Params
	{	};

	/**
	 * Function Buff_RhynioImpregnated.Buff_RhynioImpregnated_C.ExecuteUbergraph_Buff_RhynioImpregnated
	 */
	struct ABuff_RhynioImpregnated_C_ExecuteUbergraph_Buff_RhynioImpregnated_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
