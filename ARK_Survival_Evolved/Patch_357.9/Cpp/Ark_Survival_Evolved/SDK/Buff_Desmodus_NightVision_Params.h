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
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffTickServer
	 */
	struct ABuff_Desmodus_NightVision_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HLIO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffOverrideInventoryAccessInput
	 */
	struct ABuff_Desmodus_NightVision_C_BuffOverrideInventoryAccessInput_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInputPressed;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9YT[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPDeactivated
	 */
	struct ABuff_Desmodus_NightVision_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ReceiveBeginPlay
	 */
	struct ABuff_Desmodus_NightVision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffTickClient
	 */
	struct ABuff_Desmodus_NightVision_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BUCN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ToggleNightVision
	 */
	struct ABuff_Desmodus_NightVision_C_ToggleNightVision_Params
	{	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPTryMultiUse
	 */
	struct ABuff_Desmodus_NightVision_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPGetMultiUseEntries
	 */
	struct ABuff_Desmodus_NightVision_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPSetupForInstigator
	 */
	struct ABuff_Desmodus_NightVision_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.SetPPColor
	 */
	struct ABuff_Desmodus_NightVision_C_SetPPColor_Params
	{
	public:
		struct FLinearColor                                        NewParam;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.UserConstructionScript
	 */
	struct ABuff_Desmodus_NightVision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ExecuteUbergraph_Buff_Desmodus_NightVision
	 */
	struct ABuff_Desmodus_NightVision_C_ExecuteUbergraph_Buff_Desmodus_NightVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
