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
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Clear in SPZ
	 */
	struct AGen2_AreaBuff_Base_C_ClearinSPZ_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetInSPZ
	 */
	struct AGen2_AreaBuff_Base_C_SetInSPZ_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.CheckOverhang
	 */
	struct AGen2_AreaBuff_Base_C_CheckOverhang_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateClouds
	 */
	struct AGen2_AreaBuff_Base_C_UpdateClouds_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.GetClosestStormIntensity
	 */
	struct AGen2_AreaBuff_Base_C_GetClosestStormIntensity_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateLocalTransform
	 */
	struct AGen2_AreaBuff_Base_C_UpdateLocalTransform_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPGetHUDElements
	 */
	struct AGen2_AreaBuff_Base_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SwitchAudioWaterAndCave
	 */
	struct AGen2_AreaBuff_Base_C_SwitchAudioWaterAndCave_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickServer
	 */
	struct AGen2_AreaBuff_Base_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PJK6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickClient
	 */
	struct AGen2_AreaBuff_Base_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetParticleVis
	 */
	struct AGen2_AreaBuff_Base_C_SetParticleVis_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.LocalEffects
	 */
	struct AGen2_AreaBuff_Base_C_LocalEffects_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPPreventRunning
	 */
	struct AGen2_AreaBuff_Base_C_BPPreventRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPCustomAllowAddBuff
	 */
	struct AGen2_AreaBuff_Base_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UNNY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UserConstructionScript
	 */
	struct AGen2_AreaBuff_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__FinishedFunc
	 */
	struct AGen2_AreaBuff_Base_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__UpdateFunc
	 */
	struct AGen2_AreaBuff_Base_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ReceiveBeginPlay
	 */
	struct AGen2_AreaBuff_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.OnPlayerStatusUpdate
	 */
	struct AGen2_AreaBuff_Base_C_OnPlayerStatusUpdate_Params
	{
	public:
		bool                                                       IsInCave;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnderwater;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPDeactivated
	 */
	struct AGen2_AreaBuff_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPSetupForInstigator
	 */
	struct AGen2_AreaBuff_Base_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Blend_Visuals
	 */
	struct AGen2_AreaBuff_Base_C_Blend_Visuals_Params
	{
	public:
		float                                                      currentIntensity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ExecuteUbergraph_Gen2_AreaBuff_Base
	 */
	struct AGen2_AreaBuff_Base_C_ExecuteUbergraph_Gen2_AreaBuff_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
