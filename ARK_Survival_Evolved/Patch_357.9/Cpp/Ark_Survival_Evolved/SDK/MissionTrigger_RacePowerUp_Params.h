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
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveEndPlay
	 */
	struct AMissionTrigger_RacePowerUp_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveBeginPlay
	 */
	struct AMissionTrigger_RacePowerUp_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ResetPowerUp
	 */
	struct AMissionTrigger_RacePowerUp_C_ResetPowerUp_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive_PURE
	 */
	struct AMissionTrigger_RacePowerUp_C_IsPowerUpActive_PURE_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive
	 */
	struct AMissionTrigger_RacePowerUp_C_IsPowerUpActive_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DeactivatePowerUp
	 */
	struct AMissionTrigger_RacePowerUp_C_DeactivatePowerUp_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.InitPowerUp
	 */
	struct AMissionTrigger_RacePowerUp_C_InitPowerUp_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpEnabled
	 */
	struct AMissionTrigger_RacePowerUp_C_SetPowerUpEnabled_Params
	{
	public:
		bool                                                       NewEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpFX_Active
	 */
	struct AMissionTrigger_RacePowerUp_C_SetPowerUpFX_Active_Params
	{
	public:
		bool                                                       newActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AlsoEnable;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6UZP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.OnPowerUpTriggerHit
	 */
	struct AMissionTrigger_RacePowerUp_C_OnPowerUpTriggerHit_Params
	{
	public:
		bool                                                       UsesPowerUp;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.UserConstructionScript
	 */
	struct AMissionTrigger_RacePowerUp_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__FinishedFunc
	 */
	struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__FinishedFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__UpdateFunc
	 */
	struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__UpdateFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__FinishedFunc
	 */
	struct AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__FinishedFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__UpdateFunc
	 */
	struct AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__UpdateFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__FinishedFunc
	 */
	struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__FinishedFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__UpdateFunc
	 */
	struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__UpdateFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeOut
	 */
	struct AMissionTrigger_RacePowerUp_C_FadeOut_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeIn
	 */
	struct AMissionTrigger_RacePowerUp_C_FadeIn_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.PowerUpPulse
	 */
	struct AMissionTrigger_RacePowerUp_C_PowerUpPulse_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp_NOW
	 */
	struct AMissionTrigger_RacePowerUp_C_DisablePowerUp_NOW_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp
	 */
	struct AMissionTrigger_RacePowerUp_C_EnablePowerUp_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp
	 */
	struct AMissionTrigger_RacePowerUp_C_DisablePowerUp_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp_NOW
	 */
	struct AMissionTrigger_RacePowerUp_C_EnablePowerUp_NOW_Params
	{	};

	/**
	 * Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ExecuteUbergraph_MissionTrigger_RacePowerUp
	 */
	struct AMissionTrigger_RacePowerUp_C_ExecuteUbergraph_MissionTrigger_RacePowerUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
