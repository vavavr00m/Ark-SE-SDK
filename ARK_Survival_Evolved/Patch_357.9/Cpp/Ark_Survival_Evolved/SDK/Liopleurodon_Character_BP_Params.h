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
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPCanCryo
	 */
	struct ALiopleurodon_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPTimerServer
	 */
	struct ALiopleurodon_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ALiopleurodon_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.Find Remaining Tame Time
	 */
	struct ALiopleurodon_Character_BP_C_FindRemainingTameTime_Params
	{
	public:
		float                                                      TimeLeft;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HLYY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPSetupTamed
	 */
	struct ALiopleurodon_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_378F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifyClearRider
	 */
	struct ALiopleurodon_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifySetRider
	 */
	struct ALiopleurodon_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.UserConstructionScript
	 */
	struct ALiopleurodon_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__FinishedFunc
	 */
	struct ALiopleurodon_Character_BP_C_DisappearTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__UpdateFunc
	 */
	struct ALiopleurodon_Character_BP_C_DisappearTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.StartDisappear
	 */
	struct ALiopleurodon_Character_BP_C_StartDisappear_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveAnyDamage
	 */
	struct ALiopleurodon_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R5J8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.AnimNotify_SpawnSpinEffect
	 */
	struct ALiopleurodon_Character_BP_C_AnimNotify_SpawnSpinEffect_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.RefreshMagicBuffTimers
	 */
	struct ALiopleurodon_Character_BP_C_RefreshMagicBuffTimers_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveBeginPlay
	 */
	struct ALiopleurodon_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.OnDied_ClearParticles
	 */
	struct ALiopleurodon_Character_BP_C_OnDied_ClearParticles_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ExecuteUbergraph_Liopleurodon_Character_BP
	 */
	struct ALiopleurodon_Character_BP_C_ExecuteUbergraph_Liopleurodon_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
