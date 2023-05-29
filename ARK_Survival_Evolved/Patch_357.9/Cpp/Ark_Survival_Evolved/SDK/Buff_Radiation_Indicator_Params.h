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
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffDeactivated
	 */
	struct ABuff_Radiation_Indicator_C_BPNotifyOtherBuffDeactivated_Params
	{
	public:
		class APrimalBuff*                                         OtherBuff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffActivated
	 */
	struct ABuff_Radiation_Indicator_C_BPNotifyOtherBuffActivated_Params
	{
	public:
		class APrimalBuff*                                         OtherBuff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPSetupForInstigator
	 */
	struct ABuff_Radiation_Indicator_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Set Radiation Indicator Hidden
	 */
	struct ABuff_Radiation_Indicator_C_SetRadiationIndicatorHidden_Params
	{
	public:
		bool                                                       HideIcon;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MuteSound;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickServer
	 */
	struct ABuff_Radiation_Indicator_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Is Instigator Near Tek Forcefield
	 */
	struct ABuff_Radiation_Indicator_C_IsInstigatorNearTekForcefield_Params
	{
	public:
		class AStorageBox_TekShield_C*                             TekShield;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInsideShield;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KUG3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickClient
	 */
	struct ABuff_Radiation_Indicator_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPResetBuffStart
	 */
	struct ABuff_Radiation_Indicator_C_BPResetBuffStart_Params
	{	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.UserConstructionScript
	 */
	struct ABuff_Radiation_Indicator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.ExecuteUbergraph_Buff_Radiation_Indicator
	 */
	struct ABuff_Radiation_Indicator_C_ExecuteUbergraph_Buff_Radiation_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
