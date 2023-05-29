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
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickServer
	 */
	struct ABuff_TekStrider_Saddlebags_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_Saddlebags_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ReceiveBeginPlay
	 */
	struct ABuff_TekStrider_Saddlebags_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickClient
	 */
	struct ABuff_TekStrider_Saddlebags_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPTryMultiUse
	 */
	struct ABuff_TekStrider_Saddlebags_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetMultiUseEntries
	 */
	struct ABuff_TekStrider_Saddlebags_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPDeactivated
	 */
	struct ABuff_TekStrider_Saddlebags_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Update Nearby Players To Absorb Collected Resources
	 */
	struct ABuff_TekStrider_Saddlebags_C_UpdateNearbyPlayersToAbsorbCollectedResources_Params
	{	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Deactivate Attachment
	 */
	struct ABuff_TekStrider_Saddlebags_C_DeactivateAttachment_Params
	{	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Buff Tick Server Logic
	 */
	struct ABuff_TekStrider_Saddlebags_C_BuffTickServerLogic_Params
	{	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_Saddlebags_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_Saddlebags_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Activate
	 */
	struct ABuff_TekStrider_Saddlebags_C_Multicast_Activate_Params
	{	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Deactivate
	 */
	struct ABuff_TekStrider_Saddlebags_C_Multicast_Deactivate_Params
	{	};

	/**
	 * Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ExecuteUbergraph_Buff_TekStrider_Saddlebags
	 */
	struct ABuff_TekStrider_Saddlebags_C_ExecuteUbergraph_Buff_TekStrider_Saddlebags_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
