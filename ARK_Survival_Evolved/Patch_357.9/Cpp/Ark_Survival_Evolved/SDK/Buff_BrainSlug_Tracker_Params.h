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
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPReactivateWithDamageCauser
	 */
	struct ABuff_BrainSlug_Tracker_C_BPReactivateWithDamageCauser_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ForDamageCauser;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPDeactivated
	 */
	struct ABuff_BrainSlug_Tracker_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPClientDoMultiUse
	 */
	struct ABuff_BrainSlug_Tracker_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.DrawBuffFloatingHUD
	 */
	struct ABuff_BrainSlug_Tracker_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WVFQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HR5O[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPGetMultiUseEntries
	 */
	struct ABuff_BrainSlug_Tracker_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BuffTickServer
	 */
	struct ABuff_BrainSlug_Tracker_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W47Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.UserConstructionScript
	 */
	struct ABuff_BrainSlug_Tracker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.Server_Deactivate
	 */
	struct ABuff_BrainSlug_Tracker_C_Server_Deactivate_Params
	{	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ReceiveBeginPlay
	 */
	struct ABuff_BrainSlug_Tracker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ExecuteUbergraph_Buff_BrainSlug_Tracker
	 */
	struct ABuff_BrainSlug_Tracker_C_ExecuteUbergraph_Buff_BrainSlug_Tracker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
