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
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPClientDoMultiUse
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.Generate Slot Wheel Entries
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_GenerateSlotWheelEntries_Params
	{
	public:
		TArray<struct FCustomWheelEntry>                           Entries;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetMultiUseEntries
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveDestroyed
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPInstigatorDied
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_BPInstigatorDied_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartFire
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShouldUpdateAmmoCount
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_ShouldUpdateAmmoCount_Params
	{
	public:
		class APrimalCharacter*                                    ForShooterChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShouldUpdate;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PVFG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.InitWeapon
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_InitWeapon_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.AmmoNameToType
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_AmmoNameToType_Params
	{
	public:
		class FName                                                AmmoTypeName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              AmmoType;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateAmmoWheelEntries
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_GenerateAmmoWheelEntries_Params
	{
	public:
		TArray<struct FCustomWheelEntry>                           AmmoEntries;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.Generate Slot Wheel EntriesMU
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_GenerateSlotWheelEntriesMU_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              MuEntries;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.CalcAmmoWidgetLocation
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_CalcAmmoWidgetLocation_Params
	{
	public:
		int32_t                                                    InInt;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetItemShortName
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_GetItemShortName_Params
	{
	public:
		class UClass*                                              FromClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_GetValidAmmoTypes_Params
	{
	public:
		TArray<class UClass*>                                      TypesInInventory;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.SyncHUDElementSlots
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_SyncHUDElementSlots_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveBeginPlay
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetHUDElements
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.UserConstructionScript
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnSlotSelected
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_OnSlotSelected_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeSelected
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeSelected_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShowSlotSelectWheel
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_ShowSlotSelectWheel_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.HideSlotSelectWheel
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_HideSlotSelectWheel_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeUnloaded
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeUnloaded_Params
	{	};

	/**
	 * Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ExecuteUbergraph_Buff_TekGrenadeLauncherHelper
	 */
	struct ABuff_TekGrenadeLauncherHelper_C_ExecuteUbergraph_Buff_TekGrenadeLauncherHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
