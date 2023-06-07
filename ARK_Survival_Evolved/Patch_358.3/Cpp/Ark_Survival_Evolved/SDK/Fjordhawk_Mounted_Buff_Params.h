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
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPGetHUDElements
	 */
	struct AFjordhawk_Mounted_Buff_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.HideCrosshair
	 */
	struct AFjordhawk_Mounted_Buff_C_HideCrosshair_Params
	{	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BuffTickClient
	 */
	struct AFjordhawk_Mounted_Buff_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KLNA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.CheckForTarget
	 */
	struct AFjordhawk_Mounted_Buff_C_CheckForTarget_Params
	{	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPTryMultiUse
	 */
	struct AFjordhawk_Mounted_Buff_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPGetMultiUseEntries
	 */
	struct AFjordhawk_Mounted_Buff_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UpdateNearbyTargets
	 */
	struct AFjordhawk_Mounted_Buff_C_UpdateNearbyTargets_Params
	{	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.DrawBuffFloatingHUD
	 */
	struct AFjordhawk_Mounted_Buff_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WNJO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPSetupForInstigator
	 */
	struct AFjordhawk_Mounted_Buff_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UserConstructionScript
	 */
	struct AFjordhawk_Mounted_Buff_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.ExecuteUbergraph_Fjordhawk_Mounted_Buff
	 */
	struct AFjordhawk_Mounted_Buff_C_ExecuteUbergraph_Fjordhawk_Mounted_Buff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
