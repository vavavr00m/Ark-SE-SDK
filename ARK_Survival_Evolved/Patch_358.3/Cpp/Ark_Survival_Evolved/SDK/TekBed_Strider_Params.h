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
	 * Function TekBed_Strider.TekBed_Strider_C.BPReleasedPlayer
	 */
	struct ATekBed_Strider_C_BPReleasedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ReleasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekBed_Strider.TekBed_Strider_C.ReceiveBeginPlay
	 */
	struct ATekBed_Strider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekBed_Strider.TekBed_Strider_C.BPAllowSeating
	 */
	struct ATekBed_Strider_C_BPAllowSeating_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4DE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekBed_Strider.TekBed_Strider_C.BPGetMultiUseEntries
	 */
	struct ATekBed_Strider_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekBed_Strider.TekBed_Strider_C.UserConstructionScript
	 */
	struct ATekBed_Strider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekBed_Strider.TekBed_Strider_C.ExecuteUbergraph_TekBed_Strider
	 */
	struct ATekBed_Strider_C_ExecuteUbergraph_TekBed_Strider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
