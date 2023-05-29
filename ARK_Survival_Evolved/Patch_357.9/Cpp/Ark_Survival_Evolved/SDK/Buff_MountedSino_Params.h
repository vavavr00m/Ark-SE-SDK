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
	 * Function Buff_MountedSino.Buff_MountedSino_C.GetSinoFoodVals
	 */
	struct ABuff_MountedSino_C_GetSinoFoodVals_Params
	{
	public:
		float                                                      current;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.BPClientDoMultiUse
	 */
	struct ABuff_MountedSino_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.BPTryMultiUse
	 */
	struct ABuff_MountedSino_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.BPGetMultiUseEntries
	 */
	struct ABuff_MountedSino_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.BPGetHUDElements
	 */
	struct ABuff_MountedSino_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.BuffTickServer
	 */
	struct ABuff_MountedSino_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P3KA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.SetLastScreamTime
	 */
	struct ABuff_MountedSino_C_SetLastScreamTime_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.BuffTickClient
	 */
	struct ABuff_MountedSino_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.HideCrosshair
	 */
	struct ABuff_MountedSino_C_HideCrosshair_Params
	{	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.BPGetCrosshairColor
	 */
	struct ABuff_MountedSino_C_BPGetCrosshairColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.CheckForBuddyThrow
	 */
	struct ABuff_MountedSino_C_CheckForBuddyThrow_Params
	{	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.GetSinoStaminaVals
	 */
	struct ABuff_MountedSino_C_GetSinoStaminaVals_Params
	{
	public:
		float                                                      current;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.UserConstructionScript
	 */
	struct ABuff_MountedSino_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.Server_SetMountedSinoBuddyChar
	 */
	struct ABuff_MountedSino_C_Server_SetMountedSinoBuddyChar_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MountedSino.Buff_MountedSino_C.ExecuteUbergraph_Buff_MountedSino
	 */
	struct ABuff_MountedSino_C_ExecuteUbergraph_Buff_MountedSino_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
